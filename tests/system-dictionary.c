/* system-dictionary.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from system-dictionary.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


#define TYPE_SYSTEM_DICTIONARY_TESTS (system_dictionary_tests_get_type ())
#define SYSTEM_DICTIONARY_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SYSTEM_DICTIONARY_TESTS, SystemDictionaryTests))
#define SYSTEM_DICTIONARY_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SYSTEM_DICTIONARY_TESTS, SystemDictionaryTestsClass))
#define IS_SYSTEM_DICTIONARY_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SYSTEM_DICTIONARY_TESTS))
#define IS_SYSTEM_DICTIONARY_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SYSTEM_DICTIONARY_TESTS))
#define SYSTEM_DICTIONARY_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SYSTEM_DICTIONARY_TESTS, SystemDictionaryTestsClass))

typedef struct _SystemDictionaryTests SystemDictionaryTests;
typedef struct _SystemDictionaryTestsClass SystemDictionaryTestsClass;
typedef struct _SystemDictionaryTestsPrivate SystemDictionaryTestsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _SystemDictionaryTests {
	KkcTestCase parent_instance;
	SystemDictionaryTestsPrivate * priv;
};

struct _SystemDictionaryTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer system_dictionary_tests_parent_class = NULL;

GType system_dictionary_tests_get_type (void) G_GNUC_CONST;
enum  {
	SYSTEM_DICTIONARY_TESTS_DUMMY_PROPERTY
};
SystemDictionaryTests* system_dictionary_tests_new (void);
SystemDictionaryTests* system_dictionary_tests_construct (GType object_type);
static void system_dictionary_tests_test_properties (SystemDictionaryTests* self);
static void _system_dictionary_tests_test_properties_kkc_test_case_test_method (gpointer self);
static void system_dictionary_tests_test_load (SystemDictionaryTests* self);
static void _system_dictionary_tests_test_load_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _system_dictionary_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	system_dictionary_tests_test_properties ((SystemDictionaryTests*) self);
#line 58 "system-dictionary.c"
}


static void _system_dictionary_tests_test_load_kkc_test_case_test_method (gpointer self) {
#line 6 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	system_dictionary_tests_test_load ((SystemDictionaryTests*) self);
#line 65 "system-dictionary.c"
}


SystemDictionaryTests* system_dictionary_tests_construct (GType object_type) {
	SystemDictionaryTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	self = (SystemDictionaryTests*) kkc_test_case_construct (object_type, "SystemDictionary");
#line 5 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _system_dictionary_tests_test_properties_kkc_test_case_test_method, self);
#line 6 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "load", _system_dictionary_tests_test_load_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	return self;
#line 79 "system-dictionary.c"
}


SystemDictionaryTests* system_dictionary_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	return system_dictionary_tests_construct (TYPE_SYSTEM_DICTIONARY_TESTS);
#line 86 "system-dictionary.c"
}


static void system_dictionary_tests_test_properties (SystemDictionaryTests* self) {
	KkcSystemSegmentDictionary* system_segment_dictionary = NULL;
	gchar* srcdir = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
#line 9 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	g_return_if_fail (self != NULL);
#line 10 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	system_segment_dictionary = NULL;
#line 11 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp0_ = g_getenv ("srcdir");
#line 11 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 11 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	srcdir = _tmp1_;
#line 12 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_vala_assert (srcdir != NULL, "srcdir != null");
#line 108 "system-dictionary.c"
	{
		KkcSystemSegmentDictionary* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		KkcSystemSegmentDictionary* _tmp5_ = NULL;
		KkcSystemSegmentDictionary* _tmp6_ = NULL;
		KkcSystemSegmentDictionary* _tmp7_ = NULL;
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp3_ = g_build_filename (srcdir, "system-segment-dictionary", NULL);
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp4_ = _tmp3_;
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp5_ = kkc_system_segment_dictionary_new (_tmp4_, "EUC-JP", &_inner_error_);
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp6_ = _tmp5_;
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (_tmp4_);
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp2_ = _tmp6_;
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 130 "system-dictionary.c"
			goto __catch0_g_error;
		}
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp7_ = _tmp2_;
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp2_ = NULL;
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (system_segment_dictionary);
#line 15 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		system_segment_dictionary = _tmp7_;
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (_tmp2_);
#line 143 "system-dictionary.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		FILE* _tmp8_ = NULL;
		GError* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		e = _inner_error_;
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_inner_error_ = NULL;
#line 18 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp8_ = stderr;
#line 18 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp9_ = e;
#line 18 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp10_ = _tmp9_->message;
#line 18 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		fprintf (_tmp8_, "%s\n", _tmp10_);
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_error_free0 (e);
#line 166 "system-dictionary.c"
	}
	__finally0:
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (srcdir);
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (system_segment_dictionary);
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_clear_error (&_inner_error_);
#line 14 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		return;
#line 181 "system-dictionary.c"
	}
#line 9 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_g_free0 (srcdir);
#line 9 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_g_object_unref0 (system_segment_dictionary);
#line 187 "system-dictionary.c"
}


static void system_dictionary_tests_test_load (SystemDictionaryTests* self) {
	gchar* srcdir = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	GError * _inner_error_ = NULL;
#line 22 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	g_return_if_fail (self != NULL);
#line 198 "system-dictionary.c"
	{
		KkcSystemSegmentDictionary* _tmp0_ = NULL;
		KkcSystemSegmentDictionary* _tmp1_ = NULL;
#line 24 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp0_ = kkc_system_segment_dictionary_new ("nonexistent-system-segment-dictionary", "EUC-JP", &_inner_error_);
#line 24 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp1_ = _tmp0_;
#line 24 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (_tmp1_);
#line 24 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 210 "system-dictionary.c"
			goto __catch1_g_error;
		}
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* e = NULL;
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		e = _inner_error_;
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_inner_error_ = NULL;
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_error_free0 (e);
#line 224 "system-dictionary.c"
	}
	__finally1:
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_clear_error (&_inner_error_);
#line 23 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		return;
#line 235 "system-dictionary.c"
	}
#line 29 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp2_ = g_getenv ("srcdir");
#line 29 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp3_ = g_strdup (_tmp2_);
#line 29 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	srcdir = _tmp3_;
#line 30 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_vala_assert (srcdir != NULL, "srcdir != null");
#line 245 "system-dictionary.c"
	{
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		KkcSystemSegmentDictionary* _tmp6_ = NULL;
		KkcSystemSegmentDictionary* _tmp7_ = NULL;
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp4_ = g_build_filename (srcdir, "system-segment-dictionary", NULL);
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp5_ = _tmp4_;
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp6_ = kkc_system_segment_dictionary_new (_tmp5_, "unknown encoding", &_inner_error_);
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp7_ = _tmp6_;
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (_tmp7_);
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (_tmp5_);
#line 33 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 265 "system-dictionary.c"
			goto __catch2_g_error;
		}
#line 36 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_assert_not_reached ();
#line 270 "system-dictionary.c"
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError* e = NULL;
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		e = _inner_error_;
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_inner_error_ = NULL;
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_error_free0 (e);
#line 282 "system-dictionary.c"
	}
	__finally2:
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (srcdir);
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_clear_error (&_inner_error_);
#line 32 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		return;
#line 295 "system-dictionary.c"
	}
	{
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		KkcSystemSegmentDictionary* _tmp10_ = NULL;
		KkcSystemSegmentDictionary* _tmp11_ = NULL;
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp8_ = g_build_filename (srcdir, "system-segment-dictionary-bad1", NULL);
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp9_ = _tmp8_;
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp10_ = kkc_system_segment_dictionary_new (_tmp9_, "EUC-JP", &_inner_error_);
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp11_ = _tmp10_;
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (_tmp11_);
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (_tmp9_);
#line 41 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 316 "system-dictionary.c"
			goto __catch3_g_error;
		}
#line 43 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_assert_not_reached ();
#line 321 "system-dictionary.c"
	}
	goto __finally3;
	__catch3_g_error:
	{
		GError* e = NULL;
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		e = _inner_error_;
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_inner_error_ = NULL;
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_error_free0 (e);
#line 333 "system-dictionary.c"
	}
	__finally3:
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (srcdir);
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_clear_error (&_inner_error_);
#line 40 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		return;
#line 346 "system-dictionary.c"
	}
	{
		gchar* _tmp12_ = NULL;
		gchar* _tmp13_ = NULL;
		KkcSystemSegmentDictionary* _tmp14_ = NULL;
		KkcSystemSegmentDictionary* _tmp15_ = NULL;
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp12_ = g_build_filename (srcdir, "system-segment-dictionary-bad2", NULL);
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp13_ = _tmp12_;
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp14_ = kkc_system_segment_dictionary_new (_tmp13_, "EUC-JP", &_inner_error_);
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp15_ = _tmp14_;
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (_tmp15_);
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (_tmp13_);
#line 48 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 367 "system-dictionary.c"
			goto __catch4_g_error;
		}
#line 50 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_assert_not_reached ();
#line 372 "system-dictionary.c"
	}
	goto __finally4;
	__catch4_g_error:
	{
		GError* e = NULL;
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		e = _inner_error_;
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_inner_error_ = NULL;
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_error_free0 (e);
#line 384 "system-dictionary.c"
	}
	__finally4:
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (srcdir);
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_clear_error (&_inner_error_);
#line 47 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		return;
#line 397 "system-dictionary.c"
	}
	{
		gchar* _tmp16_ = NULL;
		gchar* _tmp17_ = NULL;
		KkcSystemSegmentDictionary* _tmp18_ = NULL;
		KkcSystemSegmentDictionary* _tmp19_ = NULL;
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp16_ = g_build_filename (srcdir, "system-segment-dictionary-bad3", NULL);
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp17_ = _tmp16_;
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp18_ = kkc_system_segment_dictionary_new (_tmp17_, "EUC-JP", &_inner_error_);
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_tmp19_ = _tmp18_;
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_object_unref0 (_tmp19_);
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (_tmp17_);
#line 55 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 418 "system-dictionary.c"
			goto __catch5_g_error;
		}
#line 57 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_assert_not_reached ();
#line 423 "system-dictionary.c"
	}
	goto __finally5;
	__catch5_g_error:
	{
		GError* e = NULL;
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		e = _inner_error_;
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_inner_error_ = NULL;
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_error_free0 (e);
#line 435 "system-dictionary.c"
	}
	__finally5:
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		_g_free0 (srcdir);
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		g_clear_error (&_inner_error_);
#line 54 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
		return;
#line 448 "system-dictionary.c"
	}
#line 22 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_g_free0 (srcdir);
#line 452 "system-dictionary.c"
}


static void system_dictionary_tests_class_init (SystemDictionaryTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	system_dictionary_tests_parent_class = g_type_class_peek_parent (klass);
#line 459 "system-dictionary.c"
}


static void system_dictionary_tests_instance_init (SystemDictionaryTests * self) {
}


GType system_dictionary_tests_get_type (void) {
	static volatile gsize system_dictionary_tests_type_id__volatile = 0;
	if (g_once_init_enter (&system_dictionary_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SystemDictionaryTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) system_dictionary_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SystemDictionaryTests), 0, (GInstanceInitFunc) system_dictionary_tests_instance_init, NULL };
		GType system_dictionary_tests_type_id;
		system_dictionary_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "SystemDictionaryTests", &g_define_type_info, 0);
		g_once_init_leave (&system_dictionary_tests_type_id__volatile, system_dictionary_tests_type_id);
	}
	return system_dictionary_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	SystemDictionaryTests* _tmp1_ = NULL;
	SystemDictionaryTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 64 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	g_test_init (&args_length1, &args, NULL);
#line 65 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	kkc_init ();
#line 67 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp0_ = g_test_get_root ();
#line 67 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	root = _tmp0_;
#line 68 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp1_ = system_dictionary_tests_new ();
#line 68 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp2_ = _tmp1_;
#line 68 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 68 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 68 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	_g_object_unref0 (_tmp2_);
#line 70 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	g_test_run ();
#line 72 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	result = 0;
#line 72 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	return result;
#line 510 "system-dictionary.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 63 "/home/ueno/devel/libkkc/tests/system-dictionary.vala"
	return _vala_main (argv, argc);
#line 520 "system-dictionary.c"
}



