#pragma once

#ifndef _EXPR_NODE_
#define _EXPR_NODE_

#include <iostream>
class Expr_Node_Visitor;

class Expr_Node {
public:
	Expr_Node(void);
	virtual ~Expr_Node(void);
	// Used to traverse the tree
	virtual double eval(void) = 0;

	//Vistior Pattern Used
	virtual void print_preorder(std::ostream &) = 0;
	virtual void print_inorder(std::ostream &) = 0;
	virtual void accept(Expr_Node_Visitor & v) = 0;
};

#endif // !_EXPR_NODE_