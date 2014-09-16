/* template.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from template.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


#define TYPE_TEMPLATE_TESTS (template_tests_get_type ())
#define TEMPLATE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TEMPLATE_TESTS, TemplateTests))
#define TEMPLATE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TEMPLATE_TESTS, TemplateTestsClass))
#define IS_TEMPLATE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TEMPLATE_TESTS))
#define IS_TEMPLATE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TEMPLATE_TESTS))
#define TEMPLATE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TEMPLATE_TESTS, TemplateTestsClass))

typedef struct _TemplateTests TemplateTests;
typedef struct _TemplateTestsClass TemplateTestsClass;
typedef struct _TemplateTestsPrivate TemplateTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _TemplateTests {
	KkcTestCase parent_instance;
	TemplateTestsPrivate * priv;
};

struct _TemplateTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer template_tests_parent_class = NULL;

GType template_tests_get_type (void) G_GNUC_CONST;
enum  {
	TEMPLATE_TESTS_DUMMY_PROPERTY
};
TemplateTests* template_tests_new (void);
TemplateTests* template_tests_construct (GType object_type);
static void template_tests_test_properties (TemplateTests* self);
static void _template_tests_test_properties_kkc_test_case_test_method (gpointer self);
gint _vala_main (gchar** args, int args_length1);


static void _template_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/template.vala"
	template_tests_test_properties ((TemplateTests*) self);
#line 55 "template.c"
}


TemplateTests* template_tests_construct (GType object_type) {
	TemplateTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/template.vala"
	self = (TemplateTests*) kkc_test_case_construct (object_type, "Template");
#line 5 "/home/ueno/devel/libkkc/tests/template.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _template_tests_test_properties_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/template.vala"
	return self;
#line 67 "template.c"
}


TemplateTests* template_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/template.vala"
	return template_tests_construct (TYPE_TEMPLATE_TESTS);
#line 74 "template.c"
}


static void template_tests_test_properties (TemplateTests* self) {
	KkcTemplate* template = NULL;
	gchar* source = NULL;
	gboolean okuri = FALSE;
	KkcSimpleTemplate* _tmp0_ = NULL;
	KkcTemplate* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	KkcOkuriganaTemplate* _tmp4_ = NULL;
	KkcTemplate* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	KkcNumericTemplate* _tmp8_ = NULL;
	KkcTemplate* _tmp9_ = NULL;
	const gchar* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	KkcTemplate* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	KkcTemplate* _tmp15_ = NULL;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	KkcTemplate* _tmp18_ = NULL;
	gchar* _tmp19_ = NULL;
	gchar* _tmp20_ = NULL;
	KkcTemplate* _tmp21_ = NULL;
	gchar* _tmp22_ = NULL;
	gchar* _tmp23_ = NULL;
	KkcTemplate* _tmp24_ = NULL;
	gchar* _tmp25_ = NULL;
	gchar* _tmp26_ = NULL;
	KkcTemplate* _tmp27_ = NULL;
	gchar* _tmp28_ = NULL;
	gchar* _tmp29_ = NULL;
#line 8 "/home/ueno/devel/libkkc/tests/template.vala"
	g_return_if_fail (self != NULL);
#line 13 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp0_ = kkc_simple_template_new ("source");
#line 13 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_object_unref0 (template);
#line 13 "/home/ueno/devel/libkkc/tests/template.vala"
	template = (KkcTemplate*) _tmp0_;
#line 14 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp1_ = template;
#line 14 "/home/ueno/devel/libkkc/tests/template.vala"
	g_object_get ((GObject*) _tmp1_, "source", &source, "okuri", &okuri, NULL);
#line 16 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp2_ = source;
#line 16 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp2_, "source") == 0, "source == \"source\"");
#line 17 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp3_ = okuri;
#line 17 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (!_tmp3_, "!okuri");
#line 19 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp4_ = kkc_okurigana_template_new ("かう");
#line 19 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_object_unref0 (template);
#line 19 "/home/ueno/devel/libkkc/tests/template.vala"
	template = (KkcTemplate*) _tmp4_;
#line 20 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp5_ = template;
#line 20 "/home/ueno/devel/libkkc/tests/template.vala"
	g_object_get ((GObject*) _tmp5_, "source", &source, "okuri", &okuri, NULL);
#line 23 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp6_ = source;
#line 23 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp6_, "かu") == 0, "source == \"\343\201\213u\"");
#line 24 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp7_ = okuri;
#line 24 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (_tmp7_, "okuri");
#line 26 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp8_ = kkc_numeric_template_new ("だい11かい");
#line 26 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_object_unref0 (template);
#line 26 "/home/ueno/devel/libkkc/tests/template.vala"
	template = (KkcTemplate*) _tmp8_;
#line 27 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp9_ = template;
#line 27 "/home/ueno/devel/libkkc/tests/template.vala"
	g_object_get ((GObject*) _tmp9_, "source", &source, "okuri", &okuri, NULL);
#line 30 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp10_ = source;
#line 30 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp10_, "だい#かい") == 0, "source == \"\343\201\240\343\201\204#\343\201\213\343\201\204\"");
#line 31 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp11_ = okuri;
#line 31 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (!_tmp11_, "!okuri");
#line 33 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp12_ = template;
#line 33 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp13_ = kkc_template_expand (_tmp12_, "第#0回");
#line 33 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp14_ = _tmp13_;
#line 33 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp14_, "第11回") == 0, "template.expand (\"\347\254\254#0\345\233\236\") == \"\347\254\25411\345\233\236\"");
#line 33 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (_tmp14_);
#line 34 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp15_ = template;
#line 34 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp16_ = kkc_template_expand (_tmp15_, "第#1回");
#line 34 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp17_ = _tmp16_;
#line 34 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp17_, "第１１回") == 0, "template.expand (\"\347\254\254#1\345\233\236\") == \"\347\254\254\357\274\221\357\274\221\345\233\236\"");
#line 34 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (_tmp17_);
#line 35 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp18_ = template;
#line 35 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp19_ = kkc_template_expand (_tmp18_, "第#2回");
#line 35 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp20_ = _tmp19_;
#line 35 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp20_, "第一一回") == 0, "template.expand (\"\347\254\254#2\345\233\236\") == \"\347\254\254\344\270\200\344\270\200\345\233\236\"");
#line 35 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (_tmp20_);
#line 36 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp21_ = template;
#line 36 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp22_ = kkc_template_expand (_tmp21_, "第#3回");
#line 36 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp23_ = _tmp22_;
#line 36 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp23_, "第十一回") == 0, "template.expand (\"\347\254\254#3\345\233\236\") == \"\347\254\254\345\215\201\344\270\200\345\233\236\"");
#line 36 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (_tmp23_);
#line 39 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp24_ = template;
#line 39 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp25_ = kkc_template_expand (_tmp24_, "第#4回");
#line 39 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp26_ = _tmp25_;
#line 39 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp26_, "第11回") == 0, "template.expand (\"\347\254\254#4\345\233\236\") == \"\347\254\25411\345\233\236\"");
#line 39 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (_tmp26_);
#line 40 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp27_ = template;
#line 40 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp28_ = kkc_template_expand (_tmp27_, "第#9回");
#line 40 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp29_ = _tmp28_;
#line 40 "/home/ueno/devel/libkkc/tests/template.vala"
	_vala_assert (g_strcmp0 (_tmp29_, "第11回") == 0, "template.expand (\"\347\254\254#9\345\233\236\") == \"\347\254\25411\345\233\236\"");
#line 40 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (_tmp29_);
#line 8 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_free0 (source);
#line 8 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_object_unref0 (template);
#line 232 "template.c"
}


static void template_tests_class_init (TemplateTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/template.vala"
	template_tests_parent_class = g_type_class_peek_parent (klass);
#line 239 "template.c"
}


static void template_tests_instance_init (TemplateTests * self) {
}


GType template_tests_get_type (void) {
	static volatile gsize template_tests_type_id__volatile = 0;
	if (g_once_init_enter (&template_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TemplateTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) template_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TemplateTests), 0, (GInstanceInitFunc) template_tests_instance_init, NULL };
		GType template_tests_type_id;
		template_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "TemplateTests", &g_define_type_info, 0);
		g_once_init_leave (&template_tests_type_id__volatile, template_tests_type_id);
	}
	return template_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	TemplateTests* _tmp1_ = NULL;
	TemplateTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 45 "/home/ueno/devel/libkkc/tests/template.vala"
	setlocale (LC_ALL, "");
#line 47 "/home/ueno/devel/libkkc/tests/template.vala"
	g_test_init (&args_length1, &args, NULL);
#line 48 "/home/ueno/devel/libkkc/tests/template.vala"
	kkc_init ();
#line 50 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp0_ = g_test_get_root ();
#line 50 "/home/ueno/devel/libkkc/tests/template.vala"
	root = _tmp0_;
#line 51 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp1_ = template_tests_new ();
#line 51 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp2_ = _tmp1_;
#line 51 "/home/ueno/devel/libkkc/tests/template.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 51 "/home/ueno/devel/libkkc/tests/template.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 51 "/home/ueno/devel/libkkc/tests/template.vala"
	_g_object_unref0 (_tmp2_);
#line 53 "/home/ueno/devel/libkkc/tests/template.vala"
	g_test_run ();
#line 55 "/home/ueno/devel/libkkc/tests/template.vala"
	result = 0;
#line 55 "/home/ueno/devel/libkkc/tests/template.vala"
	return result;
#line 292 "template.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 44 "/home/ueno/devel/libkkc/tests/template.vala"
	return _vala_main (argv, argc);
#line 302 "template.c"
}



