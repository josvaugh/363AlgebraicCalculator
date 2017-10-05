#include "Expr_Tree_Builder.h"

Expr_Tree_Builder::Expr_Tree_Builder(void) {}

Expr_Tree_Builder::~Expr_Tree_Builder(void) {
	delete this->tree_;
}

void Expr_Tree_Builder::start_expression(void) {
	this->tree_ = new Expr_Node();
}

void Expr_Tree_Builder::build_number(double n) {
	n = new Number_Expr_Node;
	this->tree_ = n;
}

//build operators creates new nodes for tree

void Expr_Tree_Builder::build_add_operator(void) {
	this-> tree_ = new Add_Expr_Node;
}

void Expr_Tree_Builder::build_subtract_operator(void) {
	this->tree_ = new Sub_Expr_Node;
}

void Expr_Tree_Builder::build_multiplication_operator(void) {
	this->tree_ = new Multiply_Expr_Node;
}

void Expr_Tree_Builder::build_division_operator(void) {
	this->tree_ = new Divide_Expr_Node;
}

Expr_Node * Expr_Tree_Builder::get_expression(void) {
	return this->tree_; 
}