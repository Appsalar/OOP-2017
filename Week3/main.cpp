#include <iostream>
#include "String.h"

int main()
{
	String foo("Armqnov gleda");
	std::cout << foo.getString() << std::endl;

	foo.setString("pls help");
	std::cout << foo.getString() << std::endl;
}