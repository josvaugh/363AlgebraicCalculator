#include "Eval_Expr_Tree.h"

Eval_Expr_Tree::Eval_Expr_Tree(void) {}
Eval_Expr_Tree::~Eval_Expr_Tree(void) {
	delete this->result;
}

//All Visit_X_Node methods are accepting the left and right nodes 
	//and then evaluating them. 

void Eval_Expr_Tree::Visit_Addition_Node(const Add_Expr_Node & node){
	node.left()->accept(*this);
	node.right()->accept(*this);

	result_ += node.evaluate();
}

void Eval_Expr_Tree::Visit_Subtraction_Node(const Sub_Expr_Node & node){
	node.left()->accept(*this);
	node.right()->accept(*this);

	result_ += node.evaluate();
}

void Eval_Expr_Tree::Visit_Multiplication_Node(const Multiply_Expr_Node & node) {
	node.left()->accept(*this);
	node.right()->accept(*this);

	result_ += node.evaluate();
}

void Eval_Expr_Tree::Visit_Division_Node(const Division_Expr_Node & node) {
	node.left()->accept(*this);
	node.right()->accept(*this);

	result_ += node.evaluate();
}

void Eval_Expr_Tree::Visit_Binary_Node(const Binary_Expr_Node & node) {}
void Eval_Expr_Tree::Visit_Unary_Node(const Unary_Expr_Node & node) {}
void Eval_Expr_Tree::Visit_Number_Node(const Number_Expr_Node & node) {}

double const Eval_Expr_Tree::result(void) {
	return this->result_; 
}