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
     * Type to specify how a dictionary callback is handled.
     */
    public enum DictionaryCallbackReturn {
        /**
         * Continue to the next dictionary.
         */
        CONTINUE,

        /**
         * Stop the processing.
         */
        REMOVE
    }

    public class DictionaryList : Object {
        Gee.List<Dictionary> dictionaries = new ArrayList<Dictionary> ();

        /**
         * The number of dictionaries registered.
         */
        public int size {
            get {
                return dictionaries.size;
            }
        }

        /**
         * Register dictionary.
         *
         * @param dictionary a dictionary
         */
        public void add (Dictionary dictionary) {
            dictionaries.add (dictionary);
        }

        /**
         * Unregister dictionary.
         *
         * @param dictionary a dictionary
         */
        public void remove (Dictionary dictionary) {
            dictionaries.remove (dictionary);
        }

        /**
         * Remove all dictionaries.
         */
        public void clear () {
            dictionaries.clear ();
        }

        public delegate DictionaryCallbackReturn DictionaryCallback (
            Dictionary dictionary);

        /**
         * Call function with dictionaries.
         *
         * @param type type of dictionary
         * @param callback callback
         */
        public void call (Type? type,
                          DictionaryCallback callback)
        {
            foreach (var dictionary in dictionaries) {
                if ((type == null || dictionary.get_type ().is_a (type)) &&
                    callback (dictionary) == DictionaryCallbackReturn.REMOVE)
                    return;
            }
        }
 
        /**
         * Save dictionaries on to disk.
         */
        public void save () {
            call (null,
                  (dictionary) => {
                      try {
                          dictionary.save ();
                      } catch (Error e) {
                          warning ("can't save dictionary: %s",
                                   e.message);
                      }
                      return DictionaryCallbackReturn.CONTINUE;
                  });
        }
   }
}