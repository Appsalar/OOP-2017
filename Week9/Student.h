#pragma once
#include "Person.h"

class Student : public Person
{
public:
	Student();
	Student(const char*, uint, const char*, const char*, uint);
	Student(const Person&, const char*, uint);
	Student(const Student&);
	Student& operator=(const Student&);
	~Student();

	void print() const;
private: 
	void copy(const Student &);
private:
	char* uni;
	uint year;
};

