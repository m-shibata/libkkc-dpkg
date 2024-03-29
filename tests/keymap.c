/* keymap.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from keymap.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <libkkc-test.h>
#include <libkkc/libkkc-internals.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_KEYMAP_TESTS (keymap_tests_get_type ())
#define KEYMAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_KEYMAP_TESTS, KeymapTests))
#define KEYMAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_KEYMAP_TESTS, KeymapTestsClass))
#define IS_KEYMAP_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_KEYMAP_TESTS))
#define IS_KEYMAP_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_KEYMAP_TESTS))
#define KEYMAP_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_KEYMAP_TESTS, KeymapTestsClass))

typedef struct _KeymapTests KeymapTests;
typedef struct _KeymapTestsClass KeymapTestsClass;
typedef struct _KeymapTestsPrivate KeymapTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _KeymapTests {
	KkcTestCase parent_instance;
	KeymapTestsPrivate * priv;
};

struct _KeymapTestsClass {
	KkcTestCaseClass parent_class;
};


static gpointer keymap_tests_parent_class = NULL;

GType keymap_tests_get_type (void) G_GNUC_CONST;
enum  {
	KEYMAP_TESTS_DUMMY_PROPERTY
};
KeymapTests* keymap_tests_new (void);
KeymapTests* keymap_tests_construct (GType object_type);
static void keymap_tests_test_creation (KeymapTests* self);
static void _keymap_tests_test_creation_kkc_test_case_test_method (gpointer self);
static void keymap_tests_test_properties (KeymapTests* self);
static void _keymap_tests_test_properties_kkc_test_case_test_method (gpointer self);
static void keymap_tests_test_lookup (KeymapTests* self);
static void _keymap_tests_test_lookup_kkc_test_case_test_method (gpointer self);
static void _vala_KkcKeymapEntry_array_free (KkcKeymapEntry* array, gint array_length);
gint _vala_main (gchar** args, int args_length1);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void _keymap_tests_test_creation_kkc_test_case_test_method (gpointer self) {
#line 5 "/home/ueno/devel/libkkc/tests/keymap.vala"
	keymap_tests_test_creation ((KeymapTests*) self);
#line 61 "keymap.c"
}


static void _keymap_tests_test_properties_kkc_test_case_test_method (gpointer self) {
#line 6 "/home/ueno/devel/libkkc/tests/keymap.vala"
	keymap_tests_test_properties ((KeymapTests*) self);
#line 68 "keymap.c"
}


static void _keymap_tests_test_lookup_kkc_test_case_test_method (gpointer self) {
#line 7 "/home/ueno/devel/libkkc/tests/keymap.vala"
	keymap_tests_test_lookup ((KeymapTests*) self);
#line 75 "keymap.c"
}


KeymapTests* keymap_tests_construct (GType object_type) {
	KeymapTests * self = NULL;
#line 3 "/home/ueno/devel/libkkc/tests/keymap.vala"
	self = (KeymapTests*) kkc_test_case_construct (object_type, "Keymap");
#line 5 "/home/ueno/devel/libkkc/tests/keymap.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "creation", _keymap_tests_test_creation_kkc_test_case_test_method, self);
#line 6 "/home/ueno/devel/libkkc/tests/keymap.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "properties", _keymap_tests_test_properties_kkc_test_case_test_method, self);
#line 7 "/home/ueno/devel/libkkc/tests/keymap.vala"
	kkc_test_case_add_test ((KkcTestCase*) self, "lookup", _keymap_tests_test_lookup_kkc_test_case_test_method, self);
#line 2 "/home/ueno/devel/libkkc/tests/keymap.vala"
	return self;
#line 91 "keymap.c"
}


KeymapTests* keymap_tests_new (void) {
#line 2 "/home/ueno/devel/libkkc/tests/keymap.vala"
	return keymap_tests_construct (TYPE_KEYMAP_TESTS);
#line 98 "keymap.c"
}


static void keymap_tests_test_creation (KeymapTests* self) {
	KkcRuleMetadata* metadata = NULL;
	KkcRuleMetadata* _tmp0_ = NULL;
	KkcRuleMetadata* _tmp1_ = NULL;
	KkcRuleMetadata* _tmp2_ = NULL;
	KkcRuleMetadata* _tmp3_ = NULL;
#line 10 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_return_if_fail (self != NULL);
#line 13 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp0_ = kkc_rule_metadata_find ("nonexistent");
#line 13 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (metadata);
#line 13 "/home/ueno/devel/libkkc/tests/keymap.vala"
	metadata = _tmp0_;
#line 14 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp1_ = metadata;
#line 14 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_vala_assert (_tmp1_ == NULL, "metadata == null");
#line 16 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp2_ = kkc_rule_metadata_find ("kana");
#line 16 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (metadata);
#line 16 "/home/ueno/devel/libkkc/tests/keymap.vala"
	metadata = _tmp2_;
#line 17 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp3_ = metadata;
#line 17 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_vala_assert (_tmp3_ != NULL, "metadata != null");
#line 10 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (metadata);
#line 132 "keymap.c"
}


static void keymap_tests_test_properties (KeymapTests* self) {
	KkcRuleMetadata* metadata = NULL;
	KkcRuleMetadata* _tmp0_ = NULL;
	KkcRule* rule = NULL;
	KkcRule* _tmp1_ = NULL;
	GObject* keymap = NULL;
	KkcKeymap* _tmp2_ = NULL;
	GObject* _tmp3_ = NULL;
	KkcKeymap* parent = NULL;
	GObject* _tmp4_ = NULL;
	GObject* _tmp5_ = NULL;
	KkcKeymap* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
#line 20 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_return_if_fail (self != NULL);
#line 21 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp0_ = kkc_rule_metadata_find ("kana");
#line 21 "/home/ueno/devel/libkkc/tests/keymap.vala"
	metadata = _tmp0_;
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp1_ = kkc_rule_new (metadata, &_inner_error_);
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
	rule = _tmp1_;
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_object_unref0 (metadata);
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
		g_clear_error (&_inner_error_);
#line 22 "/home/ueno/devel/libkkc/tests/keymap.vala"
		return;
#line 169 "keymap.c"
	}
#line 23 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp2_ = kkc_rule_get_keymap (rule, KKC_INPUT_MODE_HIRAGANA);
#line 23 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp3_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, G_TYPE_OBJECT) ? ((GObject*) _tmp2_) : NULL;
#line 23 "/home/ueno/devel/libkkc/tests/keymap.vala"
	if (_tmp3_ == NULL) {
#line 23 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_object_unref0 (_tmp2_);
#line 179 "keymap.c"
	}
#line 23 "/home/ueno/devel/libkkc/tests/keymap.vala"
	keymap = _tmp3_;
#line 25 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp4_ = keymap;
#line 25 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_object_get (_tmp4_, "parent", &parent, NULL);
#line 26 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp5_ = keymap;
#line 26 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp6_ = parent;
#line 26 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_object_set (_tmp5_, "parent", _tmp6_, NULL);
#line 20 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (parent);
#line 20 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (keymap);
#line 20 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (rule);
#line 20 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (metadata);
#line 201 "keymap.c"
}


static void _vala_KkcKeymapEntry_array_free (KkcKeymapEntry* array, gint array_length) {
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	if (array != NULL) {
#line 208 "keymap.c"
		int i;
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
		for (i = 0; i < array_length; i = i + 1) {
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
			kkc_keymap_entry_destroy (&array[i]);
#line 214 "keymap.c"
		}
	}
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_free (array);
#line 219 "keymap.c"
}


static void keymap_tests_test_lookup (KeymapTests* self) {
	KkcRuleMetadata* metadata = NULL;
	KkcRuleMetadata* _tmp0_ = NULL;
	KkcRule* rule = NULL;
	KkcRuleMetadata* _tmp1_ = NULL;
	KkcRule* _tmp2_ = NULL;
	KkcKeymap* keymap = NULL;
	KkcRule* _tmp3_ = NULL;
	KkcKeymap* _tmp4_ = NULL;
	gchar* command = NULL;
	KkcKeyEvent* _tmp5_ = NULL;
	KkcKeyEvent* _tmp6_ = NULL;
	KkcKeymap* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	KkcKeyEvent* key = NULL;
	KkcKeymap* _tmp10_ = NULL;
	KkcKeyEvent* _tmp11_ = NULL;
	KkcKeyEvent* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	gchar** commands = NULL;
	KkcKeymap* _tmp15_ = NULL;
	gint _tmp16_ = 0;
	gchar** _tmp17_ = NULL;
	gint commands_length1 = 0;
	gint _commands_size_ = 0;
	KkcKeymapEntry* entries = NULL;
	KkcKeymap* _tmp18_ = NULL;
	gint _tmp19_ = 0;
	KkcKeymapEntry* _tmp20_ = NULL;
	gint entries_length1 = 0;
	gint _entries_size_ = 0;
	KkcKeymap* _tmp21_ = NULL;
	gchar* _tmp22_ = NULL;
	gchar* _tmp23_ = NULL;
	GError * _inner_error_ = NULL;
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_return_if_fail (self != NULL);
#line 30 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp0_ = kkc_rule_metadata_find ("kana");
#line 30 "/home/ueno/devel/libkkc/tests/keymap.vala"
	metadata = _tmp0_;
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp1_ = metadata;
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp2_ = kkc_rule_new (_tmp1_, &_inner_error_);
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
	rule = _tmp2_;
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_object_unref0 (metadata);
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
		g_clear_error (&_inner_error_);
#line 31 "/home/ueno/devel/libkkc/tests/keymap.vala"
		return;
#line 282 "keymap.c"
	}
#line 32 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp3_ = rule;
#line 32 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp4_ = kkc_rule_get_keymap (_tmp3_, KKC_INPUT_MODE_HIRAGANA);
#line 32 "/home/ueno/devel/libkkc/tests/keymap.vala"
	keymap = _tmp4_;
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp6_ = kkc_key_event_new_from_string ("(alt r)", &_inner_error_);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp5_ = _tmp6_;
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_free0 (command);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_object_unref0 (keymap);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_object_unref0 (rule);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		_g_object_unref0 (metadata);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		g_clear_error (&_inner_error_);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
		return;
#line 310 "keymap.c"
	}
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp7_ = keymap;
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp8_ = kkc_keymap_lookup_key (_tmp7_, _tmp5_);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_free0 (command);
#line 35 "/home/ueno/devel/libkkc/tests/keymap.vala"
	command = _tmp8_;
#line 36 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp9_ = command;
#line 36 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_vala_assert (g_strcmp0 (_tmp9_, "register") == 0, "command == \"register\"");
#line 39 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp10_ = keymap;
#line 39 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp11_ = kkc_keymap_where_is (_tmp10_, "register");
#line 39 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (key);
#line 39 "/home/ueno/devel/libkkc/tests/keymap.vala"
	key = _tmp11_;
#line 40 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp12_ = key;
#line 40 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp13_ = kkc_key_event_to_string (_tmp12_);
#line 40 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp14_ = _tmp13_;
#line 40 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_vala_assert (g_strcmp0 (_tmp14_, "(alt r)") == 0, "key.to_string () == \"(alt r)\"");
#line 40 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_free0 (_tmp14_);
#line 42 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp15_ = keymap;
#line 42 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp17_ = kkc_keymap_commands (&_tmp16_);
#line 42 "/home/ueno/devel/libkkc/tests/keymap.vala"
	commands = _tmp17_;
#line 42 "/home/ueno/devel/libkkc/tests/keymap.vala"
	commands_length1 = _tmp16_;
#line 42 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_commands_size_ = commands_length1;
#line 43 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp18_ = keymap;
#line 43 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp20_ = kkc_keymap_entries (_tmp18_, &_tmp19_);
#line 43 "/home/ueno/devel/libkkc/tests/keymap.vala"
	entries = _tmp20_;
#line 43 "/home/ueno/devel/libkkc/tests/keymap.vala"
	entries_length1 = _tmp19_;
#line 43 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_entries_size_ = entries_length1;
#line 45 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp21_ = keymap;
#line 45 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp22_ = kkc_keymap_get_command_label ("register");
#line 45 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp23_ = _tmp22_;
#line 45 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_vala_assert (g_strcmp0 (_tmp23_, "Register Word") == 0, "keymap.get_command_label (\"register\") == \"Register Word\"");
#line 45 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_free0 (_tmp23_);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	entries = (_vala_KkcKeymapEntry_array_free (entries, entries_length1), NULL);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	commands = (_vala_array_free (commands, commands_length1, (GDestroyNotify) g_free), NULL);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (key);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (_tmp5_);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_free0 (command);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (keymap);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (rule);
#line 29 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (metadata);
#line 388 "keymap.c"
}


static void keymap_tests_class_init (KeymapTestsClass * klass) {
#line 1 "/home/ueno/devel/libkkc/tests/keymap.vala"
	keymap_tests_parent_class = g_type_class_peek_parent (klass);
#line 395 "keymap.c"
}


static void keymap_tests_instance_init (KeymapTests * self) {
}


GType keymap_tests_get_type (void) {
	static volatile gsize keymap_tests_type_id__volatile = 0;
	if (g_once_init_enter (&keymap_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KeymapTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) keymap_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KeymapTests), 0, (GInstanceInitFunc) keymap_tests_instance_init, NULL };
		GType keymap_tests_type_id;
		keymap_tests_type_id = g_type_register_static (KKC_TYPE_TEST_CASE, "KeymapTests", &g_define_type_info, 0);
		g_once_init_leave (&keymap_tests_type_id__volatile, keymap_tests_type_id);
	}
	return keymap_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	GTestSuite* root = NULL;
	GTestSuite* _tmp0_ = NULL;
	KeymapTests* _tmp1_ = NULL;
	KeymapTests* _tmp2_ = NULL;
	GTestSuite* _tmp3_ = NULL;
#line 50 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_test_init (&args_length1, &args, NULL);
#line 51 "/home/ueno/devel/libkkc/tests/keymap.vala"
	kkc_init ();
#line 53 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp0_ = g_test_get_root ();
#line 53 "/home/ueno/devel/libkkc/tests/keymap.vala"
	root = _tmp0_;
#line 54 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp1_ = keymap_tests_new ();
#line 54 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp2_ = _tmp1_;
#line 54 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_tmp3_ = kkc_test_case_get_suite ((KkcTestCase*) _tmp2_);
#line 54 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_test_suite_add_suite (root, _tmp3_);
#line 54 "/home/ueno/devel/libkkc/tests/keymap.vala"
	_g_object_unref0 (_tmp2_);
#line 56 "/home/ueno/devel/libkkc/tests/keymap.vala"
	g_test_run ();
#line 58 "/home/ueno/devel/libkkc/tests/keymap.vala"
	result = 0;
#line 58 "/home/ueno/devel/libkkc/tests/keymap.vala"
	return result;
#line 446 "keymap.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 49 "/home/ueno/devel/libkkc/tests/keymap.vala"
	return _vala_main (argv, argc);
#line 456 "keymap.c"
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



