// $Id: Array_Base.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge: Joseph Vaughn
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array_Base.h"

//
// Array_Base
//
template <typename T>
Array_Base <T>::Array_Base(void) : data_(nullptr), cur_size_(0), max_size_(0) {}

//
// Array_Base (size_t)
//
template <typename T>
Array_Base <T>::Array_Base(size_t length) : data_(nullptr), cur_size_(length), max_size_(length){
	//Initialize member variables based off of parameter length
	cur_size_ = length;
	max_size_ = length;
	data_ = new T[max_size_];
}

//
// Array_Base (size_t, char)
//
template <typename T>
Array_Base <T>::Array_Base(size_t length, T fill) : data_(nullptr), cur_size_(length), max_size_(length){
	//Initialize member variables with parameter length; 
	//create a new data object with type T
	data_ = new T[length];
	cur_size_ = length;
	max_size_ = length;

	//fill the data array with fill parameter
	for (int i = 0; i < length; i++) {
		data_[i] = fill;
	}//end for
}

//
// Array_Base (const Array_Base &)
//
template <typename T>
Array_Base <T>::Array_Base(const Array_Base & Array_Base) : data_(nullptr), cur_size_(0), max_size_(0){
	//creates a new data point with max size size
	data_ = new T[max_size_];

	//copies the array based off of original array paramater
	for (size_t i = 0; i < max_size_; i++) {
		data_[i] = Array_Base.data_[i];
	}
}

//
// ~Array_Base
//
template <typename T>
Array_Base <T>::~Array_Base(void){
	delete[] data_;
}

//
// operator =
//
template <typename T>
const Array_Base <T> & Array_Base <T>::operator = (const Array_Base & rhs){
	//clear data for we can start a new array with 
	//the original max side that was on the RHS, 
	//then create a new data object with size max size
	delete[] data_;
	max_size_ = rhs.max_size_;
	data_ = new T[max_size_];

	//fill the new data array based off of the rhs data
	for (int i = 0; i< max_size_; i++) {
		data_[i] = rhs.data_[i];
	}
	return *data_;
}

//
// operator []
//
template <typename T>
T & Array_Base <T>::operator [] (size_t index){
	//if the index is less than the max size, 
	//it'll return the data, if not, out of range expcetion
	//is thrown
	if (index < max_size_) {
		return data_[index];
	}//end if
	else {
		throw "Out_of_Range";
	}
}

//
// operator [] 
//
template <typename T>
const T & Array_Base <T>::operator [] (size_t index) const{
	//Attempt at overload, if max size is less than the index, then it will
	//let the user know there was an overload, which is out of range
	if (index < max_size_) {
		return data_[index];
	}//end if

	else {
		throw "Out_of_Range";
	}
}

//
// get
//
template <typename T>
T Array_Base <T>::get(size_t index) const{

	//if the index is greater or equal to max size, then
	//throw the out of range exeption
	if (index >= max_size_) {
		throw "Out_of_Range";
	}

	// then simply reuturn the value in said index
	return data_[index];
}

//
// set
//
template <typename T>
void Array_Base <T>::set(size_t index, T value){
	//Attempt at out of range, if index is less than max size,
	//set the data to the value from parameter. If not, 
	//throw out of range exception
	if (index < max_size_) {
		data_[index] = value;
	}//end if
	else {
		throw "Out_of_Range";
	}
}


//
// find (char)
//
template  <typename T>
int Array_Base <T>::find(T value) const{
	//eq. to int i.
	size_t i = 0;

	//make a loop that searches through the loop, if data
	//is equivalent, return the value. else, return error.
	while (data_[i] < max_size_) {
		if (data_[i] == value) {
			return i;
		}
		else if (i >= max_size_) {
			return -1;
		}
		i++;
	}
}

//
// find (char, size_t) 
//
template <typename T>
int Array_Base <T>::find(T val, size_t start) const{
	//first we want to check and see if length is greater than max size
	//, if so throw out of range.
	if (start > max_size_) {
		throw "Out_of_Range";
	}//end if

	 //traverse through the array with loop, until 
	 //we come across the value in paramter;
	 //return the length
	else {
		for (start; start < size(); start++) {
			if (data_[start] == val) {
				return start;
			}
		}//end for
		return -1;
	}//end else
}

//
// operator ==
//
template <typename T>
bool Array_Base <T>::operator == (const Array_Base & rhs) const{
	//checks to see if the max size is not equivalent to the rhs
	if (max_size_ != rhs.data_) {
		return false;
	}//end if

	 //checks the equivalence of the data store, and keeps going
	 // until either false or true.
	for (size_t i = 0; i < max_size_; i++) {
		if (data_[i] != rhs.data_[i]) {
			i++;
		}
		else if (data_[i] != rhs.data_[i]) {
			return false;
		}
	}
	return true;
}

//
// operator !=
//
template <typename T>
bool Array_Base <T>::operator != (const Array_Base & rhs) const{
	//checks to see if max size is equivalent or not
	if (max_size_ != rhs.max_size_) {
		return true;
	}//end if

	 //will keep looping until either found true, if not false;
	 //keeps comparing until it breaks
	for (size_t i = 0; i < cur_size_;) {
		if (data_[i] == rhs.data_[i]) {
			i++;
		}
		else if (data_[i] != rhs.data_[i]) {
			return true;
		}
	}
	return false;
}

//
// fill
//
template <typename T>
void Array_Base <T>::fill(T value){
	//simply fills the array with given value
	for (size_t i = 0; i < max_size_(); i++) {
		data_[i] = value;
	}
}

