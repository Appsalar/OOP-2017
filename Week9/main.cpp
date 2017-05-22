#include "Person.h"
#include "Student.h"
#include <iostream>

int main()
{
	Person foo("kek", 420, "keklandiq");
	foo.print();

	Student bar(foo, "Softuni", 1337);
	bar.print();

	std::cout << "------------------" << std::endl;
	Person* kek = &bar;
	kek->print();

}