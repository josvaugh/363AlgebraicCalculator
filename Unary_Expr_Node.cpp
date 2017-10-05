#include "Unary_Expr_Node.h"

Unary_Expr_Node::Unary_Expr_Node(void) {}

Unary_Expr_Node::~Unary_Expr_Node(void) {}

double Unary_Expr_Node::eval(void) {
	//check to see if node is a child, if so return child to evaluator
	if (this->child_) 
		return this->child_->eval(r);
}

void Unary_Expr_Node::accept(Expr_Node_Visitor & v) {
	v.Visit_Unary_Node(*this);
}