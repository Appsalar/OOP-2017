#pragma once


class Person
{
private:
	char* name;
	unsigned int age;
	char egn[11];

public:
	Person();
	Person(char*, unsigned int, char*);


	void writeToFile(const char*);
	void writeToFile1(const char*);

	bool readFromFile(const char *fileName);
};