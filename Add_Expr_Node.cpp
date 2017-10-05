#include "Add_Expr_Node.h"

Add_Expr_Node::Add_Expr_Node(Expr_Node * right, Expr_Node * left) {
	//Initialize Left and Right nodes
	right_ = right;
	left_ = left;
}

Add_Expr_Node::~Add_Expr_Node(void) {
	//Destroy all Left and Right nodes
	delete this->right_;
	delete this->left_;
}

double Add_Expr_Node::eval(double num1, double num2) {
	//return the completed evaluation
	return(num1 + num2);
}

void Add_Expr_Node::accept(Expr_Node_Visitor & v) {
	v.Visit_Addition_Node(*this);
}