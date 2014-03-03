/* trellis-node.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from trellis-node.vala, do not modify */

/*
 * Copyright (C) 2012-2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2012-2013 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <gobject/gvaluecollector.h>


#define KKC_TYPE_TRELLIS_NODE (kkc_trellis_node_get_type ())
#define KKC_TRELLIS_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TRELLIS_NODE, KkcTrellisNode))
#define KKC_TRELLIS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_TRELLIS_NODE, KkcTrellisNodeClass))
#define KKC_IS_TRELLIS_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TRELLIS_NODE))
#define KKC_IS_TRELLIS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_TRELLIS_NODE))
#define KKC_TRELLIS_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_TRELLIS_NODE, KkcTrellisNodeClass))

typedef struct _KkcTrellisNode KkcTrellisNode;
typedef struct _KkcTrellisNodeClass KkcTrellisNodeClass;
typedef struct _KkcTrellisNodePrivate KkcTrellisNodePrivate;

#define KKC_TYPE_LANGUAGE_MODEL_ENTRY (kkc_language_model_entry_get_type ())
typedef struct _KkcLanguageModelEntry KkcLanguageModelEntry;
#define _kkc_trellis_node_unref0(var) ((var == NULL) ? NULL : (var = (kkc_trellis_node_unref (var), NULL)))
typedef struct _KkcParamSpecTrellisNode KkcParamSpecTrellisNode;

#define KKC_TYPE_UNIGRAM_TRELLIS_NODE (kkc_unigram_trellis_node_get_type ())
#define KKC_UNIGRAM_TRELLIS_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_UNIGRAM_TRELLIS_NODE, KkcUnigramTrellisNode))
#define KKC_UNIGRAM_TRELLIS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_UNIGRAM_TRELLIS_NODE, KkcUnigramTrellisNodeClass))
#define KKC_IS_UNIGRAM_TRELLIS_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_UNIGRAM_TRELLIS_NODE))
#define KKC_IS_UNIGRAM_TRELLIS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_UNIGRAM_TRELLIS_NODE))
#define KKC_UNIGRAM_TRELLIS_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_UNIGRAM_TRELLIS_NODE, KkcUnigramTrellisNodeClass))

typedef struct _KkcUnigramTrellisNode KkcUnigramTrellisNode;
typedef struct _KkcUnigramTrellisNodeClass KkcUnigramTrellisNodeClass;
typedef struct _KkcUnigramTrellisNodePrivate KkcUnigramTrellisNodePrivate;

#define KKC_TYPE_BIGRAM_TRELLIS_NODE (kkc_bigram_trellis_node_get_type ())
#define KKC_BIGRAM_TRELLIS_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_BIGRAM_TRELLIS_NODE, KkcBigramTrellisNode))
#define KKC_BIGRAM_TRELLIS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_BIGRAM_TRELLIS_NODE, KkcBigramTrellisNodeClass))
#define KKC_IS_BIGRAM_TRELLIS_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_BIGRAM_TRELLIS_NODE))
#define KKC_IS_BIGRAM_TRELLIS_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_BIGRAM_TRELLIS_NODE))
#define KKC_BIGRAM_TRELLIS_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_BIGRAM_TRELLIS_NODE, KkcBigramTrellisNodeClass))

typedef struct _KkcBigramTrellisNode KkcBigramTrellisNode;
typedef struct _KkcBigramTrellisNodeClass KkcBigramTrellisNodeClass;
typedef struct _KkcBigramTrellisNodePrivate KkcBigramTrellisNodePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _KkcLanguageModelEntry {
	gchar* input;
	gchar* output;
	guint id;
};

struct _KkcTrellisNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	KkcTrellisNodePrivate * priv;
	KkcTrellisNode* previous;
	gdouble cumulative_cost;
};

struct _KkcTrellisNodeClass {
	GTypeClass parent_class;
	void (*finalize) (KkcTrellisNode *self);
	gchar* (*to_string) (KkcTrellisNode* self);
	guint (*get_endpos) (KkcTrellisNode* self);
	guint (*get_length) (KkcTrellisNode* self);
	const gchar* (*get_input) (KkcTrellisNode* self);
	const gchar* (*get_output) (KkcTrellisNode* self);
	KkcLanguageModelEntry* (*get_entries) (KkcTrellisNode* self, int* result_length1);
};

struct _KkcParamSpecTrellisNode {
	GParamSpec parent_instance;
};

struct _KkcUnigramTrellisNode {
	KkcTrellisNode parent_instance;
	KkcUnigramTrellisNodePrivate * priv;
};

struct _KkcUnigramTrellisNodeClass {
	KkcTrellisNodeClass parent_class;
};

struct _KkcUnigramTrellisNodePrivate {
	KkcLanguageModelEntry _entry;
	guint _endpos;
	KkcLanguageModelEntry* _entries;
	gint _entries_length1;
	gint __entries_size_;
};

struct _KkcBigramTrellisNode {
	KkcTrellisNode parent_instance;
	KkcBigramTrellisNodePrivate * priv;
};

struct _KkcBigramTrellisNodeClass {
	KkcTrellisNodeClass parent_class;
};

struct _KkcBigramTrellisNodePrivate {
	KkcUnigramTrellisNode* _left_node;
	KkcUnigramTrellisNode* _right_node;
	gchar* _input;
	gchar* _output;
	guint _endpos;
	KkcLanguageModelEntry* _entries;
	gint _entries_length1;
	gint __entries_size_;
};


static gpointer kkc_trellis_node_parent_class = NULL;
static gpointer kkc_unigram_trellis_node_parent_class = NULL;
static gpointer kkc_bigram_trellis_node_parent_class = NULL;

gpointer kkc_trellis_node_ref (gpointer instance);
void kkc_trellis_node_unref (gpointer instance);
GParamSpec* kkc_param_spec_trellis_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void kkc_value_set_trellis_node (GValue* value, gpointer v_object);
void kkc_value_take_trellis_node (GValue* value, gpointer v_object);
gpointer kkc_value_get_trellis_node (const GValue* value);
GType kkc_trellis_node_get_type (void) G_GNUC_CONST;
GType kkc_language_model_entry_get_type (void) G_GNUC_CONST;
KkcLanguageModelEntry* kkc_language_model_entry_dup (const KkcLanguageModelEntry* self);
void kkc_language_model_entry_free (KkcLanguageModelEntry* self);
void kkc_language_model_entry_copy (const KkcLanguageModelEntry* self, KkcLanguageModelEntry* dest);
void kkc_language_model_entry_destroy (KkcLanguageModelEntry* self);
enum  {
	KKC_TRELLIS_NODE_DUMMY_PROPERTY
};
gchar* kkc_trellis_node_to_string (KkcTrellisNode* self);
static gchar* kkc_trellis_node_real_to_string (KkcTrellisNode* self);
KkcTrellisNode* kkc_trellis_node_construct (GType object_type);
guint kkc_trellis_node_get_endpos (KkcTrellisNode* self);
guint kkc_trellis_node_get_length (KkcTrellisNode* self);
const gchar* kkc_trellis_node_get_input (KkcTrellisNode* self);
const gchar* kkc_trellis_node_get_output (KkcTrellisNode* self);
KkcLanguageModelEntry* kkc_trellis_node_get_entries (KkcTrellisNode* self, int* result_length1);
static void kkc_trellis_node_finalize (KkcTrellisNode* obj);
GType kkc_unigram_trellis_node_get_type (void) G_GNUC_CONST;
#define KKC_UNIGRAM_TRELLIS_NODE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_UNIGRAM_TRELLIS_NODE, KkcUnigramTrellisNodePrivate))
enum  {
	KKC_UNIGRAM_TRELLIS_NODE_DUMMY_PROPERTY
};
static void _vala_KkcLanguageModelEntry_array_free (KkcLanguageModelEntry* array, gint array_length);
KkcUnigramTrellisNode* kkc_unigram_trellis_node_new (KkcLanguageModelEntry* entry, guint endpos);
KkcUnigramTrellisNode* kkc_unigram_trellis_node_construct (GType object_type, KkcLanguageModelEntry* entry, guint endpos);
static gchar* kkc_unigram_trellis_node_real_to_string (KkcTrellisNode* base);
void kkc_unigram_trellis_node_get_entry (KkcUnigramTrellisNode* self, KkcLanguageModelEntry* result);
static void kkc_unigram_trellis_node_finalize (KkcTrellisNode* obj);
GType kkc_bigram_trellis_node_get_type (void) G_GNUC_CONST;
#define KKC_BIGRAM_TRELLIS_NODE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_BIGRAM_TRELLIS_NODE, KkcBigramTrellisNodePrivate))
enum  {
	KKC_BIGRAM_TRELLIS_NODE_DUMMY_PROPERTY
};
KkcBigramTrellisNode* kkc_bigram_trellis_node_new (KkcUnigramTrellisNode* left_node, KkcUnigramTrellisNode* right_node, guint endpos);
KkcBigramTrellisNode* kkc_bigram_trellis_node_construct (GType object_type, KkcUnigramTrellisNode* left_node, KkcUnigramTrellisNode* right_node, guint endpos);
static gchar* kkc_bigram_trellis_node_real_to_string (KkcTrellisNode* base);
KkcUnigramTrellisNode* kkc_bigram_trellis_node_get_left_node (KkcBigramTrellisNode* self);
KkcUnigramTrellisNode* kkc_bigram_trellis_node_get_right_node (KkcBigramTrellisNode* self);
static void kkc_bigram_trellis_node_finalize (KkcTrellisNode* obj);


static gchar* kkc_trellis_node_real_to_string (KkcTrellisNode* self) {
	g_critical ("Type `%s' does not implement abstract method `kkc_trellis_node_to_string'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


gchar* kkc_trellis_node_to_string (KkcTrellisNode* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return KKC_TRELLIS_NODE_GET_CLASS (self)->to_string (self);
}


KkcTrellisNode* kkc_trellis_node_construct (GType object_type) {
	KkcTrellisNode* self = NULL;
	self = (KkcTrellisNode*) g_type_create_instance (object_type);
	return self;
}


guint kkc_trellis_node_get_endpos (KkcTrellisNode* self) {
	g_return_val_if_fail (self != NULL, 0U);
	return KKC_TRELLIS_NODE_GET_CLASS (self)->get_endpos (self);
}


guint kkc_trellis_node_get_length (KkcTrellisNode* self) {
	g_return_val_if_fail (self != NULL, 0U);
	return KKC_TRELLIS_NODE_GET_CLASS (self)->get_length (self);
}


const gchar* kkc_trellis_node_get_input (KkcTrellisNode* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return KKC_TRELLIS_NODE_GET_CLASS (self)->get_input (self);
}


const gchar* kkc_trellis_node_get_output (KkcTrellisNode* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return KKC_TRELLIS_NODE_GET_CLASS (self)->get_output (self);
}


KkcLanguageModelEntry* kkc_trellis_node_get_entries (KkcTrellisNode* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return KKC_TRELLIS_NODE_GET_CLASS (self)->get_entries (self, result_length1);
}


static void kkc_value_trellis_node_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void kkc_value_trellis_node_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		kkc_trellis_node_unref (value->data[0].v_pointer);
	}
}


static void kkc_value_trellis_node_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = kkc_trellis_node_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer kkc_value_trellis_node_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* kkc_value_trellis_node_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		KkcTrellisNode* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = kkc_trellis_node_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* kkc_value_trellis_node_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	KkcTrellisNode** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = kkc_trellis_node_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* kkc_param_spec_trellis_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	KkcParamSpecTrellisNode* spec;
	g_return_val_if_fail (g_type_is_a (object_type, KKC_TYPE_TRELLIS_NODE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer kkc_value_get_trellis_node (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, KKC_TYPE_TRELLIS_NODE), NULL);
	return value->data[0].v_pointer;
}


void kkc_value_set_trellis_node (GValue* value, gpointer v_object) {
	KkcTrellisNode* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, KKC_TYPE_TRELLIS_NODE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, KKC_TYPE_TRELLIS_NODE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		kkc_trellis_node_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		kkc_trellis_node_unref (old);
	}
}


void kkc_value_take_trellis_node (GValue* value, gpointer v_object) {
	KkcTrellisNode* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, KKC_TYPE_TRELLIS_NODE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, KKC_TYPE_TRELLIS_NODE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		kkc_trellis_node_unref (old);
	}
}


static void kkc_trellis_node_class_init (KkcTrellisNodeClass * klass) {
	kkc_trellis_node_parent_class = g_type_class_peek_parent (klass);
	KKC_TRELLIS_NODE_CLASS (klass)->finalize = kkc_trellis_node_finalize;
	KKC_TRELLIS_NODE_CLASS (klass)->to_string = kkc_trellis_node_real_to_string;
}


static void kkc_trellis_node_instance_init (KkcTrellisNode * self) {
	self->ref_count = 1;
}


static void kkc_trellis_node_finalize (KkcTrellisNode* obj) {
	KkcTrellisNode * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_TRELLIS_NODE, KkcTrellisNode);
	_kkc_trellis_node_unref0 (self->previous);
}


GType kkc_trellis_node_get_type (void) {
	static volatile gsize kkc_trellis_node_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_trellis_node_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { kkc_value_trellis_node_init, kkc_value_trellis_node_free_value, kkc_value_trellis_node_copy_value, kkc_value_trellis_node_peek_pointer, "p", kkc_value_trellis_node_collect_value, "p", kkc_value_trellis_node_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (KkcTrellisNodeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_trellis_node_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcTrellisNode), 0, (GInstanceInitFunc) kkc_trellis_node_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType kkc_trellis_node_type_id;
		kkc_trellis_node_type_id = g_type_register_fundamental (g_type_fundamental_next (), "KkcTrellisNode", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&kkc_trellis_node_type_id__volatile, kkc_trellis_node_type_id);
	}
	return kkc_trellis_node_type_id__volatile;
}


gpointer kkc_trellis_node_ref (gpointer instance) {
	KkcTrellisNode* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void kkc_trellis_node_unref (gpointer instance) {
	KkcTrellisNode* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		KKC_TRELLIS_NODE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


static void _vala_KkcLanguageModelEntry_array_free (KkcLanguageModelEntry* array, gint array_length) {
	if (array != NULL) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			kkc_language_model_entry_destroy (&array[i]);
		}
	}
	g_free (array);
}


KkcUnigramTrellisNode* kkc_unigram_trellis_node_construct (GType object_type, KkcLanguageModelEntry* entry, guint endpos) {
	KkcUnigramTrellisNode* self = NULL;
	KkcLanguageModelEntry _tmp0_ = {0};
	KkcLanguageModelEntry _tmp1_ = {0};
	guint _tmp2_ = 0U;
	KkcLanguageModelEntry _tmp3_ = {0};
	KkcLanguageModelEntry _tmp4_ = {0};
	KkcLanguageModelEntry* _tmp5_ = NULL;
	g_return_val_if_fail (entry != NULL, NULL);
	self = (KkcUnigramTrellisNode*) kkc_trellis_node_construct (object_type);
	_tmp0_ = *entry;
	kkc_language_model_entry_copy (&_tmp0_, &_tmp1_);
	kkc_language_model_entry_destroy (&self->priv->_entry);
	self->priv->_entry = _tmp1_;
	_tmp2_ = endpos;
	self->priv->_endpos = _tmp2_;
	_tmp3_ = self->priv->_entry;
	kkc_language_model_entry_copy (&_tmp3_, &_tmp4_);
	_tmp5_ = g_new0 (KkcLanguageModelEntry, 1);
	_tmp5_[0] = _tmp4_;
	self->priv->_entries = (_vala_KkcLanguageModelEntry_array_free (self->priv->_entries, self->priv->_entries_length1), NULL);
	self->priv->_entries = _tmp5_;
	self->priv->_entries_length1 = 1;
	self->priv->__entries_size_ = self->priv->_entries_length1;
	return self;
}


KkcUnigramTrellisNode* kkc_unigram_trellis_node_new (KkcLanguageModelEntry* entry, guint endpos) {
	return kkc_unigram_trellis_node_construct (KKC_TYPE_UNIGRAM_TRELLIS_NODE, entry, endpos);
}


static gchar* kkc_unigram_trellis_node_real_to_string (KkcTrellisNode* base) {
	KkcUnigramTrellisNode * self;
	gchar* result = NULL;
	KkcLanguageModelEntry _tmp0_ = {0};
	const gchar* _tmp1_ = NULL;
	KkcLanguageModelEntry _tmp2_ = {0};
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	self = (KkcUnigramTrellisNode*) base;
	_tmp0_ = self->priv->_entry;
	_tmp1_ = _tmp0_.input;
	_tmp2_ = self->priv->_entry;
	_tmp3_ = _tmp2_.output;
	_tmp4_ = g_strdup_printf ("<%s/%s>", _tmp1_, _tmp3_);
	result = _tmp4_;
	return result;
}


void kkc_unigram_trellis_node_get_entry (KkcUnigramTrellisNode* self, KkcLanguageModelEntry* result) {
	KkcLanguageModelEntry _tmp0_ = {0};
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_entry;
	*result = _tmp0_;
	return;
}


static const gchar* kkc_unigram_trellis_node_real_get_input (KkcTrellisNode* base) {
	const gchar* result;
	KkcUnigramTrellisNode* self;
	KkcLanguageModelEntry _tmp0_ = {0};
	const gchar* _tmp1_ = NULL;
	self = (KkcUnigramTrellisNode*) base;
	_tmp0_ = self->priv->_entry;
	_tmp1_ = _tmp0_.input;
	result = _tmp1_;
	return result;
}


static const gchar* kkc_unigram_trellis_node_real_get_output (KkcTrellisNode* base) {
	const gchar* result;
	KkcUnigramTrellisNode* self;
	KkcLanguageModelEntry _tmp0_ = {0};
	const gchar* _tmp1_ = NULL;
	self = (KkcUnigramTrellisNode*) base;
	_tmp0_ = self->priv->_entry;
	_tmp1_ = _tmp0_.output;
	result = _tmp1_;
	return result;
}


static guint kkc_unigram_trellis_node_real_get_endpos (KkcTrellisNode* base) {
	guint result;
	KkcUnigramTrellisNode* self;
	guint _tmp0_ = 0U;
	self = (KkcUnigramTrellisNode*) base;
	_tmp0_ = self->priv->_endpos;
	result = _tmp0_;
	return result;
}


static guint kkc_unigram_trellis_node_real_get_length (KkcTrellisNode* base) {
	guint result;
	KkcUnigramTrellisNode* self;
	KkcLanguageModelEntry _tmp0_ = {0};
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	self = (KkcUnigramTrellisNode*) base;
	_tmp0_ = self->priv->_entry;
	_tmp1_ = _tmp0_.input;
	_tmp2_ = g_utf8_strlen (_tmp1_, (gssize) (-1));
	result = (guint) _tmp2_;
	return result;
}


static KkcLanguageModelEntry* kkc_unigram_trellis_node_real_get_entries (KkcTrellisNode* base, int* result_length1) {
	KkcLanguageModelEntry* result;
	KkcUnigramTrellisNode* self;
	KkcLanguageModelEntry* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	KkcLanguageModelEntry* _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	self = (KkcUnigramTrellisNode*) base;
	_tmp0_ = self->priv->_entries;
	_tmp0__length1 = self->priv->_entries_length1;
	_tmp1_ = _tmp0_;
	_tmp1__length1 = _tmp0__length1;
	if (result_length1) {
		*result_length1 = _tmp1__length1;
	}
	result = _tmp1_;
	return result;
}


static void kkc_unigram_trellis_node_class_init (KkcUnigramTrellisNodeClass * klass) {
	kkc_unigram_trellis_node_parent_class = g_type_class_peek_parent (klass);
	KKC_TRELLIS_NODE_CLASS (klass)->finalize = kkc_unigram_trellis_node_finalize;
	g_type_class_add_private (klass, sizeof (KkcUnigramTrellisNodePrivate));
	KKC_TRELLIS_NODE_CLASS (klass)->to_string = kkc_unigram_trellis_node_real_to_string;
	KKC_TRELLIS_NODE_CLASS (klass)->get_input = kkc_unigram_trellis_node_real_get_input;
	KKC_TRELLIS_NODE_CLASS (klass)->get_output = kkc_unigram_trellis_node_real_get_output;
	KKC_TRELLIS_NODE_CLASS (klass)->get_endpos = kkc_unigram_trellis_node_real_get_endpos;
	KKC_TRELLIS_NODE_CLASS (klass)->get_length = kkc_unigram_trellis_node_real_get_length;
	KKC_TRELLIS_NODE_CLASS (klass)->get_entries = kkc_unigram_trellis_node_real_get_entries;
}


static void kkc_unigram_trellis_node_instance_init (KkcUnigramTrellisNode * self) {
	self->priv = KKC_UNIGRAM_TRELLIS_NODE_GET_PRIVATE (self);
}


static void kkc_unigram_trellis_node_finalize (KkcTrellisNode* obj) {
	KkcUnigramTrellisNode * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_UNIGRAM_TRELLIS_NODE, KkcUnigramTrellisNode);
	kkc_language_model_entry_destroy (&self->priv->_entry);
	self->priv->_entries = (_vala_KkcLanguageModelEntry_array_free (self->priv->_entries, self->priv->_entries_length1), NULL);
	KKC_TRELLIS_NODE_CLASS (kkc_unigram_trellis_node_parent_class)->finalize (obj);
}


GType kkc_unigram_trellis_node_get_type (void) {
	static volatile gsize kkc_unigram_trellis_node_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_unigram_trellis_node_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcUnigramTrellisNodeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_unigram_trellis_node_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcUnigramTrellisNode), 0, (GInstanceInitFunc) kkc_unigram_trellis_node_instance_init, NULL };
		GType kkc_unigram_trellis_node_type_id;
		kkc_unigram_trellis_node_type_id = g_type_register_static (KKC_TYPE_TRELLIS_NODE, "KkcUnigramTrellisNode", &g_define_type_info, 0);
		g_once_init_leave (&kkc_unigram_trellis_node_type_id__volatile, kkc_unigram_trellis_node_type_id);
	}
	return kkc_unigram_trellis_node_type_id__volatile;
}


static gpointer _kkc_trellis_node_ref0 (gpointer self) {
	return self ? kkc_trellis_node_ref (self) : NULL;
}


KkcBigramTrellisNode* kkc_bigram_trellis_node_construct (GType object_type, KkcUnigramTrellisNode* left_node, KkcUnigramTrellisNode* right_node, guint endpos) {
	KkcBigramTrellisNode* self = NULL;
	KkcUnigramTrellisNode* _tmp0_ = NULL;
	KkcUnigramTrellisNode* _tmp1_ = NULL;
	KkcUnigramTrellisNode* _tmp2_ = NULL;
	KkcUnigramTrellisNode* _tmp3_ = NULL;
	guint _tmp4_ = 0U;
	guint _tmp5_ = 0U;
	KkcUnigramTrellisNode* _tmp6_ = NULL;
	guint _tmp7_ = 0U;
	guint _tmp8_ = 0U;
	KkcUnigramTrellisNode* _tmp37_ = NULL;
	KkcLanguageModelEntry _tmp38_ = {0};
	KkcLanguageModelEntry _tmp39_ = {0};
	KkcLanguageModelEntry _tmp40_ = {0};
	KkcUnigramTrellisNode* _tmp41_ = NULL;
	KkcLanguageModelEntry _tmp42_ = {0};
	KkcLanguageModelEntry _tmp43_ = {0};
	KkcLanguageModelEntry _tmp44_ = {0};
	KkcLanguageModelEntry* _tmp45_ = NULL;
	g_return_val_if_fail (left_node != NULL, NULL);
	g_return_val_if_fail (right_node != NULL, NULL);
	self = (KkcBigramTrellisNode*) kkc_trellis_node_construct (object_type);
	_tmp0_ = left_node;
	_tmp1_ = _kkc_trellis_node_ref0 (_tmp0_);
	_kkc_trellis_node_unref0 (self->priv->_left_node);
	self->priv->_left_node = _tmp1_;
	_tmp2_ = right_node;
	_tmp3_ = _kkc_trellis_node_ref0 (_tmp2_);
	_kkc_trellis_node_unref0 (self->priv->_right_node);
	self->priv->_right_node = _tmp3_;
	_tmp4_ = endpos;
	self->priv->_endpos = _tmp4_;
	_tmp5_ = self->priv->_endpos;
	_tmp6_ = self->priv->_right_node;
	_tmp7_ = kkc_trellis_node_get_endpos ((KkcTrellisNode*) _tmp6_);
	_tmp8_ = _tmp7_;
	if (_tmp5_ < _tmp8_) {
		KkcUnigramTrellisNode* _tmp9_ = NULL;
		KkcLanguageModelEntry _tmp10_ = {0};
		KkcLanguageModelEntry _tmp11_ = {0};
		const gchar* _tmp12_ = NULL;
		gchar* _tmp13_ = NULL;
		KkcUnigramTrellisNode* _tmp14_ = NULL;
		KkcLanguageModelEntry _tmp15_ = {0};
		KkcLanguageModelEntry _tmp16_ = {0};
		const gchar* _tmp17_ = NULL;
		gchar* _tmp18_ = NULL;
		_tmp9_ = self->priv->_left_node;
		kkc_unigram_trellis_node_get_entry (_tmp9_, &_tmp10_);
		_tmp11_ = _tmp10_;
		_tmp12_ = _tmp11_.input;
		_tmp13_ = g_strdup (_tmp12_);
		_g_free0 (self->priv->_input);
		self->priv->_input = _tmp13_;
		_tmp14_ = self->priv->_left_node;
		kkc_unigram_trellis_node_get_entry (_tmp14_, &_tmp15_);
		_tmp16_ = _tmp15_;
		_tmp17_ = _tmp16_.output;
		_tmp18_ = g_strdup (_tmp17_);
		_g_free0 (self->priv->_output);
		self->priv->_output = _tmp18_;
	} else {
		KkcUnigramTrellisNode* _tmp19_ = NULL;
		KkcLanguageModelEntry _tmp20_ = {0};
		KkcLanguageModelEntry _tmp21_ = {0};
		const gchar* _tmp22_ = NULL;
		KkcUnigramTrellisNode* _tmp23_ = NULL;
		KkcLanguageModelEntry _tmp24_ = {0};
		KkcLanguageModelEntry _tmp25_ = {0};
		const gchar* _tmp26_ = NULL;
		gchar* _tmp27_ = NULL;
		KkcUnigramTrellisNode* _tmp28_ = NULL;
		KkcLanguageModelEntry _tmp29_ = {0};
		KkcLanguageModelEntry _tmp30_ = {0};
		const gchar* _tmp31_ = NULL;
		KkcUnigramTrellisNode* _tmp32_ = NULL;
		KkcLanguageModelEntry _tmp33_ = {0};
		KkcLanguageModelEntry _tmp34_ = {0};
		const gchar* _tmp35_ = NULL;
		gchar* _tmp36_ = NULL;
		_tmp19_ = self->priv->_left_node;
		kkc_unigram_trellis_node_get_entry (_tmp19_, &_tmp20_);
		_tmp21_ = _tmp20_;
		_tmp22_ = _tmp21_.input;
		_tmp23_ = self->priv->_right_node;
		kkc_unigram_trellis_node_get_entry (_tmp23_, &_tmp24_);
		_tmp25_ = _tmp24_;
		_tmp26_ = _tmp25_.input;
		_tmp27_ = g_strconcat (_tmp22_, _tmp26_, NULL);
		_g_free0 (self->priv->_input);
		self->priv->_input = _tmp27_;
		_tmp28_ = self->priv->_left_node;
		kkc_unigram_trellis_node_get_entry (_tmp28_, &_tmp29_);
		_tmp30_ = _tmp29_;
		_tmp31_ = _tmp30_.output;
		_tmp32_ = self->priv->_right_node;
		kkc_unigram_trellis_node_get_entry (_tmp32_, &_tmp33_);
		_tmp34_ = _tmp33_;
		_tmp35_ = _tmp34_.output;
		_tmp36_ = g_strconcat (_tmp31_, _tmp35_, NULL);
		_g_free0 (self->priv->_output);
		self->priv->_output = _tmp36_;
	}
	_tmp37_ = left_node;
	kkc_unigram_trellis_node_get_entry (_tmp37_, &_tmp38_);
	_tmp39_ = _tmp38_;
	kkc_language_model_entry_copy (&_tmp39_, &_tmp40_);
	_tmp41_ = right_node;
	kkc_unigram_trellis_node_get_entry (_tmp41_, &_tmp42_);
	_tmp43_ = _tmp42_;
	kkc_language_model_entry_copy (&_tmp43_, &_tmp44_);
	_tmp45_ = g_new0 (KkcLanguageModelEntry, 2);
	_tmp45_[0] = _tmp40_;
	_tmp45_[1] = _tmp44_;
	self->priv->_entries = (_vala_KkcLanguageModelEntry_array_free (self->priv->_entries, self->priv->_entries_length1), NULL);
	self->priv->_entries = _tmp45_;
	self->priv->_entries_length1 = 2;
	self->priv->__entries_size_ = self->priv->_entries_length1;
	return self;
}


KkcBigramTrellisNode* kkc_bigram_trellis_node_new (KkcUnigramTrellisNode* left_node, KkcUnigramTrellisNode* right_node, guint endpos) {
	return kkc_bigram_trellis_node_construct (KKC_TYPE_BIGRAM_TRELLIS_NODE, left_node, right_node, endpos);
}


static gchar* kkc_bigram_trellis_node_real_to_string (KkcTrellisNode* base) {
	KkcBigramTrellisNode * self;
	gchar* result = NULL;
	KkcUnigramTrellisNode* _tmp0_ = NULL;
	KkcLanguageModelEntry _tmp1_ = {0};
	KkcLanguageModelEntry _tmp2_ = {0};
	const gchar* _tmp3_ = NULL;
	KkcUnigramTrellisNode* _tmp4_ = NULL;
	KkcLanguageModelEntry _tmp5_ = {0};
	KkcLanguageModelEntry _tmp6_ = {0};
	const gchar* _tmp7_ = NULL;
	KkcUnigramTrellisNode* _tmp8_ = NULL;
	KkcLanguageModelEntry _tmp9_ = {0};
	KkcLanguageModelEntry _tmp10_ = {0};
	const gchar* _tmp11_ = NULL;
	KkcUnigramTrellisNode* _tmp12_ = NULL;
	KkcLanguageModelEntry _tmp13_ = {0};
	KkcLanguageModelEntry _tmp14_ = {0};
	const gchar* _tmp15_ = NULL;
	gchar* _tmp16_ = NULL;
	self = (KkcBigramTrellisNode*) base;
	_tmp0_ = self->priv->_left_node;
	kkc_unigram_trellis_node_get_entry (_tmp0_, &_tmp1_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_.input;
	_tmp4_ = self->priv->_left_node;
	kkc_unigram_trellis_node_get_entry (_tmp4_, &_tmp5_);
	_tmp6_ = _tmp5_;
	_tmp7_ = _tmp6_.output;
	_tmp8_ = self->priv->_right_node;
	kkc_unigram_trellis_node_get_entry (_tmp8_, &_tmp9_);
	_tmp10_ = _tmp9_;
	_tmp11_ = _tmp10_.input;
	_tmp12_ = self->priv->_right_node;
	kkc_unigram_trellis_node_get_entry (_tmp12_, &_tmp13_);
	_tmp14_ = _tmp13_;
	_tmp15_ = _tmp14_.output;
	_tmp16_ = g_strdup_printf ("<%s/%s><%s/%s>", _tmp3_, _tmp7_, _tmp11_, _tmp15_);
	result = _tmp16_;
	return result;
}


KkcUnigramTrellisNode* kkc_bigram_trellis_node_get_left_node (KkcBigramTrellisNode* self) {
	KkcUnigramTrellisNode* result;
	KkcUnigramTrellisNode* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_left_node;
	result = _tmp0_;
	return result;
}


KkcUnigramTrellisNode* kkc_bigram_trellis_node_get_right_node (KkcBigramTrellisNode* self) {
	KkcUnigramTrellisNode* result;
	KkcUnigramTrellisNode* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_right_node;
	result = _tmp0_;
	return result;
}


static const gchar* kkc_bigram_trellis_node_real_get_input (KkcTrellisNode* base) {
	const gchar* result;
	KkcBigramTrellisNode* self;
	const gchar* _tmp0_ = NULL;
	self = (KkcBigramTrellisNode*) base;
	_tmp0_ = self->priv->_input;
	result = _tmp0_;
	return result;
}


static const gchar* kkc_bigram_trellis_node_real_get_output (KkcTrellisNode* base) {
	const gchar* result;
	KkcBigramTrellisNode* self;
	const gchar* _tmp0_ = NULL;
	self = (KkcBigramTrellisNode*) base;
	_tmp0_ = self->priv->_output;
	result = _tmp0_;
	return result;
}


static guint kkc_bigram_trellis_node_real_get_endpos (KkcTrellisNode* base) {
	guint result;
	KkcBigramTrellisNode* self;
	guint _tmp0_ = 0U;
	self = (KkcBigramTrellisNode*) base;
	_tmp0_ = self->priv->_endpos;
	result = _tmp0_;
	return result;
}


static guint kkc_bigram_trellis_node_real_get_length (KkcTrellisNode* base) {
	guint result;
	KkcBigramTrellisNode* self;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	self = (KkcBigramTrellisNode*) base;
	_tmp0_ = kkc_trellis_node_get_input ((KkcTrellisNode*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_utf8_strlen (_tmp1_, (gssize) (-1));
	result = (guint) _tmp2_;
	return result;
}


static KkcLanguageModelEntry* kkc_bigram_trellis_node_real_get_entries (KkcTrellisNode* base, int* result_length1) {
	KkcLanguageModelEntry* result;
	KkcBigramTrellisNode* self;
	KkcLanguageModelEntry* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	KkcLanguageModelEntry* _tmp1_ = NULL;
	gint _tmp1__length1 = 0;
	self = (KkcBigramTrellisNode*) base;
	_tmp0_ = self->priv->_entries;
	_tmp0__length1 = self->priv->_entries_length1;
	_tmp1_ = _tmp0_;
	_tmp1__length1 = _tmp0__length1;
	if (result_length1) {
		*result_length1 = _tmp1__length1;
	}
	result = _tmp1_;
	return result;
}


static void kkc_bigram_trellis_node_class_init (KkcBigramTrellisNodeClass * klass) {
	kkc_bigram_trellis_node_parent_class = g_type_class_peek_parent (klass);
	KKC_TRELLIS_NODE_CLASS (klass)->finalize = kkc_bigram_trellis_node_finalize;
	g_type_class_add_private (klass, sizeof (KkcBigramTrellisNodePrivate));
	KKC_TRELLIS_NODE_CLASS (klass)->to_string = kkc_bigram_trellis_node_real_to_string;
	KKC_TRELLIS_NODE_CLASS (klass)->get_input = kkc_bigram_trellis_node_real_get_input;
	KKC_TRELLIS_NODE_CLASS (klass)->get_output = kkc_bigram_trellis_node_real_get_output;
	KKC_TRELLIS_NODE_CLASS (klass)->get_endpos = kkc_bigram_trellis_node_real_get_endpos;
	KKC_TRELLIS_NODE_CLASS (klass)->get_length = kkc_bigram_trellis_node_real_get_length;
	KKC_TRELLIS_NODE_CLASS (klass)->get_entries = kkc_bigram_trellis_node_real_get_entries;
}


static void kkc_bigram_trellis_node_instance_init (KkcBigramTrellisNode * self) {
	self->priv = KKC_BIGRAM_TRELLIS_NODE_GET_PRIVATE (self);
}


static void kkc_bigram_trellis_node_finalize (KkcTrellisNode* obj) {
	KkcBigramTrellisNode * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_BIGRAM_TRELLIS_NODE, KkcBigramTrellisNode);
	_kkc_trellis_node_unref0 (self->priv->_left_node);
	_kkc_trellis_node_unref0 (self->priv->_right_node);
	_g_free0 (self->priv->_input);
	_g_free0 (self->priv->_output);
	self->priv->_entries = (_vala_KkcLanguageModelEntry_array_free (self->priv->_entries, self->priv->_entries_length1), NULL);
	KKC_TRELLIS_NODE_CLASS (kkc_bigram_trellis_node_parent_class)->finalize (obj);
}


GType kkc_bigram_trellis_node_get_type (void) {
	static volatile gsize kkc_bigram_trellis_node_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_bigram_trellis_node_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcBigramTrellisNodeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_bigram_trellis_node_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcBigramTrellisNode), 0, (GInstanceInitFunc) kkc_bigram_trellis_node_instance_init, NULL };
		GType kkc_bigram_trellis_node_type_id;
		kkc_bigram_trellis_node_type_id = g_type_register_static (KKC_TYPE_TRELLIS_NODE, "KkcBigramTrellisNode", &g_define_type_info, 0);
		g_once_init_leave (&kkc_bigram_trellis_node_type_id__volatile, kkc_bigram_trellis_node_type_id);
	}
	return kkc_bigram_trellis_node_type_id__volatile;
}



