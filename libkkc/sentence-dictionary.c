/* sentence-dictionary.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from sentence-dictionary.vala, do not modify */

/*
 * Copyright (C) 2011-2014 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2011-2014 Red Hat, Inc.
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

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define KKC_TYPE_DICTIONARY (kkc_dictionary_get_type ())
#define KKC_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY, KkcDictionary))
#define KKC_IS_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY))
#define KKC_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_DICTIONARY, KkcDictionaryIface))

typedef struct _KkcDictionary KkcDictionary;
typedef struct _KkcDictionaryIface KkcDictionaryIface;

#define KKC_TYPE_SENTENCE_DICTIONARY (kkc_sentence_dictionary_get_type ())
#define KKC_SENTENCE_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SENTENCE_DICTIONARY, KkcSentenceDictionary))
#define KKC_IS_SENTENCE_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SENTENCE_DICTIONARY))
#define KKC_SENTENCE_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_SENTENCE_DICTIONARY, KkcSentenceDictionaryIface))

typedef struct _KkcSentenceDictionary KkcSentenceDictionary;
typedef struct _KkcSentenceDictionaryIface KkcSentenceDictionaryIface;

#define KKC_TYPE_SEGMENT (kkc_segment_get_type ())
#define KKC_SEGMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SEGMENT, KkcSegment))
#define KKC_SEGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_SEGMENT, KkcSegmentClass))
#define KKC_IS_SEGMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SEGMENT))
#define KKC_IS_SEGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_SEGMENT))
#define KKC_SEGMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_SEGMENT, KkcSegmentClass))

typedef struct _KkcSegment KkcSegment;
typedef struct _KkcSegmentClass KkcSegmentClass;

struct _KkcDictionaryIface {
	GTypeInterface parent_iface;
	void (*reload) (KkcDictionary* self, GError** error);
	void (*save) (KkcDictionary* self, GError** error);
};

struct _KkcSentenceDictionaryIface {
	GTypeInterface parent_iface;
	gboolean (*lookup_constraint) (KkcSentenceDictionary* self, const gchar* input, gint** constraint, int* constraint_length1);
	gboolean (*lookup_phrase) (KkcSentenceDictionary* self, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1);
	gboolean (*select_segments) (KkcSentenceDictionary* self, KkcSegment** input, int input_length1);
};



GType kkc_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_segment_get_type (void) G_GNUC_CONST;
GType kkc_sentence_dictionary_get_type (void) G_GNUC_CONST;
gboolean kkc_sentence_dictionary_lookup_constraint (KkcSentenceDictionary* self, const gchar* input, gint** constraint, int* constraint_length1);
gboolean kkc_sentence_dictionary_lookup_phrase (KkcSentenceDictionary* self, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1);
gboolean kkc_sentence_dictionary_select_segments (KkcSentenceDictionary* self, KkcSegment** input, int input_length1);
static gboolean kkc_sentence_dictionary_real_select_segments (KkcSentenceDictionary* self, KkcSegment** input, int input_length1);


/**
         * Lookup constraint.
         *
         * @param input input string to lookup
         * @param constraint output location of constraint
         *
         * @return `true` if found, `false` otherwise
         */
gboolean kkc_sentence_dictionary_lookup_constraint (KkcSentenceDictionary* self, const gchar* input, gint** constraint, int* constraint_length1) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_SENTENCE_DICTIONARY_GET_INTERFACE (self)->lookup_constraint (self, input, constraint, constraint_length1);
}


/**
         * Lookup phrase.
         *
         * @param input input sequence to lookup
         * @param phrase output location of phrase
         *
         * @return `true` if found, `false` otherwise
         */
gboolean kkc_sentence_dictionary_lookup_phrase (KkcSentenceDictionary* self, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_SENTENCE_DICTIONARY_GET_INTERFACE (self)->lookup_phrase (self, input, input_length1, phrase, phrase_length1);
}


static gboolean kkc_sentence_dictionary_real_select_segments (KkcSentenceDictionary* self, KkcSegment** input, int input_length1) {
	gboolean result = FALSE;
	result = FALSE;
	return result;
}


gboolean kkc_sentence_dictionary_select_segments (KkcSentenceDictionary* self, KkcSegment** input, int input_length1) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_SENTENCE_DICTIONARY_GET_INTERFACE (self)->select_segments (self, input, input_length1);
}


static void kkc_sentence_dictionary_base_init (KkcSentenceDictionaryIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		iface->select_segments = kkc_sentence_dictionary_real_select_segments;
	}
}


/**
     * Base interface of sentence dictionaries.
     */
GType kkc_sentence_dictionary_get_type (void) {
	static volatile gsize kkc_sentence_dictionary_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_sentence_dictionary_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcSentenceDictionaryIface), (GBaseInitFunc) kkc_sentence_dictionary_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType kkc_sentence_dictionary_type_id;
		kkc_sentence_dictionary_type_id = g_type_register_static (G_TYPE_INTERFACE, "KkcSentenceDictionary", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (kkc_sentence_dictionary_type_id, G_TYPE_OBJECT);
		g_type_interface_add_prerequisite (kkc_sentence_dictionary_type_id, KKC_TYPE_DICTIONARY);
		g_once_init_leave (&kkc_sentence_dictionary_type_id__volatile, kkc_sentence_dictionary_type_id);
	}
	return kkc_sentence_dictionary_type_id__volatile;
}



