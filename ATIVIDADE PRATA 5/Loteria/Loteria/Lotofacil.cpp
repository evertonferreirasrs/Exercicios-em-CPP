#include "Lotofacil.h"


Lotofacil::Lotofacil()
{
	for (int i = 0; i < 15; ++i)
	{
		Jogo[i] = 0;
		Resultado[i] = 0;
	}

	srand(time(NULL));
}


Lotofacil::~Lotofacil()
{
}

void Lotofacil::setJogo(int OJogo[15])
{
	for (int i = 0; i < 15; ++i)
	{
		Jogo[i] = OJogo[i];
	}
}

void Lotofacil::gerarJogo(void)
{
	for (int i = 0; i < 15; ++i)
	{
		Resultado[i] = rand() % 25 + 1;
	}

}

void Lotofacil::gerarResultado(void)
{
	int Acertos = 0;

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (Jogo[i] == Resultado[j])
			{
				Acertos++;
			}
		}
	}

	for (int i = 0; i < 15; ++i)
	{
		cout << " " << Resultado[i] << " ";
	}

	cout << endl;

	setAcertos(Acertos);
}