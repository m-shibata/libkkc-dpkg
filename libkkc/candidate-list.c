/* candidate-list.c generated by valac 0.21.1.40-3bbfb, the Vala compiler
 * generated from candidate-list.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>


#define KKC_TYPE_CANDIDATE_LIST (kkc_candidate_list_get_type ())
#define KKC_CANDIDATE_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_CANDIDATE_LIST, KkcCandidateList))
#define KKC_CANDIDATE_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_CANDIDATE_LIST, KkcCandidateListClass))
#define KKC_IS_CANDIDATE_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_CANDIDATE_LIST))
#define KKC_IS_CANDIDATE_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_CANDIDATE_LIST))
#define KKC_CANDIDATE_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_CANDIDATE_LIST, KkcCandidateListClass))

typedef struct _KkcCandidateList KkcCandidateList;
typedef struct _KkcCandidateListClass KkcCandidateListClass;
typedef struct _KkcCandidateListPrivate KkcCandidateListPrivate;

#define KKC_TYPE_CANDIDATE (kkc_candidate_get_type ())
#define KKC_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_CANDIDATE, KkcCandidate))
#define KKC_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_CANDIDATE, KkcCandidateClass))
#define KKC_IS_CANDIDATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_CANDIDATE))
#define KKC_IS_CANDIDATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_CANDIDATE))
#define KKC_CANDIDATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_CANDIDATE, KkcCandidateClass))

typedef struct _KkcCandidate KkcCandidate;
typedef struct _KkcCandidateClass KkcCandidateClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _KkcCandidateList {
	GObject parent_instance;
	KkcCandidateListPrivate * priv;
};

struct _KkcCandidateListClass {
	GObjectClass parent_class;
	gboolean (*next) (KkcCandidateList* self);
	gboolean (*previous) (KkcCandidateList* self);
};

struct _KkcCandidateListPrivate {
	GeeArrayList* _candidates;
	gint _cursor_pos;
	GeeSet* seen;
	guint _page_start;
	guint _page_size;
	gboolean _round;
};


static gpointer kkc_candidate_list_parent_class = NULL;

GType kkc_candidate_list_get_type (void) G_GNUC_CONST;
GType kkc_candidate_get_type (void) G_GNUC_CONST;
#define KKC_CANDIDATE_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), KKC_TYPE_CANDIDATE_LIST, KkcCandidateListPrivate))
enum  {
	KKC_CANDIDATE_LIST_DUMMY_PROPERTY,
	KKC_CANDIDATE_LIST_CURSOR_POS,
	KKC_CANDIDATE_LIST_SIZE,
	KKC_CANDIDATE_LIST_PAGE_START,
	KKC_CANDIDATE_LIST_PAGE_SIZE,
	KKC_CANDIDATE_LIST_ROUND,
	KKC_CANDIDATE_LIST_PAGE_VISIBLE
};
KkcCandidate* kkc_candidate_list_get (KkcCandidateList* self, gint index);
gint kkc_candidate_list_get_size (KkcCandidateList* self);
void kkc_candidate_list_clear (KkcCandidateList* self);
gboolean kkc_candidate_list_contains (KkcCandidateList* self, KkcCandidate* candidate);
const gchar* kkc_candidate_get_output (KkcCandidate* self);
gboolean kkc_candidate_list_add (KkcCandidateList* self, KkcCandidate* candidate);
gboolean kkc_candidate_list_add_all (KkcCandidateList* self, KkcCandidateList* other);
KkcCandidate** kkc_candidate_list_to_array (KkcCandidateList* self, int* result_length1);
static guint kkc_candidate_list_get_page_start_cursor_pos (KkcCandidateList* self, guint pos);
guint kkc_candidate_list_get_page_size (KkcCandidateList* self);
gboolean kkc_candidate_list_select_at (KkcCandidateList* self, guint index_in_page);
gint kkc_candidate_list_get_cursor_pos (KkcCandidateList* self);
void kkc_candidate_list_select (KkcCandidateList* self);
KkcCandidateList* kkc_candidate_list_new (guint page_start, guint page_size, gboolean round);
KkcCandidateList* kkc_candidate_list_construct (GType object_type, guint page_start, guint page_size, gboolean round);
void kkc_candidate_list_set_page_start (KkcCandidateList* self, guint value);
void kkc_candidate_list_set_page_size (KkcCandidateList* self, guint value);
void kkc_candidate_list_set_round (KkcCandidateList* self, gboolean value);
gboolean kkc_candidate_list_first (KkcCandidateList* self);
gboolean kkc_candidate_list_next (KkcCandidateList* self);
static gboolean kkc_candidate_list_real_next (KkcCandidateList* self);
guint kkc_candidate_list_get_page_start (KkcCandidateList* self);
gboolean kkc_candidate_list_cursor_down (KkcCandidateList* self);
gboolean kkc_candidate_list_page_down (KkcCandidateList* self);
gboolean kkc_candidate_list_previous (KkcCandidateList* self);
static gboolean kkc_candidate_list_real_previous (KkcCandidateList* self);
gboolean kkc_candidate_list_cursor_up (KkcCandidateList* self);
gboolean kkc_candidate_list_page_up (KkcCandidateList* self);
static gboolean kkc_candidate_list_cursor_move (KkcCandidateList* self, gint step);
gboolean kkc_candidate_list_get_round (KkcCandidateList* self);
static gboolean kkc_candidate_list_page_move (KkcCandidateList* self, gint step);
void kkc_candidate_list_set_cursor_pos (KkcCandidateList* self, gint value);
gboolean kkc_candidate_list_get_page_visible (KkcCandidateList* self);
static void kkc_candidate_list_finalize (GObject* obj);
static void _vala_kkc_candidate_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_kkc_candidate_list_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
         * Get the current candidate at the given index.
         *
         * @param index candidate position (-1 for the current cursor position)
         *
         * @return a Candidate
         */
