#include <iostream>

struct jogador
{
	int x, y, vida;
};

void aplicarDano(jogador* j, int dano)
{
	j->vida -= dano;
}
int main()
{
	jogador j1;
	j1.x = 10;
	j1.y = 20;
	j1.vida = 100;
	aplicarDano(&j1, 30);

	std::cout << "energia de j1: "
		<< j1.vida
		<< std::endl;
	system("pause");
	return 0;
}