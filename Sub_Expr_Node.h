#pragma once

#ifndef _SUB_EXPR_NODE_
#define _SUB_EXPR_NODE_

#include "Binary_Expr_Node.h"

class Sub_Expr_Node : public Binary_Expr_Node {
public:
	Sub_Expr_Node(Expr_Node * right, Expr_Node * left);
	virtual ~Sub_Expr_Node(void);
	virtual double eval(double num1, double num2);
	virtual void accept(Expr_Node_Visitor & v);
};

#endif // !_SUB_EXPR_NODE_