#include "Print_Inorder_Expression.h"

Print_Inorder_Expression::Print_Inorder_Expression(std::ostream & out)
	: out_(out) { }
Print_Inorder_Expression::~Print_Inorder_Expression(void) {}

// Methods for visiting concrete nodes
void Print_Inorder_Expression::Visit_Addition_Node(const Add_Expr_Node & node) {}
void Print_Inorder_Expression::Visit_Subtraction_Node(const Sub_Expr_Node & node) {}
void Print_Inorder_Expression::Visit_Multiplication_Node(const Multiply_Expr_Node & node) {}
void Print_Inorder_Expression::Visit_Division_Node(const Division_Expr_Node & node) {}
void Print_Inorder_Expression::Visit_Binary_Node(const Binary_Expr_Node & node) {}
void Print_Inorder_Expression::Visit_Unary_Node(const Unary_Expr_Node & node) {}
void Print_Inorder_Expression::Visit_Number_Node(const Number_Expr_Node & node) {}
