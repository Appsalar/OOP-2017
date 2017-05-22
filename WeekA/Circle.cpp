#include "Circle.h"
#include <iostream>

const double PI = 3.14159;

Circle::Circle()
{
	center = Point();
	radius = 0;
}


Circle::~Circle()
{
}

void Circle::print() const
{
	std::cout << "Center.x: " << center.x << std::endl;
	std::cout << "Center.x: " << center.y << std::endl;
	std::cout << "Radius: " << radius << std::endl;
}

double Circle::area() const
{
	return PI * radius * radius;
}

void Circle::init()
{
	std::cout << "Center.x: ";
	std::cin >> center.x;
	std::cout << "Center.y: ";
	std::cin >> center.y;
	std::cout << "Radius: ";
	std::cin >> radius;
}
