#pragma once

#ifndef _EVAL_EXPR_TREE_
#define _EVAL_EXPR_TREE_

#include "Expr_Node_Visitor.h"
class Eval_Expr_Tree : public Expr_Node_Visitor {
public:
	Eval_Expr_Tree(void);
	virtual ~Eval_Expr_Tree(void);
	// Methods for visiting concrete nodes
	virtual void Visit_Addition_Node(const Add_Expr_Node & node);
	virtual void Visit_Subtraction_Node(const Sub_Expr_Node & node);
	virtual void Visit_Multiplication_Node(const Multiply_Expr_Node & node);
	virtual void Visit_Division_Node(const Division_Expr_Node & node);
	virtual void Visit_Binary_Node(const Binary_Expr_Node & node);
	virtual void Visit_Unary_Node(const Unary_Expr_Node & node);
	virtual void Visit_Number_Node(const Number_Expr_Node & node);

	double const result(void);

private:
	double result_;
	Expr_Node_Visitor v;
	// other state for calculating result
};

#endif //!_EVAL_EXPR_TREE