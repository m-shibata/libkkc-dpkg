/* language-model.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from language-model.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_LANGUAGE_MODEL_TESTS (language_model_tests_get_type ())
#define LANGUAGE_MODEL_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LANGUAGE_MODEL_TESTS, LanguageModelTests))
#define LANGUAGE_MODEL_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LANGUAGE_MODEL_TESTS, LanguageModelTestsClass))
#define IS_LANGUAGE_MODEL_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LANGUAGE_MODEL_TESTS))
#define IS_LANGUAGE_MODEL_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LANGUAGE_MODEL_TESTS))
#define LANGUAGE_MODEL_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LANGUAGE_MODEL_TESTS, LanguageModelTestsClass))

typedef struct _LanguageModelTests LanguageModelTests;
typedef struct _LanguageModelTestsClass LanguageModelTestsClass;
typedef struct _LanguageModelTestsPrivate LanguageModelTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _LanguageModelTests {
	KkcTestCase parent_instance;
	LanguageModelTestsPrivate * priv;
};

struct _LanguageModelTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer language_model_tests_parent_class = NULL;

GType language_model_tests_get_type (void) G_GNUC_CONST;
enum  {
	LANGUAGE_MODEL_TESTS_DUMMY_PROPERTY
};
LanguageModelTests* language_model_tests_new (void);
LanguageModelTests* language_model_tests_construct (GType object_type);
static void language_model_tests_test_load (LanguageModelTests* self);
static void _language_model_tests_test_load_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _language_model_tests_test_load_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/language-model.vala"
	language_model_tests_test_load ((LanguageModelTests*) self);
#line 55 "language-model.c"
}


LanguageModelTests* language_model_tests_construct (GType object_type) {
	LanguageModelTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/language-model.vala"
	self = (LanguageModelTests*) kkc_test_case_construct (object_type, "LanguageModel");
#line 5 "/home/ueno/devel/libkkc/tests/language-model.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "load", _language_model_tests_test_load_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/language-model.vala"
	return self;
#line 67 "language-model.c"
}


LanguageModelTests* language_model_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/language-model.vala"
	return language_model_tests_construct (TYPE_LANGUAGE_MODEL_TESTS);
#line 74 "language-model.c"
}


static void language_model_tests_test_load (LanguageModelTests* self) {
	gchar* srcdir = NULL;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
#line 8 "/home/ueno/devel/libkkc/tests/language-model.vala"
	g_return_if_fail (self != NULL);
#line 86 "language-model.c"
	{
		KkcLanguageModel* _tmp0_ = NULL;
		KkcLanguageModel* _tmp1_ = NULL;
#line 10 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp0_ = kkc_language_model_load ("nonexistent", &_inner_error_);
#line 10 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp1_ = _tmp0_;
#line 10 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_object_unref0 (_tmp1_);
#line 10 "/home/ueno/devel/libkkc/tests/language-model.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 10 "/home/ueno/devel/libkkc/tests/language-model.vala"
			if (_inner_error_->domain == KKC_LANGUAGE_MODEL_ERROR) {
#line 100 "language-model.c"
				goto __catch0_kkc_language_model_error;
			}
			goto __finally0;
		}
#line 11 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_assert_not_reached ();
#line 107 "language-model.c"
	}
	goto __finally0;
	__catch0_kkc_language_model_error:
	{
		GError* e = NULL;
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
		e = _inner_error_;
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_inner_error_ = NULL;
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_error_free0 (e);
#line 119 "language-model.c"
	}
	__finally0:
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_clear_error (&_inner_error_);
#line 9 "/home/ueno/devel/libkkc/tests/language-model.vala"
		return;
#line 130 "language-model.c"
	}
	{
		KkcLanguageModel* _tmp2_ = NULL;
		KkcLanguageModel* _tmp3_ = NULL;
#line 16 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp2_ = kkc_language_model_load ("text3", &_inner_error_);
#line 16 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp3_ = _tmp2_;
#line 16 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_object_unref0 (_tmp3_);
#line 16 "/home/ueno/devel/libkkc/tests/language-model.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 16 "/home/ueno/devel/libkkc/tests/language-model.vala"
			if (_inner_error_->domain == KKC_LANGUAGE_MODEL_ERROR) {
#line 145 "language-model.c"
				goto __catch1_kkc_language_model_error;
			}
			goto __finally1;
		}
	}
	goto __finally1;
	__catch1_kkc_language_model_error:
	{
		GError* e = NULL;
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
		e = _inner_error_;
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_inner_error_ = NULL;
#line 18 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_assert_not_reached ();
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_error_free0 (e);
#line 163 "language-model.c"
	}
	__finally1:
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_clear_error (&_inner_error_);
#line 15 "/home/ueno/devel/libkkc/tests/language-model.vala"
		return;
#line 174 "language-model.c"
	}
#line 21 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp4_ = g_getenv ("srcdir");
#line 21 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp5_ = g_strdup (_tmp4_);
#line 21 "/home/ueno/devel/libkkc/tests/language-model.vala"
	srcdir = _tmp5_;
#line 22 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp6_ = srcdir;
#line 22 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_vala_assert (_tmp6_ != NULL, "srcdir != null");
#line 186 "language-model.c"
	{
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		KkcLanguageModelMetadata* _tmp10_ = NULL;
		KkcLanguageModelMetadata* _tmp11_ = NULL;
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp7_ = srcdir;
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp8_ = g_build_filename (_tmp7_, "language-model-metadata-bad1.json", NULL);
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp9_ = _tmp8_;
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp10_ = kkc_language_model_metadata_new ("bad1", _tmp9_, &_inner_error_);
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp11_ = _tmp10_;
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_object_unref0 (_tmp11_);
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_free0 (_tmp9_);
#line 25 "/home/ueno/devel/libkkc/tests/language-model.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 209 "language-model.c"
			goto __catch2_g_error;
		}
#line 29 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_assert_not_reached ();
#line 214 "language-model.c"
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError* e = NULL;
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		e = _inner_error_;
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_inner_error_ = NULL;
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_error_free0 (e);
#line 226 "language-model.c"
	}
	__finally2:
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_free0 (srcdir);
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_clear_error (&_inner_error_);
#line 24 "/home/ueno/devel/libkkc/tests/language-model.vala"
		return;
#line 239 "language-model.c"
	}
	{
		const gchar* _tmp12_ = NULL;
		gchar* _tmp13_ = NULL;
		gchar* _tmp14_ = NULL;
		KkcLanguageModelMetadata* _tmp15_ = NULL;
		KkcLanguageModelMetadata* _tmp16_ = NULL;
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp12_ = srcdir;
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp13_ = g_build_filename (_tmp12_, "language-model-metadata-bad2.json", NULL);
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp14_ = _tmp13_;
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp15_ = kkc_language_model_metadata_new ("bad2", _tmp14_, &_inner_error_);
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_tmp16_ = _tmp15_;
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_object_unref0 (_tmp16_);
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_free0 (_tmp14_);
#line 34 "/home/ueno/devel/libkkc/tests/language-model.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 263 "language-model.c"
			goto __catch3_g_error;
		}
#line 38 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_assert_not_reached ();
#line 268 "language-model.c"
	}
	goto __finally3;
	__catch3_g_error:
	{
		GError* e = NULL;
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		e = _inner_error_;
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_inner_error_ = NULL;
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_error_free0 (e);
#line 280 "language-model.c"
	}
	__finally3:
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		_g_free0 (srcdir);
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		g_clear_error (&_inner_error_);
#line 33 "/home/ueno/devel/libkkc/tests/language-model.vala"
		return;
#line 293 "language-model.c"
	}
#line 8 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_g_free0 (srcdir);
#line 297 "language-model.c"
}


static void language_model_tests_class_init (LanguageModelTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/language-model.vala"
	language_model_tests_parent_class = g_type_class_peek_parent (klass);
#line 304 "language-model.c"
}


static void language_model_tests_instance_init (LanguageModelTests * self) {
}


GType language_model_tests_get_type (void) {
	static volatile gsize language_model_tests_type_id__volatile = 0;
	if (g_once_init_enter (&language_model_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LanguageModelTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) language_model_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LanguageModelTests), 0, (GInstanceInitFunc) language_model_tests_instance_init, NULL };
		GType language_model_tests_type_id;
		language_model_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "LanguageModelTests", &g_define_type_info, 0);
		g_once_init_leave (&language_model_tests_type_id__volatile, language_model_tests_type_id);
	}
	return language_model_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	LanguageModelTests* _tmp1_ = NULL;
	LanguageModelTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 45 "/home/ueno/devel/libkkc/tests/language-model.vala"
	g_test_init (&args_length1, &args, NULL);
#line 46 "/home/ueno/devel/libkkc/tests/language-model.vala"
	kkc_init ();
#line 48 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp0_ = g_test_get_root ();
#line 48 "/home/ueno/devel/libkkc/tests/language-model.vala"
	root = _tmp0_;
#line 49 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp1_ = language_model_tests_new ();
#line 49 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp2_ = _tmp1_;
#line 49 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 49 "/home/ueno/devel/libkkc/tests/language-model.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 49 "/home/ueno/devel/libkkc/tests/language-model.vala"
	_g_object_unref0 (_tmp2_);
#line 51 "/home/ueno/devel/libkkc/tests/language-model.vala"
	g_test_run ();
#line 53 "/home/ueno/devel/libkkc/tests/language-model.vala"
	result = 0;
#line 53 "/home/ueno/devel/libkkc/tests/language-model.vala"
	return result;
#line 355 "language-model.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 44 "/home/ueno/devel/libkkc/tests/language-model.vala"
	return _vala_main (argv, argc);
#line 365 "language-model.c"
}


