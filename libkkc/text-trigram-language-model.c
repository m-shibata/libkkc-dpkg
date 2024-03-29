/* text-trigram-language-model.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from text-trigram-language-model.vala, do not modify */

/*
 * Copyright (C) 2012-2014 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2012-2014 Red Hat, Inc.
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
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <float.h>
#include <math.h>


#define KKC_TYPE_LANGUAGE_MODEL (kkc_language_model_get_type ())
#define KKC_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_LANGUAGE_MODEL, KkcLanguageModel))
#define KKC_LANGUAGE_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_LANGUAGE_MODEL, KkcLanguageModelClass))
#define KKC_IS_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_LANGUAGE_MODEL))
#define KKC_IS_LANGUAGE_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_LANGUAGE_MODEL))
#define KKC_LANGUAGE_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_LANGUAGE_MODEL, KkcLanguageModelClass))

typedef struct _KkcLanguageModel KkcLanguageModel;
typedef struct _KkcLanguageModelClass KkcLanguageModelClass;
typedef struct _KkcLanguageModelPrivate KkcLanguageModelPrivate;

#define KKC_TYPE_LANGUAGE_MODEL_ENTRY (kkc_language_model_entry_get_type ())
typedef struct _KkcLanguageModelEntry KkcLanguageModelEntry;

#define KKC_TYPE_UNIGRAM_LANGUAGE_MODEL (kkc_unigram_language_model_get_type ())
#define KKC_UNIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_UNIGRAM_LANGUAGE_MODEL, KkcUnigramLanguageModel))
#define KKC_IS_UNIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_UNIGRAM_LANGUAGE_MODEL))
#define KKC_UNIGRAM_LANGUAGE_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_UNIGRAM_LANGUAGE_MODEL, KkcUnigramLanguageModelIface))

typedef struct _KkcUnigramLanguageModel KkcUnigramLanguageModel;
typedef struct _KkcUnigramLanguageModelIface KkcUnigramLanguageModelIface;

#define KKC_TYPE_BIGRAM_LANGUAGE_MODEL (kkc_bigram_language_model_get_type ())
#define KKC_BIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_BIGRAM_LANGUAGE_MODEL, KkcBigramLanguageModel))
#define KKC_IS_BIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_BIGRAM_LANGUAGE_MODEL))
#define KKC_BIGRAM_LANGUAGE_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_BIGRAM_LANGUAGE_MODEL, KkcBigramLanguageModelIface))

typedef struct _KkcBigramLanguageModel KkcBigramLanguageModel;
typedef struct _KkcBigramLanguageModelIface KkcBigramLanguageModelIface;

#define KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL (kkc_text_bigram_language_model_get_type ())
#define KKC_TEXT_BIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL, KkcTextBigramLanguageModel))
#define KKC_TEXT_BIGRAM_LANGUAGE_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL, KkcTextBigramLanguageModelClass))
#define KKC_IS_TEXT_BIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL))
#define KKC_IS_TEXT_BIGRAM_LANGUAGE_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL))
#define KKC_TEXT_BIGRAM_LANGUAGE_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL, KkcTextBigramLanguageModelClass))

typedef struct _KkcTextBigramLanguageModel KkcTextBigramLanguageModel;
typedef struct _KkcTextBigramLanguageModelClass KkcTextBigramLanguageModelClass;
typedef struct _KkcTextBigramLanguageModelPrivate KkcTextBigramLanguageModelPrivate;

#define KKC_TYPE_TRIGRAM_LANGUAGE_MODEL (kkc_trigram_language_model_get_type ())
#define KKC_TRIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TRIGRAM_LANGUAGE_MODEL, KkcTrigramLanguageModel))
#define KKC_IS_TRIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TRIGRAM_LANGUAGE_MODEL))
#define KKC_TRIGRAM_LANGUAGE_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_TRIGRAM_LANGUAGE_MODEL, KkcTrigramLanguageModelIface))

typedef struct _KkcTrigramLanguageModel KkcTrigramLanguageModel;
typedef struct _KkcTrigramLanguageModelIface KkcTrigramLanguageModelIface;

#define KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL (kkc_text_trigram_language_model_get_type ())
#define KKC_TEXT_TRIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL, KkcTextTrigramLanguageModel))
#define KKC_TEXT_TRIGRAM_LANGUAGE_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL, KkcTextTrigramLanguageModelClass))
#define KKC_IS_TEXT_TRIGRAM_LANGUAGE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL))
#define KKC_IS_TEXT_TRIGRAM_LANGUAGE_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL))
#define KKC_TEXT_TRIGRAM_LANGUAGE_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL, KkcTextTrigramLanguageModelClass))

typedef struct _KkcTextTrigramLanguageModel KkcTextTrigramLanguageModel;
typedef struct _KkcTextTrigramLanguageModelClass KkcTextTrigramLanguageModelClass;
typedef struct _KkcTextTrigramLanguageModelPrivate KkcTextTrigramLanguageModelPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

#define KKC_TYPE_METADATA_FILE (kkc_metadata_file_get_type ())
#define KKC_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFile))
#define KKC_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))
#define KKC_IS_METADATA_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_METADATA_FILE))
#define KKC_IS_METADATA_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_METADATA_FILE))
#define KKC_METADATA_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_METADATA_FILE, KkcMetadataFileClass))

typedef struct _KkcMetadataFile KkcMetadataFile;
typedef struct _KkcMetadataFileClass KkcMetadataFileClass;

#define KKC_TYPE_LANGUAGE_MODEL_METADATA (kkc_language_model_metadata_get_type ())
#define KKC_LANGUAGE_MODEL_METADATA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_LANGUAGE_MODEL_METADATA, KkcLanguageModelMetadata))
#define KKC_LANGUAGE_MODEL_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_LANGUAGE_MODEL_METADATA, KkcLanguageModelMetadataClass))
#define KKC_IS_LANGUAGE_MODEL_METADATA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_LANGUAGE_MODEL_METADATA))
#define KKC_IS_LANGUAGE_MODEL_METADATA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_LANGUAGE_MODEL_METADATA))
#define KKC_LANGUAGE_MODEL_METADATA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_LANGUAGE_MODEL_METADATA, KkcLanguageModelMetadataClass))

typedef struct _KkcLanguageModelMetadata KkcLanguageModelMetadata;
typedef struct _KkcLanguageModelMetadataClass KkcLanguageModelMetadataClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _KkcLanguageModelEntry {
	gchar* input;
	gchar* output;
	guint id;
};

struct _KkcLanguageModel {
	GObject parent_instance;
	KkcLanguageModelPrivate * priv;
};

struct _KkcLanguageModelClass {
	GObjectClass parent_class;
	GeeCollection* (*unigram_entries) (KkcLanguageModel* self, const gchar* input);
	GeeCollection* (*entries) (KkcLanguageModel* self, const gchar* input);
	KkcLanguageModelEntry* (*get) (KkcLanguageModel* self, const gchar* input, const gchar* output);
	gboolean (*parse) (KkcLanguageModel* self, GError** error);
	void (*get_bos) (KkcLanguageModel* self, KkcLanguageModelEntry* result);
	void (*get_eos) (KkcLanguageModel* self, KkcLanguageModelEntry* result);
};

struct _KkcUnigramLanguageModelIface {
	GTypeInterface parent_iface;
	gdouble (*unigram_cost) (KkcUnigramLanguageModel* self, KkcLanguageModelEntry* entry);
	gdouble (*unigram_backoff) (KkcUnigramLanguageModel* self, KkcLanguageModelEntry* entry);
};

struct _KkcBigramLanguageModelIface {
	GTypeInterface parent_iface;
	gboolean (*has_bigram) (KkcBigramLanguageModel* self, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
	gdouble (*bigram_cost) (KkcBigramLanguageModel* self, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
	gdouble (*bigram_backoff) (KkcBigramLanguageModel* self, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
};

struct _KkcTextBigramLanguageModel {
	KkcLanguageModel parent_instance;
	KkcTextBigramLanguageModelPrivate * priv;
	GeeMap* input_map;
	GeeMap* cost_map;
	GeeMap* backoff_map;
	GeeMap* id_map;
};

struct _KkcTextBigramLanguageModelClass {
	KkcLanguageModelClass parent_class;
};

struct _KkcTrigramLanguageModelIface {
	GTypeInterface parent_iface;
	gboolean (*has_trigram) (KkcTrigramLanguageModel* self, KkcLanguageModelEntry* ppentry, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
	gdouble (*trigram_cost) (KkcTrigramLanguageModel* self, KkcLanguageModelEntry* ppentry, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
};

struct _KkcTextTrigramLanguageModel {
	KkcTextBigramLanguageModel parent_instance;
	KkcTextTrigramLanguageModelPrivate * priv;
};

struct _KkcTextTrigramLanguageModelClass {
	KkcTextBigramLanguageModelClass parent_class;
};


static gpointer kkc_text_trigram_language_model_parent_class = NULL;
static KkcTrigramLanguageModelIface* kkc_text_trigram_language_model_kkc_trigram_language_model_parent_iface = NULL;

GType kkc_language_model_get_type (void) G_GNUC_CONST;
GType kkc_language_model_entry_get_type (void) G_GNUC_CONST;
KkcLanguageModelEntry* kkc_language_model_entry_dup (const KkcLanguageModelEntry* self);
void kkc_language_model_entry_free (KkcLanguageModelEntry* self);
void kkc_language_model_entry_copy (const KkcLanguageModelEntry* self, KkcLanguageModelEntry* dest);
void kkc_language_model_entry_destroy (KkcLanguageModelEntry* self);
GType kkc_unigram_language_model_get_type (void) G_GNUC_CONST;
GType kkc_bigram_language_model_get_type (void) G_GNUC_CONST;
GType kkc_text_bigram_language_model_get_type (void) G_GNUC_CONST;
GType kkc_trigram_language_model_get_type (void) G_GNUC_CONST;
GType kkc_text_trigram_language_model_get_type (void) G_GNUC_CONST;
enum  {
	KKC_TEXT_TRIGRAM_LANGUAGE_MODEL_DUMMY_PROPERTY
};
static gboolean kkc_text_trigram_language_model_real_has_trigram (KkcTrigramLanguageModel* base, KkcLanguageModelEntry* ppentry, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
gchar* kkc_text_bigram_language_model_get_key (KkcTextBigramLanguageModel* self, guint* ids, int ids_length1);
static gdouble kkc_text_trigram_language_model_real_trigram_cost (KkcTrigramLanguageModel* base, KkcLanguageModelEntry* ppentry, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry);
GType kkc_metadata_file_get_type (void) G_GNUC_CONST;
GType kkc_language_model_metadata_get_type (void) G_GNUC_CONST;
KkcTextTrigramLanguageModel* kkc_text_trigram_language_model_new (KkcLanguageModelMetadata* metadata, GError** error);
KkcTextTrigramLanguageModel* kkc_text_trigram_language_model_construct (GType object_type, KkcLanguageModelMetadata* metadata, GError** error);
KkcTextBigramLanguageModel* kkc_text_bigram_language_model_new (KkcLanguageModelMetadata* metadata, GError** error);
KkcTextBigramLanguageModel* kkc_text_bigram_language_model_construct (GType object_type, KkcLanguageModelMetadata* metadata, GError** error);


static gboolean kkc_text_trigram_language_model_real_has_trigram (KkcTrigramLanguageModel* base, KkcLanguageModelEntry* ppentry, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry) {
	KkcTextTrigramLanguageModel * self;
	gboolean result = FALSE;
	gchar* key = NULL;
	KkcLanguageModelEntry _tmp0_ = {0};
	guint _tmp1_ = 0U;
	KkcLanguageModelEntry _tmp2_ = {0};
	guint _tmp3_ = 0U;
	KkcLanguageModelEntry _tmp4_ = {0};
	guint _tmp5_ = 0U;
	guint* _tmp6_ = NULL;
	guint* _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	GeeMap* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	self = (KkcTextTrigramLanguageModel*) base;
	g_return_val_if_fail (ppentry != NULL, FALSE);
	g_return_val_if_fail (pentry != NULL, FALSE);
	g_return_val_if_fail (entry != NULL, FALSE);
	_tmp0_ = *ppentry;
	_tmp1_ = _tmp0_.id;
	_tmp2_ = *pentry;
	_tmp3_ = _tmp2_.id;
	_tmp4_ = *entry;
	_tmp5_ = _tmp4_.id;
	_tmp6_ = g_new0 (guint, 3);
	_tmp6_[0] = _tmp1_;
	_tmp6_[1] = _tmp3_;
	_tmp6_[2] = _tmp5_;
	_tmp7_ = _tmp6_;
	_tmp7__length1 = 3;
	_tmp8_ = kkc_text_bigram_language_model_get_key ((KkcTextBigramLanguageModel*) self, _tmp7_, 3);
	_tmp9_ = _tmp8_;
	_tmp7_ = (g_free (_tmp7_), NULL);
	key = _tmp9_;
	_tmp10_ = ((KkcTextBigramLanguageModel*) self)->cost_map;
	_tmp11_ = gee_map_has_key (_tmp10_, key);
	result = _tmp11_;
	_g_free0 (key);
	return result;
}


static gdouble kkc_text_trigram_language_model_real_trigram_cost (KkcTrigramLanguageModel* base, KkcLanguageModelEntry* ppentry, KkcLanguageModelEntry* pentry, KkcLanguageModelEntry* entry) {
	KkcTextTrigramLanguageModel * self;
	gdouble result = 0.0;
	gchar* key = NULL;
	KkcLanguageModelEntry _tmp0_ = {0};
	guint _tmp1_ = 0U;
	KkcLanguageModelEntry _tmp2_ = {0};
	guint _tmp3_ = 0U;
	KkcLanguageModelEntry _tmp4_ = {0};
	guint _tmp5_ = 0U;
	guint* _tmp6_ = NULL;
	guint* _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	GeeMap* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	gboolean _tmp12_ = FALSE;
	self = (KkcTextTrigramLanguageModel*) base;
	g_return_val_if_fail (ppentry != NULL, 0.0);
	g_return_val_if_fail (pentry != NULL, 0.0);
	g_return_val_if_fail (entry != NULL, 0.0);
	_tmp0_ = *ppentry;
	_tmp1_ = _tmp0_.id;
	_tmp2_ = *pentry;
	_tmp3_ = _tmp2_.id;
	_tmp4_ = *entry;
	_tmp5_ = _tmp4_.id;
	_tmp6_ = g_new0 (guint, 3);
	_tmp6_[0] = _tmp1_;
	_tmp6_[1] = _tmp3_;
	_tmp6_[2] = _tmp5_;
	_tmp7_ = _tmp6_;
	_tmp7__length1 = 3;
	_tmp8_ = kkc_text_bigram_language_model_get_key ((KkcTextBigramLanguageModel*) self, _tmp7_, 3);
	_tmp9_ = _tmp8_;
	_tmp7_ = (g_free (_tmp7_), NULL);
	key = _tmp9_;
	_tmp10_ = ((KkcTextBigramLanguageModel*) self)->cost_map;
	_tmp11_ = key;
	_tmp12_ = gee_map_has_key (_tmp10_, _tmp11_);
	if (_tmp12_) {
		GeeMap* _tmp13_ = NULL;
		const gchar* _tmp14_ = NULL;
		gpointer _tmp15_ = NULL;
		gdouble* _tmp16_ = NULL;
		gdouble _tmp17_ = 0.0;
		_tmp13_ = ((KkcTextBigramLanguageModel*) self)->cost_map;
		_tmp14_ = key;
		_tmp15_ = gee_map_get (_tmp13_, _tmp14_);
		_tmp16_ = (gdouble*) _tmp15_;
		_tmp17_ = *_tmp16_;
		_g_free0 (_tmp16_);
		result = _tmp17_;
		_g_free0 (key);
		return result;
	}
	result = (gdouble) 0;
	_g_free0 (key);
	return result;
}


KkcTextTrigramLanguageModel* kkc_text_trigram_language_model_construct (GType object_type, KkcLanguageModelMetadata* metadata, GError** error) {
	KkcTextTrigramLanguageModel * self = NULL;
	KkcLanguageModelMetadata* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (metadata != NULL, NULL);
	_tmp0_ = metadata;
	self = (KkcTextTrigramLanguageModel*) kkc_text_bigram_language_model_construct (object_type, _tmp0_, &_inner_error_);
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	return self;
}


KkcTextTrigramLanguageModel* kkc_text_trigram_language_model_new (KkcLanguageModelMetadata* metadata, GError** error) {
	return kkc_text_trigram_language_model_construct (KKC_TYPE_TEXT_TRIGRAM_LANGUAGE_MODEL, metadata, error);
}


static void kkc_text_trigram_language_model_class_init (KkcTextTrigramLanguageModelClass * klass) {
	kkc_text_trigram_language_model_parent_class = g_type_class_peek_parent (klass);
}


static void kkc_text_trigram_language_model_kkc_trigram_language_model_interface_init (KkcTrigramLanguageModelIface * iface) {
	kkc_text_trigram_language_model_kkc_trigram_language_model_parent_iface = g_type_interface_peek_parent (iface);
	iface->has_trigram = (gboolean (*)(KkcTrigramLanguageModel*, KkcLanguageModelEntry*, KkcLanguageModelEntry*, KkcLanguageModelEntry*)) kkc_text_trigram_language_model_real_has_trigram;
	iface->trigram_cost = (gdouble (*)(KkcTrigramLanguageModel*, KkcLanguageModelEntry*, KkcLanguageModelEntry*, KkcLanguageModelEntry*)) kkc_text_trigram_language_model_real_trigram_cost;
}


static void kkc_text_trigram_language_model_instance_init (KkcTextTrigramLanguageModel * self) {
}


GType kkc_text_trigram_language_model_get_type (void) {
	static volatile gsize kkc_text_trigram_language_model_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_text_trigram_language_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcTextTrigramLanguageModelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_text_trigram_language_model_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcTextTrigramLanguageModel), 0, (GInstanceInitFunc) kkc_text_trigram_language_model_instance_init, NULL };
		static const GInterfaceInfo kkc_trigram_language_model_info = { (GInterfaceInitFunc) kkc_text_trigram_language_model_kkc_trigram_language_model_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType kkc_text_trigram_language_model_type_id;
		kkc_text_trigram_language_model_type_id = g_type_register_static (KKC_TYPE_TEXT_BIGRAM_LANGUAGE_MODEL, "KkcTextTrigramLanguageModel", &g_define_type_info, 0);
		g_type_add_interface_static (kkc_text_trigram_language_model_type_id, KKC_TYPE_TRIGRAM_LANGUAGE_MODEL, &kkc_trigram_language_model_info);
		g_once_init_leave (&kkc_text_trigram_language_model_type_id__volatile, kkc_text_trigram_language_model_type_id);
	}
	return kkc_text_trigram_language_model_type_id__volatile;
}



