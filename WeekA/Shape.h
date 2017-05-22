#pragma once

class Shape
{
public:
	virtual double area() const = 0;
	virtual void init() = 0;
	virtual void print() const = 0;
};

struct Point
{
	double x;
	double y;
	Point(double x_ = 0, double y_ = 0)
	{
		x = x_;
		y = y_;
	}
};