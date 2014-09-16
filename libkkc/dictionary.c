/* dictionary.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from dictionary.vala, do not modify */

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
	glong _tmp13_ = 0L;
	glong _tmp16_ = 0L;
	glong _tmp17_ = 0L;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	gchar* _tmp21_ = NULL;
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
	g_return_val_if_fail (_tmp8_, NULL);
	_tmp13_ = end;
	if (_tmp13_ >= ((glong) 0)) {
		glong _tmp14_ = 0L;
		glong _tmp15_ = 0L;
		_tmp14_ = end;
		_tmp15_ = string_length;
		_tmp12_ = _tmp14_ <= _tmp15_;
	} else {
		_tmp12_ = FALSE;
	}
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp16_ = start;
	_tmp17_ = end;
	g_return_val_if_fail (_tmp16_ <= _tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	_tmp20_ = start;
	_tmp21_ = g_strndup (((gchar*) self) + _tmp18_, (gsize) (_tmp19_ - _tmp20_));
	result = _tmp21_;
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
	KkcCandidate** _tmp38_ = NULL;
	gint _tmp38__length1 = 0;
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
				gint _tmp12_ = 0;
				gchar** _tmp13_ = NULL;
				gint _tmp13__length1 = 0;
				gchar* candidate_str = NULL;
				gchar** _tmp14_ = NULL;
				gint _tmp14__length1 = 0;
				gint _tmp15_ = 0;
				const gchar* _tmp16_ = NULL;
				gchar* _tmp17_ = NULL;
				gchar** text_annotation = NULL;
				const gchar* _tmp18_ = NULL;
				gchar** _tmp19_ = NULL;
				gchar** _tmp20_ = NULL;
				gint text_annotation_length1 = 0;
				gint _text_annotation_size_ = 0;
				gchar* text = NULL;
				gchar* annotation = NULL;
				gchar** _tmp21_ = NULL;
				gint _tmp21__length1 = 0;
				KkcCandidate** _tmp30_ = NULL;
				gint _tmp30__length1 = 0;
				gint _tmp31_ = 0;
				const gchar* _tmp32_ = NULL;
				gboolean _tmp33_ = FALSE;
				const gchar* _tmp34_ = NULL;
				const gchar* _tmp35_ = NULL;
				KkcCandidate* _tmp36_ = NULL;
				KkcCandidate* _tmp37_ = NULL;
				if (!_tmp10_) {
					gint _tmp11_ = 0;
					_tmp11_ = i;
					i = _tmp11_ + 1;
				}
				_tmp10_ = FALSE;
				_tmp12_ = i;
				_tmp13_ = strv;
				_tmp13__length1 = strv_length1;
				if (!(_tmp12_ < _tmp13__length1)) {
					break;
				}
				_tmp14_ = strv;
				_tmp14__length1 = strv_length1;
				_tmp15_ = i;
				_tmp16_ = _tmp14_[_tmp15_];
				_tmp17_ = kkc_dictionary_utils_unescape (_tmp16_);
				candidate_str = _tmp17_;
				_tmp18_ = candidate_str;
				_tmp20_ = _tmp19_ = g_strsplit (_tmp18_, ";", 2);
				text_annotation = _tmp20_;
				text_annotation_length1 = _vala_array_length (_tmp19_);
				_text_annotation_size_ = text_annotation_length1;
				_tmp21_ = text_annotation;
				_tmp21__length1 = text_annotation_length1;
				if (_tmp21__length1 == 2) {
					gchar** _tmp22_ = NULL;
					gint _tmp22__length1 = 0;
					const gchar* _tmp23_ = NULL;
					gchar* _tmp24_ = NULL;
					gchar** _tmp25_ = NULL;
					gint _tmp25__length1 = 0;
					const gchar* _tmp26_ = NULL;
					gchar* _tmp27_ = NULL;
					_tmp22_ = text_annotation;
					_tmp22__length1 = text_annotation_length1;
					_tmp23_ = _tmp22_[0];
					_tmp24_ = g_strdup (_tmp23_);
					_g_free0 (text);
					text = _tmp24_;
					_tmp25_ = text_annotation;
					_tmp25__length1 = text_annotation_length1;
					_tmp26_ = _tmp25_[1];
					_tmp27_ = g_strdup (_tmp26_);
					_g_free0 (annotation);
					annotation = _tmp27_;
				} else {
					const gchar* _tmp28_ = NULL;
					gchar* _tmp29_ = NULL;
					_tmp28_ = candidate_str;
					_tmp29_ = g_strdup (_tmp28_);
					_g_free0 (text);
					text = _tmp29_;
					_g_free0 (annotation);
					annotation = NULL;
				}
				_tmp30_ = candidates;
				_tmp30__length1 = candidates_length1;
				_tmp31_ = i;
				_tmp32_ = midasi;
				_tmp33_ = okuri;
				_tmp34_ = text;
				_tmp35_ = annotation;
				_tmp36_ = kkc_candidate_new (_tmp32_, _tmp33_, _tmp34_, _tmp35_, NULL);
				_g_object_unref0 (_tmp30_[_tmp31_]);
				_tmp30_[_tmp31_] = _tmp36_;
				_tmp37_ = _tmp30_[_tmp31_];
				_g_free0 (annotation);
				_g_free0 (text);
				text_annotation = (_vala_array_free (text_annotation, text_annotation_length1, (GDestroyNotify) g_free), NULL);
				_g_free0 (candidate_str);
			}
		}
	}
	_tmp38_ = candidates;
	_tmp38__length1 = candidates_length1;
	if (result_length1) {
		*result_length1 = _tmp38__length1;
	}
	result = _tmp38_;
	strv = (_vala_array_free (strv, strv_length1, (GDestroyNotify) g_free), NULL);
	return result;
}


