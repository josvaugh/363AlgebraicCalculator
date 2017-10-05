#pragma once

#ifndef _ADD_EXPR_NODE_
#define _ADD_EXPR_NODE_

#include "Binary_Expr_Node.h"
class Expr_Node_Visitor;

class Add_Expr_Node : public Binary_Expr_Node {
public:
	Add_Expr_Node(Expr_Node * right, Expr_Node * left);
	virtual ~Add_Expr_Node(void);
	virtual double eval(double num1, double num2);
	virtual void accept(Expr_Node_Visitor & v);
};

#endif // !_ADD_EXPR_NODE_