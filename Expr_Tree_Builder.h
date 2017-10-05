#pragma once

#ifndef _EXPR_TREE_BUILDER_
#define _EXPR_TREE_BUILDER_

#include "Expr_Builder.h"

class Expr_Tree_Builder : public Expr_Builder {
	Expr_Tree_Builder(void);
	virtual ~Expr_Tree_Builder(void);
	virtual void start_expression(void);
	virtual void build_number(double n);
	virtual void build_add_operator(void);
	virtual void build_subtract_operator(void);
	virtual void build_multiplication_operator(void);
	virtual void build_division_operator(void);
	Expr_Node * get_expression(void);
private:
	// current state of expression tree
	Expr_Node * tree_;
	// other variables to coordinate build process
};

#endif // !_EXPR_TREE_BUILDER_