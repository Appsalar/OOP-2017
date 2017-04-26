#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	ofstream out("file.dat", ios::binary | ios::out | ios::app);

	int foo = 420;
	out.write((const char*)&foo, sizeof foo);

	char * kek = "Armqnov gleda";

	int size = strlen(kek) + 1;
	out.write((const char*)&size, sizeof size);
	out.write(kek, size);

	int arr[] = { 1,23,23,43,2351,41,12312,13,13,112,312,312, };
	out.write((const char*)&arr, sizeof arr);

	out.close();
}


void neshto()
{
	ifstream input("neshto.txt");

	if (!input)
		std::cout << "kek" <<endl;

	input.seekg(0, ios::end);
	int sizeOfFile = input.tellg();

	input.seekg(0, ios::beg);

	while (true)
	{
		char buff[250];
		input >> buff;

		if (!input.good())
		{
			if (input.eof())
				break;

			if (input.fail())
			{
				if (input.bad())
				{
					std::cout << "chao" << endl;
					break;
				}

				input.clear();

				char buf19[255];
				input >> buf19;
			}
		}
		cout << buff << endl;
	}
	input.close();
}