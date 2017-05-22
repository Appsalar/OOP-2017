#include "Triangle.h"
#include <iostream>

int main()
{
	Shape * p = new Triangle;
	p->init();

	std::cout << p->area() << std::endl;
	p->print();

}