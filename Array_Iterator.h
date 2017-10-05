#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include "Array.h"
#include "Array_Base.h"
/*
	Goal of this class is to get access to all elements in the Array class since
		it's a friend class of the Array class
*/
template <typename T>
class Array_Iterator : public Array <T>{
	public:
		typedef T type;

	Array_Iterator (Array <T> & a) {}

	~Array_Iterator(void);
	
	bool is_done (void);

	bool advance (void);

	T & operator * (void);

	T * operator -> (void);

	private:
	 Array <T> & a_;
	 size_t curr_;
};
#include "Array_Iterator.cpp"


#endif // !defined _ARRAY_ITERATOR_H_
