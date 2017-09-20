#include "LotoFacil.h"
//-----------------------------------------------------------------------
LotoFacil::LotoFacil()
{
	srand(time(NULL));

	for (int i = 0; i < 15; ++i)
	{
		JogoLoto[i] = 0;
		ResultadoLoto[i] = 0;
	}
}
//-----------------------------------------------------------------------
LotoFacil::~LotoFacil()
{

}
//-----------------------------------------------------------------------
void LotoFacil::gerarJogoLoto(void)
{
	int NumeroIgual = 0;
	int Auxiliar = 0;

	ResultadoLoto[0] = rand() % 25 + 1;
	for (int i = 1; i < 15; ++i)
	{
		do
		{
			ResultadoLoto[i] = rand() % 25 + 1;
			NumeroIgual = 0;

			for (int j = 0; j < i; ++j)
			{
				if (ResultadoLoto[i] == ResultadoLoto[j])
				{
					NumeroIgual = 1;
				}
			}
		} while (NumeroIgual != 0);
	}

	for (int i = 0; i < 14; ++i)
	{
		for (int j = 0; j < 14; ++j)
		{
			if (ResultadoLoto[j] > ResultadoLoto[j + 1])
			{
				Auxiliar = ResultadoLoto[j];
				ResultadoLoto[j] = ResultadoLoto[j + 1];
				ResultadoLoto[j + 1] = Auxiliar;
			}
		}
	}
}
//-----------------------------------------------------------------------
void LotoFacil::gerarAcertosLoto(void)
{
	int Acertos = 0;

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (JogoLoto[i] == ResultadoLoto[j])
			{
				Acertos++;
			}
		}
	}

	setQuatidadeAcertos(Acertos);
}
//-----------------------------------------------------------------------
void LotoFacil::getJogoLoto(int OSorteio[15])
{
	for (int i = 0; i < 15; ++i)
	{
		OSorteio[i] = ResultadoLoto[i];
	}
}
//-----------------------------------------------------------------------
void LotoFacil::setJogoLoto(int UmaAposta[15])
{
	for (int i = 0; i < 15; ++i)
	{
		JogoLoto[i] = UmaAposta[i];
	}
}