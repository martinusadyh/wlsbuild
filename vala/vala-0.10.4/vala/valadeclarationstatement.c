/* valadeclarationstatement.c generated by valac, the Vala compiler
 * generated from valadeclarationstatement.vala, do not modify */

/* valadeclarationstatement.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include <stdlib.h>
#include <string.h>
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_SEMANTIC_ANALYZER (vala_semantic_analyzer_get_type ())
#define VALA_SEMANTIC_ANALYZER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SEMANTIC_ANALYZER, ValaSemanticAnalyzer))
#define VALA_SEMANTIC_ANALYZER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SEMANTIC_ANALYZER, ValaSemanticAnalyzerClass))
#define VALA_IS_SEMANTIC_ANALYZER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SEMANTIC_ANALYZER))
#define VALA_IS_SEMANTIC_ANALYZER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SEMANTIC_ANALYZER))
#define VALA_SEMANTIC_ANALYZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SEMANTIC_ANALYZER, ValaSemanticAnalyzerClass))

typedef struct _ValaSemanticAnalyzer ValaSemanticAnalyzer;
typedef struct _ValaSemanticAnalyzerClass ValaSemanticAnalyzerClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_LOCAL_VARIABLE (vala_local_variable_get_type ())
#define VALA_LOCAL_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariable))
#define VALA_LOCAL_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariableClass))
#define VALA_IS_LOCAL_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_LOCAL_VARIABLE))
#define VALA_IS_LOCAL_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_LOCAL_VARIABLE))
#define VALA_LOCAL_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_LOCAL_VARIABLE, ValaLocalVariableClass))

typedef struct _ValaLocalVariable ValaLocalVariable;
typedef struct _ValaLocalVariableClass ValaLocalVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;

#define VALA_TYPE_STATEMENT (vala_statement_get_type ())
#define VALA_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STATEMENT, ValaStatement))
#define VALA_IS_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STATEMENT))
#define VALA_STATEMENT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_STATEMENT, ValaStatementIface))

typedef struct _ValaStatement ValaStatement;
typedef struct _ValaStatementIface ValaStatementIface;

#define VALA_TYPE_DECLARATION_STATEMENT (vala_declaration_statement_get_type ())
#define VALA_DECLARATION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatement))
#define VALA_DECLARATION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatementClass))
#define VALA_IS_DECLARATION_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DECLARATION_STATEMENT))
#define VALA_IS_DECLARATION_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DECLARATION_STATEMENT))
#define VALA_DECLARATION_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatementClass))

typedef struct _ValaDeclarationStatement ValaDeclarationStatement;
typedef struct _ValaDeclarationStatementClass ValaDeclarationStatementClass;
typedef struct _ValaDeclarationStatementPrivate ValaDeclarationStatementPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;
#define _vala_collection_object_unref0(var) ((var == NULL) ? NULL : (var = (vala_collection_object_unref (var), NULL)))

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_ARRAY_TYPE (vala_array_type_get_type ())
#define VALA_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayType))
#define VALA_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))
#define VALA_IS_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ARRAY_TYPE))
#define VALA_IS_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ARRAY_TYPE))
#define VALA_ARRAY_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))

typedef struct _ValaArrayType ValaArrayType;
typedef struct _ValaArrayTypeClass ValaArrayTypeClass;

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	char* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaStatementIface {
	GTypeInterface parent_iface;
};

struct _ValaDeclarationStatement {
	ValaCodeNode parent_instance;
	ValaDeclarationStatementPrivate * priv;
};

struct _ValaDeclarationStatementClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaDeclarationStatementPrivate {
	ValaSymbol* _declaration;
};


static gpointer vala_declaration_statement_parent_class = NULL;
static ValaStatementIface* vala_declaration_statement_vala_statement_parent_iface = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
GType vala_semantic_analyzer_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_local_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
GType vala_statement_get_type (void) G_GNUC_CONST;
GType vala_declaration_statement_get_type (void) G_GNUC_CONST;
#define VALA_DECLARATION_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_DECLARATION_STATEMENT, ValaDeclarationStatementPrivate))
enum  {
	VALA_DECLARATION_STATEMENT_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaDeclarationStatement* vala_declaration_statement_new (ValaSymbol* declaration, ValaSourceReference* source_reference);
ValaDeclarationStatement* vala_declaration_statement_construct (GType object_type, ValaSymbol* declaration, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_declaration_statement_set_declaration (ValaDeclarationStatement* self, ValaSymbol* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static void vala_declaration_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_declaration_statement (ValaCodeVisitor* self, ValaDeclarationStatement* stmt);
static void vala_declaration_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaSymbol* vala_declaration_statement_get_declaration (ValaDeclarationStatement* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static gboolean vala_declaration_statement_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaSemanticAnalyzer* analyzer);
ValaExpression* vala_variable_get_initializer (ValaVariable* self);
ValaList* vala_code_node_get_error_types (ValaCodeNode* self);
ValaDataType* vala_data_type_copy (ValaDataType* self);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_code_node_add_error_type (ValaCodeNode* self, ValaDataType* error_type);
static void vala_declaration_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
static void vala_declaration_statement_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection);
ValaDataType* vala_variable_get_variable_type (ValaVariable* self);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_array_type_get_type (void) G_GNUC_CONST;
void vala_code_node_get_defined_variables (ValaCodeNode* self, ValaCollection* collection);
gboolean vala_array_type_get_fixed_length (ValaArrayType* self);
static void vala_declaration_statement_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection);
void vala_code_node_get_used_variables (ValaCodeNode* self, ValaCollection* collection);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
static void vala_declaration_statement_finalize (ValaCodeNode* obj);



/**
 * Creates a new declaration statement.
 *
 * @param decl   local variable declaration
 * @param source reference to source code
 * @return       newly created declaration statement
 */