KkcCandidate* kkc_candidate_list_get (KkcCandidateList* self, gint index) {
	KkcCandidate* result = NULL;
	gint _tmp0_ = 0;
	gboolean _tmp2_ = FALSE;
	gint _tmp3_ = 0;
	gboolean _tmp7_ = FALSE;
	GeeArrayList* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	gpointer _tmp10_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = index;
	if (_tmp0_ < 0) {
		gint _tmp1_ = 0;
		_tmp1_ = self->priv->_cursor_pos;
		index = _tmp1_;
	}
	_tmp3_ = index;
	if (0 <= _tmp3_) {
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _tmp6_ = 0;
		_tmp4_ = index;
		_tmp5_ = kkc_candidate_list_get_size (self);
		_tmp6_ = _tmp5_;
		_tmp2_ = _tmp4_ < _tmp6_;
	} else {
		_tmp2_ = FALSE;
	}
	_tmp7_ = _tmp2_;
	_vala_assert (_tmp7_, "0 <= index && index < size");
	_tmp8_ = self->priv->_candidates;
	_tmp9_ = index;
	_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) _tmp8_, _tmp9_);
	result = (KkcCandidate*) _tmp10_;
	return result;
}


void kkc_candidate_list_clear (KkcCandidateList* self) {
	gboolean is_populated = FALSE;
	gboolean is_cursor_changed = FALSE;
	GeeSet* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint _tmp5_ = 0;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp7_ = FALSE;
	g_return_if_fail (self != NULL);
	is_populated = FALSE;
	is_cursor_changed = FALSE;
	_tmp0_ = self->priv->seen;
	gee_collection_clear ((GeeCollection*) _tmp0_);
	_tmp1_ = self->priv->_candidates;
	_tmp2_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_ > 0) {
		GeeArrayList* _tmp4_ = NULL;
		_tmp4_ = self->priv->_candidates;
		gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp4_);
		is_populated = TRUE;
	}
	_tmp5_ = self->priv->_cursor_pos;
	if (_tmp5_ >= 0) {
		self->priv->_cursor_pos = -1;
		is_cursor_changed = TRUE;
	}
	_tmp6_ = is_populated;
	if (_tmp6_) {
		g_signal_emit_by_name (self, "populated");
	}
	_tmp7_ = is_cursor_changed;
	if (_tmp7_) {
		g_object_notify ((GObject*) self, "cursor-pos");
	}
}


