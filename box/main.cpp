#include <iostream>
#include "Box.h"


int main()
{
	using namespace std;
	Box<int> a(420);

	std::cout << a.getToy() << std::endl;

	Box<int> b(42);
	cout << (a < b) << endl;

	Box<char*> foo("kek");

	Box<char*> bar("keklandiq");

	cout << (foo < bar) << endl;
}