/* candidate.c generated by valac 0.22.1, the Vala compiler
 * generated from candidate.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_CANDIDATE_TESTS (candidate_tests_get_type ())
#define CANDIDATE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CANDIDATE_TESTS, CandidateTests))
#define CANDIDATE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CANDIDATE_TESTS, CandidateTestsClass))
#define IS_CANDIDATE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CANDIDATE_TESTS))
#define IS_CANDIDATE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CANDIDATE_TESTS))
#define CANDIDATE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CANDIDATE_TESTS, CandidateTestsClass))

typedef struct _CandidateTests CandidateTests;
typedef struct _CandidateTestsClass CandidateTestsClass;
typedef struct _CandidateTestsPrivate CandidateTestsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _CandidateTests {
	KkcTestCase parent_instance;
	CandidateTestsPrivate * priv;
};

struct _CandidateTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer candidate_tests_parent_class = NULL;

GType candidate_tests_get_type (void) G_GNUC_CONST;
enum  {
	CANDIDATE_TESTS_DUMMY_PROPERTY
};
CandidateTests* candidate_tests_new (void);
CandidateTests* candidate_tests_construct (GType object_type);
static void candidate_tests_test_properties (CandidateTests* self);
static void _candidate_tests_test_properties_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _candidate_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/candidate.vala"
	candidate_tests_test_properties (self);
#line 53 "candidate.c"
}


CandidateTests* candidate_tests_construct (GType object_type) {
	CandidateTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/candidate.vala"
	self = (CandidateTests*) kkc_test_case_construct (object_type, "Candidate");
#line 5 "/home/ueno/devel/libkkc/tests/candidate.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _candidate_tests_test_properties_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/candidate.vala"
	return self;
#line 65 "candidate.c"
}


CandidateTests* candidate_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/candidate.vala"
	return candidate_tests_construct (TYPE_CANDIDATE_TESTS);
#line 72 "candidate.c"
}


static void candidate_tests_test_properties (CandidateTests* self) {
	KkcCandidate* candidate = NULL;
	KkcCandidate* _tmp0_ = NULL;
	gchar* midasi = NULL;
	gboolean okuri = FALSE;
	gchar* text = NULL;
	gchar* annotation = NULL;
	gchar* output = NULL;
#line 8 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_return_if_fail (self != NULL);
#line 9 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_tmp0_ = kkc_candidate_new ("foo", FALSE, "FOO", NULL, NULL);
#line 9 "/home/ueno/devel/libkkc/tests/candidate.vala"
	candidate = _tmp0_;
#line 17 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_object_get ((GObject*) candidate, "midasi", &midasi, "okuri", &okuri, "text", &text, "annotation", &annotation, "output", &output, NULL);
#line 23 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_object_set ((GObject*) candidate, "text", text, "annotation", annotation, "output", output, NULL);
#line 8 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_g_free0 (output);
#line 8 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_g_free0 (annotation);
#line 8 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_g_free0 (text);
#line 8 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_g_free0 (midasi);
#line 8 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_g_object_unref0 (candidate);
#line 104 "candidate.c"
}


static void candidate_tests_class_init (CandidateTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/candidate.vala"
	candidate_tests_parent_class = g_type_class_peek_parent (klass);
#line 111 "candidate.c"
}


static void candidate_tests_instance_init (CandidateTests * self) {
}


GType candidate_tests_get_type (void) {
	static volatile gsize candidate_tests_type_id__volatile = 0;
	if (g_once_init_enter (&candidate_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CandidateTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) candidate_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CandidateTests), 0, (GInstanceInitFunc) candidate_tests_instance_init, NULL };
		GType candidate_tests_type_id;
		candidate_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "CandidateTests", &g_define_type_info, 0);
		g_once_init_leave (&candidate_tests_type_id__volatile, candidate_tests_type_id);
	}
	return candidate_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	CandidateTests* _tmp1_ = NULL;
	CandidateTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 30 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_test_init (&args_length1, &args, NULL);
#line 31 "/home/ueno/devel/libkkc/tests/candidate.vala"
	kkc_init ();
#line 33 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_tmp0_ = g_test_get_root ();
#line 33 "/home/ueno/devel/libkkc/tests/candidate.vala"
	root = _tmp0_;
#line 34 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_tmp1_ = candidate_tests_new ();
#line 34 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_tmp2_ = _tmp1_;
#line 34 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 34 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 34 "/home/ueno/devel/libkkc/tests/candidate.vala"
	_g_object_unref0 (_tmp2_);
#line 36 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_test_run ();
#line 38 "/home/ueno/devel/libkkc/tests/candidate.vala"
	result = 0;
#line 38 "/home/ueno/devel/libkkc/tests/candidate.vala"
	return result;
#line 162 "candidate.c"
}


int main (int argc, char ** argv) {
#line 29 "/home/ueno/devel/libkkc/tests/candidate.vala"
	g_type_init ();
#line 29 "/home/ueno/devel/libkkc/tests/candidate.vala"
	return _vala_main (argv, argc);
#line 171 "candidate.c"
}