gboolean kkc_candidate_list_contains (KkcCandidateList* self, KkcCandidate* candidate) {
	gboolean result = FALSE;
	GeeSet* _tmp0_ = NULL;
	KkcCandidate* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (candidate != NULL, FALSE);
	_tmp0_ = self->priv->seen;
	_tmp1_ = candidate;
	_tmp2_ = kkc_candidate_get_output (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = gee_collection_contains ((GeeCollection*) _tmp0_, _tmp3_);
	result = _tmp4_;
	return result;
}


gboolean kkc_candidate_list_add (KkcCandidateList* self, KkcCandidate* candidate) {
	gboolean result = FALSE;
	GeeSet* _tmp0_ = NULL;
	KkcCandidate* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (candidate != NULL, FALSE);
	_tmp0_ = self->priv->seen;
	_tmp1_ = candidate;
	_tmp2_ = kkc_candidate_get_output (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = gee_collection_contains ((GeeCollection*) _tmp0_, _tmp3_);
	if (!_tmp4_) {
		GeeArrayList* _tmp5_ = NULL;
		KkcCandidate* _tmp6_ = NULL;
		GeeSet* _tmp7_ = NULL;
		KkcCandidate* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
		_tmp5_ = self->priv->_candidates;
		_tmp6_ = candidate;
		gee_abstract_collection_add ((GeeAbstractCollection*) _tmp5_, _tmp6_);
		_tmp7_ = self->priv->seen;
		_tmp8_ = candidate;
		_tmp9_ = kkc_candidate_get_output (_tmp8_);
		_tmp10_ = _tmp9_;
		gee_collection_add ((GeeCollection*) _tmp7_, _tmp10_);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


gboolean kkc_candidate_list_add_all (KkcCandidateList* self, KkcCandidateList* other) {
	gboolean result = FALSE;
	gboolean retval = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (other != NULL, FALSE);
	retval = FALSE;
	{
		GeeArrayList* _c_list = NULL;
		KkcCandidateList* _tmp0_ = NULL;
		GeeArrayList* _tmp1_ = NULL;
		GeeArrayList* _tmp2_ = NULL;
		gint _c_size = 0;
		GeeArrayList* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _c_index = 0;
		_tmp0_ = other;
		_tmp1_ = _tmp0_->priv->_candidates;
		_tmp2_ = _g_object_ref0 (_tmp1_);
		_c_list = _tmp2_;
		_tmp3_ = _c_list;
		_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_c_size = _tmp5_;
		_c_index = -1;
		while (TRUE) {
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			KkcCandidate* c = NULL;
			GeeArrayList* _tmp9_ = NULL;
			gint _tmp10_ = 0;
			gpointer _tmp11_ = NULL;
			KkcCandidate* _tmp12_ = NULL;
			gboolean _tmp13_ = FALSE;
			_tmp6_ = _c_index;
			_c_index = _tmp6_ + 1;
			_tmp7_ = _c_index;
			_tmp8_ = _c_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _c_list;
			_tmp10_ = _c_index;
			_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
			c = (KkcCandidate*) _tmp11_;
			_tmp12_ = c;
			_tmp13_ = kkc_candidate_list_add (self, _tmp12_);
			if (_tmp13_) {
				retval = TRUE;
			}
			_g_object_unref0 (c);
		}
		_g_object_unref0 (_c_list);
	}
	result = retval;
	return result;
}


KkcCandidate** kkc_candidate_list_to_array (KkcCandidateList* self, int* result_length1) {
	KkcCandidate** result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gpointer* _tmp2_ = NULL;
	KkcCandidate** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_candidates;
	_tmp2_ = gee_abstract_collection_to_array ((GeeAbstractCollection*) _tmp0_, &_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp3__length1 = _tmp1_;
	if (result_length1) {
		*result_length1 = _tmp3__length1;
	}
	result = _tmp3_;
	return result;
}


static guint kkc_candidate_list_get_page_start_cursor_pos (KkcCandidateList* self, guint pos) {
	guint result = 0U;
	guint _tmp0_ = 0U;
	guint _tmp1_ = 0U;
	guint _tmp2_ = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = pos;
	_tmp1_ = self->priv->_page_size;
	_tmp2_ = self->priv->_page_size;
	result = (_tmp0_ / _tmp1_) * _tmp2_;
	return result;
}


/**
         * Select a candidate in the current page.
         *
         * @param index_in_page cursor position in the page to select
         *
         * @return `true` if a candidate is selected, `false` otherwise
         */
gboolean kkc_candidate_list_select_at (KkcCandidateList* self, guint index_in_page) {
	gboolean result = FALSE;
	guint _tmp0_ = 0U;
	guint _tmp1_ = 0U;
	guint page_offset = 0U;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	guint _tmp4_ = 0U;
	guint _tmp5_ = 0U;
	guint _tmp6_ = 0U;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = index_in_page;
	_tmp1_ = self->priv->_page_size;
	_vala_assert (_tmp0_ < _tmp1_, "index_in_page < page_size");
	_tmp2_ = kkc_candidate_list_get_cursor_pos (self);
	_tmp3_ = _tmp2_;
	_tmp4_ = kkc_candidate_list_get_page_start_cursor_pos (self, (guint) _tmp3_);
	page_offset = _tmp4_;
	_tmp5_ = page_offset;
	_tmp6_ = index_in_page;
	_tmp7_ = kkc_candidate_list_get_size (self);
	_tmp8_ = _tmp7_;
	if ((_tmp5_ + _tmp6_) < ((guint) _tmp8_)) {
		guint _tmp9_ = 0U;
		guint _tmp10_ = 0U;
		_tmp9_ = page_offset;
		_tmp10_ = index_in_page;
		self->priv->_cursor_pos = (gint) (_tmp9_ + _tmp10_);
		g_object_notify ((GObject*) self, "cursor-pos");
		kkc_candidate_list_select (self);
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


/**
         * Select the current candidate.
         */
void kkc_candidate_list_select (KkcCandidateList* self) {
	KkcCandidate* candidate = NULL;
	KkcCandidate* _tmp0_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = kkc_candidate_list_get (self, -1);
	candidate = _tmp0_;
	g_signal_emit_by_name (self, "selected", candidate);
	_g_object_unref0 (candidate);
}


/**
         * Create a new CandidateList.
         *
         * @param page_start starting index of pagination
         * @param page_size page size
         * @param round whether to loop over the candidate list
         *
         * @return a new CandidateList
         */
KkcCandidateList* kkc_candidate_list_construct (GType object_type, guint page_start, guint page_size, gboolean round) {
	KkcCandidateList * self = NULL;
	guint _tmp0_ = 0U;
	guint _tmp1_ = 0U;
	gboolean _tmp2_ = FALSE;
	self = (KkcCandidateList*) g_object_new (object_type, NULL);
	_tmp0_ = page_start;
	kkc_candidate_list_set_page_start (self, _tmp0_);
	_tmp1_ = page_size;
	kkc_candidate_list_set_page_size (self, _tmp1_);
	_tmp2_ = round;
	kkc_candidate_list_set_round (self, _tmp2_);
	return self;
}


KkcCandidateList* kkc_candidate_list_new (guint page_start, guint page_size, gboolean round) {
	return kkc_candidate_list_construct (KKC_TYPE_CANDIDATE_LIST, page_start, page_size, round);
}


/**
         * Select the first candidate.
         *
         * @return `true` if cursor position has changed, `false` otherwise
         */
gboolean kkc_candidate_list_first (KkcCandidateList* self) {
	gboolean result = FALSE;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_candidates;
	_tmp1_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	if (_tmp2_ > 0) {
		self->priv->_cursor_pos = 0;
		g_object_notify ((GObject*) self, "cursor-pos");
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


/**
         * Move cursor forward.
         *
         * @return `true` if cursor position has changed, `false` otherwise
         */
static gboolean kkc_candidate_list_real_next (KkcCandidateList* self) {
	gboolean result = FALSE;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	guint _tmp2_ = 0U;
	_tmp0_ = kkc_candidate_list_get_cursor_pos (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->_page_start;
	if (((guint) _tmp1_) < _tmp2_) {
		gboolean _tmp3_ = FALSE;
		_tmp3_ = kkc_candidate_list_cursor_down (self);
		result = _tmp3_;
		return result;
	} else {
		gboolean _tmp4_ = FALSE;
		_tmp4_ = kkc_candidate_list_page_down (self);
		result = _tmp4_;
		return result;
	}
}


gboolean kkc_candidate_list_next (KkcCandidateList* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_CANDIDATE_LIST_GET_CLASS (self)->next (self);
}


/**
         * Move cursor backward.
         *
         * @return `true` if cursor position has changed, `false` otherwise
         */
static gboolean kkc_candidate_list_real_previous (KkcCandidateList* self) {
	gboolean result = FALSE;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	guint _tmp2_ = 0U;
	_tmp0_ = kkc_candidate_list_get_cursor_pos (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->_page_start;
	if (((guint) _tmp1_) <= _tmp2_) {
		gboolean _tmp3_ = FALSE;
		_tmp3_ = kkc_candidate_list_cursor_up (self);
		result = _tmp3_;
		return result;
	} else {
		gboolean _tmp4_ = FALSE;
		_tmp4_ = kkc_candidate_list_page_up (self);
		result = _tmp4_;
		return result;
	}
}


gboolean kkc_candidate_list_previous (KkcCandidateList* self) {
	g_return_val_if_fail (self != NULL, FALSE);
	return KKC_CANDIDATE_LIST_GET_CLASS (self)->previous (self);
}


static gboolean kkc_candidate_list_cursor_move (KkcCandidateList* self, gint step) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	GeeArrayList* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp1_ = self->priv->_candidates;
	_tmp2_ = gee_abstract_collection_get_is_empty ((GeeAbstractCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		_tmp0_ = TRUE;
	} else {
		gint _tmp4_ = 0;
		_tmp4_ = step;
		_tmp0_ = _tmp4_ == 0;
	}
	_tmp5_ = _tmp0_;
	if (_tmp5_) {
		result = FALSE;
		return result;
	}
	_tmp6_ = self->priv->_round;
	if (_tmp6_) {
		gint pos = 0;
		gint _tmp7_ = 0;
		gint _tmp8_ = 0;
		GeeArrayList* _tmp9_ = NULL;
		gint _tmp10_ = 0;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		gint _tmp17_ = 0;
		_tmp7_ = self->priv->_cursor_pos;
		_tmp8_ = step;
		_tmp9_ = self->priv->_candidates;
		_tmp10_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp9_);
		_tmp11_ = _tmp10_;
		pos = (_tmp7_ + _tmp8_) % _tmp11_;
		_tmp12_ = pos;
		if (_tmp12_ < 0) {
			gint _tmp13_ = 0;
			GeeArrayList* _tmp14_ = NULL;
			gint _tmp15_ = 0;
			gint _tmp16_ = 0;
			_tmp13_ = pos;
			_tmp14_ = self->priv->_candidates;
			_tmp15_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp14_);
			_tmp16_ = _tmp15_;
			pos = _tmp13_ + _tmp16_;
		}
		_tmp17_ = pos;
		self->priv->_cursor_pos = _tmp17_;
		g_object_notify ((GObject*) self, "cursor-pos");
		result = TRUE;
		return result;
	} else {
		gint pos = 0;
		gint _tmp18_ = 0;
		gint _tmp19_ = 0;
		gboolean _tmp20_ = FALSE;
		gint _tmp21_ = 0;
		gboolean _tmp26_ = FALSE;
		_tmp18_ = self->priv->_cursor_pos;
		_tmp19_ = step;
		pos = _tmp18_ + _tmp19_;
		_tmp21_ = pos;
		if (0 <= _tmp21_) {
			gint _tmp22_ = 0;
			GeeArrayList* _tmp23_ = NULL;
			gint _tmp24_ = 0;
			gint _tmp25_ = 0;
			_tmp22_ = pos;
			_tmp23_ = self->priv->_candidates;
			_tmp24_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp23_);
			_tmp25_ = _tmp24_;
			_tmp20_ = _tmp22_ < _tmp25_;
		} else {
			_tmp20_ = FALSE;
		}
		_tmp26_ = _tmp20_;
		if (_tmp26_) {
			gint _tmp27_ = 0;
			_tmp27_ = pos;
			self->priv->_cursor_pos = _tmp27_;
			g_object_notify ((GObject*) self, "cursor-pos");
			result = TRUE;
			return result;
		}
	}
	result = FALSE;
	return result;
}


/**
         * Move cursor to the previous candidate.
         *
         * @return `true` if cursor position has changed, `false` otherwise.
         */
gboolean kkc_candidate_list_cursor_up (KkcCandidateList* self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = kkc_candidate_list_cursor_move (self, -1);
	result = _tmp0_;
	return result;
}


/**
         * Move cursor to the next candidate.
         *
         * @return `true` if cursor position has changed, `false` otherwise
         */
gboolean kkc_candidate_list_cursor_down (KkcCandidateList* self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = kkc_candidate_list_cursor_move (self, 1);
	result = _tmp0_;
	return result;
}


static gboolean kkc_candidate_list_page_move (KkcCandidateList* self, gint step) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	GeeArrayList* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp1_ = self->priv->_candidates;
	_tmp2_ = gee_abstract_collection_get_is_empty ((GeeAbstractCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_) {
		_tmp0_ = TRUE;
	} else {
		gint _tmp4_ = 0;
		_tmp4_ = step;
		_tmp0_ = _tmp4_ == 0;
	}
	_tmp5_ = _tmp0_;
	if (_tmp5_) {
		result = FALSE;
		return result;
	}
	_tmp6_ = self->priv->_round;
	if (_tmp6_) {
		guint pos = 0U;
		gint _tmp7_ = 0;
		guint _tmp8_ = 0U;
		gint _tmp9_ = 0;
		GeeArrayList* _tmp10_ = NULL;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		guint _tmp13_ = 0U;
		guint _tmp18_ = 0U;
		guint _tmp19_ = 0U;
		guint _tmp20_ = 0U;
		gint _tmp21_ = 0;
		_tmp7_ = self->priv->_cursor_pos;
		_tmp8_ = self->priv->_page_size;
		_tmp9_ = step;
		_tmp10_ = self->priv->_candidates;
		_tmp11_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp10_);
		_tmp12_ = _tmp11_;
		pos = (_tmp7_ + (_tmp8_ * _tmp9_)) % _tmp12_;
		_tmp13_ = pos;
		if (_tmp13_ < ((guint) 0)) {
			guint _tmp14_ = 0U;
			GeeArrayList* _tmp15_ = NULL;
			gint _tmp16_ = 0;
			gint _tmp17_ = 0;
			_tmp14_ = pos;
			_tmp15_ = self->priv->_candidates;
			_tmp16_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp15_);
			_tmp17_ = _tmp16_;
			pos = _tmp14_ + _tmp17_;
		}
		_tmp18_ = pos;
		_tmp19_ = kkc_candidate_list_get_page_start_cursor_pos (self, _tmp18_);
		pos = _tmp19_;
		_tmp20_ = pos;
		_tmp21_ = self->priv->_cursor_pos;
		if (_tmp20_ != ((guint) _tmp21_)) {
			guint _tmp22_ = 0U;
			_tmp22_ = pos;
			self->priv->_cursor_pos = (gint) _tmp22_;
			g_object_notify ((GObject*) self, "cursor-pos");
			result = TRUE;
			return result;
		}
	} else {
		guint pos = 0U;
		gint _tmp23_ = 0;
		guint _tmp24_ = 0U;
		gint _tmp25_ = 0;
		gboolean _tmp26_ = FALSE;
		guint _tmp27_ = 0U;
		gboolean _tmp32_ = FALSE;
		_tmp23_ = self->priv->_cursor_pos;
		_tmp24_ = self->priv->_page_size;
		_tmp25_ = step;
		pos = _tmp23_ + (_tmp24_ * _tmp25_);
		_tmp27_ = pos;
		if (((guint) 0) <= _tmp27_) {
			guint _tmp28_ = 0U;
			GeeArrayList* _tmp29_ = NULL;
			gint _tmp30_ = 0;
			gint _tmp31_ = 0;
			_tmp28_ = pos;
			_tmp29_ = self->priv->_candidates;
			_tmp30_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp29_);
			_tmp31_ = _tmp30_;
			_tmp26_ = _tmp28_ < ((guint) _tmp31_);
		} else {
			_tmp26_ = FALSE;
		}
		_tmp32_ = _tmp26_;
		if (_tmp32_) {
			guint _tmp33_ = 0U;
			guint _tmp34_ = 0U;
			guint _tmp35_ = 0U;
			gint _tmp36_ = 0;
			_tmp33_ = pos;
			_tmp34_ = kkc_candidate_list_get_page_start_cursor_pos (self, _tmp33_);
			pos = _tmp34_;
			_tmp35_ = pos;
			_tmp36_ = self->priv->_cursor_pos;
			if (_tmp35_ != ((guint) _tmp36_)) {
				guint _tmp37_ = 0U;
				_tmp37_ = pos;
				self->priv->_cursor_pos = (gint) _tmp37_;
				g_object_notify ((GObject*) self, "cursor-pos");
				result = TRUE;
				return result;
			}
		}
	}
	result = FALSE;
	return result;
}


/**
         * Move cursor to the previous page.
         *
         * @return `true` if cursor position has changed, `false` otherwise
         */
gboolean kkc_candidate_list_page_up (KkcCandidateList* self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = kkc_candidate_list_page_move (self, -1);
	result = _tmp0_;
	return result;
}


/**
         * Move cursor to the next page.
         *
         * @return `true` if cursor position has changed, `false` otherwise
         */
gboolean kkc_candidate_list_page_down (KkcCandidateList* self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = kkc_candidate_list_page_move (self, 1);
	result = _tmp0_;
	return result;
}


gint kkc_candidate_list_get_cursor_pos (KkcCandidateList* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_cursor_pos;
	result = _tmp0_;
	return result;
}


void kkc_candidate_list_set_cursor_pos (KkcCandidateList* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_cursor_pos = _tmp0_;
	g_object_notify ((GObject *) self, "cursor-pos");
}


gint kkc_candidate_list_get_size (KkcCandidateList* self) {
	gint result;
	GeeArrayList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_candidates;
	_tmp1_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


guint kkc_candidate_list_get_page_start (KkcCandidateList* self) {
	guint result;
	guint _tmp0_ = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = self->priv->_page_start;
	result = _tmp0_;
	return result;
}


void kkc_candidate_list_set_page_start (KkcCandidateList* self, guint value) {
	guint _tmp0_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_page_start = _tmp0_;
	g_object_notify ((GObject *) self, "page-start");
}


guint kkc_candidate_list_get_page_size (KkcCandidateList* self) {
	guint result;
	guint _tmp0_ = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = self->priv->_page_size;
	result = _tmp0_;
	return result;
}


void kkc_candidate_list_set_page_size (KkcCandidateList* self, guint value) {
	guint _tmp0_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_page_size = _tmp0_;
	g_object_notify ((GObject *) self, "page-size");
}


gboolean kkc_candidate_list_get_round (KkcCandidateList* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_round;
	result = _tmp0_;
	return result;
}


void kkc_candidate_list_set_round (KkcCandidateList* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_round = _tmp0_;
	g_object_notify ((GObject *) self, "round");
}


gboolean kkc_candidate_list_get_page_visible (KkcCandidateList* self) {
	gboolean result;
	gint _tmp0_ = 0;
	guint _tmp1_ = 0U;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_cursor_pos;
	_tmp1_ = self->priv->_page_start;
	result = _tmp0_ >= ((gint) _tmp1_);
	return result;
}


static void kkc_candidate_list_class_init (KkcCandidateListClass * klass) {
	kkc_candidate_list_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (KkcCandidateListPrivate));
	KKC_CANDIDATE_LIST_CLASS (klass)->next = kkc_candidate_list_real_next;
	KKC_CANDIDATE_LIST_CLASS (klass)->previous = kkc_candidate_list_real_previous;
	G_OBJECT_CLASS (klass)->get_property = _vala_kkc_candidate_list_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_kkc_candidate_list_set_property;
	G_OBJECT_CLASS (klass)->finalize = kkc_candidate_list_finalize;
	/**
	         * Current cursor position.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_LIST_CURSOR_POS, g_param_spec_int ("cursor-pos", "cursor-pos", "cursor-pos", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * The number of candidate in the candidate list.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_LIST_SIZE, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	         * Starting index of paging.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_LIST_PAGE_START, g_param_spec_uint ("page-start", "page-start", "page-start", 0, G_MAXUINT, 0U, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Page size.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_LIST_PAGE_SIZE, g_param_spec_uint ("page-size", "page-size", "page-size", 0, G_MAXUINT, 0U, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Flag to indicate whether to loop over the candidates.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_LIST_ROUND, g_param_spec_boolean ("round", "round", "round", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	         * Flag to indicate whether page (lookup table) is visible.
	         */
	g_object_class_install_property (G_OBJECT_CLASS (klass), KKC_CANDIDATE_LIST_PAGE_VISIBLE, g_param_spec_boolean ("page-visible", "page-visible", "page-visible", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	         * Signal emitted when candidates are filled and ready for traversal.
	         */
	g_signal_new ("populated", KKC_TYPE_CANDIDATE_LIST, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	/**
	         * Signal emitted when a candidate is selected.
	         *
	         * @param candidate selected candidate
	         */
	g_signal_new ("selected", KKC_TYPE_CANDIDATE_LIST, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, KKC_TYPE_CANDIDATE);
}


static void kkc_candidate_list_instance_init (KkcCandidateList * self) {
	GeeArrayList* _tmp0_ = NULL;
	GeeHashSet* _tmp1_ = NULL;
	self->priv = KKC_CANDIDATE_LIST_GET_PRIVATE (self);
	_tmp0_ = gee_array_list_new (KKC_TYPE_CANDIDATE, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	self->priv->_candidates = _tmp0_;
	_tmp1_ = gee_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL);
	self->priv->seen = (GeeSet*) _tmp1_;
}


static void kkc_candidate_list_finalize (GObject* obj) {
	KkcCandidateList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, KKC_TYPE_CANDIDATE_LIST, KkcCandidateList);
	_g_object_unref0 (self->priv->_candidates);
	_g_object_unref0 (self->priv->seen);
	G_OBJECT_CLASS (kkc_candidate_list_parent_class)->finalize (obj);
}


/**
     * Object representing a candidate list.
     */
GType kkc_candidate_list_get_type (void) {
	static volatile gsize kkc_candidate_list_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_candidate_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcCandidateListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_candidate_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcCandidateList), 0, (GInstanceInitFunc) kkc_candidate_list_instance_init, NULL };
		GType kkc_candidate_list_type_id;
		kkc_candidate_list_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcCandidateList", &g_define_type_info, 0);
		g_once_init_leave (&kkc_candidate_list_type_id__volatile, kkc_candidate_list_type_id);
	}
	return kkc_candidate_list_type_id__volatile;
}


static void _vala_kkc_candidate_list_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	KkcCandidateList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_CANDIDATE_LIST, KkcCandidateList);
	switch (property_id) {
		case KKC_CANDIDATE_LIST_CURSOR_POS:
		g_value_set_int (value, kkc_candidate_list_get_cursor_pos (self));
		break;
		case KKC_CANDIDATE_LIST_SIZE:
		g_value_set_int (value, kkc_candidate_list_get_size (self));
		break;
		case KKC_CANDIDATE_LIST_PAGE_START:
		g_value_set_uint (value, kkc_candidate_list_get_page_start (self));
		break;
		case KKC_CANDIDATE_LIST_PAGE_SIZE:
		g_value_set_uint (value, kkc_candidate_list_get_page_size (self));
		break;
		case KKC_CANDIDATE_LIST_ROUND:
		g_value_set_boolean (value, kkc_candidate_list_get_round (self));
		break;
		case KKC_CANDIDATE_LIST_PAGE_VISIBLE:
		g_value_set_boolean (value, kkc_candidate_list_get_page_visible (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_kkc_candidate_list_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	KkcCandidateList * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, KKC_TYPE_CANDIDATE_LIST, KkcCandidateList);
	switch (property_id) {
		case KKC_CANDIDATE_LIST_CURSOR_POS:
		kkc_candidate_list_set_cursor_pos (self, g_value_get_int (value));
		break;
		case KKC_CANDIDATE_LIST_PAGE_START:
		kkc_candidate_list_set_page_start (self, g_value_get_uint (value));
		break;
		case KKC_CANDIDATE_LIST_PAGE_SIZE:
		kkc_candidate_list_set_page_size (self, g_value_get_uint (value));
		break;
		case KKC_CANDIDATE_LIST_ROUND:
		kkc_candidate_list_set_round (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


