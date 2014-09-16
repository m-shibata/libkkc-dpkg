/* user-dictionary.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from user-dictionary.vala, do not modify */

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
#include <glib/gstdio.h>


#define KKC_TYPE_DICTIONARY (kkc_dictionary_get_type ())
#define KKC_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY, KkcDictionary))
#define KKC_IS_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY))
#define KKC_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_DICTIONARY, KkcDictionaryIface))

typedef struct _KkcDictionary KkcDictionary;
typedef struct _KkcDictionaryIface KkcDictionaryIface;

#define KKC_TYPE_SEGMENT_DICTIONARY (kkc_segment_dictionary_get_type ())
#define KKC_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SEGMENT_DICTIONARY, KkcSegmentDictionary))
#define KKC_IS_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SEGMENT_DICTIONARY))
#define KKC_SEGMENT_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_SEGMENT_DICTIONARY, KkcSegmentDictionaryIface))

typedef struct _KkcSegmentDictionary KkcSegmentDictionary;
typedef struct _KkcSegmentDictionaryIface KkcSegmentDictionaryIface;

#define KKC_TYPE_CANDIDATE (kkc_candidate_get_type ())
#define KKC_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_CANDIDATE, KkcCandidate))
#define KKC_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_CANDIDATE, KkcCandidateClass))
#define KKC_IS_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_CANDIDATE))
#define KKC_IS_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_CANDIDATE))
#define KKC_CANDIDATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_CANDIDATE, KkcCandidateClass))

typedef struct _KkcCandidate KkcCandidate;
typedef struct _KkcCandidateClass KkcCandidateClass;

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

#define KKC_TYPE_USER_DICTIONARY (kkc_user_dictionary_get_type ())
#define KKC_USER_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_USER_DICTIONARY, KkcUserDictionary))
#define KKC_USER_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_USER_DICTIONARY, KkcUserDictionaryClass))
#define KKC_IS_USER_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_USER_DICTIONARY))
#define KKC_IS_USER_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_USER_DICTIONARY))
#define KKC_USER_DICTIONARY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_USER_DICTIONARY, KkcUserDictionaryClass))

typedef struct _KkcUserDictionary KkcUserDictionary;
typedef struct _KkcUserDictionaryClass KkcUserDictionaryClass;
typedef struct _KkcUserDictionaryPrivate KkcUserDictionaryPrivate;

#define KKC_TYPE_USER_SEGMENT_DICTIONARY (kkc_user_segment_dictionary_get_type ())
#define KKC_USER_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_USER_SEGMENT_DICTIONARY, KkcUserSegmentDictionary))
#define KKC_USER_SEGMENT_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_USER_SEGMENT_DICTIONARY, KkcUserSegmentDictionaryClass))
#define KKC_IS_USER_SEGMENT_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_USER_SEGMENT_DICTIONARY))
#define KKC_IS_USER_SEGMENT_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_USER_SEGMENT_DICTIONARY))
#define KKC_USER_SEGMENT_DICTIONARY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_USER_SEGMENT_DICTIONARY, KkcUserSegmentDictionaryClass))

typedef struct _KkcUserSegmentDictionary KkcUserSegmentDictionary;
typedef struct _KkcUserSegmentDictionaryClass KkcUserSegmentDictionaryClass;

#define KKC_TYPE_USER_SENTENCE_DICTIONARY (kkc_user_sentence_dictionary_get_type ())
#define KKC_USER_SENTENCE_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_USER_SENTENCE_DICTIONARY, KkcUserSentenceDictionary))
#define KKC_USER_SENTENCE_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_USER_SENTENCE_DICTIONARY, KkcUserSentenceDictionaryClass))
#define KKC_IS_USER_SENTENCE_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_USER_SENTENCE_DICTIONARY))
#define KKC_IS_USER_SENTENCE_DICTIONARY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_USER_SENTENCE_DICTIONARY))
#define KKC_USER_SENTENCE_DICTIONARY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_USER_SENTENCE_DICTIONARY, KkcUserSentenceDictionaryClass))

