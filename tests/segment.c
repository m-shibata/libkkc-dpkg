/* segment.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from segment.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_SEGMENT_TESTS (segment_tests_get_type ())
#define SEGMENT_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SEGMENT_TESTS, SegmentTests))
#define SEGMENT_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SEGMENT_TESTS, SegmentTestsClass))
#define IS_SEGMENT_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SEGMENT_TESTS))
#define IS_SEGMENT_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SEGMENT_TESTS))
#define SEGMENT_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SEGMENT_TESTS, SegmentTestsClass))

typedef struct _SegmentTests SegmentTests;
typedef struct _SegmentTestsClass SegmentTestsClass;
typedef struct _SegmentTestsPrivate SegmentTestsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _SegmentTests {
	KkcTestCase parent_instance;
	SegmentTestsPrivate * priv;
};

struct _SegmentTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer segment_tests_parent_class = NULL;

GType segment_tests_get_type (void) G_GNUC_CONST;
enum  {
	SEGMENT_TESTS_DUMMY_PROPERTY
};
SegmentTests* segment_tests_new (void);
SegmentTests* segment_tests_construct (GType object_type);
static void segment_tests_test_properties (SegmentTests* self);
static void _segment_tests_test_properties_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _segment_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/segment.vala"
	segment_tests_test_properties (self);
#line 53 "segment.c"
}


SegmentTests* segment_tests_construct (GType object_type) {
	SegmentTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/segment.vala"
	self = (SegmentTests*) kkc_test_case_construct (object_type, "Segment");
#line 5 "/home/ueno/devel/libkkc/tests/segment.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _segment_tests_test_properties_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/segment.vala"
	return self;
#line 65 "segment.c"
}


SegmentTests* segment_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/segment.vala"
	return segment_tests_construct (TYPE_SEGMENT_TESTS);
#line 72 "segment.c"
}


static void segment_tests_test_properties (SegmentTests* self) {
	KkcSegment* segment = NULL;
	KkcSegment* _tmp0_ = NULL;
	gchar* input = NULL;
	gchar* output = NULL;
#line 8 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_return_if_fail (self != NULL);
#line 9 "/home/ueno/devel/libkkc/tests/segment.vala"
	_tmp0_ = kkc_segment_new ("input", "output");
#line 9 "/home/ueno/devel/libkkc/tests/segment.vala"
	segment = _tmp0_;
#line 12 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_object_get ((GObject*) segment, "input", &input, "output", &output, NULL);
#line 14 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_object_set ((GObject*) segment, "output", output, NULL);
#line 8 "/home/ueno/devel/libkkc/tests/segment.vala"
	_g_free0 (output);
#line 8 "/home/ueno/devel/libkkc/tests/segment.vala"
	_g_free0 (input);
#line 8 "/home/ueno/devel/libkkc/tests/segment.vala"
	_g_object_unref0 (segment);
#line 97 "segment.c"
}


static void segment_tests_class_init (SegmentTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/segment.vala"
	segment_tests_parent_class = g_type_class_peek_parent (klass);
#line 104 "segment.c"
}


static void segment_tests_instance_init (SegmentTests * self) {
}


GType segment_tests_get_type (void) {
	static volatile gsize segment_tests_type_id__volatile = 0;
	if (g_once_init_enter (&segment_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SegmentTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) segment_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SegmentTests), 0, (GInstanceInitFunc) segment_tests_instance_init, NULL };
		GType segment_tests_type_id;
		segment_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "SegmentTests", &g_define_type_info, 0);
		g_once_init_leave (&segment_tests_type_id__volatile, segment_tests_type_id);
	}
	return segment_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	SegmentTests* _tmp1_ = NULL;
	SegmentTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 19 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_test_init (&args_length1, &args, NULL);
#line 20 "/home/ueno/devel/libkkc/tests/segment.vala"
	kkc_init ();
#line 22 "/home/ueno/devel/libkkc/tests/segment.vala"
	_tmp0_ = g_test_get_root ();
#line 22 "/home/ueno/devel/libkkc/tests/segment.vala"
	root = _tmp0_;
#line 23 "/home/ueno/devel/libkkc/tests/segment.vala"
	_tmp1_ = segment_tests_new ();
#line 23 "/home/ueno/devel/libkkc/tests/segment.vala"
	_tmp2_ = _tmp1_;
#line 23 "/home/ueno/devel/libkkc/tests/segment.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 23 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 23 "/home/ueno/devel/libkkc/tests/segment.vala"
	_g_object_unref0 (_tmp2_);
#line 25 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_test_run ();
#line 27 "/home/ueno/devel/libkkc/tests/segment.vala"
	result = 0;
#line 27 "/home/ueno/devel/libkkc/tests/segment.vala"
	return result;
#line 155 "segment.c"
}


int main (int argc, char ** argv) {
#line 18 "/home/ueno/devel/libkkc/tests/segment.vala"
	g_type_init ();
#line 18 "/home/ueno/devel/libkkc/tests/segment.vala"
	return _vala_main (argv, argc);
#line 164 "segment.c"
}



