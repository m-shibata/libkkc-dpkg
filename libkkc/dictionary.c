/* dictionary.c generated by valac 0.22.1, the Vala compiler
 * generated from dictionary.vala, do not modify */

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

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define KKC_TYPE_DICTIONARY_UTILS (kkc_dictionary_utils_get_type ())
#define KKC_DICTIONARY_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtils))
#define KKC_DICTIONARY_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtilsClass))
#define KKC_IS_DICTIONARY_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY_UTILS))
#define KKC_IS_DICTIONARY_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_DICTIONARY_UTILS))
#define KKC_DICTIONARY_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtilsClass))

typedef struct _KkcDictionaryUtils KkcDictionaryUtils;
typedef struct _KkcDictionaryUtilsClass KkcDictionaryUtilsClass;
typedef struct _KkcDictionaryUtilsPrivate KkcDictionaryUtilsPrivate;

#define KKC_TYPE_CANDIDATE (kkc_candidate_get_type ())
#define KKC_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_CANDIDATE, KkcCandidate))
#define KKC_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_CANDIDATE, KkcCandidateClass))
#define KKC_IS_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_CANDIDATE))
#define KKC_IS_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_CANDIDATE))
#define KKC_CANDIDATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_CANDIDATE, KkcCandidateClass))

typedef struct _KkcCandidate KkcCandidate;
typedef struct _KkcCandidateClass KkcCandidateClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))

#define KKC_TYPE_DICTIONARY (kkc_dictionary_get_type ())
#define KKC_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY, KkcDictionary))
#define KKC_IS_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY))
#define KKC_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_DICTIONARY, KkcDictionaryIface))

typedef struct _KkcDictionary KkcDictionary;
typedef struct _KkcDictionaryIface KkcDictionaryIface;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _KkcDictionaryUtils {
	GObject parent_instance;
	KkcDictionaryUtilsPrivate * priv;
};

struct _KkcDictionaryUtilsClass {
	GObjectClass parent_class;
};

struct _KkcDictionaryIface {
	GTypeInterface parent_iface;
	void (*reload) (KkcDictionary* self, GError** error);
	void (*save) (KkcDictionary* self, GError** error);
};

typedef enum  {
	KKC_DICTIONARY_ERROR_NOT_READABLE,
	KKC_DICTIONARY_ERROR_MALFORMED_INPUT
} KkcDictionaryError;
#define KKC_DICTIONARY_ERROR kkc_dictionary_error_quark ()

static gpointer kkc_dictionary_utils_parent_class = NULL;
static GRegex* kkc_dictionary_utils_escape_regex;
static GRegex* kkc_dictionary_utils_escape_regex = NULL;

GType kkc_dictionary_utils_get_type (void) G_GNUC_CONST;
enum  {
	KKC_DICTIONARY_UTILS_DUMMY_PROPERTY
};
GType kkc_candidate_get_type (void) G_GNUC_CONST;
KkcCandidate** kkc_dictionary_utils_split_candidates (const gchar* midasi, gboolean okuri, const gchar* line, int* result_length1);
gchar* kkc_dictionary_utils_unescape (const gchar* input);
KkcCandidate* kkc_candidate_new (const gchar* midasi, gboolean okuri, const gchar* text, const gchar* annotation, const gchar* output);
KkcCandidate* kkc_candidate_construct (GType object_type, const gchar* midasi, gboolean okuri, const gchar* text, const gchar* annotation, const gchar* output);
gchar* kkc_dictionary_utils_join_candidates (KkcCandidate** candidates, int candidates_length1);
gchar* kkc_dictionary_utils_escape (const gchar* input);
gchar* kkc_candidate_to_string (KkcCandidate* self);
static gboolean kkc_dictionary_utils_unescape_eval (GMatchInfo* info, GString* _result_);
gchar* kkc_utils_parse_hex (const gchar* hex);
static gboolean _kkc_dictionary_utils_unescape_eval_gregex_eval_callback (GMatchInfo* match_info, GString* _result_, gpointer self);
KkcDictionaryUtils* kkc_dictionary_utils_construct (GType object_type);
static void kkc_dictionary_utils_finalize (GObject* obj);
GType kkc_dictionary_get_type (void) G_GNUC_CONST;
void kkc_dictionary_reload (KkcDictionary* self, GError** error);
void kkc_dictionary_save (KkcDictionary* self, GError** error);
static void kkc_dictionary_real_save (KkcDictionary* self, GError** error);
GQuark kkc_dictionary_error_quark (void);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


