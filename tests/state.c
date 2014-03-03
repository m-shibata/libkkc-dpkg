/* state.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from state.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_STATE_TESTS (state_tests_get_type ())
#define STATE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_STATE_TESTS, StateTests))
#define STATE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_STATE_TESTS, StateTestsClass))
#define IS_STATE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_STATE_TESTS))
#define IS_STATE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_STATE_TESTS))
#define STATE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_STATE_TESTS, StateTestsClass))

typedef struct _StateTests StateTests;
typedef struct _StateTestsClass StateTestsClass;
typedef struct _StateTestsPrivate StateTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _StateTests {
	KkcTestCase parent_instance;
	StateTestsPrivate * priv;
};

struct _StateTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer state_tests_parent_class = NULL;

GType state_tests_get_type (void) G_GNUC_CONST;
enum  {
	STATE_TESTS_DUMMY_PROPERTY
};
StateTests* state_tests_new (void);
StateTests* state_tests_construct (GType object_type);
static void state_tests_test_properties (StateTests* self);
static void _state_tests_test_properties_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _state_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/state.vala"
	state_tests_test_properties (self);
#line 52 "state.c"
}


StateTests* state_tests_construct (GType object_type) {
	StateTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/state.vala"
	self = (StateTests*) kkc_test_case_construct (object_type, "State");
#line 5 "/home/ueno/devel/libkkc/tests/state.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _state_tests_test_properties_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/state.vala"
	return self;
#line 64 "state.c"
}


StateTests* state_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/state.vala"
	return state_tests_construct (TYPE_STATE_TESTS);
#line 71 "state.c"
}


static void state_tests_test_properties (StateTests* self) {
	KkcLanguageModel* model = NULL;
	KkcLanguageModel* _tmp0_ = NULL;
	KkcState* state = NULL;
	KkcDictionaryList* _tmp1_ = NULL;
	KkcDictionaryList* _tmp2_ = NULL;
	KkcState* _tmp3_ = NULL;
	KkcState* _tmp4_ = NULL;
	KkcInputMode mode = 0;
	KkcPunctuationStyle style = 0;
	KkcRule* rule = NULL;
	KkcState* _tmp5_ = NULL;
	KkcState* _tmp6_ = NULL;
	KkcInputMode _tmp7_ = 0;
	KkcPunctuationStyle _tmp8_ = 0;
	KkcRule* _tmp9_ = NULL;
	GError * _inner_error_ = NULL;
#line 8 "/home/ueno/devel/libkkc/tests/state.vala"
	g_return_if_fail (self != NULL);
#line 9 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp0_ = kkc_language_model_load ("text3", &_inner_error_);
#line 9 "/home/ueno/devel/libkkc/tests/state.vala"
	model = _tmp0_;
#line 9 "/home/ueno/devel/libkkc/tests/state.vala"
	if (_inner_error_ != NULL) {
#line 9 "/home/ueno/devel/libkkc/tests/state.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 9 "/home/ueno/devel/libkkc/tests/state.vala"
		g_clear_error (&_inner_error_);
#line 9 "/home/ueno/devel/libkkc/tests/state.vala"
		return;
#line 106 "state.c"
	}
#line 10 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp1_ = kkc_dictionary_list_new ();
#line 10 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp2_ = _tmp1_;
#line 10 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp3_ = kkc_state_new (model, _tmp2_);
#line 10 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp4_ = _tmp3_;
#line 10 "/home/ueno/devel/libkkc/tests/state.vala"
	_g_object_unref0 (_tmp2_);
#line 10 "/home/ueno/devel/libkkc/tests/state.vala"
	state = _tmp4_;
#line 14 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp5_ = state;
#line 14 "/home/ueno/devel/libkkc/tests/state.vala"
	g_object_get ((GObject*) _tmp5_, "input-mode", &mode, "punctuation-style", &style, "typing-rule", &rule, NULL);
#line 17 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp6_ = state;
#line 17 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp7_ = mode;
#line 17 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp8_ = style;
#line 17 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp9_ = rule;
#line 17 "/home/ueno/devel/libkkc/tests/state.vala"
	g_object_set ((GObject*) _tmp6_, "input-mode", _tmp7_, "punctuation-style", _tmp8_, "typing-rule", _tmp9_, NULL);
#line 8 "/home/ueno/devel/libkkc/tests/state.vala"
	_g_object_unref0 (rule);
#line 8 "/home/ueno/devel/libkkc/tests/state.vala"
	_g_object_unref0 (state);
#line 8 "/home/ueno/devel/libkkc/tests/state.vala"
	_g_object_unref0 (model);
#line 140 "state.c"
}


static void state_tests_class_init (StateTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/state.vala"
	state_tests_parent_class = g_type_class_peek_parent (klass);
#line 147 "state.c"
}


static void state_tests_instance_init (StateTests * self) {
}


GType state_tests_get_type (void) {
	static volatile gsize state_tests_type_id__volatile = 0;
	if (g_once_init_enter (&state_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (StateTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) state_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (StateTests), 0, (GInstanceInitFunc) state_tests_instance_init, NULL };
		GType state_tests_type_id;
		state_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "StateTests", &g_define_type_info, 0);
		g_once_init_leave (&state_tests_type_id__volatile, state_tests_type_id);
	}
	return state_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	StateTests* _tmp1_ = NULL;
	StateTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 25 "/home/ueno/devel/libkkc/tests/state.vala"
	g_test_init (&args_length1, &args, NULL);
#line 26 "/home/ueno/devel/libkkc/tests/state.vala"
	kkc_init ();
#line 28 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp0_ = g_test_get_root ();
#line 28 "/home/ueno/devel/libkkc/tests/state.vala"
	root = _tmp0_;
#line 29 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp1_ = state_tests_new ();
#line 29 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp2_ = _tmp1_;
#line 29 "/home/ueno/devel/libkkc/tests/state.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 29 "/home/ueno/devel/libkkc/tests/state.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 29 "/home/ueno/devel/libkkc/tests/state.vala"
	_g_object_unref0 (_tmp2_);
#line 31 "/home/ueno/devel/libkkc/tests/state.vala"
	g_test_run ();
#line 33 "/home/ueno/devel/libkkc/tests/state.vala"
	result = 0;
#line 33 "/home/ueno/devel/libkkc/tests/state.vala"
	return result;
#line 198 "state.c"
}


int main (int argc, char ** argv) {
#line 23 "/home/ueno/devel/libkkc/tests/state.vala"
	g_type_init ();
#line 23 "/home/ueno/devel/libkkc/tests/state.vala"
	return _vala_main (argv, argc);
#line 207 "state.c"
}



