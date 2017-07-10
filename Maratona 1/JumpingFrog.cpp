#include <iostream>

using namespace std;

int main(void)
{
	int p, n, cano_atual, cano_prox;
	std::cin >> p >> n;

	std::cin >> cano_atual;
	n--;
	while(n > 0)
	{
		std::cin >> cano_prox;
		if(cano_prox - cano_atual <= p && cano_prox - cano_atual >= 0
		|| cano_atual - cano_prox <= p && cano_atual - cano_prox >= 0)
		{
			cano_atual = cano_prox;
			n--;
		}
		else
		{
			std::cout << "GAME OVER";
			return 0;
		}
	}
	std::cout << "YOU WIN";
	return 0;
}
