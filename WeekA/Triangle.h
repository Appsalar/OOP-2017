#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	Point vertices[3];
public:
	Triangle();
	~Triangle();

	virtual void print() const;
	virtual double area() const;
	virtual void init();
};