typedef struct _KkcUserSentenceDictionary KkcUserSentenceDictionary;
typedef struct _KkcUserSentenceDictionaryClass KkcUserSentenceDictionaryClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _KkcDictionaryIface {
	GTypeInterface parent_iface;
	void (*reload) (KkcDictionary* self, GError** error);
	void (*save) (KkcDictionary* self, GError** error);
};

struct _KkcSegmentDictionaryIface {
	GTypeInterface parent_iface;
	gboolean (*lookup_candidates) (KkcSegmentDictionary* self, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1);
	gchar** (*complete) (KkcSegmentDictionary* self, const gchar* midasi, int* result_length1);
	gboolean (*select_candidate) (KkcSegmentDictionary* self, KkcCandidate* candidate);
	gboolean (*purge_candidate) (KkcSegmentDictionary* self, KkcCandidate* candidate);
};

struct _KkcSentenceDictionaryIface {
	GTypeInterface parent_iface;
	gboolean (*lookup_constraint) (KkcSentenceDictionary* self, const gchar* input, gint** constraint, int* constraint_length1);
	gboolean (*lookup_phrase) (KkcSentenceDictionary* self, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1);
	gboolean (*select_segments) (KkcSentenceDictionary* self, KkcSegment** input, int input_length1);
};

struct _KkcUserDictionary {
	GObject parent_instance;
	KkcUserDictionaryPrivate * priv;
};

struct _KkcUserDictionaryClass {
	GObjectClass parent_class;
};

struct _KkcUserDictionaryPrivate {
	KkcUserSegmentDictionary* segment_dict;
	KkcUserSentenceDictionary* sentence_dict;
};


static gpointer kkc_user_dictionary_parent_class = NULL;
static KkcDictionaryIface* kkc_user_dictionary_kkc_dictionary_parent_iface = NULL;
static KkcSegmentDictionaryIface* kkc_user_dictionary_kkc_segment_dictionary_parent_iface = NULL;
static KkcSentenceDictionaryIface* kkc_user_dictionary_kkc_sentence_dictionary_parent_iface = NULL;

GType kkc_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_candidate_get_type (void) G_GNUC_CONST;
GType kkc_segment_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_segment_get_type (void) G_GNUC_CONST;
GType kkc_sentence_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_user_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_user_segment_dictionary_get_type (void) G_GNUC_CONST;
GType kkc_user_sentence_dictionary_get_type (void) G_GNUC_CONST;
#define KKC_USER_DICTIONARY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_USER_DICTIONARY, KkcUserDictionaryPrivate))
enum  {
	KKC_USER_DICTIONARY_DUMMY_PROPERTY
};
KkcUserDictionary* kkc_user_dictionary_new (const gchar* basedir, GError** error);
KkcUserDictionary* kkc_user_dictionary_construct (GType object_type, const gchar* basedir, GError** error);
KkcUserSegmentDictionary* kkc_user_segment_dictionary_new (const gchar* path, GError** error);
KkcUserSegmentDictionary* kkc_user_segment_dictionary_construct (GType object_type, const gchar* path, GError** error);
KkcUserSentenceDictionary* kkc_user_sentence_dictionary_new (const gchar* path, GError** error);
KkcUserSentenceDictionary* kkc_user_sentence_dictionary_construct (GType object_type, const gchar* path, GError** error);
static void kkc_user_dictionary_real_reload (KkcDictionary* base, GError** error);
void kkc_dictionary_reload (KkcDictionary* self, GError** error);
static void kkc_user_dictionary_real_save (KkcDictionary* base, GError** error);
void kkc_dictionary_save (KkcDictionary* self, GError** error);
static gboolean kkc_user_dictionary_real_lookup_candidates (KkcSegmentDictionary* base, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1);
gboolean kkc_segment_dictionary_lookup_candidates (KkcSegmentDictionary* self, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1);
static gchar** kkc_user_dictionary_real_complete (KkcSegmentDictionary* base, const gchar* midasi, int* result_length1);
gchar** kkc_segment_dictionary_complete (KkcSegmentDictionary* self, const gchar* midasi, int* result_length1);
static gboolean kkc_user_dictionary_real_select_candidate (KkcSegmentDictionary* base, KkcCandidate* candidate);
gboolean kkc_segment_dictionary_select_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate);
static gboolean kkc_user_dictionary_real_purge_candidate (KkcSegmentDictionary* base, KkcCandidate* candidate);
gboolean kkc_segment_dictionary_purge_candidate (KkcSegmentDictionary* self, KkcCandidate* candidate);
static gboolean kkc_user_dictionary_real_lookup_constraint (KkcSentenceDictionary* base, const gchar* input, gint** constraint, int* constraint_length1);
gboolean kkc_sentence_dictionary_lookup_constraint (KkcSentenceDictionary* self, const gchar* input, gint** constraint, int* constraint_length1);
static gboolean kkc_user_dictionary_real_lookup_phrase (KkcSentenceDictionary* base, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1);
gboolean kkc_sentence_dictionary_lookup_phrase (KkcSentenceDictionary* self, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1);
static gboolean kkc_user_dictionary_real_select_segments (KkcSentenceDictionary* base, KkcSegment** input, int input_length1);
gboolean kkc_sentence_dictionary_select_segments (KkcSentenceDictionary* self, KkcSegment** input, int input_length1);
static void kkc_user_dictionary_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


