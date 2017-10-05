#pragma once

#ifndef _EXPR_NODE_VISITOR_
#define _EXPR_NODE_VISITOR_

#include <iostream>
class Add_Expr_Node;
class Sub_Expr_Node;
class Multiply_Expr_Node;
class Division_Expr_Node;
class Binary_Expr_Node;
class Unary_Expr_Node;
class Number_Expr_Node;
class Expr_Node;

class Expr_Node_Visitor {
public:
	virtual ~Expr_Node_Visitor(void);
	// Methods for visiting concrete nodes
	virtual void Visit_Addition_Node(const Add_Expr_Node & node)=0;
	virtual void Visit_Subtraction_Node(const Sub_Expr_Node & node)=0;
	virtual void Visit_Multiplication_Node(const Multiply_Expr_Node & node)=0;
	virtual void Visit_Division_Node(const Division_Expr_Node & node)=0;
	virtual void Visit_Binary_Node(const Binary_Expr_Node & node)=0;
	virtual void Visit_Unary_Node(const Unary_Expr_Node & node)=0;
	virtual void Visit_Number_Node(const Number_Expr_Node & node)=0;
	virtual void Visit_Expr_Node(const Expr_Node & node) = 0;
};

#endif // !_EXPR_NODE_VISITOR_