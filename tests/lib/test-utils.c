/* test-utils.c generated by valac 0.24.0.131-42e78, the Vala compiler
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
	if (G_UNLIKELY (_inner_error_ != NULL)) {
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
			if (G_UNLIKELY (_inner_error_ != NULL)) {
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
	JsonObject* _tmp50_ = NULL;
	gboolean _tmp51_ = FALSE;
	JsonObject* _tmp60_ = NULL;
	gboolean _tmp61_ = FALSE;
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
#line 169 "test-utils.c"
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
#line 203 "test-utils.c"
	}
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp9_ = expected;
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp10_ = json_object_has_member (_tmp9_, "input");
#line 24 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp10_) {
#line 211 "test-utils.c"
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
#line 245 "test-utils.c"
	}
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp19_ = expected;
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp20_ = json_object_has_member (_tmp19_, "segments");
#line 29 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp20_) {
#line 253 "test-utils.c"
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
#line 290 "test-utils.c"
	}
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp30_ = expected;
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp31_ = json_object_has_member (_tmp30_, "segments_size");
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp31_) {
#line 298 "test-utils.c"
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
#line 328 "test-utils.c"
	}
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp40_ = expected;
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp41_ = json_object_has_member (_tmp40_, "segments_cursor_pos");
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp41_) {
#line 336 "test-utils.c"
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
#line 366 "test-utils.c"
	}
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp50_ = expected;
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp51_ = json_object_has_member (_tmp50_, "candidates_size");
#line 44 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp51_) {
#line 374 "test-utils.c"
		gint64 expected_candidates_size = 0LL;
		JsonObject* _tmp52_ = NULL;
		gint64 _tmp53_ = 0LL;
		KkcContext* _tmp54_ = NULL;
		KkcCandidateList* _tmp55_ = NULL;
		KkcCandidateList* _tmp56_ = NULL;
		gint _tmp57_ = 0;
		gint _tmp58_ = 0;
		gint64 _tmp59_ = 0LL;
#line 45 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp52_ = expected;
#line 45 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp53_ = json_object_get_int_member (_tmp52_, "candidates_size");
#line 45 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_candidates_size = _tmp53_;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp54_ = context;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp55_ = kkc_context_get_candidates (_tmp54_);
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp56_ = _tmp55_;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp57_ = kkc_candidate_list_get_size (_tmp56_);
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp58_ = _tmp57_;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp59_ = expected_candidates_size;
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (((gint64) _tmp58_) == _tmp59_, "context.candidates.size == expected_candidates_size");
#line 404 "test-utils.c"
	}
#line 49 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp60_ = expected;
#line 49 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp61_ = json_object_has_member (_tmp60_, "input_cursor_pos");
#line 49 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (_tmp61_) {
#line 412 "test-utils.c"
		gint64 expected_input_cursor_pos = 0LL;
		JsonObject* _tmp62_ = NULL;
		gint64 _tmp63_ = 0LL;
		KkcContext* _tmp64_ = NULL;
		gint _tmp65_ = 0;
		gint _tmp66_ = 0;
		gint64 _tmp67_ = 0LL;
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp62_ = expected;
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp63_ = json_object_get_int_member (_tmp62_, "input_cursor_pos");
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		expected_input_cursor_pos = _tmp63_;
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp64_ = context;
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp65_ = kkc_context_get_input_cursor_pos (_tmp64_);
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp66_ = _tmp65_;
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp67_ = expected_input_cursor_pos;
#line 51 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_vala_assert (((gint64) _tmp66_) == _tmp67_, "context.input_cursor_pos == expected_input_cursor_pos");
#line 436 "test-utils.c"
	}
}


static JsonNode* _vala_JsonNode_copy (JsonNode* self) {
#line 63 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return g_boxed_copy (json_node_get_type (), self);
#line 444 "test-utils.c"
}


static gpointer __vala_JsonNode_copy0 (gpointer self) {
#line 63 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return self ? _vala_JsonNode_copy (self) : NULL;
#line 451 "test-utils.c"
}


static gpointer _json_array_ref0 (gpointer self) {
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return self ? json_array_ref (self) : NULL;
#line 458 "test-utils.c"
}


static gpointer _json_object_ref0 (gpointer self) {
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	return self ? json_object_ref (self) : NULL;
#line 465 "test-utils.c"
}


static void _vala_JsonNode_free (JsonNode* self) {
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_boxed_free (json_node_get_type (), self);
#line 472 "test-utils.c"
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
#line 55 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (context != NULL);
#line 55 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	g_return_if_fail (filename != NULL);
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp0_ = json_parser_new ();
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	parser = _tmp0_;
#line 497 "test-utils.c"
	{
		gboolean _tmp1_ = FALSE;
		const gchar* _tmp2_ = NULL;
		gboolean _tmp3_ = FALSE;
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp2_ = filename;
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp3_ = json_parser_load_from_file (parser, _tmp2_, &_inner_error_);
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_tmp1_ = _tmp3_;
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 510 "test-utils.c"
			goto __catch0_g_error;
		}
#line 58 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		if (!_tmp1_) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			g_assert_not_reached ();
#line 517 "test-utils.c"
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		e = _inner_error_;
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_inner_error_ = NULL;
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_assert_not_reached ();
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_error_free0 (e);
#line 532 "test-utils.c"
	}
	__finally0:
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		_g_object_unref0 (parser);
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		g_clear_error (&_inner_error_);
#line 57 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		return;
#line 545 "test-utils.c"
	}
#line 63 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp4_ = json_parser_get_root (parser);
#line 63 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp5_ = __vala_JsonNode_copy0 (_tmp4_);
#line 63 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	root = _tmp5_;
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp6_ = root;
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp7_ = json_node_get_node_type (_tmp6_);
#line 64 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_vala_assert (_tmp7_ == JSON_NODE_ARRAY, "root.get_node_type () == Json.NodeType.ARRAY");
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp8_ = root;
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp9_ = json_node_get_array (_tmp8_);
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_tmp10_ = _json_array_ref0 (_tmp9_);
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	array = _tmp10_;
#line 567 "test-utils.c"
	{
		gint i = 0;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
		i = 0;
#line 572 "test-utils.c"
		{
			gboolean _tmp11_ = FALSE;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			_tmp11_ = TRUE;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
			while (TRUE) {
#line 579 "test-utils.c"
				gint _tmp13_ = 0;
				JsonArray* _tmp14_ = NULL;
				guint _tmp15_ = 0U;
				JsonNode* node = NULL;
				JsonArray* _tmp16_ = NULL;
				gint _tmp17_ = 0;
				JsonNode* _tmp18_ = NULL;
				JsonNode* _tmp19_ = NULL;
				JsonNode* _tmp20_ = NULL;
				JsonNodeType _tmp21_ = 0;
				JsonObject* object = NULL;
				JsonNode* _tmp22_ = NULL;
				JsonObject* _tmp23_ = NULL;
				JsonObject* _tmp24_ = NULL;
				JsonObject* _tmp25_ = NULL;
				gboolean _tmp26_ = FALSE;
				JsonObject* _tmp30_ = NULL;
				gboolean _tmp31_ = FALSE;
				gchar* keys = NULL;
				JsonObject* _tmp32_ = NULL;
				const gchar* _tmp33_ = NULL;
				gchar* _tmp34_ = NULL;
				KkcContext* _tmp37_ = NULL;
				JsonObject* _tmp38_ = NULL;
				KkcContext* _tmp39_ = NULL;
				KkcContext* _tmp40_ = NULL;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (!_tmp11_) {
#line 608 "test-utils.c"
					gint _tmp12_ = 0;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp12_ = i;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					i = _tmp12_ + 1;
#line 614 "test-utils.c"
				}
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp11_ = FALSE;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp13_ = i;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp14_ = array;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp15_ = json_array_get_length (_tmp14_);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (!(((guint) _tmp13_) < _tmp15_)) {
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					break;
#line 628 "test-utils.c"
				}
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp16_ = array;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp17_ = i;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp18_ = json_array_get_element (_tmp16_, (guint) _tmp17_);
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp19_ = __vala_JsonNode_copy0 (_tmp18_);
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				node = _tmp19_;
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp20_ = node;
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp21_ = json_node_get_node_type (_tmp20_);
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_vala_assert (_tmp21_ == JSON_NODE_OBJECT, "node.get_node_type () == Json.NodeType.OBJECT");
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp22_ = node;
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp23_ = json_node_get_object (_tmp22_);
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp24_ = _json_object_ref0 (_tmp23_);
#line 70 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				object = _tmp24_;
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp25_ = object;
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp26_ = json_object_has_member (_tmp25_, "auto_correct");
#line 71 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (_tmp26_) {
#line 660 "test-utils.c"
					KkcContext* _tmp27_ = NULL;
					JsonObject* _tmp28_ = NULL;
					gboolean _tmp29_ = FALSE;
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp27_ = context;
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp28_ = object;
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp29_ = json_object_get_boolean_member (_tmp28_, "auto_correct");
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					kkc_context_set_auto_correct (_tmp27_, _tmp29_);
#line 672 "test-utils.c"
				}
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp30_ = object;
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp31_ = json_object_has_member (_tmp30_, "keys");
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_vala_assert (_tmp31_, "object.has_member (\"keys\")");
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp32_ = object;
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp33_ = json_object_get_string_member (_tmp32_, "keys");
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp34_ = g_strdup (_tmp33_);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				keys = _tmp34_;
#line 688 "test-utils.c"
				{
					KkcContext* _tmp35_ = NULL;
					const gchar* _tmp36_ = NULL;
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp35_ = context;
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_tmp36_ = keys;
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					kkc_context_process_key_events (_tmp35_, _tmp36_, &_inner_error_);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						if (_inner_error_->domain == KKC_KEY_EVENT_FORMAT_ERROR) {
#line 702 "test-utils.c"
							goto __catch1_kkc_key_event_format_error;
						}
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_g_free0 (keys);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_json_object_unref0 (object);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						__vala_JsonNode_free0 (node);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_json_array_unref0 (array);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						__vala_JsonNode_free0 (root);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						_g_object_unref0 (parser);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						g_clear_error (&_inner_error_);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
						return;
#line 723 "test-utils.c"
					}
				}
				goto __finally1;
				__catch1_kkc_key_event_format_error:
				{
					GError* e = NULL;
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					e = _inner_error_;
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_inner_error_ = NULL;
#line 79 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					g_assert_not_reached ();
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_g_error_free0 (e);
#line 738 "test-utils.c"
				}
				__finally1:
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_g_free0 (keys);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_json_object_unref0 (object);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					__vala_JsonNode_free0 (node);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_json_array_unref0 (array);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					__vala_JsonNode_free0 (root);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					_g_object_unref0 (parser);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					g_clear_error (&_inner_error_);
#line 76 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
					return;
#line 761 "test-utils.c"
				}
#line 81 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp37_ = context;
#line 81 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp38_ = object;
#line 81 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				kkc_test_utils_check_conversion_result (_tmp37_, _tmp38_);
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp39_ = context;
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				kkc_context_reset (_tmp39_);
#line 83 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_tmp40_ = context;
#line 83 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				kkc_context_clear_output (_tmp40_);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_g_free0 (keys);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				_json_object_unref0 (object);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
				__vala_JsonNode_free0 (node);
#line 783 "test-utils.c"
			}
		}
	}
#line 55 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_json_array_unref0 (array);
#line 55 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	__vala_JsonNode_free0 (root);
#line 55 "/home/ueno/devel/libkkc/tests/lib/test-utils.vala"
	_g_object_unref0 (parser);
#line 793 "test-utils.c"
}



