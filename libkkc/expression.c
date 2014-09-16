/* expression.c generated by valac 0.24.0.131-42e78, the Vala compiler
 * generated from expression.vala, do not modify */

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
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>


#define KKC_TYPE_EXPRESSION_NODE_TYPE (kkc_expression_node_type_get_type ())

#define KKC_TYPE_EXPRESSION_NODE (kkc_expression_node_get_type ())
typedef struct _KkcExpressionNode KkcExpressionNode;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define KKC_TYPE_EXPRESSION_READER (kkc_expression_reader_get_type ())
#define KKC_EXPRESSION_READER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_EXPRESSION_READER, KkcExpressionReader))
#define KKC_EXPRESSION_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_EXPRESSION_READER, KkcExpressionReaderClass))
#define KKC_IS_EXPRESSION_READER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_EXPRESSION_READER))
#define KKC_IS_EXPRESSION_READER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_EXPRESSION_READER))
#define KKC_EXPRESSION_READER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_EXPRESSION_READER, KkcExpressionReaderClass))

typedef struct _KkcExpressionReader KkcExpressionReader;
typedef struct _KkcExpressionReaderClass KkcExpressionReaderClass;
typedef struct _KkcExpressionReaderPrivate KkcExpressionReaderPrivate;
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))
#define _kkc_expression_node_free0(var) ((var == NULL) ? NULL : (var = (kkc_expression_node_free (var), NULL)))

#define KKC_TYPE_EXPRESSION_EVALUATOR (kkc_expression_evaluator_get_type ())
#define KKC_EXPRESSION_EVALUATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_EXPRESSION_EVALUATOR, KkcExpressionEvaluator))
#define KKC_EXPRESSION_EVALUATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_EXPRESSION_EVALUATOR, KkcExpressionEvaluatorClass))
#define KKC_IS_EXPRESSION_EVALUATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_EXPRESSION_EVALUATOR))
#define KKC_IS_EXPRESSION_EVALUATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_EXPRESSION_EVALUATOR))
#define KKC_EXPRESSION_EVALUATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_EXPRESSION_EVALUATOR, KkcExpressionEvaluatorClass))

typedef struct _KkcExpressionEvaluator KkcExpressionEvaluator;
typedef struct _KkcExpressionEvaluatorClass KkcExpressionEvaluatorClass;
typedef struct _KkcExpressionEvaluatorPrivate KkcExpressionEvaluatorPrivate;
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

#define KKC_TYPE_EXPRESSION (kkc_expression_get_type ())
#define KKC_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KKC_TYPE_EXPRESSION, KkcExpression))
#define KKC_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KKC_TYPE_EXPRESSION, KkcExpressionClass))
#define KKC_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KKC_TYPE_EXPRESSION))
#define KKC_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KKC_TYPE_EXPRESSION))
#define KKC_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KKC_TYPE_EXPRESSION, KkcExpressionClass))

typedef struct _KkcExpression KkcExpression;
typedef struct _KkcExpressionClass KkcExpressionClass;
typedef struct _KkcExpressionPrivate KkcExpressionPrivate;

typedef enum  {
	KKC_EXPRESSION_NODE_TYPE_ARRAY,
	KKC_EXPRESSION_NODE_TYPE_SYMBOL,
	KKC_EXPRESSION_NODE_TYPE_STRING
} KkcExpressionNodeType;

struct _KkcExpressionNode {
	KkcExpressionNodeType type;
	GeeLinkedList* nodes;
	gchar* data;
};

struct _KkcExpressionReader {
	GObject parent_instance;
	KkcExpressionReaderPrivate * priv;
};

struct _KkcExpressionReaderClass {
	GObjectClass parent_class;
};

struct _KkcExpressionEvaluator {
	GObject parent_instance;
	KkcExpressionEvaluatorPrivate * priv;
};

struct _KkcExpressionEvaluatorClass {
	GObjectClass parent_class;
};

struct _KkcExpression {
	GObject parent_instance;
	KkcExpressionPrivate * priv;
};

struct _KkcExpressionClass {
	GObjectClass parent_class;
};


static gpointer kkc_expression_reader_parent_class = NULL;
static gpointer kkc_expression_evaluator_parent_class = NULL;
static gpointer kkc_expression_parent_class = NULL;

