#include "MegaSena.h"
//-----------------------------------------------------------------------
MegaSena::MegaSena()
{
	srand(time(NULL));

	for (int i = 0; i < 6; ++i)
	{
		JogoMega[i] = 0;
		ResultadoMega[i] = 0;
	}
}
//-----------------------------------------------------------------------
MegaSena::~MegaSena()
{

}
//-----------------------------------------------------------------------
void MegaSena::gerarJogoMega(void)
{
	int NumeroIgual = 0;
	int Auxiliar = 0;
	
	ResultadoMega[0] = rand() % 60 + 1;
	for (int i = 1; i < 6; ++i)
	{
		do
		{
			ResultadoMega[i] = rand() % 60 + 1;
			NumeroIgual = 0;

			for (int j = 0; j < i; ++j)
			{
				if (ResultadoMega[i] == ResultadoMega[j])
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
			if (ResultadoMega[j] > ResultadoMega[j + 1])
			{
				Auxiliar = ResultadoMega[j];
				ResultadoMega[j] = ResultadoMega[j + 1];
				ResultadoMega[j + 1] = Auxiliar;
			}
		}
	}
}
//-----------------------------------------------------------------------
void MegaSena::gerarAcertosMega(void)
{
	int Acertos = 0;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (JogoMega[i] == ResultadoMega[j])
			{
				Acertos++;
			}
		}
	}
	
	setQuatidadeAcertos(Acertos);
}
//-----------------------------------------------------------------------
void MegaSena::getJogoMega(int OSorteio[6])
{
	for (int i = 0; i < 6; ++i)
	{
		OSorteio[i] = ResultadoMega[i];
	}
}
//-----------------------------------------------------------------------
void MegaSena::setJogoMega(int UmaAposta[6])
{
	for (int i = 0; i < 6; ++i)
	{
		JogoMega[i] = UmaAposta[i];
	}
}