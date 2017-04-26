#include "Person.h"
#include <fstream>

void Person::writeToFile(const char * fileName)
{
	std::ofstream out(fileName, std::ios::out | std::ios::trunc);

	int size = strlen(name);
	out.write((const char*)&size, sizeof size);
	out.write(name, size);
	char* p = (char*)this;
	out.write((const char*)(p + sizeof(name)), sizeof Person - sizeof name);;
}

void Person::writeToFile1(const char *fileName)
{
	std::ofstream out(fileName, std::ios::out | std::ios::trunc);

	int size = strlen(name) + 1;
	out.write((const char*)&size, sizeof size);
	out.write(name, size);

	out.write((const char*)&age, sizeof age);
	out.write((const char*)&egn, sizeof egn);
	out.close();
}


bool Person::readFromFile(const char *fileName)
{
	std::ifstream input(fileName);
	if (!input)
		return false;

	delete[] name;
	int size;
	input.read((char*)&size, sizeof size);
	if (!input.good())
		return false;
	
	name = new char[size];
	input.read(name, size);
	if (!input.good())
		return false;

	input.read((char*)&age, sizeof age);
	if (!input.good())
		return false;

	input.read(egn, sizeof egn);
	if (!input.good())
		return false;

	return true;
}