KkcUserDictionary* kkc_user_dictionary_construct (GType object_type, const gchar* basedir, GError** error) {
	KkcUserDictionary * self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	KkcUserSegmentDictionary* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	KkcUserSegmentDictionary* _tmp7_ = NULL;
	KkcUserSegmentDictionary* _tmp8_ = NULL;
	KkcUserSegmentDictionary* _tmp9_ = NULL;
	KkcUserSentenceDictionary* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	KkcUserSentenceDictionary* _tmp14_ = NULL;
	KkcUserSentenceDictionary* _tmp15_ = NULL;
	KkcUserSentenceDictionary* _tmp16_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (basedir != NULL, NULL);
	self = (KkcUserDictionary*) g_object_new (object_type, NULL);
	_tmp0_ = basedir;
	_tmp1_ = g_path_get_dirname (_tmp0_);
	_tmp2_ = _tmp1_;
	g_mkdir_with_parents (_tmp2_, 448);
	_g_free0 (_tmp2_);
	_tmp4_ = basedir;
	_tmp5_ = g_build_filename (_tmp4_, "segment", NULL);
	_tmp6_ = _tmp5_;
	_tmp7_ = kkc_user_segment_dictionary_new (_tmp6_, &_inner_error_);
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp6_);
	_tmp3_ = _tmp8_;
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	_tmp9_ = _tmp3_;
	_tmp3_ = NULL;
	_g_object_unref0 (self->priv->segment_dict);
	self->priv->segment_dict = _tmp9_;
	_tmp11_ = basedir;
	_tmp12_ = g_build_filename (_tmp11_, "sentence", NULL);
	_tmp13_ = _tmp12_;
	_tmp14_ = kkc_user_sentence_dictionary_new (_tmp13_, &_inner_error_);
	_tmp15_ = _tmp14_;
	_g_free0 (_tmp13_);
	_tmp10_ = _tmp15_;
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (_tmp3_);
		_g_object_unref0 (self);
		return NULL;
	}
	_tmp16_ = _tmp10_;
	_tmp10_ = NULL;
	_g_object_unref0 (self->priv->sentence_dict);
	self->priv->sentence_dict = _tmp16_;
	_g_object_unref0 (_tmp10_);
	_g_object_unref0 (_tmp3_);
	return self;
}


KkcUserDictionary* kkc_user_dictionary_new (const gchar* basedir, GError** error) {
	return kkc_user_dictionary_construct (KKC_TYPE_USER_DICTIONARY, basedir, error);
}


/**
         * {@inheritDoc}
         */
static void kkc_user_dictionary_real_reload (KkcDictionary* base, GError** error) {
	KkcUserDictionary * self;
	KkcUserSegmentDictionary* _tmp0_ = NULL;
	KkcUserSentenceDictionary* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
	self = (KkcUserDictionary*) base;
	_tmp0_ = self->priv->segment_dict;
	kkc_dictionary_reload ((KkcDictionary*) _tmp0_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		return;
	}
	_tmp1_ = self->priv->sentence_dict;
	kkc_dictionary_reload ((KkcDictionary*) _tmp1_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		return;
	}
}


