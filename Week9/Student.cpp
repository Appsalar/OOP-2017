#include "Student.h"
#include <iostream>

using namespace std;

extern char* duplicate(const char*);

Student::Student() : Person()
{
	cout << "	Student::Student()	" << endl;
	uni = nullptr;
	year = 0;
}

Student::Student(const char * name, uint age, const char * address,
	const char * uni, uint year) :
	Person(name, age, address)
{
	cout << "	Student::Student() s neshta	" << endl;
	this->uni = duplicate(uni);
	this->year = year;
}

Student::Student(const Person & p, const char * uni, uint year) :
	Person(p)
{
	cout << "	Student::Student() s person	" << endl;
	this->uni = duplicate(uni);
	this->year = year;
}

Student::Student(const Student & other) : Person(other)
{
	cout << "	Student::Student() copy	" << endl;
	this->uni = duplicate(uni);
	this->year = year;
}

Student & Student::operator=(const Student & other)
{
	if (this != &other)
	{
		Person::operator=(other);

		delete[] uni;
		uni = duplicate(uni);
		year = other.year;
	}
	return *this;
}


Student::~Student()
{
	cout << "	Student::Destructor	" << endl;
	delete[] uni;
}

void Student::print() const
{
	cout << "Student::print()	" << endl;
	Person::print();
	cout << "Uni: " << uni << endl;
	cout << "Year: " << year << endl;
}

void Student::copy(const Student & other)
{
	Person::copy(other);
	delete[] uni;
	uni = duplicate(uni);
	year = other.year;
}