/**
         * Format an array of Candidates to be saved in a dictionary file.
         *
         * @param candidates an array of Candidate
         * @return a string
         */
static gchar* _vala_g_strjoinv (const gchar* separator, gchar** str_array, int str_array_length1) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	_tmp0_ = separator;
	if (_tmp0_ == NULL) {
		separator = "";
	}
	_tmp3_ = str_array;
	_tmp3__length1 = str_array_length1;
	if (_tmp3_ != NULL) {
		_tmp2_ = TRUE;
	} else {
		gchar** _tmp4_ = NULL;
		gint _tmp4__length1 = 0;
		_tmp4_ = str_array;
		_tmp4__length1 = str_array_length1;
		_tmp2_ = _tmp4__length1 > 0;
	}
	if (_tmp2_) {
		_tmp1_ = TRUE;
	} else {
		gboolean _tmp5_ = FALSE;
		gchar** _tmp6_ = NULL;
		gint _tmp6__length1 = 0;
		_tmp6_ = str_array;
		_tmp6__length1 = str_array_length1;
		if (_tmp6__length1 == (-1)) {
			gchar** _tmp7_ = NULL;
			gint _tmp7__length1 = 0;
			const gchar* _tmp8_ = NULL;
			_tmp7_ = str_array;
			_tmp7__length1 = str_array_length1;
			_tmp8_ = _tmp7_[0];
			_tmp5_ = _tmp8_ != NULL;
		} else {
			_tmp5_ = FALSE;
		}
		_tmp1_ = _tmp5_;
	}
	if (_tmp1_) {
		gint i = 0;
		gsize len = 0UL;
		gint _tmp31_ = 0;
		gint _tmp33_ = 0;
		gint _tmp34_ = 0;
		gsize _tmp35_ = 0UL;
		const gchar* _tmp36_ = NULL;
		gint _tmp37_ = 0;
		gint _tmp38_ = 0;
		gint _tmp39_ = 0;
		const gchar* res = NULL;
		gsize _tmp40_ = 0UL;
		void* _tmp41_ = NULL;
		void* ptr = NULL;
		const gchar* _tmp42_ = NULL;
		gchar** _tmp43_ = NULL;
		gint _tmp43__length1 = 0;
		const gchar* _tmp44_ = NULL;
		void* _tmp45_ = NULL;
		const gchar* _tmp62_ = NULL;
		len = (gsize) 1;
		{
			gboolean _tmp9_ = FALSE;
			i = 0;
			_tmp9_ = TRUE;
			while (TRUE) {
				gboolean _tmp11_ = FALSE;
				gboolean _tmp12_ = FALSE;
				gchar** _tmp13_ = NULL;
				gint _tmp13__length1 = 0;
				gint _tmp21_ = 0;
				gchar** _tmp22_ = NULL;
				gint _tmp22__length1 = 0;
				gint _tmp23_ = 0;
				const gchar* _tmp24_ = NULL;
				gsize _tmp30_ = 0UL;
				if (!_tmp9_) {
					gint _tmp10_ = 0;
					_tmp10_ = i;
					i = _tmp10_ + 1;
				}
				_tmp9_ = FALSE;
				_tmp13_ = str_array;
				_tmp13__length1 = str_array_length1;
				if (_tmp13__length1 != (-1)) {
					gint _tmp14_ = 0;
					gchar** _tmp15_ = NULL;
					gint _tmp15__length1 = 0;
					_tmp14_ = i;
					_tmp15_ = str_array;
					_tmp15__length1 = str_array_length1;
					_tmp12_ = _tmp14_ < _tmp15__length1;
				} else {
					_tmp12_ = FALSE;
				}
				if (_tmp12_) {
					_tmp11_ = TRUE;
				} else {
					gboolean _tmp16_ = FALSE;
					gchar** _tmp17_ = NULL;
					gint _tmp17__length1 = 0;
					_tmp17_ = str_array;
					_tmp17__length1 = str_array_length1;
					if (_tmp17__length1 == (-1)) {
						gchar** _tmp18_ = NULL;
						gint _tmp18__length1 = 0;
						gint _tmp19_ = 0;
						const gchar* _tmp20_ = NULL;
						_tmp18_ = str_array;
						_tmp18__length1 = str_array_length1;
						_tmp19_ = i;
						_tmp20_ = _tmp18_[_tmp19_];
						_tmp16_ = _tmp20_ != NULL;
					} else {
						_tmp16_ = FALSE;
					}
					_tmp11_ = _tmp16_;
				}
				if (!_tmp11_) {
					break;
				}
				_tmp22_ = str_array;
				_tmp22__length1 = str_array_length1;
				_tmp23_ = i;
				_tmp24_ = _tmp22_[_tmp23_];
				if (_tmp24_ != NULL) {
					gchar** _tmp25_ = NULL;
					gint _tmp25__length1 = 0;
					gint _tmp26_ = 0;
					const gchar* _tmp27_ = NULL;
					gint _tmp28_ = 0;
					gint _tmp29_ = 0;
					_tmp25_ = str_array;
					_tmp25__length1 = str_array_length1;
					_tmp26_ = i;
					_tmp27_ = _tmp25_[_tmp26_];
					_tmp28_ = strlen ((const gchar*) _tmp27_);
					_tmp29_ = _tmp28_;
					_tmp21_ = _tmp29_;
				} else {
					_tmp21_ = 0;
				}
				_tmp30_ = len;
				len = _tmp30_ + _tmp21_;
			}
		}
		_tmp31_ = i;
		if (_tmp31_ == 0) {
			gchar* _tmp32_ = NULL;
			_tmp32_ = g_strdup ("");
			result = _tmp32_;
			return result;
		}
		_tmp33_ = i;
		str_array_length1 = _tmp33_;
		_tmp34_ = str_array_length1;
		_tmp35_ = len;
		_tmp36_ = separator;
		_tmp37_ = strlen ((const gchar*) _tmp36_);
		_tmp38_ = _tmp37_;
		_tmp39_ = i;
		len = _tmp35_ + (_tmp38_ * (_tmp39_ - 1));
		_tmp40_ = len;
		_tmp41_ = g_malloc (_tmp40_);
		res = _tmp41_;
		_tmp42_ = res;
		_tmp43_ = str_array;
		_tmp43__length1 = str_array_length1;
		_tmp44_ = _tmp43_[0];
		_tmp45_ = g_stpcpy ((void*) _tmp42_, (const gchar*) _tmp44_);
		ptr = _tmp45_;
		{
			gboolean _tmp46_ = FALSE;
			i = 1;
			_tmp46_ = TRUE;
			while (TRUE) {
				gint _tmp48_ = 0;
				gchar** _tmp49_ = NULL;
				gint _tmp49__length1 = 0;
				void* _tmp50_ = NULL;
				const gchar* _tmp51_ = NULL;
				void* _tmp52_ = NULL;
				const gchar* _tmp53_ = NULL;
				gchar** _tmp54_ = NULL;
				gint _tmp54__length1 = 0;
				gint _tmp55_ = 0;
				const gchar* _tmp56_ = NULL;
				void* _tmp60_ = NULL;
				void* _tmp61_ = NULL;
				if (!_tmp46_) {
					gint _tmp47_ = 0;
					_tmp47_ = i;
					i = _tmp47_ + 1;
				}
				_tmp46_ = FALSE;
				_tmp48_ = i;
				_tmp49_ = str_array;
				_tmp49__length1 = str_array_length1;
				if (!(_tmp48_ < _tmp49__length1)) {
					break;
				}
				_tmp50_ = ptr;
				_tmp51_ = separator;
				_tmp52_ = g_stpcpy (_tmp50_, (const gchar*) _tmp51_);
				ptr = _tmp52_;
				_tmp54_ = str_array;
				_tmp54__length1 = str_array_length1;
				_tmp55_ = i;
				_tmp56_ = _tmp54_[_tmp55_];
				if (_tmp56_ != NULL) {
					gchar** _tmp57_ = NULL;
					gint _tmp57__length1 = 0;
					gint _tmp58_ = 0;
					const gchar* _tmp59_ = NULL;
					_tmp57_ = str_array;
					_tmp57__length1 = str_array_length1;
					_tmp58_ = i;
					_tmp59_ = _tmp57_[_tmp58_];
					_tmp53_ = (const gchar*) _tmp59_;
				} else {
					_tmp53_ = "";
				}
				_tmp60_ = ptr;
				_tmp61_ = g_stpcpy (_tmp60_, _tmp53_);
				ptr = _tmp61_;
			}
		}
		_tmp62_ = res;
		res = NULL;
		result = (gchar*) _tmp62_;
		return result;
	} else {
		gchar* _tmp63_ = NULL;
		_tmp63_ = g_strdup ("");
		result = _tmp63_;
		return result;
	}
}


