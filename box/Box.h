#pragma once

template <typename T>
class Box
{
private:
	T toy;

public:
	Box();
	Box(const T&);
	/*Box(const Box<T>& other);
	Box<T>& operator=(const Box<T>& other);
	~Box();
*/
	inline const T& getToy() const;
	inline bool operator<(const Box<T>&) const;
};

template<>
class Box<char*>
{
private:
	char* toy;
public:
	Box();
	Box(const char*);
	~Box();

	inline const char* getToy() const;
	inline bool operator<(const Box<char*>&) const;

};

#include "Box_impl.h"