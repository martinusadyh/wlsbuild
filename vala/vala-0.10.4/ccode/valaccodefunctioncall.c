/* valaccodefunctioncall.c generated by valac, the Vala compiler
 * generated from valaccodefunctioncall.vala, do not modify */

/* valaccodefunctioncall.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <valagee.h>
#include <stdlib.h>
#include <string.h>


#define VALA_TYPE_CCODE_NODE (vala_ccode_node_get_type ())
#define VALA_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNode))
#define VALA_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))
#define VALA_IS_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_NODE))
#define VALA_IS_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_NODE))
#define VALA_CCODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))

typedef struct _ValaCCodeNode ValaCCodeNode;
typedef struct _ValaCCodeNodeClass ValaCCodeNodeClass;
typedef struct _ValaCCodeNodePrivate ValaCCodeNodePrivate;

#define VALA_TYPE_CCODE_WRITER (vala_ccode_writer_get_type ())
#define VALA_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriter))
#define VALA_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))
#define VALA_IS_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_WRITER))
#define VALA_IS_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_WRITER))
#define VALA_CCODE_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))

typedef struct _ValaCCodeWriter ValaCCodeWriter;
typedef struct _ValaCCodeWriterClass ValaCCodeWriterClass;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
typedef struct _ValaCCodeExpressionPrivate ValaCCodeExpressionPrivate;

#define VALA_TYPE_CCODE_FUNCTION_CALL (vala_ccode_function_call_get_type ())
#define VALA_CCODE_FUNCTION_CALL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCall))
#define VALA_CCODE_FUNCTION_CALL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCallClass))
#define VALA_IS_CCODE_FUNCTION_CALL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_FUNCTION_CALL))
#define VALA_IS_CCODE_FUNCTION_CALL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_FUNCTION_CALL))
#define VALA_CCODE_FUNCTION_CALL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCallClass))

typedef struct _ValaCCodeFunctionCall ValaCCodeFunctionCall;
typedef struct _ValaCCodeFunctionCallClass ValaCCodeFunctionCallClass;
typedef struct _ValaCCodeFunctionCallPrivate ValaCCodeFunctionCallPrivate;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))

struct _ValaCCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeNodePrivate * priv;
};

struct _ValaCCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeNode *self);
	void (*write) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_declaration) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_combined) (ValaCCodeNode* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeExpression {
	ValaCCodeNode parent_instance;
	ValaCCodeExpressionPrivate * priv;
};

struct _ValaCCodeExpressionClass {
	ValaCCodeNodeClass parent_class;
	void (*write_inner) (ValaCCodeExpression* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeFunctionCall {
	ValaCCodeExpression parent_instance;
	ValaCCodeFunctionCallPrivate * priv;
};

struct _ValaCCodeFunctionCallClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeFunctionCallPrivate {
	ValaCCodeExpression* _call;
	ValaList* arguments;
};


static gpointer vala_ccode_function_call_parent_class = NULL;

gpointer vala_ccode_node_ref (gpointer instance);
void vala_ccode_node_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_node (GValue* value, gpointer v_object);
void vala_value_take_ccode_node (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_node (const GValue* value);
GType vala_ccode_node_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_writer_ref (gpointer instance);
void vala_ccode_writer_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_writer (GValue* value, gpointer v_object);
void vala_value_take_ccode_writer (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_writer (const GValue* value);
GType vala_ccode_writer_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_function_call_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_FUNCTION_CALL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCallPrivate))
enum  {
	VALA_CCODE_FUNCTION_CALL_DUMMY_PROPERTY
};
ValaCCodeFunctionCall* vala_ccode_function_call_new (ValaCCodeExpression* call);
ValaCCodeFunctionCall* vala_ccode_function_call_construct (GType object_type, ValaCCodeExpression* call);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_function_call_set_call (ValaCCodeFunctionCall* self, ValaCCodeExpression* value);
void vala_ccode_function_call_add_argument (ValaCCodeFunctionCall* self, ValaCCodeExpression* expr);
void vala_ccode_function_call_insert_argument (ValaCCodeFunctionCall* self, gint index, ValaCCodeExpression* expr);
ValaList* vala_ccode_function_call_get_arguments (ValaCCodeFunctionCall* self);
static void vala_ccode_function_call_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeExpression* vala_ccode_function_call_get_call (ValaCCodeFunctionCall* self);
void vala_ccode_expression_write_inner (ValaCCodeExpression* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const char* s);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_function_call_finalize (ValaCCodeNode* obj);



ValaCCodeFunctionCall* vala_ccode_function_call_construct (GType object_type, ValaCCodeExpression* call) {
	ValaCCodeFunctionCall* self = NULL;
	self = (ValaCCodeFunctionCall*) vala_ccode_expression_construct (object_type);
	vala_ccode_function_call_set_call (self, call);
	return self;
}


ValaCCodeFunctionCall* vala_ccode_function_call_new (ValaCCodeExpression* call) {
	return vala_ccode_function_call_construct (VALA_TYPE_CCODE_FUNCTION_CALL, call);
}


/**
 * Appends the specified expression to the list of arguments.
 *
 * @param expr a C code expression
 */
