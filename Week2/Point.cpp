#include "Point.h"
#include <cmath>


Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point & other)
{
	copy(other);
}

Point & Point::operator=(const Point & other)
{
	if (this != &other)
	{
		copy(other);
	}
	return*this;
}


Point::~Point()
{
}

void Point::init(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point::dist(const Point & p2)
{
	double dx = x - p2.x;
	double dy = y - p2.y;

	return sqrt(dx * dx + dy * dy);
}

void Point::copy(const Point & other)
{
	x = other.x;
	y = other.y;
}
