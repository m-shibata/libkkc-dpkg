/* test-utils.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from test-utils.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gstdio.h>
#include <libkkc/libkkc-internals.h>
#include <json-glib/json-glib.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_dir_close0(var) ((var == NULL) ? NULL : (var = (g_dir_close (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _json_object_unref0(var) ((var == NULL) ? NULL : (var = (json_object_unref (var), NULL)))
#define __vala_JsonNode_free0(var) ((var == NULL) ? NULL : (var = (_vala_JsonNode_free (var), NULL)))
#define _json_array_unref0(var) ((var == NULL) ? NULL : (var = (json_array_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);



void kkc_test_utils_remove_dir (const gchar* name, GError** error);
void kkc_test_utils_check_conversion_result (KkcContext* context, JsonObject* expected);
void kkc_test_utils_do_conversions (KkcContext* context, const gchar* filename);
static JsonNode* _vala_JsonNode_copy (JsonNode* self);
static void _vala_JsonNode_free (JsonNode* self);


void kkc_test_utils_remove_dir (const gchar* name, GError** error) {
	GDir* dir = NULL;
	const gchar* _tmp0_ = NULL;
	GDir* _tmp1_ = NULL;
	gchar* child_name = NULL;
	const gchar* _tmp13_ = NULL;
	GError * _inner_error_ = NULL;
#line 2 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (name != NULL);
#line 3 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp0_ = name;
#line 3 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp1_ = g_dir_open (_tmp0_, (guint) 0, &_inner_error_);
#line 3 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	dir = _tmp1_;
#line 3 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_inner_error_ != NULL) {
#line 3 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_propagate_error (error, _inner_error_);
#line 3 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		return;
#line 53 "test-utils.c"
	}
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	while (TRUE) {
#line 57 "test-utils.c"
		GDir* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		gchar* child_filename = NULL;
		const gchar* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		gboolean _tmp10_ = FALSE;
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp2_ = dir;
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp3_ = g_dir_read_name (_tmp2_);
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp4_ = g_strdup (_tmp3_);
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (child_name);
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		child_name = _tmp4_;
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp5_ = child_name;
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		if (!(_tmp5_ != NULL)) {
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			break;
#line 84 "test-utils.c"
		}
#line 6 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp6_ = name;
#line 6 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp7_ = child_name;
#line 6 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp8_ = g_build_filename (_tmp6_, _tmp7_, NULL);
#line 6 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		child_filename = _tmp8_;
#line 7 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp9_ = child_filename;
#line 7 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp10_ = g_file_test (_tmp9_, G_FILE_TEST_IS_DIR);
#line 7 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		if (_tmp10_) {
#line 100 "test-utils.c"
			const gchar* _tmp11_ = NULL;
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			_tmp11_ = child_filename;
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			kkc_test_utils_remove_dir (_tmp11_, &_inner_error_);
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			if (_inner_error_ != NULL) {
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				g_propagate_error (error, _inner_error_);
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_g_free0 (child_filename);
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_g_free0 (child_name);
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_g_dir_close0 (dir);
#line 8 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				return;
#line 118 "test-utils.c"
			}
		} else {
			const gchar* _tmp12_ = NULL;
#line 10 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			_tmp12_ = child_filename;
#line 10 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			g_remove (_tmp12_);
#line 126 "test-utils.c"
		}
#line 5 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (child_filename);
#line 130 "test-utils.c"
	}
#line 12 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp13_ = name;
#line 12 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_rmdir (_tmp13_);
#line 2 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_g_free0 (child_name);
#line 2 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_g_dir_close0 (dir);
#line 140 "test-utils.c"
}


void kkc_test_utils_check_conversion_result (KkcContext* context, JsonObject* expected) {
	JsonObject* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	JsonObject* _tmp9_ = NULL;
	gboolean _tmp10_ = FALSE;
	JsonObject* _tmp19_ = NULL;
	gboolean _tmp20_ = FALSE;
	JsonObject* _tmp30_ = NULL;
	gboolean _tmp31_ = FALSE;
	JsonObject* _tmp40_ = NULL;
	gboolean _tmp41_ = FALSE;
	KkcContext* _tmp50_ = NULL;
	gchar* _tmp51_ = NULL;
	gchar* _tmp52_ = NULL;
	gchar* _tmp53_ = NULL;
	KkcContext* _tmp54_ = NULL;
	KkcCandidateList* _tmp55_ = NULL;
	KkcCandidateList* _tmp56_ = NULL;
	gint _tmp57_ = 0;
	gint _tmp58_ = 0;
	JsonObject* _tmp59_ = NULL;
	gboolean _tmp60_ = FALSE;
	JsonObject* _tmp69_ = NULL;
	gboolean _tmp70_ = FALSE;
#line 15 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (context != NULL);
#line 15 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (expected != NULL);
#line 18 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp0_ = expected;
#line 18 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp1_ = json_object_has_member (_tmp0_, "output");
#line 18 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp1_) {
#line 178 "test-utils.c"
		gchar* expected_output = NULL;
		JsonObject* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		gchar* output = NULL;
		KkcContext* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
#line 19 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp2_ = expected;
#line 19 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp3_ = json_object_get_string_member (_tmp2_, "output");
#line 19 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp4_ = g_strdup (_tmp3_);
#line 19 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_output = _tmp4_;
#line 20 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp5_ = context;
#line 20 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp6_ = kkc_context_poll_output (_tmp5_);
#line 20 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		output = _tmp6_;
#line 21 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp7_ = output;
#line 21 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp8_ = expected_output;
#line 21 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (g_strcmp0 (_tmp7_, _tmp8_) == 0, "output == expected_output");
#line 18 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (output);
#line 18 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (expected_output);
#line 212 "test-utils.c"
	}
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp9_ = expected;
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp10_ = json_object_has_member (_tmp9_, "input");
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp10_) {
#line 220 "test-utils.c"
		gchar* expected_input = NULL;
		JsonObject* _tmp11_ = NULL;
		const gchar* _tmp12_ = NULL;
		gchar* _tmp13_ = NULL;
		KkcContext* _tmp14_ = NULL;
		gchar* _tmp15_ = NULL;
		gchar* _tmp16_ = NULL;
		gchar* _tmp17_ = NULL;
		const gchar* _tmp18_ = NULL;
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp11_ = expected;
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp12_ = json_object_get_string_member (_tmp11_, "input");
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp13_ = g_strdup (_tmp12_);
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_input = _tmp13_;
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp14_ = context;
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp15_ = kkc_context_get_input (_tmp14_);
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp16_ = _tmp15_;
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp17_ = _tmp16_;
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp18_ = expected_input;
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (g_strcmp0 (_tmp17_, _tmp18_) == 0, "context.input == expected_input");
#line 26 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (_tmp17_);
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (expected_input);
#line 254 "test-utils.c"
	}
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp19_ = expected;
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp20_ = json_object_has_member (_tmp19_, "segments");
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp20_) {
#line 262 "test-utils.c"
		gchar* expected_segments = NULL;
		JsonObject* _tmp21_ = NULL;
		const gchar* _tmp22_ = NULL;
		gchar* _tmp23_ = NULL;
		KkcContext* _tmp24_ = NULL;
		KkcSegmentList* _tmp25_ = NULL;
		KkcSegmentList* _tmp26_ = NULL;
		gchar* _tmp27_ = NULL;
		gchar* _tmp28_ = NULL;
		const gchar* _tmp29_ = NULL;
#line 30 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp21_ = expected;
#line 30 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp22_ = json_object_get_string_member (_tmp21_, "segments");
#line 30 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp23_ = g_strdup (_tmp22_);
#line 30 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_segments = _tmp23_;
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp24_ = context;
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp25_ = kkc_context_get_segments (_tmp24_);
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp26_ = _tmp25_;
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp27_ = kkc_segment_list_get_output (_tmp26_);
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp28_ = _tmp27_;
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp29_ = expected_segments;
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (g_strcmp0 (_tmp28_, _tmp29_) == 0, "context.segments.get_output () == expected_segments");
#line 31 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (_tmp28_);
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_free0 (expected_segments);
#line 299 "test-utils.c"
	}
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp30_ = expected;
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp31_ = json_object_has_member (_tmp30_, "segments_size");
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp31_) {
#line 307 "test-utils.c"
		gint64 expected_segments_size = 0LL;
		JsonObject* _tmp32_ = NULL;
		gint64 _tmp33_ = 0LL;
		KkcContext* _tmp34_ = NULL;
		KkcSegmentList* _tmp35_ = NULL;
		KkcSegmentList* _tmp36_ = NULL;
		gint _tmp37_ = 0;
		gint _tmp38_ = 0;
		gint64 _tmp39_ = 0LL;
#line 35 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp32_ = expected;
#line 35 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp33_ = json_object_get_int_member (_tmp32_, "segments_size");
#line 35 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_segments_size = _tmp33_;
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp34_ = context;
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp35_ = kkc_context_get_segments (_tmp34_);
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp36_ = _tmp35_;
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp37_ = kkc_segment_list_get_size (_tmp36_);
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp38_ = _tmp37_;
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp39_ = expected_segments_size;
#line 36 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (((gint64) _tmp38_) == _tmp39_, "context.segments.size == expected_segments_size");
#line 337 "test-utils.c"
	}
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp40_ = expected;
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp41_ = json_object_has_member (_tmp40_, "segments_cursor_pos");
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp41_) {
#line 345 "test-utils.c"
		gint64 expected_segments_cursor_pos = 0LL;
		JsonObject* _tmp42_ = NULL;
		gint64 _tmp43_ = 0LL;
		KkcContext* _tmp44_ = NULL;
		KkcSegmentList* _tmp45_ = NULL;
		KkcSegmentList* _tmp46_ = NULL;
		gint _tmp47_ = 0;
		gint _tmp48_ = 0;
		gint64 _tmp49_ = 0LL;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp42_ = expected;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp43_ = json_object_get_int_member (_tmp42_, "segments_cursor_pos");
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_segments_cursor_pos = _tmp43_;
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp44_ = context;
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp45_ = kkc_context_get_segments (_tmp44_);
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp46_ = _tmp45_;
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp47_ = kkc_segment_list_get_cursor_pos (_tmp46_);
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp48_ = _tmp47_;
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp49_ = expected_segments_cursor_pos;
#line 41 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (((gint64) _tmp48_) == _tmp49_, "context.segments.cursor_pos == expected_segments_cursor_pos");
#line 375 "test-utils.c"
	}
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp50_ = context;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp51_ = kkc_context_get_input (_tmp50_);
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp52_ = _tmp51_;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp53_ = _tmp52_;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp54_ = context;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp55_ = kkc_context_get_candidates (_tmp54_);
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp56_ = _tmp55_;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp57_ = kkc_candidate_list_get_size (_tmp56_);
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp58_ = _tmp57_;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_print ("%s %d\n", _tmp53_, _tmp58_);
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_g_free0 (_tmp53_);
#line 45 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp59_ = expected;
#line 45 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp60_ = json_object_has_member (_tmp59_, "candidates_size");
#line 45 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp60_) {
#line 405 "test-utils.c"
		gint64 expected_candidates_size = 0LL;
		JsonObject* _tmp61_ = NULL;
		gint64 _tmp62_ = 0LL;
		KkcContext* _tmp63_ = NULL;
		KkcCandidateList* _tmp64_ = NULL;
		KkcCandidateList* _tmp65_ = NULL;
		gint _tmp66_ = 0;
		gint _tmp67_ = 0;
		gint64 _tmp68_ = 0LL;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp61_ = expected;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp62_ = json_object_get_int_member (_tmp61_, "candidates_size");
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_candidates_size = _tmp62_;
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp63_ = context;
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp64_ = kkc_context_get_candidates (_tmp63_);
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp65_ = _tmp64_;
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp66_ = kkc_candidate_list_get_size (_tmp65_);
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp67_ = _tmp66_;
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp68_ = expected_candidates_size;
#line 47 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (((gint64) _tmp67_) == _tmp68_, "context.candidates.size == expected_candidates_size");
#line 435 "test-utils.c"
	}
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp69_ = expected;
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp70_ = json_object_has_member (_tmp69_, "input_cursor_pos");
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp70_) {
#line 443 "test-utils.c"
		gint64 expected_input_cursor_pos = 0LL;
		JsonObject* _tmp71_ = NULL;
		gint64 _tmp72_ = 0LL;
		KkcContext* _tmp73_ = NULL;
		gint _tmp74_ = 0;
		gint _tmp75_ = 0;
		gint64 _tmp76_ = 0LL;
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp71_ = expected;
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp72_ = json_object_get_int_member (_tmp71_, "input_cursor_pos");
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_input_cursor_pos = _tmp72_;
#line 52 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp73_ = context;
#line 52 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp74_ = kkc_context_get_input_cursor_pos (_tmp73_);
#line 52 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp75_ = _tmp74_;
#line 52 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp76_ = expected_input_cursor_pos;
#line 52 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (((gint64) _tmp75_) == _tmp76_, "context.input_cursor_pos == expected_input_cursor_pos");
#line 467 "test-utils.c"
	}
}


static JsonNode* _vala_JsonNode_copy (JsonNode* self) {
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return g_boxed_copy (json_node_get_type (), self);
#line 475 "test-utils.c"
}


static gpointer __vala_JsonNode_copy0 (gpointer self) {
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return self ? _vala_JsonNode_copy (self) : NULL;
#line 482 "test-utils.c"
}


static gpointer _json_array_ref0 (gpointer self) {
#line 66 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return self ? json_array_ref (self) : NULL;
#line 489 "test-utils.c"
}


static gpointer _json_object_ref0 (gpointer self) {
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return self ? json_object_ref (self) : NULL;
#line 496 "test-utils.c"
}


static void _vala_JsonNode_free (JsonNode* self) {
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_boxed_free (json_node_get_type (), self);
#line 503 "test-utils.c"
}


void kkc_test_utils_do_conversions (KkcContext* context, const gchar* filename) {
	JsonParser* parser = NULL;
	JsonParser* _tmp0_ = NULL;
	JsonNode* root = NULL;
	JsonNode* _tmp4_ = NULL;
	JsonNode* _tmp5_ = NULL;
	JsonNode* _tmp6_ = NULL;
	JsonNodeType _tmp7_ = 0;
	JsonArray* array = NULL;
	JsonNode* _tmp8_ = NULL;
	JsonArray* _tmp9_ = NULL;
	JsonArray* _tmp10_ = NULL;
	GError * _inner_error_ = NULL;
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (context != NULL);
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (filename != NULL);
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp0_ = json_parser_new ();
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	parser = _tmp0_;
#line 528 "test-utils.c"
	{
		gboolean _tmp1_ = FALSE;
		const gchar* _tmp2_ = NULL;
		gboolean _tmp3_ = FALSE;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp2_ = filename;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp3_ = json_parser_load_from_file (parser, _tmp2_, &_inner_error_);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp1_ = _tmp3_;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		if (_inner_error_ != NULL) {
#line 541 "test-utils.c"
			goto __catch0_g_error;
		}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		if (!_tmp1_) {
#line 60 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			g_assert_not_reached ();
#line 548 "test-utils.c"
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		e = _inner_error_;
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_inner_error_ = NULL;
#line 62 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_assert_not_reached ();
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_error_free0 (e);
#line 563 "test-utils.c"
	}
	__finally0:
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_inner_error_ != NULL) {
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_object_unref0 (parser);
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_clear_error (&_inner_error_);
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		return;
#line 576 "test-utils.c"
	}
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp4_ = json_parser_get_root (parser);
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp5_ = __vala_JsonNode_copy0 (_tmp4_);
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	root = _tmp5_;
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp6_ = root;
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp7_ = json_node_get_node_type (_tmp6_);
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_vala_assert (_tmp7_ == JSON_NODE_ARRAY, "root.get_node_type () == Json.NodeType.ARRAY");
#line 66 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp8_ = root;
#line 66 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp9_ = json_node_get_array (_tmp8_);
#line 66 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp10_ = _json_array_ref0 (_tmp9_);
#line 66 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	array = _tmp10_;
#line 598 "test-utils.c"
	{
		gint i = 0;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		i = 0;
#line 603 "test-utils.c"
		{
			gboolean _tmp11_ = FALSE;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			_tmp11_ = TRUE;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			while (TRUE) {
#line 610 "test-utils.c"
				gboolean _tmp12_ = FALSE;
				gint _tmp14_ = 0;
				JsonArray* _tmp15_ = NULL;
				guint _tmp16_ = 0U;
				JsonNode* node = NULL;
				JsonArray* _tmp17_ = NULL;
				gint _tmp18_ = 0;
				JsonNode* _tmp19_ = NULL;
				JsonNode* _tmp20_ = NULL;
				JsonNode* _tmp21_ = NULL;
				JsonNodeType _tmp22_ = 0;
				JsonObject* object = NULL;
				JsonNode* _tmp23_ = NULL;
				JsonObject* _tmp24_ = NULL;
				JsonObject* _tmp25_ = NULL;
				JsonObject* _tmp26_ = NULL;
				gboolean _tmp27_ = FALSE;
				gchar* keys = NULL;
				JsonObject* _tmp28_ = NULL;
				const gchar* _tmp29_ = NULL;
				gchar* _tmp30_ = NULL;
				KkcContext* _tmp33_ = NULL;
				JsonObject* _tmp34_ = NULL;
				KkcContext* _tmp35_ = NULL;
				KkcContext* _tmp36_ = NULL;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp12_ = _tmp11_;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (!_tmp12_) {
#line 640 "test-utils.c"
					gint _tmp13_ = 0;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp13_ = i;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					i = _tmp13_ + 1;
#line 646 "test-utils.c"
				}
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp11_ = FALSE;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp14_ = i;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp15_ = array;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp16_ = json_array_get_length (_tmp15_);
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (!(((guint) _tmp14_) < _tmp16_)) {
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					break;
#line 660 "test-utils.c"
				}
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp17_ = array;
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp18_ = i;
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp19_ = json_array_get_element (_tmp17_, (guint) _tmp18_);
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp20_ = __vala_JsonNode_copy0 (_tmp19_);
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				node = _tmp20_;
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp21_ = node;
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp22_ = json_node_get_node_type (_tmp21_);
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_vala_assert (_tmp22_ == JSON_NODE_OBJECT, "node.get_node_type () == Json.NodeType.OBJECT");
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp23_ = node;
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp24_ = json_node_get_object (_tmp23_);
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp25_ = _json_object_ref0 (_tmp24_);
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				object = _tmp25_;
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp26_ = object;
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp27_ = json_object_has_member (_tmp26_, "keys");
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_vala_assert (_tmp27_, "object.has_member (\"keys\")");
#line 73 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp28_ = object;
#line 73 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp29_ = json_object_get_string_member (_tmp28_, "keys");
#line 73 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp30_ = g_strdup (_tmp29_);
#line 73 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				keys = _tmp30_;
#line 700 "test-utils.c"
				{
					KkcContext* _tmp31_ = NULL;
					const gchar* _tmp32_ = NULL;
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp31_ = context;
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp32_ = keys;
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					kkc_context_process_key_events (_tmp31_, _tmp32_, &_inner_error_);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					if (_inner_error_ != NULL) {
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						if (_inner_error_->domain == KKC_KEY_EVENT_FORMAT_ERROR) {
#line 714 "test-utils.c"
							goto __catch1_kkc_key_event_format_error;
						}
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_g_free0 (keys);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_json_object_unref0 (object);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						__vala_JsonNode_free0 (node);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_json_array_unref0 (array);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						__vala_JsonNode_free0 (root);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_g_object_unref0 (parser);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						g_clear_error (&_inner_error_);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						return;
#line 735 "test-utils.c"
					}
				}
				goto __finally1;
				__catch1_kkc_key_event_format_error:
				{
					GError* e = NULL;
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					e = _inner_error_;
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_inner_error_ = NULL;
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					g_assert_not_reached ();
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_g_error_free0 (e);
#line 750 "test-utils.c"
				}
				__finally1:
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (_inner_error_ != NULL) {
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_g_free0 (keys);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_json_object_unref0 (object);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					__vala_JsonNode_free0 (node);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_json_array_unref0 (array);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					__vala_JsonNode_free0 (root);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_g_object_unref0 (parser);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					g_clear_error (&_inner_error_);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					return;
#line 773 "test-utils.c"
				}
#line 79 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp33_ = context;
#line 79 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp34_ = object;
#line 79 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				kkc_test_utils_check_conversion_result (_tmp33_, _tmp34_);
#line 80 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp35_ = context;
#line 80 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				kkc_context_reset (_tmp35_);
#line 81 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp36_ = context;
#line 81 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				kkc_context_clear_output (_tmp36_);
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_g_free0 (keys);
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_json_object_unref0 (object);
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				__vala_JsonNode_free0 (node);
#line 795 "test-utils.c"
			}
		}
	}
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_json_array_unref0 (array);
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	__vala_JsonNode_free0 (root);
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_g_object_unref0 (parser);
#line 805 "test-utils.c"
}



