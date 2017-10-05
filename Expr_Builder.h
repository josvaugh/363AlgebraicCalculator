#pragma once

#ifndef _EXPR_BUILDER_
#define _EXPR_BUILDER_

#include "Expr_Node.h"
#include "Stack.h"

class Expr_Builder {
public:

	virtual void start_expression(void);
	virtual void build_number(double n) = 0;
	virtual void build_add_operator(void) = 0;
	virtual void build_subtract_operator(void) = 0;
	virtual void build_multiplication_operator(void) = 0;
	virtual void build_division_operator(void) = 0;
	virtual void build_open_parenthesis(void) = 0;
	virtual void build_close_parenthesis(void) = 0;
	virtual Expr_Node * get_expression(void) = 0;
};

#endif // !_EXPR_BUILDER_