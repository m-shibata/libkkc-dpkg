/* segment-list.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from segment-list.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_SEGMENT_LIST_TESTS (segment_list_tests_get_type ())
#define SEGMENT_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SEGMENT_LIST_TESTS, SegmentListTests))
#define SEGMENT_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SEGMENT_LIST_TESTS, SegmentListTestsClass))
#define IS_SEGMENT_LIST_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SEGMENT_LIST_TESTS))
#define IS_SEGMENT_LIST_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SEGMENT_LIST_TESTS))
#define SEGMENT_LIST_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SEGMENT_LIST_TESTS, SegmentListTestsClass))

typedef struct _SegmentListTests SegmentListTests;
typedef struct _SegmentListTestsClass SegmentListTestsClass;
typedef struct _SegmentListTestsPrivate SegmentListTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _SegmentListTests {
	KkcTestCase parent_instance;
	SegmentListTestsPrivate * priv;
};

struct _SegmentListTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer segment_list_tests_parent_class = NULL;

GType segment_list_tests_get_type (void) G_GNUC_CONST;
enum  {
	SEGMENT_LIST_TESTS_DUMMY_PROPERTY
};
SegmentListTests* segment_list_tests_new (void);
SegmentListTests* segment_list_tests_construct (GType object_type);
static void segment_list_tests_test_properties (SegmentListTests* self);
static void _segment_list_tests_test_properties_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _segment_list_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	segment_list_tests_test_properties ((SegmentListTests*) self);
#line 52 "segment-list.c"
}


SegmentListTests* segment_list_tests_construct (GType object_type) {
	SegmentListTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	self = (SegmentListTests*) kkc_test_case_construct (object_type, "SegmentList");
#line 5 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _segment_list_tests_test_properties_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	return self;
#line 64 "segment-list.c"
}


SegmentListTests* segment_list_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	return segment_list_tests_construct (TYPE_SEGMENT_LIST_TESTS);
#line 71 "segment-list.c"
}


static void segment_list_tests_test_properties (SegmentListTests* self) {
	GObject* segments = NULL;
	KkcSegmentList* _tmp0_ = NULL;
	GObject* _tmp1_ = NULL;
	gint cursor_pos = 0;
	gint size = 0;
#line 8 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	g_return_if_fail (self != NULL);
#line 9 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_tmp0_ = kkc_segment_list_new ();
#line 9 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_tmp1_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, G_TYPE_OBJECT) ? ((GObject*) _tmp0_) : NULL;
#line 9 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	if (_tmp1_ == NULL) {
#line 9 "/home/ueno/devel/libkkc/tests/segment-list.vala"
		_g_object_unref0 (_tmp0_);
#line 91 "segment-list.c"
	}
#line 9 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	segments = _tmp1_;
#line 12 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	g_object_get (segments, "cursor-pos", &cursor_pos, "size", &size, NULL);
#line 14 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	g_object_set (segments, "cursor-pos", cursor_pos, NULL);
#line 8 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_g_object_unref0 (segments);
#line 101 "segment-list.c"
}


static void segment_list_tests_class_init (SegmentListTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	segment_list_tests_parent_class = g_type_class_peek_parent (klass);
#line 108 "segment-list.c"
}


static void segment_list_tests_instance_init (SegmentListTests * self) {
}


GType segment_list_tests_get_type (void) {
	static volatile gsize segment_list_tests_type_id__volatile = 0;
	if (g_once_init_enter (&segment_list_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SegmentListTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) segment_list_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SegmentListTests), 0, (GInstanceInitFunc) segment_list_tests_instance_init, NULL };
		GType segment_list_tests_type_id;
		segment_list_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "SegmentListTests", &g_define_type_info, 0);
		g_once_init_leave (&segment_list_tests_type_id__volatile, segment_list_tests_type_id);
	}
	return segment_list_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	SegmentListTests* _tmp1_ = NULL;
	SegmentListTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 19 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	g_test_init (&args_length1, &args, NULL);
#line 20 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	kkc_init ();
#line 22 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_tmp0_ = g_test_get_root ();
#line 22 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	root = _tmp0_;
#line 23 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_tmp1_ = segment_list_tests_new ();
#line 23 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_tmp2_ = _tmp1_;
#line 23 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 23 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 23 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	_g_object_unref0 (_tmp2_);
#line 25 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	g_test_run ();
#line 27 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	result = 0;
#line 27 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	return result;
#line 159 "segment-list.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 18 "/home/ueno/devel/libkkc/tests/segment-list.vala"
	return _vala_main (argv, argc);
#line 169 "segment-list.c"
}



