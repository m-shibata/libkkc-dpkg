/*
 * Copyright (C) 2012-2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2012-2013 Red Hat, Inc.
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
    public class SegmentList : Object {
        Gee.List<Segment> segments = new ArrayList<Segment> ();
        Gee.List<int> offsets = new ArrayList<int> ();

        int _cursor_pos = -1;
        public int cursor_pos {
            get {
                return _cursor_pos;
            }
            set {
                _cursor_pos = value;
            }
        }

        public int size {
            get {
                return segments.size;
            }
        }

        public void clear () {
            segments.clear ();
            offsets.clear ();
            cursor_pos = -1;
        }

        public void add (Segment segment) {
            return_if_fail (offsets.size == segments.size);
            if (offsets.size > 0) {
                var last_offset = offsets[offsets.size - 1];
                var last_segment = segments[segments.size - 1];
                offsets.add (last_offset + last_segment.input.char_count ());
            } else {
                offsets.add (0);
            }
            segments.add (segment);
        }

        public new Segment @get (int index) {
            return segments.get (index);
        }

        public int get_offset (int index) {
            return offsets[index];
        }

        public void set_segments (Segment segment) {
            int offset = 0;
            segments.clear ();
            offsets.clear ();
            while (segment != null) {
                segments.add (new Segment (segment.input, segment.output));
                offsets.add (offset);
                offset += segment.input.char_count ();
                segment = segment.next;
            }
        }

        public bool first_segment () {
            if (segments.size > 0) {
                cursor_pos = 0;
                return true;
            }
            return false;
        }

        public void next_segment () {
            if (cursor_pos == -1)
                return;
            cursor_pos = (cursor_pos + 1).clamp (0, size - 1);
        }

        public void previous_segment () {
            if (cursor_pos == -1)
                return;
            cursor_pos = (cursor_pos - 1).clamp (0, size - 1);
        }

        public string get_output () {
            var builder = new StringBuilder ();
            foreach (var segment in segments) {
                builder.append (segment.output);
            }
            return builder.str;
        }

        public string get_input () {
            var builder = new StringBuilder ();
            foreach (var segment in segments) {
                builder.append (segment.input);
            }
            return builder.str;
        }

        public Segment[] to_array () {
            return segments.to_array ();
        }
    }
}
