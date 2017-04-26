#include "Polynom.h"
#include <iostream>


Polynom::Polynom()
{
}

Polynom::Polynom(float * pol, int deg)
{
	this->deg = deg + 1;
	this->pol = new float[this->deg];
	for (size_t i = 0; i < deg + 1; i++)
		this->pol[i] = pol[i];
}


Polynom::~Polynom()
{
}

Polynom & Polynom::operator+=(const Polynom & other)
{
	bool bigger = true;
	size_t maximum = deg;
	size_t minimum = other.deg;

	if (deg < other.deg)
	{
		bigger = false;
		maximum = other.deg;
		minimum = deg;
	}

	float* temp = new float[maximum];

	for (size_t i = 0; i < minimum; ++i)
		temp[i] = pol[i] + other.pol[i];

	for (size_t i = minimum; i < maximum; i++)
		temp[i] = bigger ? pol[i] : other.pol[i];

	delete[] pol;
	pol = temp;
	return *this;
}

void Polynom::print() const
{
	for (size_t i = 0; i < deg; i++)
	{
	std::cout << i << " "<< pol[i] << " "<<std::endl;
	}
	std::cout << std::endl;
}

Polynom & Polynom::operator*=(const Polynom & other)
{
	int tempDeg = deg + other.deg - 1;
	float* tempArr = new float[tempDeg];
	for (size_t i = 0; i < tempDeg; i++)
		tempArr[i] = 0;

	for (size_t i = 0; i < deg; i++)
	{
		for (size_t j = 0; j < other.deg; j++)
			tempArr[i + j] += pol[i] * other.pol[j];
	}
	delete[] pol;
	pol = tempArr;
	deg = tempDeg;

	return *this;
}
