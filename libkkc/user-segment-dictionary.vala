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
     * File based implementation of SegmentDictionary with write access.
     */
    public class UserSegmentDictionary : Object, Dictionary, SegmentDictionary {
        void load () throws Error {
            uint8[] contents;
            file.load_contents (null, out contents, out etag);

            var memory = new MemoryInputStream.from_data (contents, g_free);
            var data = new DataInputStream (memory);

            string? line = null;
            size_t length;
            line = data.read_line (out length);
            if (line == null) {
                return;
            }

            Map<string,Gee.List<Candidate>>? entries = null;
            while (line != null) {
                if (line.has_prefix (";; okuri-ari entries.")) {
                    entries = okuri_ari_entries;
                    break;
                }
                line = data.read_line (out length);
                if (line == null) {
                    break;
                }
            }
            if (entries == null) {
                throw new DictionaryError.MALFORMED_INPUT (
                    "no okuri-ari boundary");
            }

            bool okuri = true;
            while (line != null) {
                line = data.read_line (out length);
                if (line == null) {
                    break;
                }
                if (line.has_prefix (";; okuri-nasi entries.")) {
                    entries = okuri_nasi_entries;
                    okuri = false;
                    continue;
                }
                string[] strv = line.strip ().split_set (" \t", 2);
                if (strv.length < 2) {
                    throw new DictionaryError.MALFORMED_INPUT (
                        "can't extract midasi from line %s",
                        line);
                }

                string midasi = DictionaryUtils.unescape (strv[0]);
                string candidates_str = strv[1];
                if (!candidates_str.has_prefix ("/") ||
                    !candidates_str.has_suffix ("/")) {
                    throw new DictionaryError.MALFORMED_INPUT (
                        "can't parse candidates list %s",
                        candidates_str);
                }

                var candidates = DictionaryUtils.split_candidates (
                    midasi,
                    okuri,
                    candidates_str);
                var list = new ArrayList<Candidate> ();
                foreach (var c in candidates) {
                    list.add (c);
                }
                entries.set (midasi, list);
            }
        }

        /**
         * {@inheritDoc}
         */
        public void reload () throws GLib.Error {
            string attributes = FileAttribute.ETAG_VALUE;
            FileInfo info = file.query_info (attributes,
                                             FileQueryInfoFlags.NONE);
            if (info.get_etag () != etag) {
                this.okuri_ari_entries.clear ();
                this.okuri_nasi_entries.clear ();
                load ();
            }
            is_dirty = false;
        }

        static int compare_entry_asc (Map.Entry<string,Gee.List<Candidate>> a,
                                      Map.Entry<string,Gee.List<Candidate>> b)
        {
            return strcmp (a.key, b.key);
        }

        static int compare_entry_dsc (Map.Entry<string,Gee.List<Candidate>> a,
                                      Map.Entry<string,Gee.List<Candidate>> b)
        {
            return strcmp (b.key, a.key);
        }

        void write_entries (StringBuilder builder,
                            Gee.List<Map.Entry<string,Gee.List<Candidate>>> entries)
        {
            var iter = entries.iterator ();
            while (iter.next ()) {
                var entry = iter.get ();
                var line = "%s %s\n".printf (
                    DictionaryUtils.escape (entry.key),
                    DictionaryUtils.join_candidates (entry.value.to_array ()));
                builder.append (line);
            }
        }

        /**
         * {@inheritDoc}
         */
        public void save () throws GLib.Error {
            if (!is_dirty)
                return;

            var builder = new StringBuilder ();

            builder.append (";; okuri-ari entries.\n");
            var entries = new ArrayList<Map.Entry<string,Gee.List<Candidate>>> ();
            entries.add_all (okuri_ari_entries.entries);
            entries.sort ((CompareFunc) compare_entry_dsc);
            write_entries (builder, entries);
            entries.clear ();

            builder.append (";; okuri-nasi entries.\n");
            entries.add_all (okuri_nasi_entries.entries);
            entries.sort ((CompareFunc) compare_entry_asc);
            write_entries (builder, entries);
            entries.clear ();

            DirUtils.create_with_parents (Path.get_dirname (file.get_path ()),
                                          448);
            file.replace_contents (builder.str.data,
                                   etag,
                                   false,
                                   FileCreateFlags.PRIVATE,
                                   out etag);
            is_dirty = false;
        }

        Map<string,Gee.List<Candidate>> get_entries (bool okuri = false) {
            if (okuri) {
                return okuri_ari_entries;
            } else {
                return okuri_nasi_entries;
            }
        }

        /**
         * {@inheritDoc}
         */
        public bool lookup_candidates (string midasi,
                                       bool okuri,
                                       out Candidate[] candidates) {
            var entries = get_entries (okuri);
            if (entries.has_key (midasi)) {
                candidates = entries.get (midasi).to_array ();
                return true;
            } else {
                candidates = new Candidate[0];
                return false;
            }
        }

        /**
         * {@inheritDoc}
         */
        public string[] complete (string midasi) {
            Gee.List<string> completion = new ArrayList<string> ();
            Gee.List<string> keys = new ArrayList<string> ();
            keys.add_all (okuri_nasi_entries.keys);
            keys.sort ();
            var iter = keys.iterator ();
            // find the first matching entry
            while (iter.next ()) {
                var key = iter.get ();
                if (key.has_prefix (midasi)) {
                    // don't add midasi word itself
                    if (key != midasi) {
                        completion.add (key);
                    }
                    break;
                }
            }
            // loop until the last matching entry
            while (iter.next ()) {
                var key = iter.get ();
                if (!key.has_prefix (midasi)) {
                    break;
                }
                // don't add midasi word itself
                if (key != midasi) {
                    completion.add (key);
                }
            }
            return completion.to_array ();
        }

        /**
         * {@inheritDoc}
         */
        public bool select_candidate (Candidate candidate) {
            var entries = get_entries (candidate.okuri);
            if (!entries.has_key (candidate.midasi)) {
                entries.set (candidate.midasi, new ArrayList<Candidate> ());
            }
            var candidates = entries.get (candidate.midasi);
            var index = candidates.index_of (candidate);
            if (index == 0)
                return false;
            if (index > 0)
                candidates.remove_at (index);
            candidates.insert (0, candidate);
            is_dirty = true;
            return true;
        }

        /**
         * {@inheritDoc}
         */
        public bool purge_candidate (Candidate candidate) {
            bool modified = false;
            var entries = get_entries (candidate.okuri);
            if (entries.has_key (candidate.midasi)) {
                var candidates = entries.get (candidate.midasi);
                if (candidates.size > 0) {
                    var iter = candidates.iterator ();
                    while (iter.next ()) {
                        var c = iter.get ();
                        if (c.text == candidate.text) {
                            iter.remove ();
                            modified = true;
                        }
                    }
                    if (candidates.size == 0) {
                        entries.unset (candidate.midasi);
                    }
                }
            }
            if (modified)
                is_dirty = true;
            return modified;
        }

        File file;
        string etag;
        Map<string,Gee.List<Candidate>> okuri_ari_entries =
            new HashMap<string,Gee.List<Candidate>> ();
        Map<string,Gee.List<Candidate>> okuri_nasi_entries =
            new HashMap<string,Gee.List<Candidate>> ();
        bool is_dirty;

        /**
         * Create a new UserSegmentDictionary.
         *
         * @param path a path to the file
         *
         * @return a new UserSegmentDictionary
         * @throws GLib.Error if opening the file is failed
         */
        public UserSegmentDictionary (string path) throws GLib.Error {
            this.file = File.new_for_path (path);
            this.etag = "";
            // user dictionary may not exist for the first time
            if (FileUtils.test (path, FileTest.EXISTS)) {
                reload ();
            }
        }

        ~UserSegmentDictionary () {
            var okuri_ari_iter = okuri_ari_entries.map_iterator ();
            while (okuri_ari_iter.next ()) {
                okuri_ari_iter.get_value ().clear ();
            }
            okuri_ari_entries.clear ();
            var okuri_nasi_iter = okuri_nasi_entries.map_iterator ();
            while (okuri_nasi_iter.next ()) {
                okuri_nasi_iter.get_value ().clear ();
            }
            okuri_nasi_entries.clear ();
        }
    }
}