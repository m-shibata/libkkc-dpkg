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
    public class TextTrigramLanguageModel : TextBigramLanguageModel, TrigramLanguageModel {
        public bool has_trigram (LanguageModelEntry ppentry,
                                 LanguageModelEntry pentry,
                                 LanguageModelEntry entry)
        {
            string key = get_key (new uint[] { ppentry.id,
                                               pentry.id,
                                               entry.id });
            return cost_map.has_key (key);
        }

        public double trigram_cost (LanguageModelEntry ppentry,
                                    LanguageModelEntry pentry,
                                    LanguageModelEntry entry)
        {
            string key = get_key (new uint[] { ppentry.id,
                                               pentry.id,
                                               entry.id });
            if (cost_map.has_key (key))
                return cost_map.get (key);
            return 0;
        }

        public TextTrigramLanguageModel (LanguageModelMetadata metadata) throws Error {
            base (metadata);
        }
    }
}
