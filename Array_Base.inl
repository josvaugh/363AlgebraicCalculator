// -*- C++ -*-
// $Id: Array_Base.inl 828 2011-02-07 14:21:52Z hillj $

// Honor Pledge: Joseph Vaughn
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Array_Base <T>::size(void) const
{
	return cur_size_;
}

//
// max_size
//
template <typename T>
inline
size_t Array_Base <T>::max_size(void) const
{
	return max_size_;
}
