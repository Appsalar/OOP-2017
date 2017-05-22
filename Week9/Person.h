#pragma once

typedef unsigned int uint;

class Person
{
public:
	Person();
	Person(const char * name, uint age, const char * address);
	Person(const Person&);
	Person& operator=(const Person&);
	~Person();

	void print() const;

protected:
	void copy(const Person &);

private:
	char* name;
	uint age;
	char* address;
};