GType kkc_expression_node_type_get_type (void) G_GNUC_CONST;
GType kkc_expression_node_get_type (void) G_GNUC_CONST;
KkcExpressionNode* kkc_expression_node_dup (const KkcExpressionNode* self);
void kkc_expression_node_free (KkcExpressionNode* self);
void kkc_expression_node_copy (const KkcExpressionNode* self, KkcExpressionNode* dest);
void kkc_expression_node_destroy (KkcExpressionNode* self);
void kkc_expression_node_init (KkcExpressionNode *self, KkcExpressionNodeType type);
GType kkc_expression_reader_get_type (void) G_GNUC_CONST;
enum  {
	KKC_EXPRESSION_READER_DUMMY_PROPERTY
};
void kkc_expression_reader_read_symbol (KkcExpressionReader* self, const gchar* expr, gint* index, KkcExpressionNode* result);
KkcExpressionNode* kkc_expression_reader_read_string (KkcExpressionReader* self, const gchar* expr, gint* index);
KkcExpressionNode* kkc_expression_reader_read (KkcExpressionReader* self, const gchar* expr, gint* index);
KkcExpressionReader* kkc_expression_reader_new (void);
KkcExpressionReader* kkc_expression_reader_construct (GType object_type);
GType kkc_expression_evaluator_get_type (void) G_GNUC_CONST;
enum  {
	KKC_EXPRESSION_EVALUATOR_DUMMY_PROPERTY
};
gchar* kkc_expression_evaluator_eval (KkcExpressionEvaluator* self, KkcExpressionNode* node);
KkcExpressionEvaluator* kkc_expression_evaluator_new (void);
KkcExpressionEvaluator* kkc_expression_evaluator_construct (GType object_type);
GType kkc_expression_get_type (void) G_GNUC_CONST;
enum  {
	KKC_EXPRESSION_DUMMY_PROPERTY
};
gchar* kkc_expression_eval (const gchar* text);
KkcExpression* kkc_expression_construct (GType object_type);


GType kkc_expression_node_type_get_type (void) {
	static volatile gsize kkc_expression_node_type_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_expression_node_type_type_id__volatile)) {
		static const GEnumValue values[] = {{KKC_EXPRESSION_NODE_TYPE_ARRAY, "KKC_EXPRESSION_NODE_TYPE_ARRAY", "array"}, {KKC_EXPRESSION_NODE_TYPE_SYMBOL, "KKC_EXPRESSION_NODE_TYPE_SYMBOL", "symbol"}, {KKC_EXPRESSION_NODE_TYPE_STRING, "KKC_EXPRESSION_NODE_TYPE_STRING", "string"}, {0, NULL, NULL}};
		GType kkc_expression_node_type_type_id;
		kkc_expression_node_type_type_id = g_enum_register_static ("KkcExpressionNodeType", values);
		g_once_init_leave (&kkc_expression_node_type_type_id__volatile, kkc_expression_node_type_type_id);
	}
	return kkc_expression_node_type_type_id__volatile;
}


void kkc_expression_node_init (KkcExpressionNode *self, KkcExpressionNodeType type) {
	KkcExpressionNodeType _tmp0_ = 0;
	memset (self, 0, sizeof (KkcExpressionNode));
	_tmp0_ = type;
	(*self).type = _tmp0_;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


void kkc_expression_node_copy (const KkcExpressionNode* self, KkcExpressionNode* dest) {
	KkcExpressionNodeType _tmp0_ = 0;
	GeeLinkedList* _tmp1_ = NULL;
	GeeLinkedList* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	_tmp0_ = (*self).type;
	(*dest).type = _tmp0_;
	_tmp1_ = (*self).nodes;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 ((*dest).nodes);
	(*dest).nodes = _tmp2_;
	_tmp3_ = (*self).data;
	_tmp4_ = g_strdup (_tmp3_);
	_g_free0 ((*dest).data);
	(*dest).data = _tmp4_;
}


void kkc_expression_node_destroy (KkcExpressionNode* self) {
	_g_object_unref0 ((*self).nodes);
	_g_free0 ((*self).data);
}


KkcExpressionNode* kkc_expression_node_dup (const KkcExpressionNode* self) {
	KkcExpressionNode* dup;
	dup = g_new0 (KkcExpressionNode, 1);
	kkc_expression_node_copy (self, dup);
	return dup;
}


void kkc_expression_node_free (KkcExpressionNode* self) {
	kkc_expression_node_destroy (self);
	g_free (self);
}


GType kkc_expression_node_get_type (void) {
	static volatile gsize kkc_expression_node_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_expression_node_type_id__volatile)) {
		GType kkc_expression_node_type_id;
		kkc_expression_node_type_id = g_boxed_type_register_static ("KkcExpressionNode", (GBoxedCopyFunc) kkc_expression_node_dup, (GBoxedFreeFunc) kkc_expression_node_free);
		g_once_init_leave (&kkc_expression_node_type_id__volatile, kkc_expression_node_type_id);
	}
	return kkc_expression_node_type_id__volatile;
}


