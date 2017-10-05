#pragma once

#ifndef _INORDER_EXPR_
#define _INDORDER_EXPR_

#include "Expr_Node_Visitor.h"

class Print_Inorder_Expression : public Expr_Node_Visitor {
public:
	Print_Inorder_Expression(std::ostream & out)
		: out_(out) { }
	virtual ~Print_Inorder_Expression(void);
	// Methods for visiting concrete nodes
	virtual void Visit_Addition_Node(const Add_Expr_Node & node);
	virtual void Visit_Subtraction_Node(const Sub_Expr_Node & node);
	virtual void Visit_Multiplication_Node(const Multiply_Expr_Node & node);
	virtual void Visit_Division_Node(const Division_Expr_Node & node);
	virtual void Visit_Binary_Node(const Binary_Expr_Node & node);
	virtual void Visit_Unary_Node(const Unary_Expr_Node & node);
	virtual void Visit_Number_Node(const Number_Expr_Node & node);

private:
	// output stream
	std::ostream out_;
};

#endif // !_INORDER_EXPR_