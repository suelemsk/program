#include <iostream>
#define NUMERO_MAX_SIZE 5

int main()
{
	int* ap[ NUMERO_MAX_SIZE ];
	int numeros[NUMERO_MAX_SIZE] = { 11, 12, 13, 14, 15 };
	int i, j;

	for (int i = 0, j = 4; i < NUMERO_MAX_SIZE; i++, j--)
	{
		ap[j]= &numeros[i];	
	}

	for (int i = 0; i < NUMERO_MAX_SIZE; i++)
	{
		std::cout << *(*(ap + i)) 
				  << std::endl;

	}



	system("pause");
	return 0;
}