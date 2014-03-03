/* libkkc-test.h generated by valac 0.21.1.40-3bbfb, the Vala compiler, do not modify */


#ifndef __LIBKKC_TEST_H__
#define __LIBKKC_TEST_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <libkkc/libkkc-internals.h>
#include <json-glib/json-glib.h>

G_BEGIN_DECLS


#define KKC_TYPE_TEST_CASE (kkc_test_case_get_type ())
#define KKC_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TEST_CASE, KkcTestCase))
#define KKC_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_TEST_CASE, KkcTestCaseClass))
#define KKC_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TEST_CASE))
#define KKC_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_TEST_CASE))
#define KKC_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_TEST_CASE, KkcTestCaseClass))

typedef struct _KkcTestCase KkcTestCase;
typedef struct _KkcTestCaseClass KkcTestCaseClass;
typedef struct _KkcTestCasePrivate KkcTestCasePrivate;

struct _KkcTestCase {
	GObject parent_instance;
	KkcTestCasePrivate * priv;
};

struct _KkcTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (KkcTestCase* self);
	void (*tear_down) (KkcTestCase* self);
};

typedef void (*KkcTestCaseTestMethod) (void* user_data);

GType kkc_test_case_get_type (void) G_GNUC_CONST;
KkcTestCase* kkc_test_case_construct (GType object_type, const gchar* name);
void kkc_test_case_add_test (KkcTestCase* self, const gchar* name, KkcTestCaseTestMethod test, void* test_target);
void kkc_test_case_set_up (KkcTestCase* self);
void kkc_test_case_tear_down (KkcTestCase* self);
GTestSuite* kkc_test_case_get_suite (KkcTestCase* self);
void kkc_test_utils_remove_dir (const gchar* name, GError** error);
void kkc_test_utils_check_conversion_result (KkcContext* context, JsonObject* expected);
void kkc_test_utils_do_conversions (KkcContext* context, const gchar* filename);


G_END_DECLS

#endif
