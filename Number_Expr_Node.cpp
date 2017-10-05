#include "Number_Expr_Node.h"

Number_Expr_Node::Number_Expr_Node(void) {}

Number_Expr_Node::~Number_Expr_Node(void) {}

double Number_Expr_Node::eval(void) {}

void Number_Expr_Node::accept(Expr_Node_Visitor & v) {
	v.Visit_Number_Node(*this);
}
