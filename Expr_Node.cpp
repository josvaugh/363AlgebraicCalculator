#include "Expr_Node.h"

Expr_Node::Expr_Node(void) {}

Expr_Node::~Expr_Node(void) {}
// Used to traverse the tree

double eval(void) {

}

//Vistior Pattern Used
void print_preorder(std::ostream &) {
/*
if(leaf==NULL){
//cout << "The tree is empty";
return;
}
else if(leaf!=NULL){
//first print the data of the node
cout << leaf -> key_value << endl;
//then recur on the left subtree
printPreorder(leaf -> left);
//Now recur on the right subtree
printPreorder(leaf->right);
}
*/

}

void print_inorder(std::ostream &) {}

void accept(Expr_Node_Visitor & v) { 
	v.Visit_Expr_Node(*this); 
}

