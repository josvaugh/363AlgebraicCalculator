#ifndef _CLIENT_
#define _CLIENT_

#include "Array_Iterator.h"
#include "Stack.h"
#include "Stack_Factory_Command.h"
#include "Factory_Command.h"
#include "Command.h"
#include "Binary.h"
#include "Number.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Division.h"
#include "Multiplication.h"
#include "Modulus.h"

#include <iostream>
#include <string>
#include <sstream>


bool evaluate_postfix(Array_Iterator & iter);

bool infix_to_postfix(const std::string & infix, Factory_Command & factory, Array <Command *> & postfix);

#include "client.cpp"

#endif // !_CLIENT_
