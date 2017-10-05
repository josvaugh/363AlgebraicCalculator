#include "Multiply_Expr_Node.h"

Multiply_Expr_Node::Multiply_Expr_Node(Expr_Node * right, Expr_Node * left) {
	//Initialize Left and Right nodes
	right_ = right;
	left_ = left;
}

Multiply_Expr_Node::~Multiply_Expr_Node(void) {
	//Destroy all Left and Right nodes
	delete this->right_;
	delete this->left_;
}

double Multiply_Expr_Node::eval(double num1, double num2) {
	//return the completed evaluation
	return(num1 * num2);
}

void Multiply_Expr_Node::accept(Expr_Node_Visitor & v) {
	v.Visit_Multiplication_Node(*this);
}