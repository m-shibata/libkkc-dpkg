/* segment-list.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from segment-list.vala, do not modify */

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
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define KKC_TYPE_SEGMENT_LIST (kkc_segment_list_get_type ())
#define KKC_SEGMENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SEGMENT_LIST, KkcSegmentList))
#define KKC_SEGMENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_SEGMENT_LIST, KkcSegmentListClass))
#define KKC_IS_SEGMENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SEGMENT_LIST))
#define KKC_IS_SEGMENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_SEGMENT_LIST))
#define KKC_SEGMENT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_SEGMENT_LIST, KkcSegmentListClass))

typedef struct _KkcSegmentList KkcSegmentList;
typedef struct _KkcSegmentListClass KkcSegmentListClass;
typedef struct _KkcSegmentListPrivate KkcSegmentListPrivate;

#define KKC_TYPE_SEGMENT (kkc_segment_get_type ())
#define KKC_SEGMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_SEGMENT, KkcSegment))
#define KKC_SEGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_SEGMENT, KkcSegmentClass))
#define KKC_IS_SEGMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_SEGMENT))
#define KKC_IS_SEGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_SEGMENT))
#define KKC_SEGMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_SEGMENT, KkcSegmentClass))

typedef struct _KkcSegment KkcSegment;
typedef struct _KkcSegmentClass KkcSegmentClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _KkcSegmentPrivate KkcSegmentPrivate;
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _KkcSegmentList {
	GObject parent_instance;
	KkcSegmentListPrivate * priv;
};

struct _KkcSegmentListClass {
	GObjectClass parent_class;
};

struct _KkcSegmentListPrivate {
	GeeList* segments;
	GeeList* offsets;
	gint _cursor_pos;
};

struct _KkcSegment {
	GObject parent_instance;
	KkcSegmentPrivate * priv;
	KkcSegment* next;
};

struct _KkcSegmentClass {
	GObjectClass parent_class;
};


static gpointer kkc_segment_list_parent_class = NULL;

GType kkc_segment_list_get_type (void) G_GNUC_CONST;
GType kkc_segment_get_type (void) G_GNUC_CONST;
#define KKC_SEGMENT_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_SEGMENT_LIST, KkcSegmentListPrivate))
enum  {
	KKC_SEGMENT_LIST_DUMMY_PROPERTY,
	KKC_SEGMENT_LIST_CURSOR_POS,
	KKC_SEGMENT_LIST_SIZE
};
void kkc_segment_list_clear (KkcSegmentList* self);
void kkc_segment_list_set_cursor_pos (KkcSegmentList* self, gint value);
void kkc_segment_list_add (KkcSegmentList* self, KkcSegment* segment);
const gchar* kkc_segment_get_input (KkcSegment* self);
KkcSegment* kkc_segment_list_get (KkcSegmentList* self, gint index);
gint kkc_segment_list_get_offset (KkcSegmentList* self, gint index);
void kkc_segment_list_set_segments (KkcSegmentList* self, KkcSegment* segment);
const gchar* kkc_segment_get_output (KkcSegment* self);
KkcSegment* kkc_segment_new (const gchar* input, const gchar* output);
KkcSegment* kkc_segment_construct (GType object_type, const gchar* input, const gchar* output);
gboolean kkc_segment_list_first_segment (KkcSegmentList* self);
void kkc_segment_list_next_segment (KkcSegmentList* self);
gint kkc_segment_list_get_cursor_pos (KkcSegmentList* self);
gint kkc_segment_list_get_size (KkcSegmentList* self);
void kkc_segment_list_previous_segment (KkcSegmentList* self);
gchar* kkc_segment_list_get_output (KkcSegmentList* self);
gchar* kkc_segment_list_get_input (KkcSegmentList* self);
KkcSegment** kkc_segment_list_to_array (KkcSegmentList* self, int* result_length1);
KkcSegmentList* kkc_segment_list_new (void);
KkcSegmentList* kkc_segment_list_construct (GType object_type);
static void kkc_segment_list_finalize (GObject* obj);
static void _vala_kkc_segment_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_segment_list_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


