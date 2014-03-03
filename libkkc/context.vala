/*
 * Copyright (C) 2011-2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2011-2013 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
using Gee;

namespace Kkc {
    /**
     * Main entry point of libkkc.
     */
    public class Context : Object {
        /**
         * Dictionaries.
         */
        public DictionaryList dictionaries {
            get {
                return state.dictionaries;
            }
            set {
                state.dictionaries = value;
            }
        }

        /**
         * Current candidates.
         */
        public CandidateList candidates {
            get {
                return state.candidates;
            }
        }

        /**
         * Current segments.
         */
        public SegmentList segments {
            get {
                return state.segments;
            }
        }

        /**
         * Current input string.
         */
        public string input {
            owned get {
                return state.get_input ();
            }
        }

        /**
         * Current cursor position in input string.
         */
        public int input_cursor_pos {
            get {
                return state.input_cursor_pos;
            }
        }

        /**
         * Current cursor width in input string.
         */
        public uint input_cursor_width {
            get {
                return state.input_cursor_width;
            }
        }

        State state;
        Gee.Map<Type, StateHandler> handlers =
            new HashMap<Type, StateHandler> ();

        /**
         * Current input mode.
         */
        public InputMode input_mode {
            get {
                return state.input_mode;
            }
            set {
                state.input_mode = value;
            }
        }

        /**
         * Punctuation style used in romaji-to-kana conversion.
         */
        public PunctuationStyle punctuation_style {
            get {
                return state.punctuation_style;
            }
            set {
                state.punctuation_style = value;
            }
        }

        /**
         * Flag to indicate if romaji-to-kana conversion is auto-corrected.
         */
        public bool auto_correct {
            get {
                return state.auto_correct;
            }
            set {
                state.auto_correct = value;
            }
        }

        void filter_forwarded_cb (KeyEvent key) {
            process_key_event_internal (key);
        }

        /**
         * The name of typing rule.
         */
        public Rule typing_rule {
            get {
                return state.typing_rule;
            }
            set {
                state.typing_rule.filter.forwarded.disconnect (
                    filter_forwarded_cb);
                state.typing_rule = value;
                state.typing_rule.filter.forwarded.connect (
                    filter_forwarded_cb);
            }
        }

        /**
         * Filter which runs before process_key_event.
         *
         * This is particularly useful for NICOLA.
         * @see NicolaKeyEventFilter
         */
        public KeyEventFilter key_event_filter {
            owned get {
                return state.typing_rule.filter;
            }
        }

        /**
         * Create a new Context.
         *
         * @param model a language model
         *
         * @return a new Context
         */
        public Context (LanguageModel model) {
            handlers.set (typeof (InitialStateHandler),
                          new InitialStateHandler ());
            handlers.set (typeof (ConvertSentenceStateHandler),
                          new ConvertSentenceStateHandler ());
            handlers.set (typeof (ConvertSegmentStateHandler),
                          new ConvertSegmentStateHandler ());
            state = new State (model, new DictionaryList ());
            connect_state_signals (state);
        }

        ~Context () {
            disconnect_state_signals (state);
            dictionaries.clear ();
        }

        void notify_input_mode_cb (Object s, ParamSpec? p) {
            notify_property ("input-mode");
        }

        void candidates_selected_cb () {
            notify_property ("input");
        }

        void request_selection_text_cb () {
            request_selection_text ();
        }

        void connect_state_signals (State state) {
            state.notify["input-mode"].connect (notify_input_mode_cb);
            state.request_selection_text.connect (request_selection_text_cb);
            state.candidates.selected.connect (candidates_selected_cb);
        }

        void disconnect_state_signals (State state) {
            state.notify["input-mode"].disconnect (notify_input_mode_cb);
            state.request_selection_text.disconnect (request_selection_text_cb);
            state.candidates.selected.disconnect (candidates_selected_cb);
        }

        public signal void request_selection_text ();

        /**
         * Set the current selection text.
         *
         * @param text selection text
         */
        public void set_selection_text (string? text) {
            if (text == null)
                state.selection.erase ();
            else
                state.selection.assign (text);
        }

        /**
         * Pass key events (separated by spaces) to the context.
         *
         * This function is rarely used in programs but in unit tests.
         *
         * @param keyseq a string representing key events, separated by " "
         *
         * @return `true` if any of key events are handled, `false` otherwise
         */
        public bool process_key_events (string keyseq) throws KeyEventFormatError {
            Gee.List<string> keys = new ArrayList<string> ();
            var builder = new StringBuilder ();
            bool complex = false;
            bool escaped = false;
            int index = 0;
            unichar uc;
            while (keyseq.get_next_char (ref index, out uc)) {
                if (escaped) {
                    builder.append_unichar (uc);
                    escaped = false;
                    continue;
                }
                switch (uc) {
                case '\\':
                    escaped = true;
                    break;
                case '(':
                    if (complex)
                        throw new KeyEventFormatError.PARSE_FAILED (
                            "bare '(' is not allowed in complex keyseq");
                    complex = true;
                    builder.append_unichar (uc);
                    break;
                case ')':
                    if (!complex) {
                        throw new KeyEventFormatError.PARSE_FAILED (
                            "bare ')' is not allowed in simple keyseq");
                    }
                    complex = false;
                    builder.append_unichar (uc);
                    keys.add (builder.str);
                    builder.erase ();
                    break;
                case ' ':
                    if (complex)
                        builder.append_unichar (uc);
                    else if (builder.len > 0) {
                        keys.add (builder.str);
                        builder.erase ();
                    }
                    break;
                default:
                    builder.append_unichar (uc);
                    break;
                }
            }
            if (complex)
                throw new KeyEventFormatError.PARSE_FAILED (
                    "premature end of key events");
            if (builder.len > 0)
                keys.add (builder.str);

            bool retval = false;
            foreach (var key in keys) {
                if (key == "SPC")
                    key = "space";
                else if (key == "TAB")
                    key = "Tab";
                else if (key == "RET")
                    key = "Return";
                else if (key == "DEL")
                    key = "BackSpace";

                KeyEvent ev = new KeyEvent.from_string (key);
                if (process_key_event (ev) && !retval)
                    retval = true;
            }
            return retval;
        }

        /**
         * Pass one key event to the context.
         *
         * @param key a key event
         *
         * @return `true` if the key event is handled, `false` otherwise
         */
        public bool process_key_event (KeyEvent key) {
            KeyEvent? _key = key_event_filter.filter_key_event (key);
            if (_key == null) {
                return false;
            }
            return process_key_event_internal (_key);
        }

        bool process_key_event_internal (KeyEvent key) {
            while (true) {
                var handler_type = state.handler_type;
                var handler = handlers.get (handler_type);
                state.this_command_key = key;
                if (handler.process_key_event (state, key)) {
                    notify_property ("input");
                    state.last_command_key = key;
                    return true;
                }
                // state.handler_type may change if handler cannot
                // handle the event.  In that case retry with the new
                // handler.  Otherwise exit the loop.
                if (handler_type == state.handler_type) {
                    return false;
                }
            }
        }

        /**
         * Reset the context.
         */
        public void reset () {
            // will clear state.candidates, state.segments, but not state.output
            state.reset ();
            clear_output ();
        }

        /**
         * Check if there is pending output
         *
         * @return `true` if there is output, `false` otherwise
         */
        public bool has_output () {
            return state.output.len > 0;
        }

        string retrieve_output (bool clear) {
            var output = "";
            if (state.output.len > 0)
                output = state.output.str;
            if (clear) {
                state.output.erase ();
            }
            return output;
        }

        /**
         * Peek (retrieve, but not remove) the current output string.
         *
         * @return an output string
         */
        public string peek_output () {
            return retrieve_output (false);
        }

        /**
         * Poll (retrieve and remove) the current output string.
         *
         * @return an output string
         */
        public string poll_output () {
            return retrieve_output (true);
        }

        /**
         * Clear the output buffer.
         */
        public void clear_output () {
            state.output.erase ();
        }
    }
}
