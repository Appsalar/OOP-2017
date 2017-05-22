#include "Person.h"
#include <iostream>

using namespace std;

char* duplicate(const char* str)
{
	char * foo = new char[strlen(str) + 1];
	strcpy(foo, str);
	return foo;
}

Person::Person()
{
	cout << "	Person::Person()	" << endl;
	name = nullptr;
	age = 0;
	address = nullptr;
}

Person::Person(const char * name, uint age, const char * address)
{
	cout << "	Person::Person() s neshta	" << endl;
	this->name = duplicate(name);
	this->age = age;
	this->address = duplicate(address);
}

Person::Person(const Person & other)
{
	cout << "	Person::Person() copy	" << endl;
	name = address = nullptr;
	copy(other);
}

Person & Person::operator=(const Person &other)
{
	if (this != &other)
	{
		copy(other);
	}
	return *this;
}

Person::~Person()
{
	cout << "	Person::Destructor	" << endl;
	delete[] name;
	delete[] address;
}

void Person::print() const
{
	cout << "	Person::print()	" << endl;
	cout << "Name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "Address: " << address << endl;
}

void Person::copy(const Person & other)
{
	delete[] name;
	delete[] address;

	name = duplicate(other.name);
	age = other.age;
	address = duplicate(other.address);
}


