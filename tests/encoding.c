/* encoding.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from encoding.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_ENCODING_CONVERTER_TESTS (encoding_converter_tests_get_type ())
#define ENCODING_CONVERTER_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ENCODING_CONVERTER_TESTS, EncodingConverterTests))
#define ENCODING_CONVERTER_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ENCODING_CONVERTER_TESTS, EncodingConverterTestsClass))
#define IS_ENCODING_CONVERTER_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ENCODING_CONVERTER_TESTS))
#define IS_ENCODING_CONVERTER_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ENCODING_CONVERTER_TESTS))
#define ENCODING_CONVERTER_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ENCODING_CONVERTER_TESTS, EncodingConverterTestsClass))

typedef struct _EncodingConverterTests EncodingConverterTests;
typedef struct _EncodingConverterTestsClass EncodingConverterTestsClass;
typedef struct _EncodingConverterTestsPrivate EncodingConverterTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _EncodingConverterTests {
	KkcTestCase parent_instance;
	EncodingConverterTestsPrivate * priv;
};

struct _EncodingConverterTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer encoding_converter_tests_parent_class = NULL;

GType encoding_converter_tests_get_type (void) G_GNUC_CONST;
enum  {
	ENCODING_CONVERTER_TESTS_DUMMY_PROPERTY
};
EncodingConverterTests* encoding_converter_tests_new (void);
EncodingConverterTests* encoding_converter_tests_construct (GType object_type);
static void encoding_converter_tests_test_creation (EncodingConverterTests* self);
static void _encoding_converter_tests_test_creation_kkc_test_case_test_method (gpointer self);
static void encoding_converter_tests_test_properties (EncodingConverterTests* self);
static void _encoding_converter_tests_test_properties_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _encoding_converter_tests_test_creation_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/encoding.vala"
	encoding_converter_tests_test_creation ((EncodingConverterTests*) self);
#line 56 "encoding.c"
}


static void _encoding_converter_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 6 "/home/ueno/devel/libkkc/tests/encoding.vala"
	encoding_converter_tests_test_properties ((EncodingConverterTests*) self);
#line 63 "encoding.c"
}


EncodingConverterTests* encoding_converter_tests_construct (GType object_type) {
	EncodingConverterTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/encoding.vala"
	self = (EncodingConverterTests*) kkc_test_case_construct (object_type, "EncodingConverter");
#line 5 "/home/ueno/devel/libkkc/tests/encoding.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "creation", _encoding_converter_tests_test_creation_kkc_test_case_test_method, self);
#line 6 "/home/ueno/devel/libkkc/tests/encoding.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _encoding_converter_tests_test_properties_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/encoding.vala"
	return self;
#line 77 "encoding.c"
}


EncodingConverterTests* encoding_converter_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/encoding.vala"
	return encoding_converter_tests_construct (TYPE_ENCODING_CONVERTER_TESTS);
#line 84 "encoding.c"
}


static void encoding_converter_tests_test_creation (EncodingConverterTests* self) {
	GError * _inner_error_ = NULL;
#line 9 "/home/ueno/devel/libkkc/tests/encoding.vala"
	g_return_if_fail (self != NULL);
#line 92 "encoding.c"
	{
		KkcEncodingConverter* converter = NULL;
		KkcEncodingConverter* _tmp0_ = NULL;
#line 11 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_tmp0_ = kkc_encoding_converter_new ("UTF-8", &_inner_error_);
#line 11 "/home/ueno/devel/libkkc/tests/encoding.vala"
		converter = _tmp0_;
#line 11 "/home/ueno/devel/libkkc/tests/encoding.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 102 "encoding.c"
			goto __catch0_g_error;
		}
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_object_unref0 (converter);
#line 107 "encoding.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		e = _inner_error_;
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_inner_error_ = NULL;
#line 13 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_assert_not_reached ();
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_error_free0 (e);
#line 121 "encoding.c"
	}
	__finally0:
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_clear_error (&_inner_error_);
#line 10 "/home/ueno/devel/libkkc/tests/encoding.vala"
		return;
#line 132 "encoding.c"
	}
	{
		KkcEncodingConverter* converter = NULL;
		KkcEncodingConverter* _tmp1_ = NULL;
#line 16 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_tmp1_ = kkc_encoding_converter_new ("INVALID", &_inner_error_);
#line 16 "/home/ueno/devel/libkkc/tests/encoding.vala"
		converter = _tmp1_;
#line 16 "/home/ueno/devel/libkkc/tests/encoding.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 143 "encoding.c"
			goto __catch1_g_error;
		}
#line 17 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_assert_not_reached ();
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_object_unref0 (converter);
#line 150 "encoding.c"
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* e = NULL;
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		e = _inner_error_;
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_inner_error_ = NULL;
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_error_free0 (e);
#line 162 "encoding.c"
	}
	__finally1:
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_clear_error (&_inner_error_);
#line 15 "/home/ueno/devel/libkkc/tests/encoding.vala"
		return;
#line 173 "encoding.c"
	}
}


static void encoding_converter_tests_test_properties (EncodingConverterTests* self) {
	KkcEncodingConverter* converter = NULL;
	gchar* encoding = NULL;
	GError * _inner_error_ = NULL;
#line 22 "/home/ueno/devel/libkkc/tests/encoding.vala"
	g_return_if_fail (self != NULL);
#line 184 "encoding.c"
	{
		KkcEncodingConverter* _tmp0_ = NULL;
		KkcEncodingConverter* _tmp1_ = NULL;
		KkcEncodingConverter* _tmp2_ = NULL;
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_tmp1_ = kkc_encoding_converter_new ("UTF-8", &_inner_error_);
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_tmp0_ = _tmp1_;
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 195 "encoding.c"
			goto __catch2_g_error;
		}
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_tmp2_ = _tmp0_;
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_tmp0_ = NULL;
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_object_unref0 (converter);
#line 25 "/home/ueno/devel/libkkc/tests/encoding.vala"
		converter = _tmp2_;
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_object_unref0 (_tmp0_);
#line 208 "encoding.c"
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError* e = NULL;
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		e = _inner_error_;
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_inner_error_ = NULL;
#line 27 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_assert_not_reached ();
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_error_free0 (e);
#line 222 "encoding.c"
	}
	__finally2:
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		_g_object_unref0 (converter);
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		g_clear_error (&_inner_error_);
#line 24 "/home/ueno/devel/libkkc/tests/encoding.vala"
		return;
#line 235 "encoding.c"
	}
#line 31 "/home/ueno/devel/libkkc/tests/encoding.vala"
	g_object_get ((GObject*) converter, "encoding", &encoding, NULL);
#line 22 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_g_free0 (encoding);
#line 22 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_g_object_unref0 (converter);
#line 243 "encoding.c"
}


static void encoding_converter_tests_class_init (EncodingConverterTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/encoding.vala"
	encoding_converter_tests_parent_class = g_type_class_peek_parent (klass);
#line 250 "encoding.c"
}


static void encoding_converter_tests_instance_init (EncodingConverterTests * self) {
}


GType encoding_converter_tests_get_type (void) {
	static volatile gsize encoding_converter_tests_type_id__volatile = 0;
	if (g_once_init_enter (&encoding_converter_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EncodingConverterTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) encoding_converter_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (EncodingConverterTests), 0, (GInstanceInitFunc) encoding_converter_tests_instance_init, NULL };
		GType encoding_converter_tests_type_id;
		encoding_converter_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "EncodingConverterTests", &g_define_type_info, 0);
		g_once_init_leave (&encoding_converter_tests_type_id__volatile, encoding_converter_tests_type_id);
	}
	return encoding_converter_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	EncodingConverterTests* _tmp1_ = NULL;
	EncodingConverterTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 36 "/home/ueno/devel/libkkc/tests/encoding.vala"
	g_test_init (&args_length1, &args, NULL);
#line 37 "/home/ueno/devel/libkkc/tests/encoding.vala"
	kkc_init ();
#line 39 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_tmp0_ = g_test_get_root ();
#line 39 "/home/ueno/devel/libkkc/tests/encoding.vala"
	root = _tmp0_;
#line 40 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_tmp1_ = encoding_converter_tests_new ();
#line 40 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_tmp2_ = _tmp1_;
#line 40 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 40 "/home/ueno/devel/libkkc/tests/encoding.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 40 "/home/ueno/devel/libkkc/tests/encoding.vala"
	_g_object_unref0 (_tmp2_);
#line 42 "/home/ueno/devel/libkkc/tests/encoding.vala"
	g_test_run ();
#line 44 "/home/ueno/devel/libkkc/tests/encoding.vala"
	result = 0;
#line 44 "/home/ueno/devel/libkkc/tests/encoding.vala"
	return result;
#line 301 "encoding.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 35 "/home/ueno/devel/libkkc/tests/encoding.vala"
	return _vala_main (argv, argc);
#line 311 "encoding.c"
}



