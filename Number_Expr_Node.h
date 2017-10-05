#pragma once

#ifndef _NUMBER_EXPR_NODE_
#define _NUMBER_EXPR_NODE_

#include "Expr_Node.h"

class Number_Expr_Node : public Expr_Node {
public:
	Number_Expr_Node(void);
	virtual ~Number_Expr_Node(void);
	virtual double eval(void);
	virtual void accept(Expr_Node_Visitor & v);

protected:
	Expr_Node * child_;
};

#endif // !_NUMBER_EXPR_NODE_