/* bloom-filter.c generated by valac 0.22.1, the Vala compiler
 * generated from bloom-filter.vala, do not modify */

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


#define KKC_TYPE_BLOOM_FILTER (kkc_bloom_filter_get_type ())
#define KKC_BLOOM_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_BLOOM_FILTER, KkcBloomFilter))
#define KKC_BLOOM_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_BLOOM_FILTER, KkcBloomFilterClass))
#define KKC_IS_BLOOM_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_BLOOM_FILTER))
#define KKC_IS_BLOOM_FILTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_BLOOM_FILTER))
#define KKC_BLOOM_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_BLOOM_FILTER, KkcBloomFilterClass))

typedef struct _KkcBloomFilter KkcBloomFilter;
typedef struct _KkcBloomFilterClass KkcBloomFilterClass;
typedef struct _KkcBloomFilterPrivate KkcBloomFilterPrivate;
#define _g_mapped_file_unref0(var) ((var == NULL) ? NULL : (var = (g_mapped_file_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _KkcBloomFilter {
	GObject parent_instance;
	KkcBloomFilterPrivate * priv;
};

struct _KkcBloomFilterClass {
	GObjectClass parent_class;
};

struct _KkcBloomFilterPrivate {
	GMappedFile* mmap;
};


static gpointer kkc_bloom_filter_parent_class = NULL;

guint32 kkc_murmur_hash3_32 (guint32 b0, guint32 b1, guint32 seed);
GType kkc_bloom_filter_get_type (void) G_GNUC_CONST;
#define KKC_BLOOM_FILTER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_BLOOM_FILTER, KkcBloomFilterPrivate))
enum  {
	KKC_BLOOM_FILTER_DUMMY_PROPERTY
};
KkcBloomFilter* kkc_bloom_filter_new (const gchar* filename, GError** error);
KkcBloomFilter* kkc_bloom_filter_construct (GType object_type, const gchar* filename, GError** error);
static gboolean kkc_bloom_filter_is_bit_set (KkcBloomFilter* self, guint32 index);
gboolean kkc_bloom_filter_contains (KkcBloomFilter* self, guint32 b0, guint32 b1);
static void kkc_bloom_filter_finalize (GObject* obj);


guint32 kkc_murmur_hash3_32 (guint32 b0, guint32 b1, guint32 seed) {
	guint32 result = 0U;
	guint32 h1 = 0U;
	guint32 _tmp0_ = 0U;
	static const guint32 c1 = (guint32) 0xcc9e2d51U;
	static const guint32 c2 = (guint32) 0x1b873593U;
	guint32 _tmp1_ = 0U;
	guint32 _tmp2_ = 0U;
	guint32 _tmp3_ = 0U;
	guint32 _tmp4_ = 0U;
	guint32 _tmp5_ = 0U;
	guint32 _tmp6_ = 0U;
	guint32 _tmp7_ = 0U;
	guint32 _tmp8_ = 0U;
	guint32 _tmp9_ = 0U;
	guint32 _tmp10_ = 0U;
	guint32 _tmp11_ = 0U;
	guint32 _tmp12_ = 0U;
	guint32 _tmp13_ = 0U;
	guint32 _tmp14_ = 0U;
	guint32 _tmp15_ = 0U;
	guint32 _tmp16_ = 0U;
	guint32 _tmp17_ = 0U;
	guint32 _tmp18_ = 0U;
	guint32 _tmp19_ = 0U;
	guint32 _tmp20_ = 0U;
	guint32 _tmp21_ = 0U;
	guint32 _tmp22_ = 0U;
	guint32 _tmp23_ = 0U;
	guint32 _tmp24_ = 0U;
	guint32 _tmp25_ = 0U;
	guint32 _tmp26_ = 0U;
	guint32 _tmp27_ = 0U;
	_tmp0_ = seed;
	h1 = _tmp0_;
	_tmp1_ = b0;
	b0 = _tmp1_ * c1;
	_tmp2_ = b0;
	_tmp3_ = b0;
	b0 = (_tmp2_ << 15) | (_tmp3_ >> (32 - 15));
	_tmp4_ = b0;
	b0 = _tmp4_ * c2;
	_tmp5_ = h1;
	_tmp6_ = b0;
	h1 = _tmp5_ ^ _tmp6_;
	_tmp7_ = h1;
	_tmp8_ = h1;
	h1 = (_tmp7_ << 13) | (_tmp8_ >> (32 - 13));
	_tmp9_ = h1;
	h1 = (_tmp9_ * 5) + 0xe6546b64U;
	_tmp10_ = b1;
	b1 = _tmp10_ * c1;
	_tmp11_ = b1;
	_tmp12_ = b1;
	b1 = (_tmp11_ << 15) | (_tmp12_ >> (32 - 15));
	_tmp13_ = b1;
	b1 = _tmp13_ * c2;
	_tmp14_ = h1;
	_tmp15_ = b1;
	h1 = _tmp14_ ^ _tmp15_;
	_tmp16_ = h1;
	_tmp17_ = h1;
	h1 = (_tmp16_ << 13) | (_tmp17_ >> (32 - 13));
	_tmp18_ = h1;
	h1 = (_tmp18_ * 5) + 0xe6546b64U;
	_tmp19_ = h1;
	h1 = _tmp19_ ^ 8;
	_tmp20_ = h1;
	_tmp21_ = h1;
	h1 = _tmp20_ ^ (_tmp21_ >> 16);
	_tmp22_ = h1;
	h1 = _tmp22_ * 0x85ebca6bU;
	_tmp23_ = h1;
	_tmp24_ = h1;
	h1 = _tmp23_ ^ (_tmp24_ >> 13);
	_tmp25_ = h1;
	h1 = _tmp25_ * 0xc2b2ae35U;
	_tmp26_ = h1;
	_tmp27_ = h1;
	h1 = _tmp26_ ^ (_tmp27_ >> 16);
	result = h1;
	return result;
}


