#include "Triangle.h"
#include <iostream>
#include <cmath>

double distance(Point a, Point b)
{
	double x = a.x - b.x;
	double y = a.y - b.y;

	double dist = x * x + y * y;
	dist = sqrt(dist);

	return dist;
}

Triangle::Triangle()
{
	for (size_t i = 0; i < 3; i++)
		vertices[i] = Point();
}


Triangle::~Triangle()
{
}

void Triangle::print() const
{
	for (size_t i = 0; i < 3;++i)
	{
		std::cout << "Point" << i << ": " << vertices[i].x
			<< " , " << vertices[i].y << std::endl;
	}
}

double Triangle::area() const
{
	double a = distance(vertices[0], vertices[1]);
	double b = distance(vertices[1], vertices[2]);
	double c = distance(vertices[0], vertices[2]);

	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::init()
{
	for (size_t i = 0; i < 3;++i)
	{
		std::cout << "Point" << i << ".x: ";
		std::cin >> vertices[i].x;
		std::cout << "Point" << i << ".y: ";
		std::cin >> vertices[i].y;
	}
}
