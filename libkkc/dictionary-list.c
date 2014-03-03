/* dictionary-list.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from dictionary-list.vala, do not modify */

/*
 * Copyright (C) 2011-2013 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2011-2013 Red Hat, Inc.
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
#include <gee.h>


#define KKC_TYPE_DICTIONARY_CALLBACK_RETURN (kkc_dictionary_callback_return_get_type ())

#define KKC_TYPE_DICTIONARY_LIST (kkc_dictionary_list_get_type ())
#define KKC_DICTIONARY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY_LIST, KkcDictionaryList))
#define KKC_DICTIONARY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_DICTIONARY_LIST, KkcDictionaryListClass))
#define KKC_IS_DICTIONARY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY_LIST))
#define KKC_IS_DICTIONARY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_DICTIONARY_LIST))
#define KKC_DICTIONARY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_DICTIONARY_LIST, KkcDictionaryListClass))

typedef struct _KkcDictionaryList KkcDictionaryList;
typedef struct _KkcDictionaryListClass KkcDictionaryListClass;
typedef struct _KkcDictionaryListPrivate KkcDictionaryListPrivate;

#define KKC_TYPE_DICTIONARY (kkc_dictionary_get_type ())
#define KKC_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_DICTIONARY, KkcDictionary))
#define KKC_IS_DICTIONARY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_DICTIONARY))
#define KKC_DICTIONARY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_DICTIONARY, KkcDictionaryIface))

typedef struct _KkcDictionary KkcDictionary;
typedef struct _KkcDictionaryIface KkcDictionaryIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

typedef enum  {
	KKC_DICTIONARY_CALLBACK_RETURN_CONTINUE,
	KKC_DICTIONARY_CALLBACK_RETURN_REMOVE
} KkcDictionaryCallbackReturn;

struct _KkcDictionaryList {
	GObject parent_instance;
	KkcDictionaryListPrivate * priv;
};

struct _KkcDictionaryListClass {
	GObjectClass parent_class;
};

struct _KkcDictionaryIface {
	GTypeInterface parent_iface;
	void (*reload) (KkcDictionary* self, GError** error);
	void (*save) (KkcDictionary* self, GError** error);
};

struct _KkcDictionaryListPrivate {
	GeeList* dictionaries;
};

typedef KkcDictionaryCallbackReturn (*KkcDictionaryListDictionaryCallback) (KkcDictionary* dictionary, void* user_data);

static gpointer kkc_dictionary_list_parent_class = NULL;

GType kkc_dictionary_callback_return_get_type (void) G_GNUC_CONST;
GType kkc_dictionary_list_get_type (void) G_GNUC_CONST;
GType kkc_dictionary_get_type (void) G_GNUC_CONST;
#define KKC_DICTIONARY_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_DICTIONARY_LIST, KkcDictionaryListPrivate))
enum  {
	KKC_DICTIONARY_LIST_DUMMY_PROPERTY,
	KKC_DICTIONARY_LIST_SIZE
};
void kkc_dictionary_list_add (KkcDictionaryList* self, KkcDictionary* dictionary);
void kkc_dictionary_list_remove (KkcDictionaryList* self, KkcDictionary* dictionary);
void kkc_dictionary_list_clear (KkcDictionaryList* self);
void kkc_dictionary_list_call (KkcDictionaryList* self, GType* type, KkcDictionaryListDictionaryCallback callback, void* callback_target);
void kkc_dictionary_list_save (KkcDictionaryList* self);
static KkcDictionaryCallbackReturn __lambda5_ (KkcDictionaryList* self, KkcDictionary* dictionary);
void kkc_dictionary_save (KkcDictionary* self, GError** error);
static KkcDictionaryCallbackReturn ___lambda5__kkc_dictionary_list_dictionary_callback (KkcDictionary* dictionary, gpointer self);
KkcDictionaryList* kkc_dictionary_list_new (void);
KkcDictionaryList* kkc_dictionary_list_construct (GType object_type);
gint kkc_dictionary_list_get_size (KkcDictionaryList* self);
static void kkc_dictionary_list_finalize (GObject* obj);
static void _vala_kkc_dictionary_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);


/**
     * Type to specify how a dictionary callback is handled.
     */