/**
         * {@inheritDoc}
         */
static void kkc_user_dictionary_real_save (KkcDictionary* base, GError** error) {
	KkcUserDictionary * self;
	KkcUserSegmentDictionary* _tmp0_ = NULL;
	KkcUserSentenceDictionary* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
	self = (KkcUserDictionary*) base;
	_tmp0_ = self->priv->segment_dict;
	kkc_dictionary_save ((KkcDictionary*) _tmp0_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		return;
	}
	_tmp1_ = self->priv->sentence_dict;
	kkc_dictionary_save ((KkcDictionary*) _tmp1_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		return;
	}
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_user_dictionary_real_lookup_candidates (KkcSegmentDictionary* base, const gchar* midasi, gboolean okuri, KkcCandidate*** candidates, int* candidates_length1) {
	KkcUserDictionary * self;
	KkcCandidate** _vala_candidates = NULL;
	int _vala_candidates_length1 = 0;
	gboolean result = FALSE;
	KkcUserSegmentDictionary* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	KkcCandidate** _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gboolean _tmp5_ = FALSE;
	self = (KkcUserDictionary*) base;
	g_return_val_if_fail (midasi != NULL, FALSE);
	_tmp0_ = self->priv->segment_dict;
	_tmp1_ = midasi;
	_tmp2_ = okuri;
	_tmp5_ = kkc_segment_dictionary_lookup_candidates ((KkcSegmentDictionary*) _tmp0_, _tmp1_, _tmp2_, &_tmp3_, &_tmp4_);
	_vala_candidates = (_vala_array_free (_vala_candidates, _vala_candidates_length1, (GDestroyNotify) g_object_unref), NULL);
	_vala_candidates = _tmp3_;
	_vala_candidates_length1 = _tmp4_;
	result = _tmp5_;
	if (candidates) {
		*candidates = _vala_candidates;
	} else {
		_vala_candidates = (_vala_array_free (_vala_candidates, _vala_candidates_length1, (GDestroyNotify) g_object_unref), NULL);
	}
	if (candidates_length1) {
		*candidates_length1 = _vala_candidates_length1;
	}
	return result;
}


/**
         * {@inheritDoc}
         */
static gchar** kkc_user_dictionary_real_complete (KkcSegmentDictionary* base, const gchar* midasi, int* result_length1) {
	KkcUserDictionary * self;
	gchar** result = NULL;
	KkcUserSegmentDictionary* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gchar** _tmp3_ = NULL;
	gchar** _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
	self = (KkcUserDictionary*) base;
	g_return_val_if_fail (midasi != NULL, NULL);
	_tmp0_ = self->priv->segment_dict;
	_tmp1_ = midasi;
	_tmp3_ = kkc_segment_dictionary_complete ((KkcSegmentDictionary*) _tmp0_, _tmp1_, &_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp4__length1 = _tmp2_;
	if (result_length1) {
		*result_length1 = _tmp4__length1;
	}
	result = _tmp4_;
	return result;
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_user_dictionary_real_select_candidate (KkcSegmentDictionary* base, KkcCandidate* candidate) {
	KkcUserDictionary * self;
	gboolean result = FALSE;
	KkcUserSegmentDictionary* _tmp0_ = NULL;
	KkcCandidate* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	self = (KkcUserDictionary*) base;
	g_return_val_if_fail (candidate != NULL, FALSE);
	_tmp0_ = self->priv->segment_dict;
	_tmp1_ = candidate;
	_tmp2_ = kkc_segment_dictionary_select_candidate ((KkcSegmentDictionary*) _tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_user_dictionary_real_purge_candidate (KkcSegmentDictionary* base, KkcCandidate* candidate) {
	KkcUserDictionary * self;
	gboolean result = FALSE;
	KkcUserSegmentDictionary* _tmp0_ = NULL;
	KkcCandidate* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	self = (KkcUserDictionary*) base;
	g_return_val_if_fail (candidate != NULL, FALSE);
	_tmp0_ = self->priv->segment_dict;
	_tmp1_ = candidate;
	_tmp2_ = kkc_segment_dictionary_purge_candidate ((KkcSegmentDictionary*) _tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_user_dictionary_real_lookup_constraint (KkcSentenceDictionary* base, const gchar* input, gint** constraint, int* constraint_length1) {
	KkcUserDictionary * self;
	gint* _vala_constraint = NULL;
	int _vala_constraint_length1 = 0;
	gboolean result = FALSE;
	KkcUserSentenceDictionary* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gint* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gboolean _tmp4_ = FALSE;
	self = (KkcUserDictionary*) base;
	g_return_val_if_fail (input != NULL, FALSE);
	_tmp0_ = self->priv->sentence_dict;
	_tmp1_ = input;
	_tmp4_ = kkc_sentence_dictionary_lookup_constraint ((KkcSentenceDictionary*) _tmp0_, _tmp1_, &_tmp2_, &_tmp3_);
	_vala_constraint = (g_free (_vala_constraint), NULL);
	_vala_constraint = _tmp2_;
	_vala_constraint_length1 = _tmp3_;
	result = _tmp4_;
	if (constraint) {
		*constraint = _vala_constraint;
	} else {
		_vala_constraint = (g_free (_vala_constraint), NULL);
	}
	if (constraint_length1) {
		*constraint_length1 = _vala_constraint_length1;
	}
	return result;
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_user_dictionary_real_lookup_phrase (KkcSentenceDictionary* base, gchar** input, int input_length1, gchar*** phrase, int* phrase_length1) {
	KkcUserDictionary * self;
	gchar** _vala_phrase = NULL;
	int _vala_phrase_length1 = 0;
	gboolean result = FALSE;
	KkcUserSentenceDictionary* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	gchar** _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gboolean _tmp4_ = FALSE;
	self = (KkcUserDictionary*) base;
	_tmp0_ = self->priv->sentence_dict;
	_tmp1_ = input;
	_tmp1__length1 = input_length1;
	_tmp4_ = kkc_sentence_dictionary_lookup_phrase ((KkcSentenceDictionary*) _tmp0_, _tmp1_, _tmp1__length1, &_tmp2_, &_tmp3_);
	_vala_phrase = (_vala_array_free (_vala_phrase, _vala_phrase_length1, (GDestroyNotify) g_free), NULL);
	_vala_phrase = _tmp2_;
	_vala_phrase_length1 = _tmp3_;
	result = _tmp4_;
	if (phrase) {
		*phrase = _vala_phrase;
	} else {
		_vala_phrase = (_vala_array_free (_vala_phrase, _vala_phrase_length1, (GDestroyNotify) g_free), NULL);
	}
	if (phrase_length1) {
		*phrase_length1 = _vala_phrase_length1;
	}
	return result;
}


/**
         * {@inheritDoc}
         */
static gboolean kkc_user_dictionary_real_select_segments (KkcSentenceDictionary* base, KkcSegment** input, int input_length1) {
	KkcUserDictionary * self;
	gboolean result = FALSE;
	KkcUserSentenceDictionary* _tmp0_ = NULL;
	KkcSegment** _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	gboolean _tmp2_ = FALSE;
	self = (KkcUserDictionary*) base;
	_tmp0_ = self->priv->sentence_dict;
	_tmp1_ = input;
	_tmp1__length1 = input_length1;
	_tmp2_ = kkc_sentence_dictionary_select_segments ((KkcSentenceDictionary*) _tmp0_, _tmp1_, _tmp1__length1);
	result = _tmp2_;
	return result;
}


static void kkc_user_dictionary_class_init (KkcUserDictionaryClass * klass) {
	kkc_user_dictionary_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcUserDictionaryPrivate));
	G_OBJECT_CLASS (klass)->finalize = kkc_user_dictionary_finalize;
}


static void kkc_user_dictionary_kkc_dictionary_interface_init (KkcDictionaryIface * iface) {
	kkc_user_dictionary_kkc_dictionary_parent_iface = g_type_interface_peek_parent (iface);
	iface->reload = (void (*)(KkcDictionary*, GError**)) kkc_user_dictionary_real_reload;
	iface->save = (void (*)(KkcDictionary*, GError**)) kkc_user_dictionary_real_save;
}


static void kkc_user_dictionary_kkc_segment_dictionary_interface_init (KkcSegmentDictionaryIface * iface) {
	kkc_user_dictionary_kkc_segment_dictionary_parent_iface = g_type_interface_peek_parent (iface);
	iface->lookup_candidates = (gboolean (*)(KkcSegmentDictionary*, const gchar*, gboolean, KkcCandidate***, int*)) kkc_user_dictionary_real_lookup_candidates;
	iface->complete = (gchar** (*)(KkcSegmentDictionary*, const gchar*, int*)) kkc_user_dictionary_real_complete;
	iface->select_candidate = (gboolean (*)(KkcSegmentDictionary*, KkcCandidate*)) kkc_user_dictionary_real_select_candidate;
	iface->purge_candidate = (gboolean (*)(KkcSegmentDictionary*, KkcCandidate*)) kkc_user_dictionary_real_purge_candidate;
}


static void kkc_user_dictionary_kkc_sentence_dictionary_interface_init (KkcSentenceDictionaryIface * iface) {
	kkc_user_dictionary_kkc_sentence_dictionary_parent_iface = g_type_interface_peek_parent (iface);
	iface->lookup_constraint = (gboolean (*)(KkcSentenceDictionary*, const gchar*, gint**, int*)) kkc_user_dictionary_real_lookup_constraint;
	iface->lookup_phrase = (gboolean (*)(KkcSentenceDictionary*, gchar**, int, gchar***, int*)) kkc_user_dictionary_real_lookup_phrase;
	iface->select_segments = (gboolean (*)(KkcSentenceDictionary*, KkcSegment**, int)) kkc_user_dictionary_real_select_segments;
}


static void kkc_user_dictionary_instance_init (KkcUserDictionary * self) {
	self->priv = KKC_USER_DICTIONARY_GET_PRIVATE (self);
}


static void kkc_user_dictionary_finalize (GObject* obj) {
	KkcUserDictionary * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_USER_DICTIONARY, KkcUserDictionary);
	_g_object_unref0 (self->priv->segment_dict);
	_g_object_unref0 (self->priv->sentence_dict);
	G_OBJECT_CLASS (kkc_user_dictionary_parent_class)->finalize (obj);
}


/**
     * Helper class which can be used as a single user dictionary.
     *
     * It implements both SegmentDictionary and SentenceDictionary,
     * with write access.
     */
GType kkc_user_dictionary_get_type (void) {
	static volatile gsize kkc_user_dictionary_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_user_dictionary_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcUserDictionaryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_user_dictionary_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcUserDictionary), 0, (GInstanceInitFunc) kkc_user_dictionary_instance_init, NULL };
		static const GInterfaceInfo kkc_dictionary_info = { (GInterfaceInitFunc) kkc_user_dictionary_kkc_dictionary_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo kkc_segment_dictionary_info = { (GInterfaceInitFunc) kkc_user_dictionary_kkc_segment_dictionary_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo kkc_sentence_dictionary_info = { (GInterfaceInitFunc) kkc_user_dictionary_kkc_sentence_dictionary_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType kkc_user_dictionary_type_id;
		kkc_user_dictionary_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcUserDictionary", &g_define_type_info, 0);
		g_type_add_interface_static (kkc_user_dictionary_type_id, KKC_TYPE_DICTIONARY, &kkc_dictionary_info);
		g_type_add_interface_static (kkc_user_dictionary_type_id, KKC_TYPE_SEGMENT_DICTIONARY, &kkc_segment_dictionary_info);
		g_type_add_interface_static (kkc_user_dictionary_type_id, KKC_TYPE_SENTENCE_DICTIONARY, &kkc_sentence_dictionary_info);
		g_once_init_leave (&kkc_user_dictionary_type_id__volatile, kkc_user_dictionary_type_id);
	}
	return kkc_user_dictionary_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


