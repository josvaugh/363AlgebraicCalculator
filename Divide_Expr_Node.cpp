#include "Divide_Expr_Node.h"

Divide_Expr_Node::Divide_Expr_Node(Expr_Node * right, Expr_Node * left) {
	//Initialize Left and Right nodes
	right_ = right;
	left_ = left;
}

Divide_Expr_Node::~Divide_Expr_Node(void) {
	//Destroy all Left and Right nodes
	delete this->right_;
	delete this->left_;
}

double Divide_Expr_Node::eval(double num1, double num2) {
	//return the completed evaluation
	return(num1 / num2);
}

void Divide_Expr_Node::accept(Expr_Node_Visitor & v) {
	v.Visit_Division_Node(*this);
}