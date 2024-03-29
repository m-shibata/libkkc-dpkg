/* user-rule.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from user-rule.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <glib/gstdio.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_USER_RULE_TESTS (user_rule_tests_get_type ())
#define USER_RULE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_USER_RULE_TESTS, UserRuleTests))
#define USER_RULE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_USER_RULE_TESTS, UserRuleTestsClass))
#define IS_USER_RULE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_USER_RULE_TESTS))
#define IS_USER_RULE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_USER_RULE_TESTS))
#define USER_RULE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_USER_RULE_TESTS, UserRuleTestsClass))

typedef struct _UserRuleTests UserRuleTests;
typedef struct _UserRuleTestsClass UserRuleTestsClass;
typedef struct _UserRuleTestsPrivate UserRuleTestsPrivate;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _UserRuleTests {
	KkcTestCase parent_instance;
	UserRuleTestsPrivate * priv;
};

struct _UserRuleTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer user_rule_tests_parent_class = NULL;

GType user_rule_tests_get_type (void) G_GNUC_CONST;
enum  {
	USER_RULE_TESTS_DUMMY_PROPERTY
};
UserRuleTests* user_rule_tests_new (void);
UserRuleTests* user_rule_tests_construct (GType object_type);
static void user_rule_tests_test_creation (UserRuleTests* self);
static void _user_rule_tests_test_creation_kkc_test_case_test_method (gpointer self);
static void user_rule_tests_test_write (UserRuleTests* self);
static void _user_rule_tests_test_write_kkc_test_case_test_method (gpointer self);
static void user_rule_tests_real_set_up (KkcTestCase* base);
gint _vala_main (gchar** args, int args_length1);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _user_rule_tests_test_creation_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	user_rule_tests_test_creation ((UserRuleTests*) self);
#line 61 "user-rule.c"
}


static void _user_rule_tests_test_write_kkc_test_case_test_method (gpointer self) {
#line 6 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	user_rule_tests_test_write ((UserRuleTests*) self);
#line 68 "user-rule.c"
}


UserRuleTests* user_rule_tests_construct (GType object_type) {
	UserRuleTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	self = (UserRuleTests*) kkc_test_case_construct (object_type, "UserRule");
#line 5 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "creation", _user_rule_tests_test_creation_kkc_test_case_test_method, self);
#line 6 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "write", _user_rule_tests_test_write_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	return self;
#line 82 "user-rule.c"
}


UserRuleTests* user_rule_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	return user_rule_tests_construct (TYPE_USER_RULE_TESTS);
#line 89 "user-rule.c"
}


static void user_rule_tests_real_set_up (KkcTestCase* base) {
	UserRuleTests * self;
	gboolean _tmp0_ = FALSE;
	GError * _inner_error_ = NULL;
#line 9 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	self = (UserRuleTests*) base;
#line 10 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp0_ = g_file_test ("test-user-rule", G_FILE_TEST_EXISTS);
#line 10 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (_tmp0_) {
#line 103 "user-rule.c"
		{
#line 12 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			kkc_test_utils_remove_dir ("test-user-rule", &_inner_error_);
#line 12 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 109 "user-rule.c"
				goto __catch0_g_error;
			}
		}
		goto __finally0;
		__catch0_g_error:
		{
			GError* e = NULL;
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			e = _inner_error_;
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			_inner_error_ = NULL;
#line 14 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			g_assert_not_reached ();
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			_g_error_free0 (e);
#line 125 "user-rule.c"
		}
		__finally0:
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			g_clear_error (&_inner_error_);
#line 11 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			return;
#line 136 "user-rule.c"
		}
	}
}


static void user_rule_tests_test_creation (UserRuleTests* self) {
	KkcRuleMetadata* parent = NULL;
	KkcRuleMetadata* _tmp0_ = NULL;
	KkcUserRule* rule = NULL;
	KkcUserRule* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
#line 19 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	g_return_if_fail (self != NULL);
#line 20 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp0_ = kkc_rule_metadata_find ("kana");
#line 20 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	parent = _tmp0_;
#line 21 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (parent != NULL, "parent != null");
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp1_ = kkc_user_rule_new (parent, "test-user-rule", "test", &_inner_error_);
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	rule = _tmp1_;
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (parent);
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_clear_error (&_inner_error_);
#line 23 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		return;
#line 170 "user-rule.c"
	}
#line 24 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (rule != NULL, "rule != null");
#line 19 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (rule);
#line 19 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (parent);
#line 178 "user-rule.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	return self ? g_object_ref (self) : NULL;
#line 185 "user-rule.c"
}


static void user_rule_tests_test_write (UserRuleTests* self) {
	KkcRuleMetadata* parent = NULL;
	KkcRuleMetadata* _tmp0_ = NULL;
	KkcRuleMetadata* _tmp1_ = NULL;
	KkcUserRule* rule = NULL;
	KkcRuleMetadata* _tmp2_ = NULL;
	KkcUserRule* _tmp3_ = NULL;
	KkcUserRule* _tmp4_ = NULL;
	KkcKeyEvent* event0 = NULL;
	KkcKeyEvent* _tmp5_ = NULL;
	KkcUserRule* _tmp6_ = NULL;
	KkcKeymap* _tmp7_ = NULL;
	KkcKeymap* _tmp8_ = NULL;
	KkcKeyEvent* _tmp9_ = NULL;
	KkcUserRule* _tmp10_ = NULL;
	KkcUserRule* _tmp11_ = NULL;
	KkcRuleMetadata* _tmp12_ = NULL;
	KkcUserRule* _tmp13_ = NULL;
	KkcUserRule* _tmp14_ = NULL;
	KkcUserRule* _tmp15_ = NULL;
	KkcKeyEvent* event1 = NULL;
	KkcKeyEvent* _tmp16_ = NULL;
	gchar* command = NULL;
	KkcUserRule* _tmp17_ = NULL;
	KkcKeymap* _tmp18_ = NULL;
	KkcKeymap* _tmp19_ = NULL;
	KkcKeyEvent* _tmp20_ = NULL;
	gchar* _tmp21_ = NULL;
	gchar* _tmp22_ = NULL;
	const gchar* _tmp23_ = NULL;
	gboolean found = FALSE;
	KkcRuleMetadata** rules = NULL;
	gint _tmp24_ = 0;
	KkcRuleMetadata** _tmp25_ = NULL;
	gint rules_length1 = 0;
	gint _rules_size_ = 0;
	KkcRuleMetadata** _tmp26_ = NULL;
	gint _tmp26__length1 = 0;
	gboolean _tmp31_ = FALSE;
	GError * _inner_error_ = NULL;
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	g_return_if_fail (self != NULL);
#line 28 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp0_ = kkc_rule_metadata_find ("kana");
#line 28 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	parent = _tmp0_;
#line 29 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp1_ = parent;
#line 29 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (_tmp1_ != NULL, "parent != null");
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp2_ = parent;
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp3_ = kkc_user_rule_new (_tmp2_, "test-user-rule", "test", &_inner_error_);
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	rule = _tmp3_;
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (parent);
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_clear_error (&_inner_error_);
#line 31 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		return;
#line 255 "user-rule.c"
	}
#line 32 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp4_ = rule;
#line 32 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (_tmp4_ != NULL, "rule != null");
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp5_ = kkc_key_event_new_from_string ("C-a", &_inner_error_);
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	event0 = _tmp5_;
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (rule);
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (parent);
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_clear_error (&_inner_error_);
#line 34 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		return;
#line 277 "user-rule.c"
	}
#line 35 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp6_ = rule;
#line 35 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp7_ = kkc_rule_get_keymap ((KkcRule*) _tmp6_, KKC_INPUT_MODE_HIRAGANA);
#line 35 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp8_ = _tmp7_;
#line 35 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp9_ = event0;
#line 35 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	kkc_keymap_set (_tmp8_, _tmp9_, "abort");
#line 35 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (_tmp8_);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp10_ = rule;
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	kkc_user_rule_write (_tmp10_, KKC_INPUT_MODE_HIRAGANA, &_inner_error_);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (event0);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (rule);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (parent);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_clear_error (&_inner_error_);
#line 36 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		return;
#line 309 "user-rule.c"
	}
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp12_ = parent;
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp13_ = kkc_user_rule_new (_tmp12_, "test-user-rule", "test", &_inner_error_);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp11_ = _tmp13_;
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (event0);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (rule);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (parent);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_clear_error (&_inner_error_);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		return;
#line 331 "user-rule.c"
	}
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp14_ = _tmp11_;
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp11_ = NULL;
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (rule);
#line 38 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	rule = _tmp14_;
#line 39 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp15_ = rule;
#line 39 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (_tmp15_ != NULL, "rule != null");
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp16_ = kkc_key_event_new_from_string ("C-a", &_inner_error_);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	event1 = _tmp16_;
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (_tmp11_);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (event0);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (rule);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		_g_object_unref0 (parent);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		g_clear_error (&_inner_error_);
#line 41 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		return;
#line 365 "user-rule.c"
	}
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp17_ = rule;
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp18_ = kkc_rule_get_keymap ((KkcRule*) _tmp17_, KKC_INPUT_MODE_HIRAGANA);
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp19_ = _tmp18_;
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp20_ = event1;
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp21_ = kkc_keymap_lookup_key (_tmp19_, _tmp20_);
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp22_ = _tmp21_;
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (_tmp19_);
#line 42 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	command = _tmp22_;
#line 43 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp23_ = command;
#line 43 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (g_strcmp0 (_tmp23_, "abort") == 0, "command == \"abort\"");
#line 45 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	found = FALSE;
#line 46 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp25_ = kkc_rule_list (&_tmp24_);
#line 46 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	rules = _tmp25_;
#line 46 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	rules_length1 = _tmp24_;
#line 46 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_rules_size_ = rules_length1;
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp26_ = rules;
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp26__length1 = rules_length1;
#line 401 "user-rule.c"
	{
		KkcRuleMetadata** metadata_collection = NULL;
		gint metadata_collection_length1 = 0;
		gint _metadata_collection_size_ = 0;
		gint metadata_it = 0;
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		metadata_collection = _tmp26_;
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		metadata_collection_length1 = _tmp26__length1;
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
		for (metadata_it = 0; metadata_it < _tmp26__length1; metadata_it = metadata_it + 1) {
#line 413 "user-rule.c"
			KkcRuleMetadata* _tmp27_ = NULL;
			KkcRuleMetadata* metadata = NULL;
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			_tmp27_ = _g_object_ref0 (metadata_collection[metadata_it]);
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
			metadata = _tmp27_;
#line 420 "user-rule.c"
			{
				KkcRuleMetadata* _tmp28_ = NULL;
				const gchar* _tmp29_ = NULL;
				const gchar* _tmp30_ = NULL;
#line 48 "/home/ueno/devel/libkkc/tests/user-rule.vala"
				_tmp28_ = metadata;
#line 48 "/home/ueno/devel/libkkc/tests/user-rule.vala"
				_tmp29_ = kkc_metadata_file_get_name ((KkcMetadataFile*) _tmp28_);
#line 48 "/home/ueno/devel/libkkc/tests/user-rule.vala"
				_tmp30_ = _tmp29_;
#line 48 "/home/ueno/devel/libkkc/tests/user-rule.vala"
				if (g_strcmp0 (_tmp30_, "test:kana") == 0) {
#line 49 "/home/ueno/devel/libkkc/tests/user-rule.vala"
					found = TRUE;
#line 50 "/home/ueno/devel/libkkc/tests/user-rule.vala"
					_g_object_unref0 (metadata);
#line 50 "/home/ueno/devel/libkkc/tests/user-rule.vala"
					break;
#line 439 "user-rule.c"
				}
#line 47 "/home/ueno/devel/libkkc/tests/user-rule.vala"
				_g_object_unref0 (metadata);
#line 443 "user-rule.c"
			}
		}
	}
#line 53 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp31_ = found;
#line 53 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_vala_assert (!_tmp31_, "!found");
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	rules = (_vala_array_free (rules, rules_length1, (GDestroyNotify) g_object_unref), NULL);
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_free0 (command);
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (event1);
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (_tmp11_);
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (event0);
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (rule);
#line 27 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (parent);
#line 465 "user-rule.c"
}


static void user_rule_tests_class_init (UserRuleTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	user_rule_tests_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	((KkcTestCaseClass *) klass)->set_up = user_rule_tests_real_set_up;
#line 474 "user-rule.c"
}


static void user_rule_tests_instance_init (UserRuleTests * self) {
}


GType user_rule_tests_get_type (void) {
	static volatile gsize user_rule_tests_type_id__volatile = 0;
	if (g_once_init_enter (&user_rule_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (UserRuleTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) user_rule_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (UserRuleTests), 0, (GInstanceInitFunc) user_rule_tests_instance_init, NULL };
		GType user_rule_tests_type_id;
		user_rule_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "UserRuleTests", &g_define_type_info, 0);
		g_once_init_leave (&user_rule_tests_type_id__volatile, user_rule_tests_type_id);
	}
	return user_rule_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	UserRuleTests* _tmp1_ = NULL;
	UserRuleTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 58 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	g_test_init (&args_length1, &args, NULL);
#line 59 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	kkc_init ();
#line 61 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp0_ = g_test_get_root ();
#line 61 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	root = _tmp0_;
#line 62 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp1_ = user_rule_tests_new ();
#line 62 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp2_ = _tmp1_;
#line 62 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 62 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 62 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	_g_object_unref0 (_tmp2_);
#line 64 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	g_test_run ();
#line 66 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	result = 0;
#line 66 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	return result;
#line 525 "user-rule.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 57 "/home/ueno/devel/libkkc/tests/user-rule.vala"
	return _vala_main (argv, argc);
#line 535 "user-rule.c"
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



