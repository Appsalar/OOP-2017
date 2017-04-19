#include "Complex.h"
#include <iostream>


Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

Complex::Complex(const Complex & other)
{
	re = other.re;
	im = other.im;
}


Complex & Complex::operator=(const Complex & other)
{
	if (this != &other)
	{
		re = other.re;
		im = other.im;
	}
	return *this;
}

Complex::~Complex()
{
}

Complex & Complex::operator+=(const Complex & other)
{
	re += other.re;
	im += other.im;

	return *this;
}

Complex Complex::operator+(const Complex & other)
{
	Complex temp = *this;
	temp += other;
	return temp;
}

void Complex::print() const
{
	std::cout << "real: " << re << " ";
	std::cout << "img: " << im << std::endl;
}