ValaDeclarationStatement* vala_declaration_statement_construct (GType object_type, ValaSymbol* declaration, ValaSourceReference* source_reference) {
	ValaDeclarationStatement* self = NULL;
	g_return_val_if_fail (declaration != NULL, NULL);
	self = (ValaDeclarationStatement*) vala_code_node_construct (object_type);
	vala_declaration_statement_set_declaration (self, declaration);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaDeclarationStatement* vala_declaration_statement_new (ValaSymbol* declaration, ValaSourceReference* source_reference) {
	return vala_declaration_statement_construct (VALA_TYPE_DECLARATION_STATEMENT, declaration, source_reference);
}


static void vala_declaration_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaDeclarationStatement * self;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_declaration_statement (visitor, self);
}


static void vala_declaration_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaDeclarationStatement * self;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_node_accept ((ValaCodeNode*) vala_declaration_statement_get_declaration (self), visitor);
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean vala_declaration_statement_real_check (ValaCodeNode* base, ValaSemanticAnalyzer* analyzer) {
	ValaDeclarationStatement * self;
	gboolean result = FALSE;
	ValaSymbol* _tmp0_;
	ValaLocalVariable* local;
	gboolean _tmp1_ = FALSE;
	self = (ValaDeclarationStatement*) base;
	g_return_val_if_fail (analyzer != NULL, FALSE);
	if (vala_code_node_get_checked ((ValaCodeNode*) self)) {
		result = !vala_code_node_get_error ((ValaCodeNode*) self);
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	vala_code_node_check ((ValaCodeNode*) vala_declaration_statement_get_declaration (self), analyzer);
	local = _vala_code_node_ref0 ((_tmp0_ = vala_declaration_statement_get_declaration (self), VALA_IS_LOCAL_VARIABLE (_tmp0_) ? ((ValaLocalVariable*) _tmp0_) : NULL));
	if (local != NULL) {
		_tmp1_ = vala_variable_get_initializer ((ValaVariable*) local) != NULL;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		{
			ValaList* _tmp2_;
			ValaIterator* _tmp3_;
			ValaIterator* _error_type_it;
			_error_type_it = (_tmp3_ = vala_iterable_iterator ((ValaIterable*) (_tmp2_ = vala_code_node_get_error_types ((ValaCodeNode*) vala_variable_get_initializer ((ValaVariable*) local)))), _vala_collection_object_unref0 (_tmp2_), _tmp3_);
			while (TRUE) {
				ValaDataType* error_type;
				ValaDataType* initializer_error_type;
				if (!vala_iterator_next (_error_type_it)) {
					break;
				}
				error_type = (ValaDataType*) vala_iterator_get (_error_type_it);
				initializer_error_type = vala_data_type_copy (error_type);
				vala_code_node_set_source_reference ((ValaCodeNode*) initializer_error_type, vala_code_node_get_source_reference ((ValaCodeNode*) vala_variable_get_initializer ((ValaVariable*) local)));
				vala_code_node_add_error_type ((ValaCodeNode*) self, initializer_error_type);
				_vala_code_node_unref0 (initializer_error_type);
				_vala_code_node_unref0 (error_type);
			}
			_vala_collection_object_unref0 (_error_type_it);
		}
	}
	result = !vala_code_node_get_error ((ValaCodeNode*) self);
	_vala_code_node_unref0 (local);
	return result;
}


static void vala_declaration_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaDeclarationStatement * self;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_declaration_statement ((ValaCodeVisitor*) codegen, self);
}


