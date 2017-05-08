#include "Box.h"
#pragma once


template< typename T>
Box<T>::Box() {}

template< typename T>
Box<T>::Box(const T& arg)
{
	toy = arg;
}

template< typename T>
const T& Box<T>::getToy() const
{
	return toy;
}

template<typename T>
inline bool Box<T>::operator<(const Box<T>& other) const
{
	return toy < other.toy;
}




// когато се прави специализация на темплейт 
// не е трябва да се пише template<> преди името 
// на функцията 
Box<char*>::Box()
{
	toy = nullptr;
}

Box<char*>::Box(const char * toy)
{
	this->toy = new char[strlen(toy) + 1];
	strcpy(this->toy, toy);
}

Box<char*>::~Box()
{
	delete[] toy;
}


const char* Box<char*>::getToy() const
{
	return toy;
}

inline bool Box<char*>::operator<(const Box<char*>& other) const
{
	return strcmp(toy, other.toy) < 0;
}