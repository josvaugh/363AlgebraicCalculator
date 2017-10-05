int main() {
	//will work on main more after I know Build and Visitor work

	// get input from STDIN concrete factory
	std::string infix;
	// ...
	Stack <double> result;
	Stack_Factory_Command factory(result);
	Array <Command *> postfix;
	infix_to_postfix(infix, factory, postfix);
	// evaluate postfix
	int res = result.top();

}
