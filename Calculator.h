#pragma once

#ifndef _CALCULATOR_
#define _CALCULATOR_


Calculator(Expression_Builder & builder)
	: builder_(builder) { }

double Calculator::evaluate(const std::string & infix);

#endif // !_CALCULATOR_
