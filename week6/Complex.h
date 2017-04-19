#pragma once
class Complex
{
private:
	double re;
	double im;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	Complex& operator=(const Complex&);
	~Complex();

	Complex& operator+=(const Complex&);
	Complex operator+(const Complex&);

	void print() const;
};