GType kkc_dictionary_callback_return_get_type (void) {
	static volatile gsize kkc_dictionary_callback_return_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_dictionary_callback_return_type_id__volatile)) {
		static const GEnumValue values[] = {{KKC_DICTIONARY_CALLBACK_RETURN_CONTINUE, "KKC_DICTIONARY_CALLBACK_RETURN_CONTINUE", "continue"}, {KKC_DICTIONARY_CALLBACK_RETURN_REMOVE, "KKC_DICTIONARY_CALLBACK_RETURN_REMOVE", "remove"}, {0, NULL, NULL}};
		GType kkc_dictionary_callback_return_type_id;
		kkc_dictionary_callback_return_type_id = g_enum_register_static ("KkcDictionaryCallbackReturn", values);
		g_once_init_leave (&kkc_dictionary_callback_return_type_id__volatile, kkc_dictionary_callback_return_type_id);
	}
	return kkc_dictionary_callback_return_type_id__volatile;
}


/**
         * Register dictionary.
         *
         * @param dictionary a dictionary
         */
void kkc_dictionary_list_add (KkcDictionaryList* self, KkcDictionary* dictionary) {
	GeeList* _tmp0_ = NULL;
	KkcDictionary* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (dictionary != NULL);
	_tmp0_ = self->priv->dictionaries;
	_tmp1_ = dictionary;
	gee_collection_add ((GeeCollection*) _tmp0_, _tmp1_);
}


/**
         * Unregister dictionary.
         *
         * @param dictionary a dictionary
         */
void kkc_dictionary_list_remove (KkcDictionaryList* self, KkcDictionary* dictionary) {
	GeeList* _tmp0_ = NULL;
	KkcDictionary* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (dictionary != NULL);
	_tmp0_ = self->priv->dictionaries;
	_tmp1_ = dictionary;
	gee_collection_remove ((GeeCollection*) _tmp0_, _tmp1_);
}


/**
         * Remove all dictionaries.
         */
void kkc_dictionary_list_clear (KkcDictionaryList* self) {
	GeeList* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->dictionaries;
	gee_collection_clear ((GeeCollection*) _tmp0_);
}


