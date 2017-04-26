#pragma once
class Polynom
{
	float* pol;
	size_t deg;
public:
	Polynom();
	Polynom(float*, int);
	~Polynom();

	Polynom& operator+=(const Polynom&);
	void print() const;
	Polynom& operator*=(const Polynom&);
};

