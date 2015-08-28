#include <iostream>

int main()
{
	int v[5] = { 1, 2, 3 };
	int* p = &v[0]; // igual
	int* p = v; // igual - > aponta pra primeira posição
	int* p = v + 1; // segunda posição

	int vet[2][2] = {
		{ 2, 3 },
		{ 20, 30 }
	};

	int* ptr = v;
	int* ptr = vet[1];
	std::cout << *(ptr + 1)
		<< std::endl;
	system("pause");

	return 0;
}