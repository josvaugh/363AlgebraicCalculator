#pragma once

#ifndef _UNARY_EXPR_NODE_
#define _UNARY_EXPR_NODE_

#include "Expr_Node.h"

class Unary_Expr_Node : public Expr_Node {
public:
	Unary_Expr_Node(void);
	virtual ~Unary_Expr_Node(void);
	virtual double eval(void);
	virtual void accept(Expr_Node_Visitor & v);

protected:
	Expr_Node * child_;
};

#endif // !_UNARY_EXPR_NODE_