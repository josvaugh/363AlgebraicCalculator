#pragma once

#ifndef _DIV_EXPR_NODE_
#define _DIV_EXPR_NODE_

#include "Binary_Expr_Node.h"

class Divide_Expr_Node : public Binary_Expr_Node {
public:
	Divide_Expr_Node(Expr_Node * right, Expr_Node * left);
	virtual ~Divide_Expr_Node(void);
	virtual double eval(double num1, double num2);
	virtual void accept(Expr_Node_Visitor & v);
};

#endif // !_DIV_EXPR_NODE_