/**
         * Parse a line consisting of candidates separated by "/".
         *
         * @param line a line consisting of candidates
         * @return an array of Candidates
         */
static gchar* string_strip (const gchar* self) {
	gchar* result = NULL;
	gchar* _result_ = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup (self);
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	g_strstrip (_tmp1_);
	result = _result_;
	return result;
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	glong _tmp2_ = 0L;
	glong _tmp5_ = 0L;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_ = 0L;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
	glong _tmp14_ = 0L;
	gboolean _tmp17_ = FALSE;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	glong _tmp21_ = 0L;
	glong _tmp22_ = 0L;
	gchar* _tmp23_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = strlen (self);
	_tmp1_ = _tmp0_;
	string_length = (glong) _tmp1_;
	_tmp2_ = start;
	if (_tmp2_ < ((glong) 0)) {
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
		_tmp3_ = string_length;
		_tmp4_ = start;
		start = _tmp3_ + _tmp4_;
	}
	_tmp5_ = end;
	if (_tmp5_ < ((glong) 0)) {
		glong _tmp6_ = 0L;
		glong _tmp7_ = 0L;
		_tmp6_ = string_length;
		_tmp7_ = end;
		end = _tmp6_ + _tmp7_;
	}
	_tmp9_ = start;
	if (_tmp9_ >= ((glong) 0)) {
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
		_tmp10_ = start;
		_tmp11_ = string_length;
		_tmp8_ = _tmp10_ <= _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	_tmp12_ = _tmp8_;
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp14_ = end;
	if (_tmp14_ >= ((glong) 0)) {
		glong _tmp15_ = 0L;
		glong _tmp16_ = 0L;
		_tmp15_ = end;
		_tmp16_ = string_length;
		_tmp13_ = _tmp15_ <= _tmp16_;
	} else {
		_tmp13_ = FALSE;
	}
	_tmp17_ = _tmp13_;
	g_return_val_if_fail (_tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	g_return_val_if_fail (_tmp18_ <= _tmp19_, NULL);
	_tmp20_ = start;
	_tmp21_ = end;
	_tmp22_ = start;
	_tmp23_ = g_strndup (((gchar*) self) + _tmp20_, (gsize) (_tmp21_ - _tmp22_));
	result = _tmp23_;
	return result;
}


KkcCandidate** kkc_dictionary_utils_split_candidates (const gchar* midasi, gboolean okuri, const gchar* line, int* result_length1) {
	KkcCandidate** result = NULL;
	gchar** strv = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar** _tmp5_ = NULL;
	gchar** _tmp6_ = NULL;
	gchar** _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	gint strv_length1 = 0;
	gint _strv_size_ = 0;
	KkcCandidate** candidates = NULL;
	gchar** _tmp8_ = NULL;
	gint _tmp8__length1 = 0;
	KkcCandidate** _tmp9_ = NULL;
	gint candidates_length1 = 0;
	gint _candidates_size_ = 0;
	KkcCandidate** _tmp39_ = NULL;
	gint _tmp39__length1 = 0;
	g_return_val_if_fail (midasi != NULL, NULL);
	g_return_val_if_fail (line != NULL, NULL);
	_tmp0_ = line;
	_tmp1_ = string_strip (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = string_slice (_tmp2_, (glong) 1, (glong) (-1));
	_tmp4_ = _tmp3_;
	_tmp6_ = _tmp5_ = g_strsplit (_tmp4_, "/", 0);
	_tmp7_ = _tmp6_;
	_tmp7__length1 = _vala_array_length (_tmp5_);
	_g_free0 (_tmp4_);
	_g_free0 (_tmp2_);
	strv = _tmp7_;
	strv_length1 = _tmp7__length1;
	_strv_size_ = strv_length1;
	_tmp8_ = strv;
	_tmp8__length1 = strv_length1;
	_tmp9_ = g_new0 (KkcCandidate*, _tmp8__length1 + 1);
	candidates = _tmp9_;
	candidates_length1 = _tmp8__length1;
	_candidates_size_ = candidates_length1;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp10_ = FALSE;
			_tmp10_ = TRUE;
			while (TRUE) {
				gboolean _tmp11_ = FALSE;
				gint _tmp13_ = 0;
				gchar** _tmp14_ = NULL;
				gint _tmp14__length1 = 0;
				gchar* candidate_str = NULL;
				gchar** _tmp15_ = NULL;
				gint _tmp15__length1 = 0;
				gint _tmp16_ = 0;
				const gchar* _tmp17_ = NULL;
				gchar* _tmp18_ = NULL;
				gchar** text_annotation = NULL;
				const gchar* _tmp19_ = NULL;
				gchar** _tmp20_ = NULL;
				gchar** _tmp21_ = NULL;
				gint text_annotation_length1 = 0;
				gint _text_annotation_size_ = 0;
				gchar* text = NULL;
				gchar* annotation = NULL;
				gchar** _tmp22_ = NULL;
				gint _tmp22__length1 = 0;
				KkcCandidate** _tmp31_ = NULL;
				gint _tmp31__length1 = 0;
				gint _tmp32_ = 0;
				const gchar* _tmp33_ = NULL;
				gboolean _tmp34_ = FALSE;
				const gchar* _tmp35_ = NULL;
				const gchar* _tmp36_ = NULL;
				KkcCandidate* _tmp37_ = NULL;
				KkcCandidate* _tmp38_ = NULL;
				_tmp11_ = _tmp10_;
				if (!_tmp11_) {
					gint _tmp12_ = 0;
					_tmp12_ = i;
					i = _tmp12_ + 1;
				}
				_tmp10_ = FALSE;
				_tmp13_ = i;
				_tmp14_ = strv;
				_tmp14__length1 = strv_length1;
				if (!(_tmp13_ < _tmp14__length1)) {
					break;
				}
				_tmp15_ = strv;
				_tmp15__length1 = strv_length1;
				_tmp16_ = i;
				_tmp17_ = _tmp15_[_tmp16_];
				_tmp18_ = kkc_dictionary_utils_unescape (_tmp17_);
				candidate_str = _tmp18_;
				_tmp19_ = candidate_str;
				_tmp21_ = _tmp20_ = g_strsplit (_tmp19_, ";", 2);
				text_annotation = _tmp21_;
				text_annotation_length1 = _vala_array_length (_tmp20_);
				_text_annotation_size_ = text_annotation_length1;
				_tmp22_ = text_annotation;
				_tmp22__length1 = text_annotation_length1;
				if (_tmp22__length1 == 2) {
					gchar** _tmp23_ = NULL;
					gint _tmp23__length1 = 0;
					const gchar* _tmp24_ = NULL;
					gchar* _tmp25_ = NULL;
					gchar** _tmp26_ = NULL;
					gint _tmp26__length1 = 0;
					const gchar* _tmp27_ = NULL;
					gchar* _tmp28_ = NULL;
					_tmp23_ = text_annotation;
					_tmp23__length1 = text_annotation_length1;
					_tmp24_ = _tmp23_[0];
					_tmp25_ = g_strdup (_tmp24_);
					_g_free0 (text);
					text = _tmp25_;
					_tmp26_ = text_annotation;
					_tmp26__length1 = text_annotation_length1;
					_tmp27_ = _tmp26_[1];
					_tmp28_ = g_strdup (_tmp27_);
					_g_free0 (annotation);
					annotation = _tmp28_;
				} else {
					const gchar* _tmp29_ = NULL;
					gchar* _tmp30_ = NULL;
					_tmp29_ = candidate_str;
					_tmp30_ = g_strdup (_tmp29_);
					_g_free0 (text);
					text = _tmp30_;
					_g_free0 (annotation);
					annotation = NULL;
				}
				_tmp31_ = candidates;
				_tmp31__length1 = candidates_length1;
				_tmp32_ = i;
				_tmp33_ = midasi;
				_tmp34_ = okuri;
				_tmp35_ = text;
				_tmp36_ = annotation;
				_tmp37_ = kkc_candidate_new (_tmp33_, _tmp34_, _tmp35_, _tmp36_, NULL);
				_g_object_unref0 (_tmp31_[_tmp32_]);
				_tmp31_[_tmp32_] = _tmp37_;
				_tmp38_ = _tmp31_[_tmp32_];
				_g_free0 (annotation);
				_g_free0 (text);
				text_annotation = (_vala_array_free (text_annotation, text_annotation_length1, (GDestroyNotify) g_free), NULL);
				_g_free0 (candidate_str);
			}
		}
	}
	_tmp39_ = candidates;
	_tmp39__length1 = candidates_length1;
	if (result_length1) {
		*result_length1 = _tmp39__length1;
	}
	result = _tmp39_;
	strv = (_vala_array_free (strv, strv_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


/**
         * Format an array of Candidates to be saved in a dictionary file.
         *
         * @param candidates an array of Candidate
         * @return a string
         */
gchar* kkc_dictionary_utils_join_candidates (KkcCandidate** candidates, int candidates_length1) {
	gchar* result = NULL;
	gchar** strv = NULL;
	KkcCandidate** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	gchar** _tmp1_ = NULL;
	gint strv_length1 = 0;
	gint _strv_size_ = 0;
	gchar** _tmp16_ = NULL;
	gint _tmp16__length1 = 0;
	gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	gchar* _tmp19_ = NULL;
	gchar* _tmp20_ = NULL;
	gchar* _tmp21_ = NULL;
	gchar* _tmp22_ = NULL;
	_tmp0_ = candidates;
	_tmp0__length1 = candidates_length1;
	_tmp1_ = g_new0 (gchar*, _tmp0__length1 + 1);
	strv = _tmp1_;
	strv_length1 = _tmp0__length1;
	_strv_size_ = strv_length1;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp2_ = FALSE;
			_tmp2_ = TRUE;
			while (TRUE) {
				gboolean _tmp3_ = FALSE;
				gint _tmp5_ = 0;
				KkcCandidate** _tmp6_ = NULL;
				gint _tmp6__length1 = 0;
				gchar** _tmp7_ = NULL;
				gint _tmp7__length1 = 0;
				gint _tmp8_ = 0;
				KkcCandidate** _tmp9_ = NULL;
				gint _tmp9__length1 = 0;
				gint _tmp10_ = 0;
				KkcCandidate* _tmp11_ = NULL;
				gchar* _tmp12_ = NULL;
				gchar* _tmp13_ = NULL;
				gchar* _tmp14_ = NULL;
				gchar* _tmp15_ = NULL;
				_tmp3_ = _tmp2_;
				if (!_tmp3_) {
					gint _tmp4_ = 0;
					_tmp4_ = i;
					i = _tmp4_ + 1;
				}
				_tmp2_ = FALSE;
				_tmp5_ = i;
				_tmp6_ = candidates;
				_tmp6__length1 = candidates_length1;
				if (!(_tmp5_ < _tmp6__length1)) {
					break;
				}
				_tmp7_ = strv;
				_tmp7__length1 = strv_length1;
				_tmp8_ = i;
				_tmp9_ = candidates;
				_tmp9__length1 = candidates_length1;
				_tmp10_ = i;
				_tmp11_ = _tmp9_[_tmp10_];
				_tmp12_ = kkc_candidate_to_string (_tmp11_);
				_tmp13_ = _tmp12_;
				_tmp14_ = kkc_dictionary_utils_escape (_tmp13_);
				_g_free0 (_tmp7_[_tmp8_]);
				_tmp7_[_tmp8_] = _tmp14_;
				_tmp15_ = _tmp7_[_tmp8_];
				_g_free0 (_tmp13_);
			}
		}
	}
	_tmp16_ = strv;
	_tmp16__length1 = strv_length1;
	_tmp17_ = g_strjoinv ("/", _tmp16_);
	_tmp18_ = _tmp17_;
	_tmp19_ = g_strconcat ("/", _tmp18_, NULL);
	_tmp20_ = _tmp19_;
	_tmp21_ = g_strconcat (_tmp20_, "/", NULL);
	_tmp22_ = _tmp21_;
	_g_free0 (_tmp20_);
	_g_free0 (_tmp18_);
	result = _tmp22_;
	strv = (_vala_array_free (strv, strv_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


static gboolean string_get_next_char (const gchar* self, gint* index, gunichar* c) {
	gunichar _vala_c = 0U;
	gboolean result = FALSE;
	gint _tmp0_ = 0;
	gunichar _tmp1_ = 0U;
	gunichar _tmp2_ = 0U;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = *index;
	_tmp1_ = g_utf8_get_char (((gchar*) self) + _tmp0_);
	_vala_c = _tmp1_;
	_tmp2_ = _vala_c;
	if (_tmp2_ != ((gunichar) 0)) {
		gint _tmp3_ = 0;
		gchar* _tmp4_ = NULL;
		_tmp3_ = *index;
		_tmp4_ = g_utf8_next_char (((gchar*) self) + _tmp3_);
		*index = (gint) (_tmp4_ - ((gchar*) self));
		result = TRUE;
		if (c) {
			*c = _vala_c;
		}
		return result;
	} else {
		result = FALSE;
		if (c) {
			*c = _vala_c;
		}
		return result;
	}
	if (c) {
		*c = _vala_c;
	}
}


gchar* kkc_dictionary_utils_escape (const gchar* input) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	gint index = 0;
	gunichar uc = 0U;
	GString* _tmp11_ = NULL;
	const gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	g_return_val_if_fail (input != NULL, NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	index = 0;
	while (TRUE) {
		const gchar* _tmp1_ = NULL;
		gunichar _tmp2_ = 0U;
		gboolean _tmp3_ = FALSE;
		gunichar _tmp4_ = 0U;
		_tmp1_ = input;
		_tmp3_ = string_get_next_char (_tmp1_, &index, &_tmp2_);
		uc = _tmp2_;
		if (!_tmp3_) {
			break;
		}
		_tmp4_ = uc;
		switch (_tmp4_) {
			case '\\':
			case '/':
			case ' ':
			case '\t':
			case '\n':
			{
				GString* _tmp5_ = NULL;
				gunichar _tmp6_ = 0U;
				gchar* _tmp7_ = NULL;
				gchar* _tmp8_ = NULL;
				_tmp5_ = builder;
				_tmp6_ = uc;
				_tmp7_ = g_strdup_printf ("\\x%02x", (guint) _tmp6_);
				_tmp8_ = _tmp7_;
				g_string_append (_tmp5_, _tmp8_);
				_g_free0 (_tmp8_);
				break;
			}
			default:
			{
				GString* _tmp9_ = NULL;
				gunichar _tmp10_ = 0U;
				_tmp9_ = builder;
				_tmp10_ = uc;
				g_string_append_unichar (_tmp9_, _tmp10_);
				break;
			}
		}
	}
	_tmp11_ = builder;
	_tmp12_ = _tmp11_->str;
	_tmp13_ = g_strdup (_tmp12_);
	result = _tmp13_;
	_g_string_free0 (builder);
	return result;
}


static gboolean kkc_dictionary_utils_unescape_eval (GMatchInfo* info, GString* _result_) {
	gboolean result = FALSE;
	gchar* hex = NULL;
	GMatchInfo* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	GString* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	g_return_val_if_fail (info != NULL, FALSE);
	g_return_val_if_fail (_result_ != NULL, FALSE);
	_tmp0_ = info;
	_tmp1_ = g_match_info_fetch (_tmp0_, 1);
	hex = _tmp1_;
	_vala_assert (hex != NULL, "hex != null");
	_tmp2_ = _result_;
	_tmp3_ = kkc_utils_parse_hex (hex);
	_tmp4_ = _tmp3_;
	g_string_append (_tmp2_, _tmp4_);
	_g_free0 (_tmp4_);
	result = FALSE;
	_g_free0 (hex);
	return result;
}


static gboolean _kkc_dictionary_utils_unescape_eval_gregex_eval_callback (GMatchInfo* match_info, GString* _result_, gpointer self) {
	gboolean result;
	result = kkc_dictionary_utils_unescape_eval (match_info, _result_);
	return result;
}


gchar* kkc_dictionary_utils_unescape (const gchar* input) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (input != NULL, NULL);
	{
		gchar* _tmp0_ = NULL;
		GRegex* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		_tmp1_ = kkc_dictionary_utils_escape_regex;
		_tmp2_ = input;
		_tmp3_ = g_regex_replace_eval (_tmp1_, _tmp2_, (gssize) (-1), 0, 0, _kkc_dictionary_utils_unescape_eval_gregex_eval_callback, NULL, &_inner_error_);
		_tmp0_ = _tmp3_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch11_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		result = _tmp0_;
		return result;
	}
	goto __finally11;
	__catch11_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally11:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return NULL;
}


KkcDictionaryUtils* kkc_dictionary_utils_construct (GType object_type) {
	KkcDictionaryUtils * self = NULL;
	self = (KkcDictionaryUtils*) g_object_new (object_type, NULL);
	return self;
}


static void kkc_dictionary_utils_class_init (KkcDictionaryUtilsClass * klass) {
	GError * _inner_error_ = NULL;
	kkc_dictionary_utils_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = kkc_dictionary_utils_finalize;
	{
		GRegex* _tmp0_ = NULL;
		GRegex* _tmp1_ = NULL;
		_tmp1_ = g_regex_new ("\\\\x([0-9A-Fa-f]{1,2})", 0, 0, &_inner_error_);
		_tmp0_ = _tmp1_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch12_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
		}
		_g_regex_unref0 (kkc_dictionary_utils_escape_regex);
		kkc_dictionary_utils_escape_regex = _tmp0_;
	}
	goto __finally12;
	__catch12_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally12:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
	}
}


static void kkc_dictionary_utils_instance_init (KkcDictionaryUtils * self) {
}


static void kkc_dictionary_utils_finalize (GObject* obj) {
	KkcDictionaryUtils * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_DICTIONARY_UTILS, KkcDictionaryUtils);
	G_OBJECT_CLASS (kkc_dictionary_utils_parent_class)->finalize (obj);
}


GType kkc_dictionary_utils_get_type (void) {
	static volatile gsize kkc_dictionary_utils_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_dictionary_utils_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcDictionaryUtilsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_dictionary_utils_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcDictionaryUtils), 0, (GInstanceInitFunc) kkc_dictionary_utils_instance_init, NULL };
		GType kkc_dictionary_utils_type_id;
		kkc_dictionary_utils_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcDictionaryUtils", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&kkc_dictionary_utils_type_id__volatile, kkc_dictionary_utils_type_id);
	}
	return kkc_dictionary_utils_type_id__volatile;
}