void vala_ccode_function_call_add_argument (ValaCCodeFunctionCall* self, ValaCCodeExpression* expr) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	vala_collection_add ((ValaCollection*) self->priv->arguments, expr);
}


void vala_ccode_function_call_insert_argument (ValaCCodeFunctionCall* self, gint index, ValaCCodeExpression* expr) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	vala_list_insert (self->priv->arguments, index, expr);
}


/**
 * Returns a copy of the list of arguments.
 *
 * @return list of arguments
 */
static gpointer _vala_collection_object_ref0 (gpointer self) {
	return self ? vala_collection_object_ref (self) : NULL;
}


ValaList* vala_ccode_function_call_get_arguments (ValaCCodeFunctionCall* self) {
	ValaList* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = _vala_collection_object_ref0 (self->priv->arguments);
	return result;
}


static void vala_ccode_function_call_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFunctionCall * self;
	gboolean first;
	self = (ValaCCodeFunctionCall*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_expression_write_inner (self->priv->_call, writer);
	vala_ccode_writer_write_string (writer, " (");
	first = TRUE;
	{
		ValaIterator* _expr_it;
		_expr_it = vala_iterable_iterator ((ValaIterable*) self->priv->arguments);
		while (TRUE) {
			ValaCCodeExpression* expr;
			if (!vala_iterator_next (_expr_it)) {
				break;
			}
			expr = (ValaCCodeExpression*) vala_iterator_get (_expr_it);
			if (!first) {
				vala_ccode_writer_write_string (writer, ", ");
			} else {
				first = FALSE;
			}
			if (expr != NULL) {
				vala_ccode_node_write ((ValaCCodeNode*) expr, writer);
			}
			_vala_ccode_node_unref0 (expr);
		}
		_vala_collection_object_unref0 (_expr_it);
	}
	vala_ccode_writer_write_string (writer, ")");
}


ValaCCodeExpression* vala_ccode_function_call_get_call (ValaCCodeFunctionCall* self) {
	ValaCCodeExpression* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_call;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_function_call_set_call (ValaCCodeFunctionCall* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_call = (_tmp0_ = _vala_ccode_node_ref0 (value), _vala_ccode_node_unref0 (self->priv->_call), _tmp0_);
}


static void vala_ccode_function_call_class_init (ValaCCodeFunctionCallClass * klass) {
	vala_ccode_function_call_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_function_call_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeFunctionCallPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_function_call_real_write;
}


static void vala_ccode_function_call_instance_init (ValaCCodeFunctionCall * self) {
	self->priv = VALA_CCODE_FUNCTION_CALL_GET_PRIVATE (self);
	self->priv->arguments = (ValaList*) vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, g_direct_equal);
}


static void vala_ccode_function_call_finalize (ValaCCodeNode* obj) {
	ValaCCodeFunctionCall * self;
	self = VALA_CCODE_FUNCTION_CALL (obj);
	_vala_ccode_node_unref0 (self->priv->_call);
	_vala_collection_object_unref0 (self->priv->arguments);
	VALA_CCODE_NODE_CLASS (vala_ccode_function_call_parent_class)->finalize (obj);
}


/**
 * Represents a function call in the C code.
 */
GType vala_ccode_function_call_get_type (void) {
	static volatile gsize vala_ccode_function_call_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_function_call_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFunctionCallClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_function_call_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFunctionCall), 0, (GInstanceInitFunc) vala_ccode_function_call_instance_init, NULL };
		GType vala_ccode_function_call_type_id;
		vala_ccode_function_call_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeFunctionCall", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_function_call_type_id__volatile, vala_ccode_function_call_type_id);
	}
	return vala_ccode_function_call_type_id__volatile;
}