gchar* kkc_dictionary_utils_join_candidates (KkcCandidate** candidates, int candidates_length1) {
	gchar* result = NULL;
	gchar** strv = NULL;
	KkcCandidate** _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	gchar** _tmp1_ = NULL;
	gint strv_length1 = 0;
	gint _strv_size_ = 0;
	gchar** _tmp15_ = NULL;
	gint _tmp15__length1 = 0;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	gchar* _tmp19_ = NULL;
	gchar* _tmp20_ = NULL;
	gchar* _tmp21_ = NULL;
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
				gint _tmp4_ = 0;
				KkcCandidate** _tmp5_ = NULL;
				gint _tmp5__length1 = 0;
				gchar** _tmp6_ = NULL;
				gint _tmp6__length1 = 0;
				gint _tmp7_ = 0;
				KkcCandidate** _tmp8_ = NULL;
				gint _tmp8__length1 = 0;
				gint _tmp9_ = 0;
				KkcCandidate* _tmp10_ = NULL;
				gchar* _tmp11_ = NULL;
				gchar* _tmp12_ = NULL;
				gchar* _tmp13_ = NULL;
				gchar* _tmp14_ = NULL;
				if (!_tmp2_) {
					gint _tmp3_ = 0;
					_tmp3_ = i;
					i = _tmp3_ + 1;
				}
				_tmp2_ = FALSE;
				_tmp4_ = i;
				_tmp5_ = candidates;
				_tmp5__length1 = candidates_length1;
				if (!(_tmp4_ < _tmp5__length1)) {
					break;
				}
				_tmp6_ = strv;
				_tmp6__length1 = strv_length1;
				_tmp7_ = i;
				_tmp8_ = candidates;
				_tmp8__length1 = candidates_length1;
				_tmp9_ = i;
				_tmp10_ = _tmp8_[_tmp9_];
				_tmp11_ = kkc_candidate_to_string (_tmp10_);
				_tmp12_ = _tmp11_;
				_tmp13_ = kkc_dictionary_utils_escape (_tmp12_);
				_g_free0 (_tmp6_[_tmp7_]);
				_tmp6_[_tmp7_] = _tmp13_;
				_tmp14_ = _tmp6_[_tmp7_];
				_g_free0 (_tmp12_);
			}
		}
	}
	_tmp15_ = strv;
	_tmp15__length1 = strv_length1;
	_tmp16_ = _vala_g_strjoinv ("/", _tmp15_, _tmp15__length1);
	_tmp17_ = _tmp16_;
	_tmp18_ = g_strconcat ("/", _tmp17_, NULL);
	_tmp19_ = _tmp18_;
	_tmp20_ = g_strconcat (_tmp19_, "/", NULL);
	_tmp21_ = _tmp20_;
	_g_free0 (_tmp19_);
	_g_free0 (_tmp17_);
	result = _tmp21_;
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
		gchar* _tmp4_ = NULL;
		_tmp1_ = kkc_dictionary_utils_escape_regex;
		_tmp2_ = input;
		_tmp3_ = g_regex_replace_eval (_tmp1_, _tmp2_, (gssize) (-1), 0, 0, _kkc_dictionary_utils_unescape_eval_gregex_eval_callback, NULL, &_inner_error_);
		_tmp0_ = _tmp3_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch11_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp4_ = _tmp0_;
		_tmp0_ = NULL;
		result = _tmp4_;
		_g_free0 (_tmp0_);
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
		GRegex* _tmp2_ = NULL;
		_tmp1_ = g_regex_new ("\\\\x([0-9A-Fa-f]{1,2})", 0, 0, &_inner_error_);
		_tmp0_ = _tmp1_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch12_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
		}
		_tmp2_ = _tmp0_;
		_tmp0_ = NULL;
		_g_regex_unref0 (kkc_dictionary_utils_escape_regex);
		kkc_dictionary_utils_escape_regex = _tmp2_;
		_g_regex_unref0 (_tmp0_);
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
	if (G_UNLIKELY (_inner_error_ != NULL)) {
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