/**
         * Reload the dictionary.
         *
         * @throws GLib.Error when reading the dictionary failed.
         */
void kkc_dictionary_reload (KkcDictionary* self, GError** error) {
	g_return_if_fail (self != NULL);
	KKC_DICTIONARY_GET_INTERFACE (self)->reload (self, error);
}


/**
         * Save the dictionary on disk.
         *
         * @throws GLib.Error if the dictionary cannot be saved.
         */
static void kkc_dictionary_real_save (KkcDictionary* self, GError** error) {
}


void kkc_dictionary_save (KkcDictionary* self, GError** error) {
	g_return_if_fail (self != NULL);
	KKC_DICTIONARY_GET_INTERFACE (self)->save (self, error);
}


static void kkc_dictionary_base_init (KkcDictionaryIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		iface->save = kkc_dictionary_real_save;
	}
}


/**
     * Base interface of dictionaries.
     */
GType kkc_dictionary_get_type (void) {
	static volatile gsize kkc_dictionary_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_dictionary_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcDictionaryIface), (GBaseInitFunc) kkc_dictionary_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType kkc_dictionary_type_id;
		kkc_dictionary_type_id = g_type_register_static (G_TYPE_INTERFACE, "KkcDictionary", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (kkc_dictionary_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&kkc_dictionary_type_id__volatile, kkc_dictionary_type_id);
	}
	return kkc_dictionary_type_id__volatile;
}


GQuark kkc_dictionary_error_quark (void) {
	return g_quark_from_static_string ("kkc_dictionary_error-quark");
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


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



