#include <iostream>

int gcd(int a, int b)
{
	//return b == 0 ? a : gcd(b, a % b);

	while (b > 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	std::cout << gcd(25, 900) << std::endl;

}