#pragma once

#ifndef _BINARY_EXPR_NODE_
#define _BINARY_EXPR_NODE_

#include "Expr_Node.h"
class Expr_Node_Visitor;

class Binary_Expr_Node : public Expr_Node {
public:
	Binary_Expr_Node(void);
	virtual ~Binary_Expr_Node(void);
	virtual double eval(void);
	virtual void accept(Expr_Node_Visitor & v);

protected:
	Expr_Node * right_;
	Expr_Node * left_;
};

#endif // !_BINARY_EXPR_NODE_