/* candidate.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from candidate.vala, do not modify */

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


#define KKC_TYPE_CANDIDATE (kkc_candidate_get_type ())
#define KKC_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_CANDIDATE, KkcCandidate))
#define KKC_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_CANDIDATE, KkcCandidateClass))
#define KKC_IS_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_CANDIDATE))
#define KKC_IS_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_CANDIDATE))
#define KKC_CANDIDATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_CANDIDATE, KkcCandidateClass))

typedef struct _KkcCandidate KkcCandidate;
typedef struct _KkcCandidateClass KkcCandidateClass;
typedef struct _KkcCandidatePrivate KkcCandidatePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _KkcCandidate {
	GObject parent_instance;
	KkcCandidatePrivate * priv;
};

struct _KkcCandidateClass {
	GObjectClass parent_class;
};

struct _KkcCandidatePrivate {
	gchar* _midasi;
	gboolean _okuri;
	gchar* _text;
	gchar* _annotation;
	gchar* _output;
};


static gpointer kkc_candidate_parent_class = NULL;

GType kkc_candidate_get_type (void) G_GNUC_CONST;
#define KKC_CANDIDATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_CANDIDATE, KkcCandidatePrivate))
enum  {
	KKC_CANDIDATE_DUMMY_PROPERTY,
	KKC_CANDIDATE_MIDASI,
	KKC_CANDIDATE_OKURI,
	KKC_CANDIDATE_TEXT,
	KKC_CANDIDATE_ANNOTATION,
	KKC_CANDIDATE_OUTPUT
};
gchar* kkc_candidate_to_string (KkcCandidate* self);
const gchar* kkc_candidate_get_annotation (KkcCandidate* self);
const gchar* kkc_candidate_get_text (KkcCandidate* self);
KkcCandidate* kkc_candidate_new (const gchar* midasi, gboolean okuri, const gchar* text, const gchar* annotation, const gchar* output);
KkcCandidate* kkc_candidate_construct (GType object_type, const gchar* midasi, gboolean okuri, const gchar* text, const gchar* annotation, const gchar* output);
void kkc_candidate_set_midasi (KkcCandidate* self, const gchar* value);
void kkc_candidate_set_okuri (KkcCandidate* self, gboolean value);
void kkc_candidate_set_text (KkcCandidate* self, const gchar* value);
void kkc_candidate_set_annotation (KkcCandidate* self, const gchar* value);
void kkc_candidate_set_output (KkcCandidate* self, const gchar* value);
const gchar* kkc_candidate_get_midasi (KkcCandidate* self);
gboolean kkc_candidate_get_okuri (KkcCandidate* self);
const gchar* kkc_candidate_get_output (KkcCandidate* self);
static void kkc_candidate_finalize (GObject* obj);
static void _vala_kkc_candidate_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_candidate_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
         * Convert the candidate to string.
         * @return a string representing the candidate
         */
gchar* kkc_candidate_to_string (KkcCandidate* self) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_annotation;
	if (_tmp0_ != NULL) {
		const gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		_tmp1_ = self->priv->_text;
		_tmp2_ = g_strconcat (_tmp1_, ";", NULL);
		_tmp3_ = _tmp2_;
		_tmp4_ = self->priv->_annotation;
		_tmp5_ = g_strconcat (_tmp3_, _tmp4_, NULL);
		_tmp6_ = _tmp5_;
		_g_free0 (_tmp3_);
		result = _tmp6_;
		return result;
	} else {
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		_tmp7_ = self->priv->_text;
		_tmp8_ = g_strdup (_tmp7_);
		result = _tmp8_;
		return result;
	}
}


/**
         * Create a new Candidate.
         *
         * @param midasi midasi (index) word which generate the candidate
         * @param okuri whether the candidate is a result of okuri-ari conversion
         * @param text base string value of the candidate
         * @param annotation optional annotation text to the candidate
         * @param output optional output text used instead of text
         *
         * @return a new KkcCandidate
         */
KkcCandidate* kkc_candidate_construct (GType object_type, const gchar* midasi, gboolean okuri, const gchar* text, const gchar* annotation, const gchar* output) {
	KkcCandidate * self = NULL;
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	g_return_val_if_fail (midasi != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	self = (KkcCandidate*) g_object_new (object_type, NULL);
	_tmp0_ = midasi;
	kkc_candidate_set_midasi (self, _tmp0_);
	_tmp1_ = okuri;
	kkc_candidate_set_okuri (self, _tmp1_);
	_tmp2_ = text;
	kkc_candidate_set_text (self, _tmp2_);
	_tmp3_ = annotation;
	kkc_candidate_set_annotation (self, _tmp3_);
	_tmp5_ = output;
	if (_tmp5_ == NULL) {
		const gchar* _tmp6_ = NULL;
		_tmp6_ = text;
		_tmp4_ = _tmp6_;
	} else {
		const gchar* _tmp7_ = NULL;
		_tmp7_ = output;
		_tmp4_ = _tmp7_;
	}
	kkc_candidate_set_output (self, _tmp4_);
	return self;
}


KkcCandidate* kkc_candidate_new (const gchar* midasi, gboolean okuri, const gchar* text, const gchar* annotation, const gchar* output) {
	return kkc_candidate_construct (KKC_TYPE_CANDIDATE, midasi, okuri, text, annotation, output);
}


const gchar* kkc_candidate_get_midasi (KkcCandidate* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_midasi;
	result = _tmp0_;
	return result;
}


void kkc_candidate_set_midasi (KkcCandidate* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_midasi);
	self->priv->_midasi = _tmp1_;
	g_object_notify ((GObject *) self, "midasi");
}


