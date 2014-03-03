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
    public abstract class Decoder : Object {
        public abstract Segment[] decode (string input,
                                          int nbest,
                                          int[] constraint);

        public abstract Segment[] decode_with_costs (string input,
                                                     int nbest,
                                                     int[] constraint,
                                                     double max_distance,
                                                     double min_path_cost);

        public static Decoder? create (LanguageModel model) {
            if (model is TrigramLanguageModel) {
                return new TrigramDecoder (model as TrigramLanguageModel);
            } else if (model is BigramLanguageModel) {
                return new BigramDecoder (model as BigramLanguageModel);
            } else {
                assert_not_reached ();
            }
        }
    }
}
