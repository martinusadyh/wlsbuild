/* valaccodefragment.c generated by valac, the Vala compiler
 * generated from valaccodefragment.vala, do not modify */

/* valaccodefragment.vala
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

#define VALA_TYPE_CCODE_FRAGMENT (vala_ccode_fragment_get_type ())
#define VALA_CCODE_FRAGMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_FRAGMENT, ValaCCodeFragment))
#define VALA_CCODE_FRAGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_FRAGMENT, ValaCCodeFragmentClass))
#define VALA_IS_CCODE_FRAGMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_FRAGMENT))
#define VALA_IS_CCODE_FRAGMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_FRAGMENT))
#define VALA_CCODE_FRAGMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_FRAGMENT, ValaCCodeFragmentClass))

typedef struct _ValaCCodeFragment ValaCCodeFragment;
typedef struct _ValaCCodeFragmentClass ValaCCodeFragmentClass;
typedef struct _ValaCCodeFragmentPrivate ValaCCodeFragmentPrivate;
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

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

struct _ValaCCodeFragment {
	ValaCCodeNode parent_instance;
	ValaCCodeFragmentPrivate * priv;
};

struct _ValaCCodeFragmentClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeFragmentPrivate {
	ValaList* children;
};


static gpointer vala_ccode_fragment_parent_class = NULL;

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
GType vala_ccode_fragment_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_FRAGMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_FRAGMENT, ValaCCodeFragmentPrivate))
enum  {
	VALA_CCODE_FRAGMENT_DUMMY_PROPERTY
};
void vala_ccode_fragment_append (ValaCCodeFragment* self, ValaCCodeNode* node);
ValaList* vala_ccode_fragment_get_children (ValaCCodeFragment* self);
static void vala_ccode_fragment_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_fragment_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_node_write_declaration (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_fragment_real_write_combined (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_node_write_combined (ValaCCodeNode* self, ValaCCodeWriter* writer);
ValaCCodeFragment* vala_ccode_fragment_new (void);
ValaCCodeFragment* vala_ccode_fragment_construct (GType object_type);
ValaCCodeNode* vala_ccode_node_construct (GType object_type);
static void vala_ccode_fragment_finalize (ValaCCodeNode* obj);



/**
 * Appends the specified code node to this code fragment.
 *
 * @param node a C code node
 */
void vala_ccode_fragment_append (ValaCCodeFragment* self, ValaCCodeNode* node) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (node != NULL);
	vala_collection_add ((ValaCollection*) self->priv->children, node);
}


/**
 * Returns a copy of the list of children.
 *
 * @return children list
 */
static gpointer _vala_collection_object_ref0 (gpointer self) {
	return self ? vala_collection_object_ref (self) : NULL;
}


ValaList* vala_ccode_fragment_get_children (ValaCCodeFragment* self) {
	ValaList* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = _vala_collection_object_ref0 (self->priv->children);
	return result;
}


static void vala_ccode_fragment_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFragment * self;
	self = (ValaCCodeFragment*) base;
	g_return_if_fail (writer != NULL);
	{
		ValaIterator* _node_it;
		_node_it = vala_iterable_iterator ((ValaIterable*) self->priv->children);
		while (TRUE) {
			ValaCCodeNode* node;
			if (!vala_iterator_next (_node_it)) {
				break;
			}
			node = (ValaCCodeNode*) vala_iterator_get (_node_it);
			vala_ccode_node_write (node, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_collection_object_unref0 (_node_it);
	}
}


static void vala_ccode_fragment_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFragment * self;
	self = (ValaCCodeFragment*) base;
	g_return_if_fail (writer != NULL);
	{
		ValaIterator* _node_it;
		_node_it = vala_iterable_iterator ((ValaIterable*) self->priv->children);
		while (TRUE) {
			ValaCCodeNode* node;
			if (!vala_iterator_next (_node_it)) {
				break;
			}
			node = (ValaCCodeNode*) vala_iterator_get (_node_it);
			vala_ccode_node_write_declaration (node, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_collection_object_unref0 (_node_it);
	}
}


static void vala_ccode_fragment_real_write_combined (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFragment * self;
	self = (ValaCCodeFragment*) base;
	g_return_if_fail (writer != NULL);
	{
		ValaIterator* _node_it;
		_node_it = vala_iterable_iterator ((ValaIterable*) self->priv->children);
		while (TRUE) {
			ValaCCodeNode* node;
			if (!vala_iterator_next (_node_it)) {
				break;
			}
			node = (ValaCCodeNode*) vala_iterator_get (_node_it);
			vala_ccode_node_write_combined (node, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_collection_object_unref0 (_node_it);
	}
}


ValaCCodeFragment* vala_ccode_fragment_construct (GType object_type) {
	ValaCCodeFragment* self = NULL;
	self = (ValaCCodeFragment*) vala_ccode_node_construct (object_type);
	return self;
}


ValaCCodeFragment* vala_ccode_fragment_new (void) {
	return vala_ccode_fragment_construct (VALA_TYPE_CCODE_FRAGMENT);
}


static void vala_ccode_fragment_class_init (ValaCCodeFragmentClass * klass) {
	vala_ccode_fragment_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_fragment_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeFragmentPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_fragment_real_write;
	VALA_CCODE_NODE_CLASS (klass)->write_declaration = vala_ccode_fragment_real_write_declaration;
	VALA_CCODE_NODE_CLASS (klass)->write_combined = vala_ccode_fragment_real_write_combined;
}


static void vala_ccode_fragment_instance_init (ValaCCodeFragment * self) {
	self->priv = VALA_CCODE_FRAGMENT_GET_PRIVATE (self);
	self->priv->children = (ValaList*) vala_array_list_new (VALA_TYPE_CCODE_NODE, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, g_direct_equal);
}


static void vala_ccode_fragment_finalize (ValaCCodeNode* obj) {
	ValaCCodeFragment * self;
	self = VALA_CCODE_FRAGMENT (obj);
	_vala_collection_object_unref0 (self->priv->children);
	VALA_CCODE_NODE_CLASS (vala_ccode_fragment_parent_class)->finalize (obj);
}


/**
 * Represents a container for C code nodes.
 */
GType vala_ccode_fragment_get_type (void) {
	static volatile gsize vala_ccode_fragment_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_fragment_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFragmentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_fragment_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFragment), 0, (GInstanceInitFunc) vala_ccode_fragment_instance_init, NULL };
		GType vala_ccode_fragment_type_id;
		vala_ccode_fragment_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeFragment", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_fragment_type_id__volatile, vala_ccode_fragment_type_id);
	}
	return vala_ccode_fragment_type_id__volatile;
}