gboolean kkc_candidate_get_okuri (KkcCandidate* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_okuri;
	result = _tmp0_;
	return result;
}


void kkc_candidate_set_okuri (KkcCandidate* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_okuri = _tmp0_;
	g_object_notify ((GObject *) self, "okuri");
}


const gchar* kkc_candidate_get_text (KkcCandidate* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_text;
	result = _tmp0_;
	return result;
}


void kkc_candidate_set_text (KkcCandidate* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_text);
	self->priv->_text = _tmp1_;
	g_object_notify ((GObject *) self, "text");
}


const gchar* kkc_candidate_get_annotation (KkcCandidate* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_annotation;
	result = _tmp0_;
	return result;
}


void kkc_candidate_set_annotation (KkcCandidate* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_annotation);
	self->priv->_annotation = _tmp1_;
	g_object_notify ((GObject *) self, "annotation");
}


const gchar* kkc_candidate_get_output (KkcCandidate* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_output;
	result = _tmp0_;
	return result;
}


void kkc_candidate_set_output (KkcCandidate* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_output);
	self->priv->_output = _tmp1_;
	g_object_notify ((GObject *) self, "output");
}


static void kkc_candidate_class_init (KkcCandidateClass * klass) {
	kkc_candidate_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcCandidatePrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_candidate_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_candidate_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_candidate_finalize;
	/**
	         * Midasi word which generated this candidate.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_MIDASI, g_param_spec_string ("midasi", "midasi", "midasi", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	/**
	         * Flag to indicate whether this candidate is generated as a
	         * result of okuri-ari conversion.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_OKURI, g_param_spec_boolean ("okuri", "okuri", "okuri", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
	/**
	         * Base string value of the candidate.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_TEXT, g_param_spec_string ("text", "text", "text", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Optional annotation text associated with the candidate.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_ANNOTATION, g_param_spec_string ("annotation", "annotation", "annotation", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Output string shown instead of text.
	         *
	         * This is particularly useful to display a candidate of
	         * numeric conversion.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_OUTPUT, g_param_spec_string ("output", "output", "output", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void kkc_candidate_instance_init (KkcCandidate * self) {
	self->priv = KKC_CANDIDATE_GET_PRIVATE (self);
}


static void kkc_candidate_finalize (GObject* obj) {
	KkcCandidate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_CANDIDATE, KkcCandidate);
	_g_free0 (self->priv->_midasi);
	_g_free0 (self->priv->_text);
	_g_free0 (self->priv->_annotation);
	_g_free0 (self->priv->_output);
	G_OBJECT_CLASS (kkc_candidate_parent_class)->finalize (obj);
}


/**
     * Object representing a candidate in dictionaries.
     */
GType kkc_candidate_get_type (void) {
	static volatile gsize kkc_candidate_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_candidate_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcCandidateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_candidate_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcCandidate), 0, (GInstanceInitFunc) kkc_candidate_instance_init, NULL };
		GType kkc_candidate_type_id;
		kkc_candidate_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcCandidate", &g_define_type_info, 0);
		g_once_init_leave (&kkc_candidate_type_id__volatile, kkc_candidate_type_id);
	}
	return kkc_candidate_type_id__volatile;
}


static void _vala_kkc_candidate_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcCandidate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_CANDIDATE, KkcCandidate);
	switch (property_id) {
		case KKC_CANDIDATE_MIDASI:
		g_value_set_string (value, kkc_candidate_get_midasi (self));
		break;
		case KKC_CANDIDATE_OKURI:
		g_value_set_boolean (value, kkc_candidate_get_okuri (self));
		break;
		case KKC_CANDIDATE_TEXT:
		g_value_set_string (value, kkc_candidate_get_text (self));
		break;
		case KKC_CANDIDATE_ANNOTATION:
		g_value_set_string (value, kkc_candidate_get_annotation (self));
		break;
		case KKC_CANDIDATE_OUTPUT:
		g_value_set_string (value, kkc_candidate_get_output (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_candidate_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcCandidate * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_CANDIDATE, KkcCandidate);
	switch (property_id) {
		case KKC_CANDIDATE_MIDASI:
		kkc_candidate_set_midasi (self, g_value_get_string (value));
		break;
		case KKC_CANDIDATE_OKURI:
		kkc_candidate_set_okuri (self, g_value_get_boolean (value));
		break;
		case KKC_CANDIDATE_TEXT:
		kkc_candidate_set_text (self, g_value_get_string (value));
		break;
		case KKC_CANDIDATE_ANNOTATION:
		kkc_candidate_set_annotation (self, g_value_get_string (value));
		break;
		case KKC_CANDIDATE_OUTPUT:
		kkc_candidate_set_output (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



