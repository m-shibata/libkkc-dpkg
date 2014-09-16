/* numeric-template.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from numeric-template.vala, do not modify */

/*
 * Copyright (C) 2011-2014 Daiki Ueno <ueno@gnu.org>
 * Copyright (C) 2011-2014 Red Hat, Inc.
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
#include <gee.h>


#define KKC_TYPE_TEMPLATE (kkc_template_get_type ())
#define KKC_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_TEMPLATE, KkcTemplate))
#define KKC_IS_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_TEMPLATE))
#define KKC_TEMPLATE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), KKC_TYPE_TEMPLATE, KkcTemplateIface))

typedef struct _KkcTemplate KkcTemplate;
typedef struct _KkcTemplateIface KkcTemplateIface;

#define KKC_TYPE_NUMERIC_TEMPLATE (kkc_numeric_template_get_type ())
#define KKC_NUMERIC_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate))
#define KKC_NUMERIC_TEMPLATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplateClass))
#define KKC_IS_NUMERIC_TEMPLATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_NUMERIC_TEMPLATE))
#define KKC_IS_NUMERIC_TEMPLATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_NUMERIC_TEMPLATE))
#define KKC_NUMERIC_TEMPLATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplateClass))

typedef struct _KkcNumericTemplate KkcNumericTemplate;
typedef struct _KkcNumericTemplateClass KkcNumericTemplateClass;
typedef struct _KkcNumericTemplatePrivate KkcNumericTemplatePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_match_info_free0(var) ((var == NULL) ? NULL : (var = (g_match_info_free (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

#define KKC_TYPE_NUMERIC_CONVERSION_TYPE (kkc_numeric_conversion_type_get_type ())

struct _KkcTemplateIface {
	GTypeInterface parent_iface;
	gchar* (*expand) (KkcTemplate* self, const gchar* text);
	const gchar* (*get_source) (KkcTemplate* self);
	void (*set_source) (KkcTemplate* self, const gchar* value);
	gboolean (*get_okuri) (KkcTemplate* self);
	void (*set_okuri) (KkcTemplate* self, gboolean value);
};

struct _KkcNumericTemplate {
	GObject parent_instance;
	KkcNumericTemplatePrivate * priv;
};

struct _KkcNumericTemplateClass {
	GObjectClass parent_class;
};

struct _KkcNumericTemplatePrivate {
	GeeArrayList* numerics;
	gchar* _source;
	gboolean _okuri;
	GRegex* regex;
	GRegex* ref_regex;
};

typedef enum  {
	KKC_NUMERIC_CONVERSION_TYPE_LATIN,
	KKC_NUMERIC_CONVERSION_TYPE_WIDE_LATIN,
	KKC_NUMERIC_CONVERSION_TYPE_KANJI_NUMERAL,
	KKC_NUMERIC_CONVERSION_TYPE_KANJI,
	KKC_NUMERIC_CONVERSION_TYPE_RECONVERT,
	KKC_NUMERIC_CONVERSION_TYPE_DAIJI,
	KKC_NUMERIC_CONVERSION_TYPE_RESERVED6,
	KKC_NUMERIC_CONVERSION_TYPE_RESERVED7,
	KKC_NUMERIC_CONVERSION_TYPE_GROUPING,
	KKC_NUMERIC_CONVERSION_TYPE_SHOGI
} KkcNumericConversionType;


static gpointer kkc_numeric_template_parent_class = NULL;
static KkcTemplateIface* kkc_numeric_template_kkc_template_parent_iface = NULL;

GType kkc_template_get_type (void) G_GNUC_CONST;
GType kkc_numeric_template_get_type (void) G_GNUC_CONST;
#define KKC_NUMERIC_TEMPLATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplatePrivate))
enum  {
	KKC_NUMERIC_TEMPLATE_DUMMY_PROPERTY,
	KKC_NUMERIC_TEMPLATE_SOURCE,
	KKC_NUMERIC_TEMPLATE_OKURI
};
KkcNumericTemplate* kkc_numeric_template_new (const gchar* source);
KkcNumericTemplate* kkc_numeric_template_construct (GType object_type, const gchar* source);
void kkc_template_set_okuri (KkcTemplate* self, gboolean value);
static void kkc_numeric_template_extract_numerics (KkcNumericTemplate* self, const gchar* source);
void kkc_template_set_source (KkcTemplate* self, const gchar* value);
static gchar* kkc_numeric_template_real_expand (KkcTemplate* base, const gchar* text);
const gchar* kkc_template_get_source (KkcTemplate* self);
GType kkc_numeric_conversion_type_get_type (void) G_GNUC_CONST;
gchar* kkc_rom_kana_utils_get_numeric (gint numeric, KkcNumericConversionType type);
static void kkc_numeric_template_finalize (GObject* obj);
gboolean kkc_template_get_okuri (KkcTemplate* self);
static void _vala_kkc_numeric_template_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_numeric_template_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


KkcNumericTemplate* kkc_numeric_template_construct (GType object_type, const gchar* source) {
	KkcNumericTemplate * self = NULL;
	const gchar* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (source != NULL, NULL);
	self = (KkcNumericTemplate*) g_object_new (object_type, NULL);
	{
		GRegex* _tmp0_ = NULL;
		GRegex* _tmp1_ = NULL;
		GRegex* _tmp2_ = NULL;
		_tmp1_ = g_regex_new ("[0-9]+", 0, 0, &_inner_error_);
		_tmp0_ = _tmp1_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch21_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp2_ = _tmp0_;
		_tmp0_ = NULL;
		_g_regex_unref0 (self->priv->regex);
		self->priv->regex = _tmp2_;
		_g_regex_unref0 (_tmp0_);
	}
	goto __finally21;
	__catch21_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally21:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	{
		GRegex* _tmp3_ = NULL;
		GRegex* _tmp4_ = NULL;
		GRegex* _tmp5_ = NULL;
		_tmp4_ = g_regex_new ("#([0-9])", 0, 0, &_inner_error_);
		_tmp3_ = _tmp4_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch22_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp5_ = _tmp3_;
		_tmp3_ = NULL;
		_g_regex_unref0 (self->priv->ref_regex);
		self->priv->ref_regex = _tmp5_;
		_g_regex_unref0 (_tmp3_);
	}
	goto __finally22;
	__catch22_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally22:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	kkc_template_set_okuri ((KkcTemplate*) self, FALSE);
	_tmp6_ = source;
	kkc_numeric_template_extract_numerics (self, _tmp6_);
	return self;
}


KkcNumericTemplate* kkc_numeric_template_new (const gchar* source) {
	return kkc_numeric_template_construct (KKC_TYPE_NUMERIC_TEMPLATE, source);
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	glong _tmp2_ = 0L;
	glong _tmp5_ = 0L;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_ = 0L;
	gboolean _tmp12_ = FALSE;
	glong _tmp13_ = 0L;
	glong _tmp16_ = 0L;
	glong _tmp17_ = 0L;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	gchar* _tmp21_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = strlen (self);
	_tmp1_ = _tmp0_;
	string_length = (glong) _tmp1_;
	_tmp2_ = start;
	if (_tmp2_ < ((glong) 0)) {
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
		_tmp3_ = string_length;
		_tmp4_ = start;
		start = _tmp3_ + _tmp4_;
	}
	_tmp5_ = end;
	if (_tmp5_ < ((glong) 0)) {
		glong _tmp6_ = 0L;
		glong _tmp7_ = 0L;
		_tmp6_ = string_length;
		_tmp7_ = end;
		end = _tmp6_ + _tmp7_;
	}
	_tmp9_ = start;
	if (_tmp9_ >= ((glong) 0)) {
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
		_tmp10_ = start;
		_tmp11_ = string_length;
		_tmp8_ = _tmp10_ <= _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	g_return_val_if_fail (_tmp8_, NULL);
	_tmp13_ = end;
	if (_tmp13_ >= ((glong) 0)) {
		glong _tmp14_ = 0L;
		glong _tmp15_ = 0L;
		_tmp14_ = end;
		_tmp15_ = string_length;
		_tmp12_ = _tmp14_ <= _tmp15_;
	} else {
		_tmp12_ = FALSE;
	}
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp16_ = start;
	_tmp17_ = end;
	g_return_val_if_fail (_tmp16_ <= _tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	_tmp20_ = start;
	_tmp21_ = g_strndup (((gchar*) self) + _tmp18_, (gsize) (_tmp19_ - _tmp20_));
	result = _tmp21_;
	return result;
}


static void kkc_numeric_template_extract_numerics (KkcNumericTemplate* self, const gchar* source) {
	GMatchInfo* info = NULL;
	gint start_pos = 0;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp23_ = NULL;
	const gchar* _tmp24_ = NULL;
	gint _tmp25_ = 0;
	const gchar* _tmp26_ = NULL;
	gint _tmp27_ = 0;
	gint _tmp28_ = 0;
	gchar* _tmp29_ = NULL;
	gchar* _tmp30_ = NULL;
	GString* _tmp31_ = NULL;
	const gchar* _tmp32_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (source != NULL);
	info = NULL;
	start_pos = 0;
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	while (TRUE) {
		gchar* numeric = NULL;
		GMatchInfo* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gint match_start_pos = 0;
		gint match_end_pos = 0;
		GMatchInfo* _tmp9_ = NULL;
		gint _tmp10_ = 0;
		gint _tmp11_ = 0;
		GeeArrayList* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		gint _tmp14_ = 0;
		GString* _tmp15_ = NULL;
		const gchar* _tmp16_ = NULL;
		gint _tmp17_ = 0;
		gint _tmp18_ = 0;
		gchar* _tmp19_ = NULL;
		gchar* _tmp20_ = NULL;
		GString* _tmp21_ = NULL;
		gint _tmp22_ = 0;
		{
			gboolean _tmp1_ = FALSE;
			GRegex* _tmp2_ = NULL;
			const gchar* _tmp3_ = NULL;
			gint _tmp4_ = 0;
			GMatchInfo* _tmp5_ = NULL;
			gboolean _tmp6_ = FALSE;
			_tmp2_ = self->priv->regex;
			_tmp3_ = source;
			_tmp4_ = start_pos;
			_tmp6_ = g_regex_match_full (_tmp2_, _tmp3_, (gssize) (-1), _tmp4_, 0, &_tmp5_, &_inner_error_);
			_g_match_info_free0 (info);
			info = _tmp5_;
			_tmp1_ = _tmp6_;
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				if (_inner_error_->domain == G_REGEX_ERROR) {
					goto __catch23_g_regex_error;
				}
				_g_string_free0 (builder);
				_g_match_info_free0 (info);
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			if (!_tmp1_) {
				break;
			}
		}
		goto __finally23;
		__catch23_g_regex_error:
		{
			GError* e = NULL;
			e = _inner_error_;
			_inner_error_ = NULL;
			g_return_if_reached ();
			_g_error_free0 (e);
		}
		__finally23:
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_string_free0 (builder);
			_g_match_info_free0 (info);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_tmp7_ = info;
		_tmp8_ = g_match_info_fetch (_tmp7_, 0);
		numeric = _tmp8_;
		_tmp9_ = info;
		g_match_info_fetch_pos (_tmp9_, 0, &_tmp10_, &_tmp11_);
		match_start_pos = _tmp10_;
		match_end_pos = _tmp11_;
		_tmp12_ = self->priv->numerics;
		_tmp13_ = numeric;
		_tmp14_ = atoi (_tmp13_);
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, (gpointer) ((gintptr) _tmp14_));
		_tmp15_ = builder;
		_tmp16_ = source;
		_tmp17_ = start_pos;
		_tmp18_ = match_start_pos;
		_tmp19_ = string_slice (_tmp16_, (glong) _tmp17_, (glong) _tmp18_);
		_tmp20_ = _tmp19_;
		g_string_append (_tmp15_, _tmp20_);
		_g_free0 (_tmp20_);
		_tmp21_ = builder;
		g_string_append (_tmp21_, "#");
		_tmp22_ = match_end_pos;
		start_pos = _tmp22_;
		_g_free0 (numeric);
	}
	_tmp23_ = builder;
	_tmp24_ = source;
	_tmp25_ = start_pos;
	_tmp26_ = source;
	_tmp27_ = strlen (_tmp26_);
	_tmp28_ = _tmp27_;
	_tmp29_ = string_slice (_tmp24_, (glong) _tmp25_, (glong) _tmp28_);
	_tmp30_ = _tmp29_;
	g_string_append (_tmp23_, _tmp30_);
	_g_free0 (_tmp30_);
	_tmp31_ = builder;
	_tmp32_ = _tmp31_->str;
	kkc_template_set_source ((KkcTemplate*) self, _tmp32_);
	_g_string_free0 (builder);
	_g_match_info_free0 (info);
}


static gchar string_get (const gchar* self, glong index) {
	gchar result = '\0';
	glong _tmp0_ = 0L;
	gchar _tmp1_ = '\0';
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = index;
	_tmp1_ = ((gchar*) self)[_tmp0_];
	result = _tmp1_;
	return result;
}


static gchar* kkc_numeric_template_real_expand (KkcTemplate* base, const gchar* text) {
	KkcNumericTemplate * self;
	gchar* result = NULL;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GString* builder = NULL;
	GString* _tmp11_ = NULL;
	GMatchInfo* info = NULL;
	gint start_pos = 0;
	GString* _tmp60_ = NULL;
	const gchar* _tmp61_ = NULL;
	gint _tmp62_ = 0;
	const gchar* _tmp63_ = NULL;
	gint _tmp64_ = 0;
	gint _tmp65_ = 0;
	gchar* _tmp66_ = NULL;
	gchar* _tmp67_ = NULL;
	GString* _tmp68_ = NULL;
	const gchar* _tmp69_ = NULL;
	gchar* _tmp70_ = NULL;
	GError * _inner_error_ = NULL;
	self = (KkcNumericTemplate*) base;
	g_return_val_if_fail (text != NULL, NULL);
	_tmp2_ = kkc_template_get_source ((KkcTemplate*) self);
	_tmp3_ = _tmp2_;
	if (g_strcmp0 (_tmp3_, "#") == 0) {
		const gchar* _tmp4_ = NULL;
		_tmp4_ = text;
		_tmp1_ = g_strcmp0 (_tmp4_, "＃") == 0;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		GeeArrayList* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gint _tmp7_ = 0;
		_tmp5_ = self->priv->numerics;
		_tmp6_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp5_);
		_tmp7_ = _tmp6_;
		_tmp0_ = _tmp7_ > 0;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		GeeArrayList* _tmp8_ = NULL;
		gpointer _tmp9_ = NULL;
		gchar* _tmp10_ = NULL;
		_tmp8_ = self->priv->numerics;
		_tmp9_ = gee_abstract_list_get ((GeeAbstractList*) _tmp8_, 0);
		_tmp10_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp9_), KKC_NUMERIC_CONVERSION_TYPE_LATIN);
		result = _tmp10_;
		return result;
	}
	_tmp11_ = g_string_new ("");
	builder = _tmp11_;
	info = NULL;
	start_pos = 0;
	{
		gint index = 0;
		index = 0;
		{
			gboolean _tmp12_ = FALSE;
			_tmp12_ = TRUE;
			while (TRUE) {
				gint _tmp14_ = 0;
				GeeArrayList* _tmp15_ = NULL;
				gint _tmp16_ = 0;
				gint _tmp17_ = 0;
				gint match_start_pos = 0;
				gint match_end_pos = 0;
				GMatchInfo* _tmp25_ = NULL;
				gint _tmp26_ = 0;
				gint _tmp27_ = 0;
				GString* _tmp28_ = NULL;
				const gchar* _tmp29_ = NULL;
				gint _tmp30_ = 0;
				gint _tmp31_ = 0;
				gchar* _tmp32_ = NULL;
				gchar* _tmp33_ = NULL;
				gchar* type = NULL;
				GMatchInfo* _tmp34_ = NULL;
				gchar* _tmp35_ = NULL;
				const gchar* _tmp36_ = NULL;
				gchar _tmp37_ = '\0';
				gint _tmp59_ = 0;
				if (!_tmp12_) {
					gint _tmp13_ = 0;
					_tmp13_ = index;
					index = _tmp13_ + 1;
				}
				_tmp12_ = FALSE;
				_tmp14_ = index;
				_tmp15_ = self->priv->numerics;
				_tmp16_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp15_);
				_tmp17_ = _tmp16_;
				if (!(_tmp14_ < _tmp17_)) {
					break;
				}
				{
					gboolean _tmp18_ = FALSE;
					GRegex* _tmp19_ = NULL;
					const gchar* _tmp20_ = NULL;
					gint _tmp21_ = 0;
					GMatchInfo* _tmp22_ = NULL;
					gboolean _tmp23_ = FALSE;
					_tmp19_ = self->priv->ref_regex;
					_tmp20_ = text;
					_tmp21_ = start_pos;
					_tmp23_ = g_regex_match_full (_tmp19_, _tmp20_, (gssize) (-1), _tmp21_, 0, &_tmp22_, &_inner_error_);
					_g_match_info_free0 (info);
					info = _tmp22_;
					_tmp18_ = _tmp23_;
					if (G_UNLIKELY (_inner_error_ != NULL)) {
						if (_inner_error_->domain == G_REGEX_ERROR) {
							goto __catch24_g_regex_error;
						}
						_g_match_info_free0 (info);
						_g_string_free0 (builder);
						g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
					if (!_tmp18_) {
						break;
					}
				}
				goto __finally24;
				__catch24_g_regex_error:
				{
					GError* e = NULL;
					const gchar* _tmp24_ = NULL;
					e = _inner_error_;
					_inner_error_ = NULL;
					_tmp24_ = text;
					g_return_val_if_reached (_tmp24_);
					_g_error_free0 (e);
				}
				__finally24:
				if (G_UNLIKELY (_inner_error_ != NULL)) {
					_g_match_info_free0 (info);
					_g_string_free0 (builder);
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
					g_clear_error (&_inner_error_);
					return NULL;
				}
				_tmp25_ = info;
				g_match_info_fetch_pos (_tmp25_, 0, &_tmp26_, &_tmp27_);
				match_start_pos = _tmp26_;
				match_end_pos = _tmp27_;
				_tmp28_ = builder;
				_tmp29_ = text;
				_tmp30_ = start_pos;
				_tmp31_ = match_start_pos;
				_tmp32_ = string_slice (_tmp29_, (glong) _tmp30_, (glong) _tmp31_);
				_tmp33_ = _tmp32_;
				g_string_append (_tmp28_, _tmp33_);
				_g_free0 (_tmp33_);
				_tmp34_ = info;
				_tmp35_ = g_match_info_fetch (_tmp34_, 1);
				type = _tmp35_;
				_tmp36_ = type;
				_tmp37_ = string_get (_tmp36_, (glong) 0);
				switch (_tmp37_) {
					case '0':
					case '1':
					case '2':
					case '3':
					case '5':
					case '8':
					{
						GString* _tmp38_ = NULL;
						GeeArrayList* _tmp39_ = NULL;
						gint _tmp40_ = 0;
						gpointer _tmp41_ = NULL;
						const gchar* _tmp42_ = NULL;
						gchar _tmp43_ = '\0';
						gchar* _tmp44_ = NULL;
						gchar* _tmp45_ = NULL;
						_tmp38_ = builder;
						_tmp39_ = self->priv->numerics;
						_tmp40_ = index;
						_tmp41_ = gee_abstract_list_get ((GeeAbstractList*) _tmp39_, _tmp40_);
						_tmp42_ = type;
						_tmp43_ = string_get (_tmp42_, (glong) 0);
						_tmp44_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp41_), (KkcNumericConversionType) (_tmp43_ - '0'));
						_tmp45_ = _tmp44_;
						g_string_append (_tmp38_, _tmp45_);
						_g_free0 (_tmp45_);
						break;
					}
					case '4':
					case '9':
					{
						GString* _tmp46_ = NULL;
						GeeArrayList* _tmp47_ = NULL;
						gint _tmp48_ = 0;
						gpointer _tmp49_ = NULL;
						gchar* _tmp50_ = NULL;
						gchar* _tmp51_ = NULL;
						_tmp46_ = builder;
						_tmp47_ = self->priv->numerics;
						_tmp48_ = index;
						_tmp49_ = gee_abstract_list_get ((GeeAbstractList*) _tmp47_, _tmp48_);
						_tmp50_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp49_), KKC_NUMERIC_CONVERSION_TYPE_LATIN);
						_tmp51_ = _tmp50_;
						g_string_append (_tmp46_, _tmp51_);
						_g_free0 (_tmp51_);
						break;
					}
					default:
					{
						const gchar* _tmp52_ = NULL;
						GString* _tmp53_ = NULL;
						GeeArrayList* _tmp54_ = NULL;
						gint _tmp55_ = 0;
						gpointer _tmp56_ = NULL;
						gchar* _tmp57_ = NULL;
						gchar* _tmp58_ = NULL;
						_tmp52_ = type;
						g_warning ("numeric-template.vala:124: unknown numeric conversion type: %s", _tmp52_);
						_tmp53_ = builder;
						_tmp54_ = self->priv->numerics;
						_tmp55_ = index;
						_tmp56_ = gee_abstract_list_get ((GeeAbstractList*) _tmp54_, _tmp55_);
						_tmp57_ = kkc_rom_kana_utils_get_numeric ((gint) ((gintptr) _tmp56_), KKC_NUMERIC_CONVERSION_TYPE_LATIN);
						_tmp58_ = _tmp57_;
						g_string_append (_tmp53_, _tmp58_);
						_g_free0 (_tmp58_);
						break;
					}
				}
				_tmp59_ = match_end_pos;
				start_pos = _tmp59_;
				_g_free0 (type);
			}
		}
	}
	_tmp60_ = builder;
	_tmp61_ = text;
	_tmp62_ = start_pos;
	_tmp63_ = text;
	_tmp64_ = strlen (_tmp63_);
	_tmp65_ = _tmp64_;
	_tmp66_ = string_slice (_tmp61_, (glong) _tmp62_, (glong) _tmp65_);
	_tmp67_ = _tmp66_;
	g_string_append (_tmp60_, _tmp67_);
	_g_free0 (_tmp67_);
	_tmp68_ = builder;
	_tmp69_ = _tmp68_->str;
	_tmp70_ = g_strdup (_tmp69_);
	result = _tmp70_;
	_g_match_info_free0 (info);
	_g_string_free0 (builder);
	return result;
}


static const gchar* kkc_numeric_template_real_get_source (KkcTemplate* base) {
	const gchar* result;
	KkcNumericTemplate* self;
	const gchar* _tmp0_ = NULL;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = self->priv->_source;
	result = _tmp0_;
	return result;
}


static void kkc_numeric_template_real_set_source (KkcTemplate* base, const gchar* value) {
	KkcNumericTemplate* self;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_source);
	self->priv->_source = _tmp1_;
	g_object_notify ((GObject *) self, "source");
}


static gboolean kkc_numeric_template_real_get_okuri (KkcTemplate* base) {
	gboolean result;
	KkcNumericTemplate* self;
	gboolean _tmp0_ = FALSE;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = self->priv->_okuri;
	result = _tmp0_;
	return result;
}


static void kkc_numeric_template_real_set_okuri (KkcTemplate* base, gboolean value) {
	KkcNumericTemplate* self;
	gboolean _tmp0_ = FALSE;
	self = (KkcNumericTemplate*) base;
	_tmp0_ = value;
	self->priv->_okuri = _tmp0_;
	g_object_notify ((GObject *) self, "okuri");
}


static void kkc_numeric_template_class_init (KkcNumericTemplateClass * klass) {
	kkc_numeric_template_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcNumericTemplatePrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_numeric_template_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_numeric_template_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_numeric_template_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_NUMERIC_TEMPLATE_SOURCE, g_param_spec_string ("source", "source", "source", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_NUMERIC_TEMPLATE_OKURI, g_param_spec_boolean ("okuri", "okuri", "okuri", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
}


static void kkc_numeric_template_kkc_template_interface_init (KkcTemplateIface * iface) {
	kkc_numeric_template_kkc_template_parent_iface = g_type_interface_peek_parent (iface);
	iface->expand = (gchar* (*)(KkcTemplate*, const gchar*)) kkc_numeric_template_real_expand;
	iface->get_source = kkc_numeric_template_real_get_source;
	iface->set_source = kkc_numeric_template_real_set_source;
	iface->get_okuri = kkc_numeric_template_real_get_okuri;
	iface->set_okuri = kkc_numeric_template_real_set_okuri;
}


static void kkc_numeric_template_instance_init (KkcNumericTemplate * self) {
	GeeArrayList* _tmp0_ = NULL;
	self->priv = KKC_NUMERIC_TEMPLATE_GET_PRIVATE (self);
	_tmp0_ = gee_array_list_new (G_TYPE_INT, NULL, NULL, NULL, NULL, NULL);
	self->priv->numerics = _tmp0_;
}


static void kkc_numeric_template_finalize (GObject* obj) {
	KkcNumericTemplate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate);
	_g_object_unref0 (self->priv->numerics);
	_g_free0 (self->priv->_source);
	_g_regex_unref0 (self->priv->regex);
	_g_regex_unref0 (self->priv->ref_regex);
	G_OBJECT_CLASS (kkc_numeric_template_parent_class)->finalize (obj);
}


GType kkc_numeric_template_get_type (void) {
	static volatile gsize kkc_numeric_template_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_numeric_template_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcNumericTemplateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_numeric_template_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcNumericTemplate), 0, (GInstanceInitFunc) kkc_numeric_template_instance_init, NULL };
		static const GInterfaceInfo kkc_template_info = { (GInterfaceInitFunc) kkc_numeric_template_kkc_template_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType kkc_numeric_template_type_id;
		kkc_numeric_template_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcNumericTemplate", &g_define_type_info, 0);
		g_type_add_interface_static (kkc_numeric_template_type_id, KKC_TYPE_TEMPLATE, &kkc_template_info);
		g_once_init_leave (&kkc_numeric_template_type_id__volatile, kkc_numeric_template_type_id);
	}
	return kkc_numeric_template_type_id__volatile;
}


static void _vala_kkc_numeric_template_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcNumericTemplate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate);
	switch (property_id) {
		case KKC_NUMERIC_TEMPLATE_SOURCE:
		g_value_set_string (value, kkc_template_get_source ((KkcTemplate*) self));
		break;
		case KKC_NUMERIC_TEMPLATE_OKURI:
		g_value_set_boolean (value, kkc_template_get_okuri ((KkcTemplate*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_numeric_template_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcNumericTemplate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_NUMERIC_TEMPLATE, KkcNumericTemplate);
	switch (property_id) {
		case KKC_NUMERIC_TEMPLATE_SOURCE:
		kkc_template_set_source ((KkcTemplate*) self, g_value_get_string (value));
		break;
		case KKC_NUMERIC_TEMPLATE_OKURI:
		kkc_template_set_okuri ((KkcTemplate*) self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