KkcBloomFilter* kkc_bloom_filter_construct (GType object_type, const gchar* filename, GError** error) {
	KkcBloomFilter * self = NULL;
	GMappedFile* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GMappedFile* _tmp2_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (filename != NULL, NULL);
	self = (KkcBloomFilter*) g_object_new (object_type, NULL);
	_tmp1_ = filename;
	_tmp2_ = g_mapped_file_new (_tmp1_, FALSE, &_inner_error_);
	_tmp0_ = _tmp2_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	_g_mapped_file_unref0 (self->priv->mmap);
	self->priv->mmap = _tmp0_;
	return self;
}


KkcBloomFilter* kkc_bloom_filter_new (const gchar* filename, GError** error) {
	return kkc_bloom_filter_construct (KKC_TYPE_BLOOM_FILTER, filename, error);
}


static gboolean kkc_bloom_filter_is_bit_set (KkcBloomFilter* self, guint32 index) {
	gboolean result = FALSE;
	guint32 _tmp0_ = 0U;
	GMappedFile* _tmp1_ = NULL;
	gsize _tmp2_ = 0UL;
	guint8* p = NULL;
	GMappedFile* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	guint32 _tmp5_ = 0U;
	guint32 _tmp6_ = 0U;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = index;
	_tmp1_ = self->priv->mmap;
	_tmp2_ = g_mapped_file_get_length (_tmp1_);
	_vala_assert (((gsize) (_tmp0_ / 8)) < _tmp2_, "index / 8 < mmap.get_length ()");
	_tmp3_ = self->priv->mmap;
	_tmp4_ = g_mapped_file_get_contents (_tmp3_);
	_tmp5_ = index;
	p = ((guint8*) _tmp4_) + (_tmp5_ / 8);
	_tmp6_ = index;
	result = ((gint) ((*p) & (1 << (_tmp6_ % 8)))) != 0;
	return result;
}


gboolean kkc_bloom_filter_contains (KkcBloomFilter* self, guint32 b0, guint32 b1) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	{
		gint k = 0;
		k = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				gboolean _tmp1_ = FALSE;
				gint _tmp3_ = 0;
				guint32 h = 0U;
				guint32 _tmp4_ = 0U;
				guint32 _tmp5_ = 0U;
				gint _tmp6_ = 0;
				guint32 _tmp7_ = 0U;
				guint32 i = 0U;
				guint32 _tmp8_ = 0U;
				GMappedFile* _tmp9_ = NULL;
				gsize _tmp10_ = 0UL;
				guint32 _tmp11_ = 0U;
				gboolean _tmp12_ = FALSE;
				_tmp1_ = _tmp0_;
				if (!_tmp1_) {
					gint _tmp2_ = 0;
					_tmp2_ = k;
					k = _tmp2_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp3_ = k;
				if (!(_tmp3_ < 4)) {
					break;
				}
				_tmp4_ = b0;
				_tmp5_ = b1;
				_tmp6_ = k;
				_tmp7_ = kkc_murmur_hash3_32 (_tmp4_, _tmp5_, (guint32) _tmp6_);
				h = _tmp7_;
				_tmp8_ = h;
				_tmp9_ = self->priv->mmap;
				_tmp10_ = g_mapped_file_get_length (_tmp9_);
				i = (guint32) (_tmp8_ * ((_tmp10_ * 8) / ((gdouble) 0xFFFFFFFFLL)));
				_tmp11_ = i;
				_tmp12_ = kkc_bloom_filter_is_bit_set (self, _tmp11_);
				if (!_tmp12_) {
					result = FALSE;
					return result;
				}
			}
		}
	}
	result = TRUE;
	return result;
}


static void kkc_bloom_filter_class_init (KkcBloomFilterClass * klass) {
	kkc_bloom_filter_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcBloomFilterPrivate));
	G_OBJECT_CLASS (klass)->finalize = kkc_bloom_filter_finalize;
}


static void kkc_bloom_filter_instance_init (KkcBloomFilter * self) {
	self->priv = KKC_BLOOM_FILTER_GET_PRIVATE (self);
}


static void kkc_bloom_filter_finalize (GObject* obj) {
	KkcBloomFilter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_BLOOM_FILTER, KkcBloomFilter);
	_g_mapped_file_unref0 (self->priv->mmap);
	G_OBJECT_CLASS (kkc_bloom_filter_parent_class)->finalize (obj);
}


GType kkc_bloom_filter_get_type (void) {
	static volatile gsize kkc_bloom_filter_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_bloom_filter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcBloomFilterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_bloom_filter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcBloomFilter), 0, (GInstanceInitFunc) kkc_bloom_filter_instance_init, NULL };
		GType kkc_bloom_filter_type_id;
		kkc_bloom_filter_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcBloomFilter", &g_define_type_info, 0);
		g_once_init_leave (&kkc_bloom_filter_type_id__volatile, kkc_bloom_filter_type_id);
	}
	return kkc_bloom_filter_type_id__volatile;
}



