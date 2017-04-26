#include<iostream>
#include "Polynom.h"

int main()
{
	float arr[] = { 3, 2, 1};
	Polynom a(arr, 2);

	float arr1[] = { 1, 2};
	Polynom b(arr1, 1);
	a *= b;
	a.print();


}