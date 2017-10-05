#include "Binary_Expr_Node.h"

Binary_Expr_Node::Binary_Expr_Node(void) {}

Binary_Expr_Node::~Binary_Expr_Node(void) {}

double Binary_Expr_Node::eval(void) {}

void Binary_Expr_Node::accept(Expr_Node_Visitor & v) {
	v.Visit_Binary_Node(*this);
}