/* test-case.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from test-case.vala, do not modify */

/* testcase.vala
 *
 * Copyright (C) 2009 Julien Peeters
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 *  Julien Peeters <contact@julienpeeters.fr>
 *
 * Copied from libgee/tests/testcase.vala.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <gobject/gvaluecollector.h>


#define KKC_TYPE_TEST_CASE (kkc_test_case_get_type ())
#define KKC_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TEST_CASE, KkcTestCase))
#define KKC_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_TEST_CASE, KkcTestCaseClass))
#define KKC_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TEST_CASE))
#define KKC_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_TEST_CASE))
#define KKC_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_TEST_CASE, KkcTestCaseClass))

typedef struct _KkcTestCase KkcTestCase;
typedef struct _KkcTestCaseClass KkcTestCaseClass;
typedef struct _KkcTestCasePrivate KkcTestCasePrivate;

#define KKC_TEST_CASE_TYPE_ADAPTOR (kkc_test_case_adaptor_get_type ())
#define KKC_TEST_CASE_ADAPTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TEST_CASE_TYPE_ADAPTOR, KkcTestCaseAdaptor))
#define KKC_TEST_CASE_ADAPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TEST_CASE_TYPE_ADAPTOR, KkcTestCaseAdaptorClass))
#define KKC_TEST_CASE_IS_ADAPTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TEST_CASE_TYPE_ADAPTOR))
#define KKC_TEST_CASE_IS_ADAPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TEST_CASE_TYPE_ADAPTOR))
#define KKC_TEST_CASE_ADAPTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TEST_CASE_TYPE_ADAPTOR, KkcTestCaseAdaptorClass))

typedef struct _KkcTestCaseAdaptor KkcTestCaseAdaptor;
typedef struct _KkcTestCaseAdaptorClass KkcTestCaseAdaptorClass;
#define _kkc_test_case_adaptor_unref0(var) ((var == NULL) ? NULL : (var = (kkc_test_case_adaptor_unref (var), NULL)))
typedef struct _KkcTestCaseAdaptorPrivate KkcTestCaseAdaptorPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _KkcTestCaseParamSpecAdaptor KkcTestCaseParamSpecAdaptor;

struct _KkcTestCase {
	GObject parent_instance;
	KkcTestCasePrivate * priv;
};

struct _KkcTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (KkcTestCase* self);
	void (*tear_down) (KkcTestCase* self);
};

struct _KkcTestCasePrivate {
	GTestSuite* _suite;
	KkcTestCaseAdaptor** _adaptors;
	gint _adaptors_length1;
	gint __adaptors_size_;
};

typedef void (*KkcTestCaseTestMethod) (void* user_data);
struct _KkcTestCaseAdaptor {
	GTypeInstance parent_instance;
	volatile int ref_count;
	KkcTestCaseAdaptorPrivate * priv;
};

struct _KkcTestCaseAdaptorClass {
	GTypeClass parent_class;
	void (*finalize) (KkcTestCaseAdaptor *self);
};

struct _KkcTestCaseAdaptorPrivate {
	gchar* _name;
	KkcTestCaseTestMethod _test;
	gpointer _test_target;
	KkcTestCase* _test_case;
};

struct _KkcTestCaseParamSpecAdaptor {
	GParamSpec parent_instance;
};


static gpointer kkc_test_case_parent_class = NULL;
static gpointer kkc_test_case_adaptor_parent_class = NULL;

GType kkc_test_case_get_type (void) G_GNUC_CONST;
static gpointer kkc_test_case_adaptor_ref (gpointer instance);
static void kkc_test_case_adaptor_unref (gpointer instance);
static GParamSpec* kkc_test_case_param_spec_adaptor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) G_GNUC_UNUSED;
static void kkc_test_case_value_set_adaptor (GValue* value, gpointer v_object) G_GNUC_UNUSED;
static void kkc_test_case_value_take_adaptor (GValue* value, gpointer v_object) G_GNUC_UNUSED;
static gpointer kkc_test_case_value_get_adaptor (const GValue* value) G_GNUC_UNUSED;
static GType kkc_test_case_adaptor_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
#define KKC_TEST_CASE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_TEST_CASE, KkcTestCasePrivate))
enum  {
	KKC_TEST_CASE_DUMMY_PROPERTY
};
KkcTestCase* kkc_test_case_construct (GType object_type, const gchar* name);
void kkc_test_case_add_test (KkcTestCase* self, const gchar* name, KkcTestCaseTestMethod test, void* test_target);
static KkcTestCaseAdaptor* kkc_test_case_adaptor_new (const gchar* name, KkcTestCaseTestMethod test, void* test_target, KkcTestCase* test_case);
static KkcTestCaseAdaptor* kkc_test_case_adaptor_construct (GType object_type, const gchar* name, KkcTestCaseTestMethod test, void* test_target, KkcTestCase* test_case);
static void _vala_array_add1 (KkcTestCaseAdaptor*** array, int* length, int* size, KkcTestCaseAdaptor* value);
static const gchar* kkc_test_case_adaptor_get_name (KkcTestCaseAdaptor* self);
static void kkc_test_case_adaptor_set_up (KkcTestCaseAdaptor* self, void* fixture);
static void _kkc_test_case_adaptor_set_up_gtest_func (void* fixture, gpointer self);
static void kkc_test_case_adaptor_run (KkcTestCaseAdaptor* self, void* fixture);
static void _kkc_test_case_adaptor_run_gtest_func (void* fixture, gpointer self);
static void kkc_test_case_adaptor_tear_down (KkcTestCaseAdaptor* self, void* fixture);
static void _kkc_test_case_adaptor_tear_down_gtest_func (void* fixture, gpointer self);
void kkc_test_case_set_up (KkcTestCase* self);
static void kkc_test_case_real_set_up (KkcTestCase* self);
void kkc_test_case_tear_down (KkcTestCase* self);
static void kkc_test_case_real_tear_down (KkcTestCase* self);
GTestSuite* kkc_test_case_get_suite (KkcTestCase* self);
#define KKC_TEST_CASE_ADAPTOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TEST_CASE_TYPE_ADAPTOR, KkcTestCaseAdaptorPrivate))
enum  {
	KKC_TEST_CASE_ADAPTOR_DUMMY_PROPERTY
};
static void _kkc_test_case_adaptor_printerr_func_stack_trace (const gchar* text);
static void __kkc_test_case_adaptor_printerr_func_stack_trace_gprint_func (const gchar* text);
static void _kkc_test_case_adaptor_log_func_stack_trace (KkcTestCaseAdaptor* self, const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message);
static void __kkc_test_case_adaptor_log_func_stack_trace_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self);
static void kkc_test_case_adaptor_set_name (KkcTestCaseAdaptor* self, const gchar* value);
static void kkc_test_case_adaptor_finalize (KkcTestCaseAdaptor* obj);
static void kkc_test_case_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


KkcTestCase* kkc_test_case_construct (GType object_type, const gchar* name) {
	KkcTestCase * self = NULL;
	const gchar* _tmp0_ = NULL;
	GTestSuite* _tmp1_ = NULL;
#line 32 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (name != NULL, NULL);
#line 32 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self = (KkcTestCase*) g_object_new (object_type, NULL);
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = name;
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1_ = g_test_create_suite (_tmp0_);
#line 34 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_suite = _tmp1_;
#line 32 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return self;
#line 168 "test-case.c"
}


static gpointer _kkc_test_case_adaptor_ref0 (gpointer self) {
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return self ? kkc_test_case_adaptor_ref (self) : NULL;
#line 175 "test-case.c"
}


static void _vala_array_add1 (KkcTestCaseAdaptor*** array, int* length, int* size, KkcTestCaseAdaptor* value) {
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if ((*length) == (*size)) {
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		*size = (*size) ? (2 * (*size)) : 4;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		*array = g_renew (KkcTestCaseAdaptor*, *array, (*size) + 1);
#line 186 "test-case.c"
	}
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	(*array)[(*length)++] = value;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	(*array)[*length] = NULL;
#line 192 "test-case.c"
}


static void _kkc_test_case_adaptor_set_up_gtest_func (void* fixture, gpointer self) {
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_adaptor_set_up ((KkcTestCaseAdaptor*) self, fixture);
#line 199 "test-case.c"
}


static void _kkc_test_case_adaptor_run_gtest_func (void* fixture, gpointer self) {
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_adaptor_run ((KkcTestCaseAdaptor*) self, fixture);
#line 206 "test-case.c"
}


static void _kkc_test_case_adaptor_tear_down_gtest_func (void* fixture, gpointer self) {
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_adaptor_tear_down ((KkcTestCaseAdaptor*) self, fixture);
#line 213 "test-case.c"
}


void kkc_test_case_add_test (KkcTestCase* self, const gchar* name, KkcTestCaseTestMethod test, void* test_target) {
	KkcTestCaseAdaptor* adaptor = NULL;
	const gchar* _tmp0_ = NULL;
	KkcTestCaseTestMethod _tmp1_ = NULL;
	void* _tmp1__target = NULL;
	KkcTestCaseAdaptor* _tmp2_ = NULL;
	KkcTestCaseAdaptor** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	KkcTestCaseAdaptor* _tmp4_ = NULL;
	GTestSuite* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	GTestCase* _tmp8_ = NULL;
#line 37 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (name != NULL);
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = name;
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1_ = test;
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1__target = test_target;
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp2_ = kkc_test_case_adaptor_new (_tmp0_, _tmp1_, _tmp1__target, self);
#line 39 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	adaptor = _tmp2_;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp3_ = self->priv->_adaptors;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp3__length1 = self->priv->_adaptors_length1;
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp4_ = _kkc_test_case_adaptor_ref0 (adaptor);
#line 40 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_vala_array_add1 (&self->priv->_adaptors, &self->priv->_adaptors_length1, &self->priv->__adaptors_size_, _tmp4_);
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp5_ = self->priv->_suite;
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp6_ = kkc_test_case_adaptor_get_name (adaptor);
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp7_ = _tmp6_;
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp8_ = g_test_create_case (_tmp7_, (gsize) 0, adaptor, (void (*) (void)) _kkc_test_case_adaptor_set_up_gtest_func, (void (*) (void)) _kkc_test_case_adaptor_run_gtest_func, (void (*) (void)) _kkc_test_case_adaptor_tear_down_gtest_func);
#line 42 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_test_suite_add (_tmp5_, _tmp8_);
#line 37 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_kkc_test_case_adaptor_unref0 (adaptor);
#line 264 "test-case.c"
}


static void kkc_test_case_real_set_up (KkcTestCase* self) {
}


void kkc_test_case_set_up (KkcTestCase* self) {
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 46 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	KKC_TEST_CASE_GET_CLASS (self)->set_up (self);
#line 277 "test-case.c"
}


static void kkc_test_case_real_tear_down (KkcTestCase* self) {
}


void kkc_test_case_tear_down (KkcTestCase* self) {
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 50 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	KKC_TEST_CASE_GET_CLASS (self)->tear_down (self);
#line 290 "test-case.c"
}


GTestSuite* kkc_test_case_get_suite (KkcTestCase* self) {
	GTestSuite* result = NULL;
	GTestSuite* _tmp0_ = NULL;
#line 54 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = self->priv->_suite;
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	result = _tmp0_;
#line 56 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return result;
#line 305 "test-case.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return self ? g_object_ref (self) : NULL;
#line 312 "test-case.c"
}


static KkcTestCaseAdaptor* kkc_test_case_adaptor_construct (GType object_type, const gchar* name, KkcTestCaseTestMethod test, void* test_target, KkcTestCase* test_case) {
	KkcTestCaseAdaptor* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	KkcTestCaseTestMethod _tmp2_ = NULL;
	void* _tmp2__target = NULL;
	KkcTestCase* _tmp3_ = NULL;
	KkcTestCase* _tmp4_ = NULL;
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (name != NULL, NULL);
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (test_case != NULL, NULL);
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self = (KkcTestCaseAdaptor*) g_type_create_instance (object_type);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = name;
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_g_free0 (self->priv->_name);
#line 67 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_name = _tmp1_;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp2_ = test;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp2__target = test_target;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_test = _tmp2_;
#line 68 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_test_target = _tmp2__target;
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp3_ = test_case;
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp4_ = _g_object_ref0 (_tmp3_);
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_g_object_unref0 (self->priv->_test_case);
#line 69 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_test_case = _tmp4_;
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return self;
#line 356 "test-case.c"
}


static KkcTestCaseAdaptor* kkc_test_case_adaptor_new (const gchar* name, KkcTestCaseTestMethod test, void* test_target, KkcTestCase* test_case) {
#line 65 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return kkc_test_case_adaptor_construct (KKC_TEST_CASE_TYPE_ADAPTOR, name, test, test_target, test_case);
#line 363 "test-case.c"
}


static void __kkc_test_case_adaptor_printerr_func_stack_trace_gprint_func (const gchar* text) {
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_kkc_test_case_adaptor_printerr_func_stack_trace (text);
#line 370 "test-case.c"
}


static void __kkc_test_case_adaptor_log_func_stack_trace_glog_func (const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message, gpointer self) {
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_kkc_test_case_adaptor_log_func_stack_trace ((KkcTestCaseAdaptor*) self, log_domain, log_levels, message);
#line 377 "test-case.c"
}


static void kkc_test_case_adaptor_set_up (KkcTestCaseAdaptor* self, void* fixture) {
	KkcTestCase* _tmp0_ = NULL;
#line 72 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 74 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_set_printerr_handler (__kkc_test_case_adaptor_printerr_func_stack_trace_gprint_func);
#line 75 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_log_set_default_handler (__kkc_test_case_adaptor_log_func_stack_trace_glog_func, self);
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = self->priv->_test_case;
#line 77 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_set_up (_tmp0_);
#line 393 "test-case.c"
}


static void _kkc_test_case_adaptor_printerr_func_stack_trace (const gchar* text) {
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp1_ = NULL;
	FILE* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1_ = text;
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (_tmp1_ == NULL) {
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		_tmp0_ = TRUE;
#line 408 "test-case.c"
	} else {
		GEqualFunc _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		gboolean _tmp4_ = FALSE;
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		_tmp2_ = g_str_equal;
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		_tmp3_ = text;
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		_tmp4_ = _tmp2_ (_tmp3_, "");
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		_tmp0_ = _tmp4_;
#line 421 "test-case.c"
	}
#line 82 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (_tmp0_) {
#line 83 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		return;
#line 427 "test-case.c"
	}
#line 85 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp5_ = stderr;
#line 85 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp6_ = text;
#line 85 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	fprintf (_tmp5_, "%s", _tmp6_);
#line 88 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_on_error_stack_trace ("libtool --mode=execute gdb");
#line 437 "test-case.c"
}


static void _kkc_test_case_adaptor_log_func_stack_trace (KkcTestCaseAdaptor* self, const gchar* log_domain, GLogLevelFlags log_levels, const gchar* message) {
	GLogFunc _tmp0_ = NULL;
	void* _tmp0__target = NULL;
	const gchar* _tmp1_ = NULL;
	GLogLevelFlags _tmp2_ = 0;
	const gchar* _tmp3_ = NULL;
	GLogLevelFlags _tmp4_ = 0;
#line 91 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 91 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (message != NULL);
#line 95 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = g_log_default_handler;
#line 95 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0__target = NULL;
#line 95 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1_ = log_domain;
#line 95 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp2_ = log_levels;
#line 95 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp3_ = message;
#line 95 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ (_tmp1_, _tmp2_, _tmp3_, _tmp0__target);
#line 99 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp4_ = log_levels;
#line 99 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if ((_tmp4_ & ((G_LOG_LEVEL_WARNING | G_LOG_LEVEL_ERROR) | G_LOG_LEVEL_CRITICAL)) != 0) {
#line 104 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		g_on_error_stack_trace ("libtool --mode=execute gdb");
#line 470 "test-case.c"
	}
}


static void kkc_test_case_adaptor_run (KkcTestCaseAdaptor* self, void* fixture) {
	KkcTestCaseTestMethod _tmp0_ = NULL;
	void* _tmp0__target = NULL;
#line 108 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 110 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = self->priv->_test;
#line 110 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0__target = self->priv->_test_target;
#line 110 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ (_tmp0__target);
#line 486 "test-case.c"
}


static void kkc_test_case_adaptor_tear_down (KkcTestCaseAdaptor* self, void* fixture) {
	KkcTestCase* _tmp0_ = NULL;
#line 113 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 115 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = self->priv->_test_case;
#line 115 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_tear_down (_tmp0_);
#line 498 "test-case.c"
}


static const gchar* kkc_test_case_adaptor_get_name (KkcTestCaseAdaptor* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = self->priv->_name;
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	result = _tmp0_;
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return result;
#line 513 "test-case.c"
}


static void kkc_test_case_adaptor_set_name (KkcTestCaseAdaptor* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (self != NULL);
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = value;
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_g_free0 (self->priv->_name);
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_name = _tmp1_;
#line 530 "test-case.c"
}


static void kkc_test_case_value_adaptor_init (GValue* value) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	value->data[0].v_pointer = NULL;
#line 537 "test-case.c"
}


static void kkc_test_case_value_adaptor_free_value (GValue* value) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (value->data[0].v_pointer) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		kkc_test_case_adaptor_unref (value->data[0].v_pointer);
#line 546 "test-case.c"
	}
}


static void kkc_test_case_value_adaptor_copy_value (const GValue* src_value, GValue* dest_value) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (src_value->data[0].v_pointer) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		dest_value->data[0].v_pointer = kkc_test_case_adaptor_ref (src_value->data[0].v_pointer);
#line 556 "test-case.c"
	} else {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		dest_value->data[0].v_pointer = NULL;
#line 560 "test-case.c"
	}
}


static gpointer kkc_test_case_value_adaptor_peek_pointer (const GValue* value) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return value->data[0].v_pointer;
#line 568 "test-case.c"
}


static gchar* kkc_test_case_value_adaptor_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (collect_values[0].v_pointer) {
#line 575 "test-case.c"
		KkcTestCaseAdaptor* object;
		object = collect_values[0].v_pointer;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		if (object->parent_instance.g_class == NULL) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 582 "test-case.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 586 "test-case.c"
		}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		value->data[0].v_pointer = kkc_test_case_adaptor_ref (object);
#line 590 "test-case.c"
	} else {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		value->data[0].v_pointer = NULL;
#line 594 "test-case.c"
	}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return NULL;
#line 598 "test-case.c"
}


static gchar* kkc_test_case_value_adaptor_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	KkcTestCaseAdaptor** object_p;
	object_p = collect_values[0].v_pointer;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (!object_p) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 609 "test-case.c"
	}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (!value->data[0].v_pointer) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		*object_p = NULL;
#line 615 "test-case.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		*object_p = value->data[0].v_pointer;
#line 619 "test-case.c"
	} else {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		*object_p = kkc_test_case_adaptor_ref (value->data[0].v_pointer);
#line 623 "test-case.c"
	}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return NULL;
#line 627 "test-case.c"
}


static GParamSpec* kkc_test_case_param_spec_adaptor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	KkcTestCaseParamSpecAdaptor* spec;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (g_type_is_a (object_type, KKC_TEST_CASE_TYPE_ADAPTOR), NULL);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return G_PARAM_SPEC (spec);
#line 641 "test-case.c"
}


static gpointer kkc_test_case_value_get_adaptor (const GValue* value) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, KKC_TEST_CASE_TYPE_ADAPTOR), NULL);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return value->data[0].v_pointer;
#line 650 "test-case.c"
}


static void kkc_test_case_value_set_adaptor (GValue* value, gpointer v_object) {
	KkcTestCaseAdaptor* old;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, KKC_TEST_CASE_TYPE_ADAPTOR));
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	old = value->data[0].v_pointer;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (v_object) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, KKC_TEST_CASE_TYPE_ADAPTOR));
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		value->data[0].v_pointer = v_object;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		kkc_test_case_adaptor_ref (value->data[0].v_pointer);
#line 670 "test-case.c"
	} else {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		value->data[0].v_pointer = NULL;
#line 674 "test-case.c"
	}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (old) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		kkc_test_case_adaptor_unref (old);
#line 680 "test-case.c"
	}
}


static void kkc_test_case_value_take_adaptor (GValue* value, gpointer v_object) {
	KkcTestCaseAdaptor* old;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, KKC_TEST_CASE_TYPE_ADAPTOR));
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	old = value->data[0].v_pointer;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (v_object) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, KKC_TEST_CASE_TYPE_ADAPTOR));
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		value->data[0].v_pointer = v_object;
#line 699 "test-case.c"
	} else {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		value->data[0].v_pointer = NULL;
#line 703 "test-case.c"
	}
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (old) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		kkc_test_case_adaptor_unref (old);
#line 709 "test-case.c"
	}
}


static void kkc_test_case_adaptor_class_init (KkcTestCaseAdaptorClass * klass) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_adaptor_parent_class = g_type_class_peek_parent (klass);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	((KkcTestCaseAdaptorClass *) klass)->finalize = kkc_test_case_adaptor_finalize;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_type_class_add_private (klass, sizeof (KkcTestCaseAdaptorPrivate));
#line 721 "test-case.c"
}


static void kkc_test_case_adaptor_instance_init (KkcTestCaseAdaptor * self) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv = KKC_TEST_CASE_ADAPTOR_GET_PRIVATE (self);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->ref_count = 1;
#line 730 "test-case.c"
}


static void kkc_test_case_adaptor_finalize (KkcTestCaseAdaptor* obj) {
	KkcTestCaseAdaptor * self;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TEST_CASE_TYPE_ADAPTOR, KkcTestCaseAdaptor);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_signal_handlers_destroy (self);
#line 61 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_g_free0 (self->priv->_name);
#line 63 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_g_object_unref0 (self->priv->_test_case);
#line 744 "test-case.c"
}


static GType kkc_test_case_adaptor_get_type (void) {
	static volatile gsize kkc_test_case_adaptor_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_test_case_adaptor_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { kkc_test_case_value_adaptor_init, kkc_test_case_value_adaptor_free_value, kkc_test_case_value_adaptor_copy_value, kkc_test_case_value_adaptor_peek_pointer, "p", kkc_test_case_value_adaptor_collect_value, "p", kkc_test_case_value_adaptor_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (KkcTestCaseAdaptorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_test_case_adaptor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcTestCaseAdaptor), 0, (GInstanceInitFunc) kkc_test_case_adaptor_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType kkc_test_case_adaptor_type_id;
		kkc_test_case_adaptor_type_id = g_type_register_fundamental (g_type_fundamental_next (), "KkcTestCaseAdaptor", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&kkc_test_case_adaptor_type_id__volatile, kkc_test_case_adaptor_type_id);
	}
	return kkc_test_case_adaptor_type_id__volatile;
}


static gpointer kkc_test_case_adaptor_ref (gpointer instance) {
	KkcTestCaseAdaptor* self;
	self = instance;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_atomic_int_inc (&self->ref_count);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	return instance;
#line 769 "test-case.c"
}


static void kkc_test_case_adaptor_unref (gpointer instance) {
	KkcTestCaseAdaptor* self;
	self = instance;
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		KKC_TEST_CASE_ADAPTOR_GET_CLASS (self)->finalize (self);
#line 59 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 782 "test-case.c"
	}
}


static void kkc_test_case_class_init (KkcTestCaseClass * klass) {
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	kkc_test_case_parent_class = g_type_class_peek_parent (klass);
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	g_type_class_add_private (klass, sizeof (KkcTestCasePrivate));
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	((KkcTestCaseClass *) klass)->set_up = kkc_test_case_real_set_up;
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	((KkcTestCaseClass *) klass)->tear_down = kkc_test_case_real_tear_down;
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	G_OBJECT_CLASS (klass)->finalize = kkc_test_case_finalize;
#line 798 "test-case.c"
}


static void kkc_test_case_instance_init (KkcTestCase * self) {
	KkcTestCaseAdaptor** _tmp0_ = NULL;
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv = KKC_TEST_CASE_GET_PRIVATE (self);
#line 28 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	_tmp0_ = g_new0 (KkcTestCaseAdaptor*, 0 + 1);
#line 28 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_adaptors = _tmp0_;
#line 28 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_adaptors_length1 = 0;
#line 28 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->__adaptors_size_ = self->priv->_adaptors_length1;
#line 814 "test-case.c"
}


static void kkc_test_case_finalize (GObject* obj) {
	KkcTestCase * self;
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_TEST_CASE, KkcTestCase);
#line 28 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	self->priv->_adaptors = (_vala_array_free (self->priv->_adaptors, self->priv->_adaptors_length1, (GDestroyNotify) kkc_test_case_adaptor_unref), NULL);
#line 25 "/home/ueno/devel/libkkc/tests/lib/test-case.vala"
	G_OBJECT_CLASS (kkc_test_case_parent_class)->finalize (obj);
#line 826 "test-case.c"
}


GType kkc_test_case_get_type (void) {
	static volatile gsize kkc_test_case_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_test_case_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcTestCaseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_test_case_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcTestCase), 0, (GInstanceInitFunc) kkc_test_case_instance_init, NULL };
		GType kkc_test_case_type_id;
		kkc_test_case_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcTestCase", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&kkc_test_case_type_id__volatile, kkc_test_case_type_id);
	}
	return kkc_test_case_type_id__volatile;
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