static gboolean string_get_next_char (const gchar* self, gint* index, gunichar* c) {
	gunichar _vala_c = 0U;
	gboolean result = FALSE;
	gint _tmp0_ = 0;
	gunichar _tmp1_ = 0U;
	gunichar _tmp2_ = 0U;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = *index;
	_tmp1_ = g_utf8_get_char (((gchar*) self) + _tmp0_);
	_vala_c = _tmp1_;
	_tmp2_ = _vala_c;
	if (_tmp2_ != ((gunichar) 0)) {
		gint _tmp3_ = 0;
		gchar* _tmp4_ = NULL;
		_tmp3_ = *index;
		_tmp4_ = g_utf8_next_char (((gchar*) self) + _tmp3_);
		*index = (gint) (_tmp4_ - ((gchar*) self));
		result = TRUE;
		if (c) {
			*c = _vala_c;
		}
		return result;
	} else {
		result = FALSE;
		if (c) {
			*c = _vala_c;
		}
		return result;
	}
	if (c) {
		*c = _vala_c;
	}
}


void kkc_expression_reader_read_symbol (KkcExpressionReader* self, const gchar* expr, gint* index, KkcExpressionNode* result) {
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	gboolean stop = FALSE;
	gunichar uc = 0U;
	KkcExpressionNode node = {0};
	GString* _tmp14_ = NULL;
	const gchar* _tmp15_ = NULL;
	gchar* _tmp16_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	stop = FALSE;
	uc = (gunichar) '\0';
	while (TRUE) {
		gboolean _tmp1_ = FALSE;
		gboolean _tmp2_ = FALSE;
		gunichar _tmp6_ = 0U;
		_tmp2_ = stop;
		if (!_tmp2_) {
			const gchar* _tmp3_ = NULL;
			gunichar _tmp4_ = 0U;
			gboolean _tmp5_ = FALSE;
			_tmp3_ = expr;
			_tmp5_ = string_get_next_char (_tmp3_, index, &_tmp4_);
			uc = _tmp4_;
			_tmp1_ = _tmp5_;
		} else {
			_tmp1_ = FALSE;
		}
		if (!_tmp1_) {
			break;
		}
		_tmp6_ = uc;
		switch (_tmp6_) {
			case '\\':
			{
				const gchar* _tmp7_ = NULL;
				gunichar _tmp8_ = 0U;
				gboolean _tmp9_ = FALSE;
				_tmp7_ = expr;
				_tmp9_ = string_get_next_char (_tmp7_, index, &_tmp8_);
				uc = _tmp8_;
				if (_tmp9_) {
					GString* _tmp10_ = NULL;
					gunichar _tmp11_ = 0U;
					_tmp10_ = builder;
					_tmp11_ = uc;
					g_string_append_unichar (_tmp10_, _tmp11_);
				}
				break;
			}
			case '(':
			case ')':
			case '"':
			case ' ':
			{
				stop = TRUE;
				break;
			}
			default:
			{
				GString* _tmp12_ = NULL;
				gunichar _tmp13_ = 0U;
				_tmp12_ = builder;
				_tmp13_ = uc;
				g_string_append_unichar (_tmp12_, _tmp13_);
				break;
			}
		}
	}
	kkc_expression_node_init (&node, KKC_EXPRESSION_NODE_TYPE_SYMBOL);
	_tmp14_ = builder;
	_tmp15_ = _tmp14_->str;
	_tmp16_ = g_strdup (_tmp15_);
	_g_free0 (node.data);
	node.data = _tmp16_;
	*result = node;
	_g_string_free0 (builder);
	return;
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


static gpointer _kkc_expression_node_dup0 (gpointer self) {
	return self ? kkc_expression_node_dup (self) : NULL;
}


KkcExpressionNode* kkc_expression_reader_read_string (KkcExpressionReader* self, const gchar* expr, gint* index) {
	KkcExpressionNode* result = NULL;
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	const gchar* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	GString* builder = NULL;
	GString* _tmp8_ = NULL;
	gint _tmp9_ = 0;
	gboolean stop = FALSE;
	gunichar uc = 0U;
	KkcExpressionNode node = {0};
	GString* _tmp58_ = NULL;
	const gchar* _tmp59_ = NULL;
	gchar* _tmp60_ = NULL;
	KkcExpressionNode _tmp61_ = {0};
	KkcExpressionNode* _tmp62_ = NULL;
	KkcExpressionNode* _tmp63_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (expr != NULL, NULL);
	_tmp1_ = *index;
	_tmp2_ = expr;
	_tmp3_ = strlen (_tmp2_);
	_tmp4_ = _tmp3_;
	if (_tmp1_ < _tmp4_) {
		const gchar* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gchar _tmp7_ = '\0';
		_tmp5_ = expr;
		_tmp6_ = *index;
		_tmp7_ = string_get (_tmp5_, (glong) _tmp6_);
		_tmp0_ = _tmp7_ == '"';
	} else {
		_tmp0_ = FALSE;
	}
	g_return_val_if_fail (_tmp0_, NULL);
	_tmp8_ = g_string_new ("");
	builder = _tmp8_;
	_tmp9_ = *index;
	*index = _tmp9_ + 1;
	stop = FALSE;
	uc = (gunichar) '\0';
	while (TRUE) {
		gboolean _tmp10_ = FALSE;
		gboolean _tmp11_ = FALSE;
		gunichar _tmp15_ = 0U;
		_tmp11_ = stop;
		if (!_tmp11_) {
			const gchar* _tmp12_ = NULL;
			gunichar _tmp13_ = 0U;
			gboolean _tmp14_ = FALSE;
			_tmp12_ = expr;
			_tmp14_ = string_get_next_char (_tmp12_, index, &_tmp13_);
			uc = _tmp13_;
			_tmp10_ = _tmp14_;
		} else {
			_tmp10_ = FALSE;
		}
		if (!_tmp10_) {
			break;
		}
		_tmp15_ = uc;
		switch (_tmp15_) {
			case '\\':
			{
				const gchar* _tmp16_ = NULL;
				gunichar _tmp17_ = 0U;
				gboolean _tmp18_ = FALSE;
				_tmp16_ = expr;
				_tmp18_ = string_get_next_char (_tmp16_, index, &_tmp17_);
				uc = _tmp17_;
				if (_tmp18_) {
					gunichar _tmp19_ = 0U;
					GString* _tmp54_ = NULL;
					gunichar _tmp55_ = 0U;
					_tmp19_ = uc;
					switch (_tmp19_) {
						case '0':
						case '1':
						case '2':
						case '3':
						case '4':
						case '5':
						case '6':
						case '7':
						{
							gint start = 0;
							gint _tmp20_ = 0;
							gint num = 0;
							gunichar _tmp21_ = 0U;
							gint _tmp33_ = 0;
							gint _tmp34_ = 0;
							_tmp20_ = *index;
							start = _tmp20_;
							_tmp21_ = uc;
							num = ((gint) _tmp21_) - '0';
							while (TRUE) {
								const gchar* _tmp22_ = NULL;
								gunichar _tmp23_ = 0U;
								gboolean _tmp24_ = FALSE;
								gint _tmp25_ = 0;
								gint _tmp26_ = 0;
								gboolean _tmp27_ = FALSE;
								gunichar _tmp28_ = 0U;
								gint _tmp30_ = 0;
								gint _tmp31_ = 0;
								gunichar _tmp32_ = 0U;
								_tmp22_ = expr;
								_tmp24_ = string_get_next_char (_tmp22_, index, &_tmp23_);
								uc = _tmp23_;
								if (!_tmp24_) {
									break;
								}
								_tmp25_ = *index;
								_tmp26_ = start;
								if ((_tmp25_ - _tmp26_) == 3) {
									break;
								}
								_tmp28_ = uc;
								if (_tmp28_ < ((gunichar) '0')) {
									_tmp27_ = TRUE;
								} else {
									gunichar _tmp29_ = 0U;
									_tmp29_ = uc;
									_tmp27_ = _tmp29_ > ((gunichar) '7');
								}
								if (_tmp27_) {
									break;
								}
								_tmp30_ = num;
								num = _tmp30_ << 3;
								_tmp31_ = num;
								_tmp32_ = uc;
								num = _tmp31_ + (((gint) _tmp32_) - '0');
							}
							_tmp33_ = *index;
							*index = _tmp33_ - 1;
							_tmp34_ = num;
							uc = (gunichar) _tmp34_;
							break;
						}
						case 'x':
						{
							gint num = 0;
							gint _tmp52_ = 0;
							gint _tmp53_ = 0;
							num = 0;
							while (TRUE) {
								const gchar* _tmp35_ = NULL;
								gunichar _tmp36_ = 0U;
								gboolean _tmp37_ = FALSE;
								gunichar _tmp38_ = 0U;
								gunichar _tmp39_ = 0U;
								gboolean _tmp40_ = FALSE;
								gunichar _tmp41_ = 0U;
								_tmp35_ = expr;
								_tmp37_ = string_get_next_char (_tmp35_, index, &_tmp36_);
								uc = _tmp36_;
								if (!_tmp37_) {
									break;
								}
								_tmp38_ = uc;
								_tmp39_ = g_unichar_tolower (_tmp38_);
								uc = _tmp39_;
								_tmp41_ = uc;
								if (((gunichar) '0') <= _tmp41_) {
									gunichar _tmp42_ = 0U;
									_tmp42_ = uc;
									_tmp40_ = _tmp42_ <= ((gunichar) '9');
								} else {
									_tmp40_ = FALSE;
								}
								if (_tmp40_) {
									gint _tmp43_ = 0;
									gint _tmp44_ = 0;
									gunichar _tmp45_ = 0U;
									_tmp43_ = num;
									num = _tmp43_ << 4;
									_tmp44_ = num;
									_tmp45_ = uc;
									num = _tmp44_ + (((gint) _tmp45_) - '0');
								} else {
									gboolean _tmp46_ = FALSE;
									gunichar _tmp47_ = 0U;
									_tmp47_ = uc;
									if (((gunichar) 'a') <= _tmp47_) {
										gunichar _tmp48_ = 0U;
										_tmp48_ = uc;
										_tmp46_ = _tmp48_ <= ((gunichar) 'f');
									} else {
										_tmp46_ = FALSE;
									}
									if (_tmp46_) {
										gint _tmp49_ = 0;
										gint _tmp50_ = 0;
										gunichar _tmp51_ = 0U;
										_tmp49_ = num;
										num = _tmp49_ << 4;
										_tmp50_ = num;
										_tmp51_ = uc;
										num = _tmp50_ + ((((gint) _tmp51_) - 'a') + 10);
									} else {
										break;
									}
								}
							}
							_tmp52_ = *index;
							*index = _tmp52_ - 1;
							_tmp53_ = num;
							uc = (gunichar) _tmp53_;
							break;
						}
						default:
						{
							break;
						}
					}
					_tmp54_ = builder;
					_tmp55_ = uc;
					g_string_append_unichar (_tmp54_, _tmp55_);
				}
				break;
			}
			case '\"':
			{
				stop = TRUE;
				break;
			}
			default:
			{
				GString* _tmp56_ = NULL;
				gunichar _tmp57_ = 0U;
				_tmp56_ = builder;
				_tmp57_ = uc;
				g_string_append_unichar (_tmp56_, _tmp57_);
				break;
			}
		}
	}
	kkc_expression_node_init (&node, KKC_EXPRESSION_NODE_TYPE_STRING);
	_tmp58_ = builder;
	_tmp59_ = _tmp58_->str;
	_tmp60_ = g_strdup (_tmp59_);
	_g_free0 (node.data);
	node.data = _tmp60_;
	_tmp61_ = node;
	_tmp62_ = _kkc_expression_node_dup0 (&_tmp61_);
	_tmp63_ = _tmp62_;
	kkc_expression_node_destroy (&_tmp61_);
	result = _tmp63_;
	_g_string_free0 (builder);
	return result;
}


KkcExpressionNode* kkc_expression_reader_read (KkcExpressionReader* self, const gchar* expr, gint* index) {
	KkcExpressionNode* result = NULL;
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	const gchar* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	GeeLinkedList* nodes = NULL;
	GeeLinkedList* _tmp8_ = NULL;
	gboolean stop = FALSE;
	gint _tmp9_ = 0;
	gunichar uc = 0U;
	KkcExpressionNode node = {0};
	GeeLinkedList* _tmp33_ = NULL;
	GeeLinkedList* _tmp34_ = NULL;
	KkcExpressionNode _tmp35_ = {0};
	KkcExpressionNode* _tmp36_ = NULL;
	KkcExpressionNode* _tmp37_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (expr != NULL, NULL);
	_tmp1_ = *index;
	_tmp2_ = expr;
	_tmp3_ = strlen (_tmp2_);
	_tmp4_ = _tmp3_;
	if (_tmp1_ < _tmp4_) {
		const gchar* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gchar _tmp7_ = '\0';
		_tmp5_ = expr;
		_tmp6_ = *index;
		_tmp7_ = string_get (_tmp5_, (glong) _tmp6_);
		_tmp0_ = _tmp7_ == '(';
	} else {
		_tmp0_ = FALSE;
	}
	g_return_val_if_fail (_tmp0_, NULL);
	_tmp8_ = gee_linked_list_new (KKC_TYPE_EXPRESSION_NODE, (GBoxedCopyFunc) kkc_expression_node_dup, kkc_expression_node_free, NULL, NULL, NULL);
	nodes = _tmp8_;
	stop = FALSE;
	_tmp9_ = *index;
	*index = _tmp9_ + 1;
	uc = (gunichar) '\0';
	while (TRUE) {
		gboolean _tmp10_ = FALSE;
		gboolean _tmp11_ = FALSE;
		gunichar _tmp15_ = 0U;
		_tmp11_ = stop;
		if (!_tmp11_) {
			const gchar* _tmp12_ = NULL;
			gunichar _tmp13_ = 0U;
			gboolean _tmp14_ = FALSE;
			_tmp12_ = expr;
			_tmp14_ = string_get_next_char (_tmp12_, index, &_tmp13_);
			uc = _tmp13_;
			_tmp10_ = _tmp14_;
		} else {
			_tmp10_ = FALSE;
		}
		if (!_tmp10_) {
			break;
		}
		_tmp15_ = uc;
		switch (_tmp15_) {
			case ' ':
			{
				break;
			}
			case ')':
			{
				gint _tmp16_ = 0;
				_tmp16_ = *index;
				*index = _tmp16_ + 1;
				stop = TRUE;
				break;
			}
			case '(':
			{
				gint _tmp17_ = 0;
				GeeLinkedList* _tmp18_ = NULL;
				const gchar* _tmp19_ = NULL;
				KkcExpressionNode* _tmp20_ = NULL;
				KkcExpressionNode* _tmp21_ = NULL;
				_tmp17_ = *index;
				*index = _tmp17_ - 1;
				_tmp18_ = nodes;
				_tmp19_ = expr;
				_tmp20_ = kkc_expression_reader_read (self, _tmp19_, index);
				_tmp21_ = _tmp20_;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp18_, _tmp21_);
				_kkc_expression_node_free0 (_tmp21_);
				break;
			}
			case '"':
			{
				gint _tmp22_ = 0;
				GeeLinkedList* _tmp23_ = NULL;
				const gchar* _tmp24_ = NULL;
				KkcExpressionNode* _tmp25_ = NULL;
				KkcExpressionNode* _tmp26_ = NULL;
				_tmp22_ = *index;
				*index = _tmp22_ - 1;
				_tmp23_ = nodes;
				_tmp24_ = expr;
				_tmp25_ = kkc_expression_reader_read_string (self, _tmp24_, index);
				_tmp26_ = _tmp25_;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp23_, _tmp26_);
				_kkc_expression_node_free0 (_tmp26_);
				break;
			}
			default:
			{
				gint _tmp27_ = 0;
				GeeLinkedList* _tmp28_ = NULL;
				const gchar* _tmp29_ = NULL;
				KkcExpressionNode _tmp30_ = {0};
				KkcExpressionNode _tmp31_ = {0};
				KkcExpressionNode _tmp32_ = {0};
				_tmp27_ = *index;
				*index = _tmp27_ - 1;
				_tmp28_ = nodes;
				_tmp29_ = expr;
				kkc_expression_reader_read_symbol (self, _tmp29_, index, &_tmp30_);
				_tmp31_ = _tmp30_;
				_tmp32_ = _tmp31_;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp28_, &_tmp32_);
				kkc_expression_node_destroy (&_tmp31_);
				break;
			}
		}
	}
	kkc_expression_node_init (&node, KKC_EXPRESSION_NODE_TYPE_ARRAY);
	_tmp33_ = nodes;
	_tmp34_ = _g_object_ref0 (_tmp33_);
	_g_object_unref0 (node.nodes);
	node.nodes = _tmp34_;
	_tmp35_ = node;
	_tmp36_ = _kkc_expression_node_dup0 (&_tmp35_);
	_tmp37_ = _tmp36_;
	kkc_expression_node_destroy (&_tmp35_);
	result = _tmp37_;
	_g_object_unref0 (nodes);
	return result;
}


