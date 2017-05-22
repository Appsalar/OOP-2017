#include "Triangle.h"
#include <iostream>
#include "Circle.h"

int main()
{
	Shape * p[2];
	p[0] = new Triangle;
	p[0]->init();

	std::cout << p[0]->area() << std::endl;
	p[0]->print();

	std::cout << "--------------------" << std::endl;

	p[1] = new Circle;
	p[1]->init();

	std::cout << p[1]->area() << std::endl;
	p[1]->print();

}