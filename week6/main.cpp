#include<iostream>
#include "Complex.h"


int main() {
	Complex a(1, 2);
	a.print();

	//a.sum(a);
	a += a;
	a.print();
	a.operator+=(a);
	a.print();

	Complex b = a + a;
	b.print();

	Complex c(42, 8);

	Complex foo = b + c;

	foo.print();
}