/**
         * Call function with dictionaries.
         *
         * @param type type of dictionary
         * @param callback callback
         */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void kkc_dictionary_list_call (KkcDictionaryList* self, GType* type, KkcDictionaryListDictionaryCallback callback, void* callback_target) {
	g_return_if_fail (self != NULL);
	{
		GeeList* _dictionary_list = NULL;
		GeeList* _tmp0_ = NULL;
		GeeList* _tmp1_ = NULL;
		gint _dictionary_size = 0;
		GeeList* _tmp2_ = NULL;
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		gint _dictionary_index = 0;
		_tmp0_ = self->priv->dictionaries;
		_tmp1_ = _g_object_ref0 (_tmp0_);
		_dictionary_list = _tmp1_;
		_tmp2_ = _dictionary_list;
		_tmp3_ = gee_collection_get_size ((GeeCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_dictionary_size = _tmp4_;
		_dictionary_index = -1;
		while (TRUE) {
			gint _tmp5_ = 0;
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			KkcDictionary* dictionary = NULL;
			GeeList* _tmp8_ = NULL;
			gint _tmp9_ = 0;
			gpointer _tmp10_ = NULL;
			gboolean _tmp11_ = FALSE;
			gboolean _tmp12_ = FALSE;
			GType* _tmp13_ = NULL;
			gboolean _tmp18_ = FALSE;
			gboolean _tmp22_ = FALSE;
			_tmp5_ = _dictionary_index;
			_dictionary_index = _tmp5_ + 1;
			_tmp6_ = _dictionary_index;
			_tmp7_ = _dictionary_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _dictionary_list;
			_tmp9_ = _dictionary_index;
			_tmp10_ = gee_list_get (_tmp8_, _tmp9_);
			dictionary = (KkcDictionary*) _tmp10_;
			_tmp13_ = type;
			if (_tmp13_ == NULL) {
				_tmp12_ = TRUE;
			} else {
				KkcDictionary* _tmp14_ = NULL;
				GType _tmp15_ = 0UL;
				GType* _tmp16_ = NULL;
				gboolean _tmp17_ = FALSE;
				_tmp14_ = dictionary;
				_tmp15_ = G_TYPE_FROM_INSTANCE ((GObject*) _tmp14_);
				_tmp16_ = type;
				_tmp17_ = g_type_is_a (_tmp15_, *_tmp16_);
				_tmp12_ = _tmp17_;
			}
			_tmp18_ = _tmp12_;
			if (_tmp18_) {
				KkcDictionaryListDictionaryCallback _tmp19_ = NULL;
				void* _tmp19__target = NULL;
				KkcDictionary* _tmp20_ = NULL;
				KkcDictionaryCallbackReturn _tmp21_ = 0;
				_tmp19_ = callback;
				_tmp19__target = callback_target;
				_tmp20_ = dictionary;
				_tmp21_ = _tmp19_ (_tmp20_, _tmp19__target);
				_tmp11_ = _tmp21_ == KKC_DICTIONARY_CALLBACK_RETURN_REMOVE;
			} else {
				_tmp11_ = FALSE;
			}
			_tmp22_ = _tmp11_;
			if (_tmp22_) {
				_g_object_unref0 (dictionary);
				_g_object_unref0 (_dictionary_list);
				return;
			}
			_g_object_unref0 (dictionary);
		}
		_g_object_unref0 (_dictionary_list);
	}
}


/**
         * Save dictionaries on to disk.
         */
static KkcDictionaryCallbackReturn __lambda5_ (KkcDictionaryList* self, KkcDictionary* dictionary) {
	KkcDictionaryCallbackReturn result = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (dictionary != NULL, 0);
	{
		KkcDictionary* _tmp0_ = NULL;
		_tmp0_ = dictionary;
		kkc_dictionary_save (_tmp0_, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch19_g_error;
		}
	}
	goto __finally19;
	__catch19_g_error:
	{
		GError* e = NULL;
		GError* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp1_ = e;
		_tmp2_ = _tmp1_->message;
		g_warning ("dictionary-list.vala:101: can't save dictionary: %s", _tmp2_);
		_g_error_free0 (e);
	}
	__finally19:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return 0;
	}
	result = KKC_DICTIONARY_CALLBACK_RETURN_CONTINUE;
	return result;
}


static KkcDictionaryCallbackReturn ___lambda5__kkc_dictionary_list_dictionary_callback (KkcDictionary* dictionary, gpointer self) {
	KkcDictionaryCallbackReturn result;
	result = __lambda5_ (self, dictionary);
	return result;
}


void kkc_dictionary_list_save (KkcDictionaryList* self) {
	g_return_if_fail (self != NULL);
	kkc_dictionary_list_call (self, NULL, ___lambda5__kkc_dictionary_list_dictionary_callback, self);
}


KkcDictionaryList* kkc_dictionary_list_construct (GType object_type) {
	KkcDictionaryList * self = NULL;
	self = (KkcDictionaryList*) g_object_new (object_type, NULL);
	return self;
}


KkcDictionaryList* kkc_dictionary_list_new (void) {
	return kkc_dictionary_list_construct (KKC_TYPE_DICTIONARY_LIST);
}


gint kkc_dictionary_list_get_size (KkcDictionaryList* self) {
	gint result;
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->dictionaries;
	_tmp1_ = gee_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


static void kkc_dictionary_list_class_init (KkcDictionaryListClass * klass) {
	kkc_dictionary_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcDictionaryListPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_dictionary_list_get_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_dictionary_list_finalize;
	/**
	         * The number of dictionaries registered.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_DICTIONARY_LIST_SIZE, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void kkc_dictionary_list_instance_init (KkcDictionaryList * self) {
	GeeArrayList* _tmp0_ = NULL;
	self->priv = KKC_DICTIONARY_LIST_GET_PRIVATE (self);
	_tmp0_ = gee_array_list_new (KKC_TYPE_DICTIONARY, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	self->priv->dictionaries = (GeeList*) _tmp0_;
}


static void kkc_dictionary_list_finalize (GObject* obj) {
	KkcDictionaryList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_DICTIONARY_LIST, KkcDictionaryList);
	_g_object_unref0 (self->priv->dictionaries);
	G_OBJECT_CLASS (kkc_dictionary_list_parent_class)->finalize (obj);
}


GType kkc_dictionary_list_get_type (void) {
	static volatile gsize kkc_dictionary_list_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_dictionary_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcDictionaryListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_dictionary_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcDictionaryList), 0, (GInstanceInitFunc) kkc_dictionary_list_instance_init, NULL };
		GType kkc_dictionary_list_type_id;
		kkc_dictionary_list_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcDictionaryList", &g_define_type_info, 0);
		g_once_init_leave (&kkc_dictionary_list_type_id__volatile, kkc_dictionary_list_type_id);
	}
	return kkc_dictionary_list_type_id__volatile;
}


static void _vala_kkc_dictionary_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcDictionaryList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_DICTIONARY_LIST, KkcDictionaryList);
	switch (property_id) {
		case KKC_DICTIONARY_LIST_SIZE:
		g_value_set_int (value, kkc_dictionary_list_get_size (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