KkcExpressionReader* kkc_expression_reader_construct (GType object_type) {
	KkcExpressionReader * self = NULL;
	self = (KkcExpressionReader*) g_object_new (object_type, NULL);
	return self;
}


KkcExpressionReader* kkc_expression_reader_new (void) {
	return kkc_expression_reader_construct (KKC_TYPE_EXPRESSION_READER);
}


static void kkc_expression_reader_class_init (KkcExpressionReaderClass * klass) {
	kkc_expression_reader_parent_class = g_type_class_peek_parent (klass);
}


static void kkc_expression_reader_instance_init (KkcExpressionReader * self) {
}


GType kkc_expression_reader_get_type (void) {
	static volatile gsize kkc_expression_reader_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_expression_reader_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcExpressionReaderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_expression_reader_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcExpressionReader), 0, (GInstanceInitFunc) kkc_expression_reader_instance_init, NULL };
		GType kkc_expression_reader_type_id;
		kkc_expression_reader_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcExpressionReader", &g_define_type_info, 0);
		g_once_init_leave (&kkc_expression_reader_type_id__volatile, kkc_expression_reader_type_id);
	}
	return kkc_expression_reader_type_id__volatile;
}


gchar* kkc_expression_evaluator_eval (KkcExpressionEvaluator* self, KkcExpressionNode* node) {
	gchar* result = NULL;
	KkcExpressionNode _tmp0_ = {0};
	KkcExpressionNodeType _tmp1_ = 0;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (node != NULL, NULL);
	_tmp0_ = *node;
	_tmp1_ = _tmp0_.type;
	if (_tmp1_ == KKC_EXPRESSION_NODE_TYPE_ARRAY) {
		GeeListIterator* iter = NULL;
		KkcExpressionNode _tmp2_ = {0};
		GeeLinkedList* _tmp3_ = NULL;
		GeeListIterator* _tmp4_ = NULL;
		GeeListIterator* _tmp5_ = NULL;
		gboolean _tmp6_ = FALSE;
		_tmp2_ = *node;
		_tmp3_ = _tmp2_.nodes;
		_tmp4_ = gee_abstract_list_list_iterator ((GeeAbstractList*) _tmp3_);
		iter = _tmp4_;
		_tmp5_ = iter;
		_tmp6_ = gee_iterator_next ((GeeIterator*) _tmp5_);
		if (_tmp6_) {
			KkcExpressionNode* funcall = NULL;
			GeeListIterator* _tmp7_ = NULL;
			gpointer _tmp8_ = NULL;
			KkcExpressionNode* _tmp9_ = NULL;
			KkcExpressionNodeType _tmp10_ = 0;
			_tmp7_ = iter;
			_tmp8_ = gee_iterator_get ((GeeIterator*) _tmp7_);
			funcall = (KkcExpressionNode*) _tmp8_;
			_tmp9_ = funcall;
			_tmp10_ = (*_tmp9_).type;
			if (_tmp10_ == KKC_EXPRESSION_NODE_TYPE_SYMBOL) {
				KkcExpressionNode* _tmp11_ = NULL;
				const gchar* _tmp12_ = NULL;
				_tmp11_ = funcall;
				_tmp12_ = (*_tmp11_).data;
				if (g_strcmp0 (_tmp12_, "concat") == 0) {
					GString* builder = NULL;
					GString* _tmp13_ = NULL;
					GString* _tmp23_ = NULL;
					const gchar* _tmp24_ = NULL;
					gchar* _tmp25_ = NULL;
					_tmp13_ = g_string_new ("");
					builder = _tmp13_;
					while (TRUE) {
						GeeListIterator* _tmp14_ = NULL;
						gboolean _tmp15_ = FALSE;
						KkcExpressionNode* arg = NULL;
						GeeListIterator* _tmp16_ = NULL;
						gpointer _tmp17_ = NULL;
						KkcExpressionNode* _tmp18_ = NULL;
						KkcExpressionNodeType _tmp19_ = 0;
						_tmp14_ = iter;
						_tmp15_ = gee_iterator_next ((GeeIterator*) _tmp14_);
						if (!_tmp15_) {
							break;
						}
						_tmp16_ = iter;
						_tmp17_ = gee_iterator_get ((GeeIterator*) _tmp16_);
						arg = (KkcExpressionNode*) _tmp17_;
						_tmp18_ = arg;
						_tmp19_ = (*_tmp18_).type;
						if (_tmp19_ == KKC_EXPRESSION_NODE_TYPE_STRING) {
							GString* _tmp20_ = NULL;
							KkcExpressionNode* _tmp21_ = NULL;
							const gchar* _tmp22_ = NULL;
							_tmp20_ = builder;
							_tmp21_ = arg;
							_tmp22_ = (*_tmp21_).data;
							g_string_append (_tmp20_, _tmp22_);
						}
						_kkc_expression_node_free0 (arg);
					}
					_tmp23_ = builder;
					_tmp24_ = _tmp23_->str;
					_tmp25_ = g_strdup (_tmp24_);
					result = _tmp25_;
					_g_string_free0 (builder);
					_kkc_expression_node_free0 (funcall);
					_g_object_unref0 (iter);
					return result;
				} else {
					KkcExpressionNode* _tmp26_ = NULL;
					const gchar* _tmp27_ = NULL;
					_tmp26_ = funcall;
					_tmp27_ = (*_tmp26_).data;
					if (g_strcmp0 (_tmp27_, "current-time-string") == 0) {
						GDateTime* datetime = NULL;
						GDateTime* _tmp28_ = NULL;
						GDateTime* _tmp29_ = NULL;
						gchar* _tmp30_ = NULL;
						_tmp28_ = g_date_time_new_now_local ();
						datetime = _tmp28_;
						_tmp29_ = datetime;
						_tmp30_ = g_date_time_format (_tmp29_, "%a, %d %b %Y %T %z");
						result = _tmp30_;
						_g_date_time_unref0 (datetime);
						_kkc_expression_node_free0 (funcall);
						_g_object_unref0 (iter);
						return result;
					} else {
						KkcExpressionNode* _tmp31_ = NULL;
						const gchar* _tmp32_ = NULL;
						_tmp31_ = funcall;
						_tmp32_ = (*_tmp31_).data;
						if (g_strcmp0 (_tmp32_, "pwd") == 0) {
							gchar* _tmp33_ = NULL;
							_tmp33_ = g_get_current_dir ();
							result = _tmp33_;
							_kkc_expression_node_free0 (funcall);
							_g_object_unref0 (iter);
							return result;
						} else {
							KkcExpressionNode* _tmp34_ = NULL;
							const gchar* _tmp35_ = NULL;
							_tmp34_ = funcall;
							_tmp35_ = (*_tmp34_).data;
							if (g_strcmp0 (_tmp35_, "kkc-version") == 0) {
								gchar* _tmp36_ = NULL;
								_tmp36_ = g_strdup_printf ("%s/%s", PACKAGE_NAME, PACKAGE_VERSION);
								result = _tmp36_;
								_kkc_expression_node_free0 (funcall);
								_g_object_unref0 (iter);
								return result;
							}
						}
					}
				}
			}
			_kkc_expression_node_free0 (funcall);
		}
		_g_object_unref0 (iter);
	}
	result = NULL;
	return result;
}