void kkc_segment_list_clear (KkcSegmentList* self) {
	GeeList* _tmp0_ = NULL;
	GeeList* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->segments;
	gee_collection_clear ((GeeCollection*) _tmp0_);
	_tmp1_ = self->priv->offsets;
	gee_collection_clear ((GeeCollection*) _tmp1_);
	kkc_segment_list_set_cursor_pos (self, -1);
}


void kkc_segment_list_add (KkcSegmentList* self, KkcSegment* segment) {
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	GeeList* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	GeeList* _tmp6_ = NULL;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
	GeeList* _tmp26_ = NULL;
	KkcSegment* _tmp27_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (segment != NULL);
	_tmp0_ = self->priv->offsets;
	_tmp1_ = gee_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = self->priv->segments;
	_tmp4_ = gee_collection_get_size ((GeeCollection*) _tmp3_);
	_tmp5_ = _tmp4_;
	g_return_if_fail (_tmp2_ == _tmp5_);
	_tmp6_ = self->priv->offsets;
	_tmp7_ = gee_collection_get_size ((GeeCollection*) _tmp6_);
	_tmp8_ = _tmp7_;
	if (_tmp8_ > 0) {
		gint last_offset = 0;
		GeeList* _tmp9_ = NULL;
		GeeList* _tmp10_ = NULL;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		gpointer _tmp13_ = NULL;
		KkcSegment* last_segment = NULL;
		GeeList* _tmp14_ = NULL;
		GeeList* _tmp15_ = NULL;
		gint _tmp16_ = 0;
		gint _tmp17_ = 0;
		gpointer _tmp18_ = NULL;
		GeeList* _tmp19_ = NULL;
		gint _tmp20_ = 0;
		KkcSegment* _tmp21_ = NULL;
		const gchar* _tmp22_ = NULL;
		const gchar* _tmp23_ = NULL;
		gint _tmp24_ = 0;
		_tmp9_ = self->priv->offsets;
		_tmp10_ = self->priv->offsets;
		_tmp11_ = gee_collection_get_size ((GeeCollection*) _tmp10_);
		_tmp12_ = _tmp11_;
		_tmp13_ = gee_list_get (_tmp9_, _tmp12_ - 1);
		last_offset = (gint) ((gintptr) _tmp13_);
		_tmp14_ = self->priv->segments;
		_tmp15_ = self->priv->segments;
		_tmp16_ = gee_collection_get_size ((GeeCollection*) _tmp15_);
		_tmp17_ = _tmp16_;
		_tmp18_ = gee_list_get (_tmp14_, _tmp17_ - 1);
		last_segment = (KkcSegment*) _tmp18_;
		_tmp19_ = self->priv->offsets;
		_tmp20_ = last_offset;
		_tmp21_ = last_segment;
		_tmp22_ = kkc_segment_get_input (_tmp21_);
		_tmp23_ = _tmp22_;
		_tmp24_ = g_utf8_strlen (_tmp23_, (gssize) (-1));
		gee_collection_add ((GeeCollection*) _tmp19_, (gpointer) ((gintptr) (_tmp20_ + _tmp24_)));
		_g_object_unref0 (last_segment);
	} else {
		GeeList* _tmp25_ = NULL;
		_tmp25_ = self->priv->offsets;
		gee_collection_add ((GeeCollection*) _tmp25_, (gpointer) ((gintptr) 0));
	}
	_tmp26_ = self->priv->segments;
	_tmp27_ = segment;
	gee_collection_add ((GeeCollection*) _tmp26_, _tmp27_);
}


