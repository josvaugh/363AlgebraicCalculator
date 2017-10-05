// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge: Joseph Vaughn
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack.h"

//
// Stack
//
template <typename T>
Stack <T>::Stack(void) {
	
	A = new T[0];
}

//
// Stack
//

template <typename T>
Stack <T>::Stack(const Stack & stack){

	A.resize(stack.size);

	for (int i = 0; i <= stack.size; i++) {
		A.set(i) = stack.A.get();
	}
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack(void){

	//destorys array
	A.~Array();
}

//
// push
//
template <typename T>
void Stack <T>::push(T element){

	A.resize(++A.cur_size_);
	A.set(A.cur_size_, element);
}

//
// pop
//
template <typename T>
void Stack <T>::pop(void){
	
	A.get(A.cur_size_);
	A.resize(--A.cur_size_);

}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs){
	
	A.resize(rhs.size);

		for(int i = 0; i <= rhs.size; i++) {
			A.set(i) = rhs.A.get(i);
		}//end for
	return rhs;
}
template <typename T>
inline
size_t Stack <T>::size(void) const{

	return A.size;
}

//
// top
//
template <typename T>
inline
T Stack <T>::top(void) const{

	return A.size;
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty(void) const{

	//simple bool to check if there exists a queue by checking
	//to see if the current size isn't false
	if (size == 0) {
		return true;
	}//end if
	else
		return false;
}
//
// clear
//
template <typename T>
void Stack <T>::clear(void){

	//simply fill the stack with 0's
	A.fill(0);
	A.cur_size_ = 0;
}

