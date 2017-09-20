#include "MegaSena.h"


MegaSena::MegaSena()
{
	for (int i = 0; i < 6; ++i)
	{
		Jogo[i] = 0;
		Resultado[i] = 0;
	}

	srand(time(NULL));
}


MegaSena::~MegaSena()
{
}

void MegaSena::setJogo(int OJogo[6])
{
	for (int i = 0; i < 6; ++i)
	{
		Jogo[i] = OJogo[i];
	}	
}

void MegaSena::gerarJogo(void)
{
	for (int i = 0; i < 6; ++i)
	{
			Resultado[i] = rand() % 60 + 1;

			int NumeroIgual = 0;
			int Auxiliar = 0;

			Resultado[0] = rand() % 60 + 1;
			for (int i = 1; i < 6; ++i)
			{
				do
				{
					Resultado[i] = rand() % 60 + 1;
					NumeroIgual = 0;

					for (int j = 0; j < i; ++j)
					{
						if (Resultado[i] == Resultado[j])
						{
							NumeroIgual = 1;
						}
					}
				} while (NumeroIgual != 0);
			}

			for (int i = 0; i < 5; ++i)
			{
				for (int j = 0; j < 5; ++j)
				{
					if (Resultado[j] > Resultado[j + 1])
					{
						Auxiliar = Resultado[j];
						Resultado[j] = Resultado[j + 1];
						Resultado[j + 1] = Auxiliar;
					}
				}
			}
	}

}

void MegaSena::gerarResultado(void)
{
	int Acertos = 0;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (Jogo[i] == Resultado[j])
			{
				Acertos++;
			}
		}
	}

	for (int i = 0; i < 6; ++i)
	{
		cout << " " << Resultado[i] << " ";
	}
	
	cout << endl;

	setAcertos(Acertos);
}