KkcExpressionEvaluator* kkc_expression_evaluator_construct (GType object_type) {
	KkcExpressionEvaluator * self = NULL;
	self = (KkcExpressionEvaluator*) g_object_new (object_type, NULL);
	return self;
}


KkcExpressionEvaluator* kkc_expression_evaluator_new (void) {
	return kkc_expression_evaluator_construct (KKC_TYPE_EXPRESSION_EVALUATOR);
}


static void kkc_expression_evaluator_class_init (KkcExpressionEvaluatorClass * klass) {
	kkc_expression_evaluator_parent_class = g_type_class_peek_parent (klass);
}


static void kkc_expression_evaluator_instance_init (KkcExpressionEvaluator * self) {
}


GType kkc_expression_evaluator_get_type (void) {
	static volatile gsize kkc_expression_evaluator_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_expression_evaluator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcExpressionEvaluatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_expression_evaluator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcExpressionEvaluator), 0, (GInstanceInitFunc) kkc_expression_evaluator_instance_init, NULL };
		GType kkc_expression_evaluator_type_id;
		kkc_expression_evaluator_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcExpressionEvaluator", &g_define_type_info, 0);
		g_once_init_leave (&kkc_expression_evaluator_type_id__volatile, kkc_expression_evaluator_type_id);
	}
	return kkc_expression_evaluator_type_id__volatile;
}