static void vala_declaration_statement_real_get_defined_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaDeclarationStatement * self;
	ValaSymbol* _tmp0_;
	ValaLocalVariable* local;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (collection != NULL);
	local = _vala_code_node_ref0 ((_tmp0_ = vala_declaration_statement_get_declaration (self), VALA_IS_LOCAL_VARIABLE (_tmp0_) ? ((ValaLocalVariable*) _tmp0_) : NULL));
	if (local != NULL) {
		ValaDataType* _tmp1_;
		ValaArrayType* array_type;
		array_type = _vala_code_node_ref0 ((_tmp1_ = vala_variable_get_variable_type ((ValaVariable*) local), VALA_IS_ARRAY_TYPE (_tmp1_) ? ((ValaArrayType*) _tmp1_) : NULL));
		if (vala_variable_get_initializer ((ValaVariable*) local) != NULL) {
			vala_code_node_get_defined_variables ((ValaCodeNode*) vala_variable_get_initializer ((ValaVariable*) local), collection);
			vala_collection_add (collection, local);
		} else {
			gboolean _tmp2_ = FALSE;
			if (array_type != NULL) {
				_tmp2_ = vala_array_type_get_fixed_length (array_type);
			} else {
				_tmp2_ = FALSE;
			}
			if (_tmp2_) {
				vala_collection_add (collection, local);
			}
		}
		_vala_code_node_unref0 (array_type);
	}
	_vala_code_node_unref0 (local);
}


static void vala_declaration_statement_real_get_used_variables (ValaCodeNode* base, ValaCollection* collection) {
	ValaDeclarationStatement * self;
	ValaSymbol* _tmp0_;
	ValaLocalVariable* local;
	gboolean _tmp1_ = FALSE;
	self = (ValaDeclarationStatement*) base;
	g_return_if_fail (collection != NULL);
	local = _vala_code_node_ref0 ((_tmp0_ = vala_declaration_statement_get_declaration (self), VALA_IS_LOCAL_VARIABLE (_tmp0_) ? ((ValaLocalVariable*) _tmp0_) : NULL));
	if (local != NULL) {
		_tmp1_ = vala_variable_get_initializer ((ValaVariable*) local) != NULL;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		vala_code_node_get_used_variables ((ValaCodeNode*) vala_variable_get_initializer ((ValaVariable*) local), collection);
	}
	_vala_code_node_unref0 (local);
}


ValaSymbol* vala_declaration_statement_get_declaration (ValaDeclarationStatement* self) {
	ValaSymbol* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_declaration;
	return result;
}


void vala_declaration_statement_set_declaration (ValaDeclarationStatement* self, ValaSymbol* value) {
	ValaSymbol* _tmp0_;
	g_return_if_fail (self != NULL);
	self->priv->_declaration = (_tmp0_ = _vala_code_node_ref0 (value), _vala_code_node_unref0 (self->priv->_declaration), _tmp0_);
	if (self->priv->_declaration != NULL) {
		vala_code_node_set_parent_node ((ValaCodeNode*) self->priv->_declaration, (ValaCodeNode*) self);
	}
}


static void vala_declaration_statement_class_init (ValaDeclarationStatementClass * klass) {
	vala_declaration_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_declaration_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaDeclarationStatementPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_declaration_statement_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_declaration_statement_real_accept_children;
	VALA_CODE_NODE_CLASS (klass)->check = vala_declaration_statement_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_declaration_statement_real_emit;
	VALA_CODE_NODE_CLASS (klass)->get_defined_variables = vala_declaration_statement_real_get_defined_variables;
	VALA_CODE_NODE_CLASS (klass)->get_used_variables = vala_declaration_statement_real_get_used_variables;
}


static void vala_declaration_statement_vala_statement_interface_init (ValaStatementIface * iface) {
	vala_declaration_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void vala_declaration_statement_instance_init (ValaDeclarationStatement * self) {
	self->priv = VALA_DECLARATION_STATEMENT_GET_PRIVATE (self);
}


static void vala_declaration_statement_finalize (ValaCodeNode* obj) {
	ValaDeclarationStatement * self;
	self = VALA_DECLARATION_STATEMENT (obj);
	_vala_code_node_unref0 (self->priv->_declaration);
	VALA_CODE_NODE_CLASS (vala_declaration_statement_parent_class)->finalize (obj);
}


/**
 * Represents a local variable or constant declaration statement in the source code.
 */
GType vala_declaration_statement_get_type (void) {
	static volatile gsize vala_declaration_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_declaration_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDeclarationStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_declaration_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDeclarationStatement), 0, (GInstanceInitFunc) vala_declaration_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_declaration_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_declaration_statement_type_id;
		vala_declaration_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaDeclarationStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_declaration_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_declaration_statement_type_id__volatile, vala_declaration_statement_type_id);
	}
	return vala_declaration_statement_type_id__volatile;
}



