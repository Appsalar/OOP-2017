#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	Point center;
	double radius;

public:
	Circle();
	~Circle();

	virtual void print() const;
	virtual double area() const;
	virtual void init();
};