gchar* kkc_expression_eval (const gchar* text) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	g_return_val_if_fail (text != NULL, NULL);
	_tmp0_ = text;
	_tmp1_ = g_str_has_prefix (_tmp0_, "(");
	if (_tmp1_) {
		KkcExpressionReader* reader = NULL;
		KkcExpressionReader* _tmp2_ = NULL;
		gint index = 0;
		KkcExpressionNode* node = NULL;
		KkcExpressionReader* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		KkcExpressionNode* _tmp5_ = NULL;
		KkcExpressionEvaluator* evaluator = NULL;
		KkcExpressionEvaluator* _tmp6_ = NULL;
		gchar* _result_ = NULL;
		KkcExpressionEvaluator* _tmp7_ = NULL;
		KkcExpressionNode* _tmp8_ = NULL;
		KkcExpressionNode _tmp9_ = {0};
		gchar* _tmp10_ = NULL;
		const gchar* _tmp11_ = NULL;
		_tmp2_ = kkc_expression_reader_new ();
		reader = _tmp2_;
		index = 0;
		_tmp3_ = reader;
		_tmp4_ = text;
		_tmp5_ = kkc_expression_reader_read (_tmp3_, _tmp4_, &index);
		node = _tmp5_;
		_tmp6_ = kkc_expression_evaluator_new ();
		evaluator = _tmp6_;
		_tmp7_ = evaluator;
		_tmp8_ = node;
		_tmp9_ = *_tmp8_;
		_tmp10_ = kkc_expression_evaluator_eval (_tmp7_, &_tmp9_);
		_result_ = _tmp10_;
		_tmp11_ = _result_;
		if (_tmp11_ != NULL) {
			result = _result_;
			_g_object_unref0 (evaluator);
			_kkc_expression_node_free0 (node);
			_g_object_unref0 (reader);
			return result;
		}
		_g_free0 (_result_);
		_g_object_unref0 (evaluator);
		_kkc_expression_node_free0 (node);
		_g_object_unref0 (reader);
	}
	_tmp12_ = text;
	_tmp13_ = g_strdup (_tmp12_);
	result = _tmp13_;
	return result;
}


KkcExpression* kkc_expression_construct (GType object_type) {
	KkcExpression * self = NULL;
	self = (KkcExpression*) g_object_new (object_type, NULL);
	return self;
}


static void kkc_expression_class_init (KkcExpressionClass * klass) {
	kkc_expression_parent_class = g_type_class_peek_parent (klass);
}


static void kkc_expression_instance_init (KkcExpression * self) {
}


GType kkc_expression_get_type (void) {
	static volatile gsize kkc_expression_type_id__volatile = 0;
	if (g_once_init_enter (&kkc_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (KkcExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) kkc_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (KkcExpression), 0, (GInstanceInitFunc) kkc_expression_instance_init, NULL };
		GType kkc_expression_type_id;
		kkc_expression_type_id = g_type_register_static (G_TYPE_OBJECT, "KkcExpression", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&kkc_expression_type_id__volatile, kkc_expression_type_id);
	}
	return kkc_expression_type_id__volatile;
}