KkcSegment* kkc_segment_list_get (KkcSegmentList* self, gint index) {
	KkcSegment* result = NULL;
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->segments;
	_tmp1_ = index;
	_tmp2_ = gee_list_get (_tmp0_, _tmp1_);
	result = (KkcSegment*) _tmp2_;
	return result;
}


gint kkc_segment_list_get_offset (KkcSegmentList* self, gint index) {
	gint result = 0;
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->offsets;
	_tmp1_ = index;
	_tmp2_ = gee_list_get (_tmp0_, _tmp1_);
	result = (gint) ((gintptr) _tmp2_);
	return result;
}


void kkc_segment_list_set_segments (KkcSegmentList* self, KkcSegment* segment) {
	gint offset = 0;
	GeeList* _tmp0_ = NULL;
	GeeList* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (segment != NULL);
	offset = 0;
	_tmp0_ = self->priv->segments;
	gee_collection_clear ((GeeCollection*) _tmp0_);
	_tmp1_ = self->priv->offsets;
	gee_collection_clear ((GeeCollection*) _tmp1_);
	while (TRUE) {
		KkcSegment* _tmp2_ = NULL;
		GeeList* _tmp3_ = NULL;
		KkcSegment* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		KkcSegment* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		KkcSegment* _tmp10_ = NULL;
		KkcSegment* _tmp11_ = NULL;
		GeeList* _tmp12_ = NULL;
		gint _tmp13_ = 0;
		gint _tmp14_ = 0;
		KkcSegment* _tmp15_ = NULL;
		const gchar* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
		gint _tmp18_ = 0;
		KkcSegment* _tmp19_ = NULL;
		KkcSegment* _tmp20_ = NULL;
		_tmp2_ = segment;
		if (!(_tmp2_ != NULL)) {
			break;
		}
		_tmp3_ = self->priv->segments;
		_tmp4_ = segment;
		_tmp5_ = kkc_segment_get_input (_tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = segment;
		_tmp8_ = kkc_segment_get_output (_tmp7_);
		_tmp9_ = _tmp8_;
		_tmp10_ = kkc_segment_new (_tmp6_, _tmp9_);
		_tmp11_ = _tmp10_;
		gee_collection_add ((GeeCollection*) _tmp3_, _tmp11_);
		_g_object_unref0 (_tmp11_);
		_tmp12_ = self->priv->offsets;
		_tmp13_ = offset;
		gee_collection_add ((GeeCollection*) _tmp12_, (gpointer) ((gintptr) _tmp13_));
		_tmp14_ = offset;
		_tmp15_ = segment;
		_tmp16_ = kkc_segment_get_input (_tmp15_);
		_tmp17_ = _tmp16_;
		_tmp18_ = g_utf8_strlen (_tmp17_, (gssize) (-1));
		offset = _tmp14_ + _tmp18_;
		_tmp19_ = segment;
		_tmp20_ = _tmp19_->next;
		segment = _tmp20_;
	}
}


gboolean kkc_segment_list_first_segment (KkcSegmentList* self) {
	gboolean result = FALSE;
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->segments;
	_tmp1_ = gee_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_ > 0) {
		kkc_segment_list_set_cursor_pos (self, 0);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


void kkc_segment_list_next_segment (KkcSegmentList* self) {
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = kkc_segment_list_get_cursor_pos (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == (-1)) {
		return;
	}
	_tmp2_ = kkc_segment_list_get_cursor_pos (self);
	_tmp3_ = _tmp2_;
	_tmp4_ = kkc_segment_list_get_size (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = CLAMP (_tmp3_ + 1, 0, _tmp5_ - 1);
	kkc_segment_list_set_cursor_pos (self, _tmp6_);
}


void kkc_segment_list_previous_segment (KkcSegmentList* self) {
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	gint _tmp6_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = kkc_segment_list_get_cursor_pos (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == (-1)) {
		return;
	}
	_tmp2_ = kkc_segment_list_get_cursor_pos (self);
	_tmp3_ = _tmp2_;
	_tmp4_ = kkc_segment_list_get_size (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = CLAMP (_tmp3_ - 1, 0, _tmp5_ - 1);
	kkc_segment_list_set_cursor_pos (self, _tmp6_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


gchar* kkc_segment_list_get_output (KkcSegmentList* self) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp16_ = NULL;
	const gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	{
		GeeList* _segment_list = NULL;
		GeeList* _tmp1_ = NULL;
		GeeList* _tmp2_ = NULL;
		gint _segment_size = 0;
		GeeList* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _segment_index = 0;
		_tmp1_ = self->priv->segments;
		_tmp2_ = _g_object_ref0 (_tmp1_);
		_segment_list = _tmp2_;
		_tmp3_ = _segment_list;
		_tmp4_ = gee_collection_get_size ((GeeCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_segment_size = _tmp5_;
		_segment_index = -1;
		while (TRUE) {
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			KkcSegment* segment = NULL;
			GeeList* _tmp9_ = NULL;
			gint _tmp10_ = 0;
			gpointer _tmp11_ = NULL;
			GString* _tmp12_ = NULL;
			KkcSegment* _tmp13_ = NULL;
			const gchar* _tmp14_ = NULL;
			const gchar* _tmp15_ = NULL;
			_tmp6_ = _segment_index;
			_segment_index = _tmp6_ + 1;
			_tmp7_ = _segment_index;
			_tmp8_ = _segment_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _segment_list;
			_tmp10_ = _segment_index;
			_tmp11_ = gee_list_get (_tmp9_, _tmp10_);
			segment = (KkcSegment*) _tmp11_;
			_tmp12_ = builder;
			_tmp13_ = segment;
			_tmp14_ = kkc_segment_get_output (_tmp13_);
			_tmp15_ = _tmp14_;
			g_string_append (_tmp12_, _tmp15_);
			_g_object_unref0 (segment);
		}
		_g_object_unref0 (_segment_list);
	}
	_tmp16_ = builder;
	_tmp17_ = _tmp16_->str;
	_tmp18_ = g_strdup (_tmp17_);
	result = _tmp18_;
	_g_string_free0 (builder);
	return result;
}


gchar* kkc_segment_list_get_input (KkcSegmentList* self) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp16_ = NULL;
	const gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	{
		GeeList* _segment_list = NULL;
		GeeList* _tmp1_ = NULL;
		GeeList* _tmp2_ = NULL;
		gint _segment_size = 0;
		GeeList* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _segment_index = 0;
		_tmp1_ = self->priv->segments;
		_tmp2_ = _g_object_ref0 (_tmp1_);
		_segment_list = _tmp2_;
		_tmp3_ = _segment_list;
		_tmp4_ = gee_collection_get_size ((GeeCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_segment_size = _tmp5_;
		_segment_index = -1;
		while (TRUE) {
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			KkcSegment* segment = NULL;
			GeeList* _tmp9_ = NULL;
			gint _tmp10_ = 0;
			gpointer _tmp11_ = NULL;
			GString* _tmp12_ = NULL;
			KkcSegment* _tmp13_ = NULL;
			const gchar* _tmp14_ = NULL;
			const gchar* _tmp15_ = NULL;
			_tmp6_ = _segment_index;
			_segment_index = _tmp6_ + 1;
			_tmp7_ = _segment_index;
			_tmp8_ = _segment_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _segment_list;
			_tmp10_ = _segment_index;
			_tmp11_ = gee_list_get (_tmp9_, _tmp10_);
			segment = (KkcSegment*) _tmp11_;
			_tmp12_ = builder;
			_tmp13_ = segment;
			_tmp14_ = kkc_segment_get_input (_tmp13_);
			_tmp15_ = _tmp14_;
			g_string_append (_tmp12_, _tmp15_);
			_g_object_unref0 (segment);
		}
		_g_object_unref0 (_segment_list);
	}
	_tmp16_ = builder;
	_tmp17_ = _tmp16_->str;
	_tmp18_ = g_strdup (_tmp17_);
	result = _tmp18_;
	_g_string_free0 (builder);
	return result;
}


KkcSegment** kkc_segment_list_to_array (KkcSegmentList* self, int* result_length1) {
	KkcSegment** result = NULL;
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer* _tmp2_ = NULL;
	KkcSegment** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->segments;
	_tmp2_ = gee_collection_to_array ((GeeCollection*) _tmp0_, &_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp3__length1 = _tmp1_;
	if (result_length1) {
		*result_length1 = _tmp3__length1;
	}
	result = _tmp3_;
	return result;
}


KkcSegmentList* kkc_segment_list_construct (GType object_type) {
	KkcSegmentList * self = NULL;
	self = (KkcSegmentList*) g_object_new (object_type, NULL);
	return self;
}


KkcSegmentList* kkc_segment_list_new (void) {
	return kkc_segment_list_construct (KKC_TYPE_SEGMENT_LIST);
}


gint kkc_segment_list_get_cursor_pos (KkcSegmentList* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_cursor_pos;
	result = _tmp0_;
	return result;
}


void kkc_segment_list_set_cursor_pos (KkcSegmentList* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_cursor_pos = _tmp0_;
	g_object_notify ((GObject *) self, "cursor-pos");
}


gint kkc_segment_list_get_size (KkcSegmentList* self) {
	gint result;
	GeeList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->segments;
	_tmp1_ = gee_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


static void kkc_segment_list_class_init (KkcSegmentListClass * klass) {
	kkc_segment_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcSegmentListPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_segment_list_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_segment_list_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_segment_list_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_SEGMENT_LIST_CURSOR_POS, g_param_spec_int ("cursor-pos", "cursor-pos", "cursor-pos", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_SEGMENT_LIST_SIZE, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void kkc_segment_list_instance_init (KkcSegmentList * self) {
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	self->priv = KKC_SEGMENT_LIST_GET_PRIVATE (self);
	_tmp0_ = gee_array_list_new (KKC_TYPE_SEGMENT, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	self->priv->segments = (GeeList*) _tmp0_;
	_tmp1_ = gee_array_list_new (G_TYPE_INT, NULL, NULL, NULL);
	self->priv->offsets = (GeeList*) _tmp1_;
	self->priv->_cursor_pos = -1;
}


static void kkc_segment_list_finalize (GObject* obj) {
	KkcSegmentList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_SEGMENT_LIST, KkcSegmentList);
	_g_object_unref0 (self->priv->segments);
	_g_object_unref0 (self->priv->offsets);
	G_OBJECT_CLASS (kkc_segment_list_parent_class)->finalize (obj);
}


GType kkc_segment_list_get_type (void) {
	static volatile gsize kkc_segment_list_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_segment_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcSegmentListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_segment_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcSegmentList), 0, (GInstanceInitFunc) kkc_segment_list_instance_init, NULL };
		GType kkc_segment_list_type_id;
		kkc_segment_list_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcSegmentList", &g_define_type_info, 0);
		g_once_init_leave (&kkc_segment_list_type_id__volatile, kkc_segment_list_type_id);
	}
	return kkc_segment_list_type_id__volatile;
}


static void _vala_kkc_segment_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcSegmentList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_SEGMENT_LIST, KkcSegmentList);
	switch (property_id) {
		case KKC_SEGMENT_LIST_CURSOR_POS:
		g_value_set_int (value, kkc_segment_list_get_cursor_pos (self));
		break;
		case KKC_SEGMENT_LIST_SIZE:
		g_value_set_int (value, kkc_segment_list_get_size (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_segment_list_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcSegmentList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_SEGMENT_LIST, KkcSegmentList);
	switch (property_id) {
		case KKC_SEGMENT_LIST_CURSOR_POS:
		kkc_segment_list_set_cursor_pos (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



