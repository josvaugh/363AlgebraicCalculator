#pragma once

#ifndef _MULT_EXPR_NODE_
#define _MULT_EXPR_NODE_

#include "Binary_Expr_Node.h"

class Multiply_Expr_Node : public Binary_Expr_Node {
public:
	Multiply_Expr_Node(Expr_Node * right, Expr_Node * left);
	virtual ~Multiply_Expr_Node(void);
	virtual double eval(double num1, double num2);
	virtual void accept(Expr_Node_Visitor & v);
};

#endif // !_MULT_EXPR_NODE_
