#include <iostream>

int main()
{
	int vet[2][2] = {
		{ 2, 3 },
		{ 20, 30 }
	};

	int* ptr = &vet[0][0];
	std::cout << *(ptr + 2)
		<< std::endl;
	system("pause");

	return 0;
}