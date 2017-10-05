#include "Expr_Node_Visitor.h"

Expr_Node_Visitor::~Expr_Node_Visitor(void) {}

// Methods for visiting concrete nodes
void Expr_Node_Visitor::Visit_Addition_Node(const Add_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Subtraction_Node(const Sub_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Multiplication_Node(const Multiply_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Division_Node(const Division_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Binary_Node(const Binary_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Unary_Node(const Unary_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Number_Node(const Number_Expr_Node & node) {}
void Expr_Node_Visitor::Visit_Expr_Node(const Number_Expr_Node & node) {}