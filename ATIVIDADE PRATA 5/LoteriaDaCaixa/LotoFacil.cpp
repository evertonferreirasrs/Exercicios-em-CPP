#include "LotoFacil.h"

//=============================================================================
LotoFacil::LotoFacil()
{
	srand(time(NULL));

	for (int i = 0; i < 15; ++i)
	{
		SorteioLotoFacil[i] = 0;
		ApostaLotoFacil[i] = 0;
	}
}

//=============================================================================
LotoFacil::~LotoFacil()
{

}

//=============================================================================
void LotoFacil::gerarSorteioLotoFacil(void)
{
	int NumeroIgual = 0;
	int Auxiliar = 0;

	SorteioLotoFacil[0] = rand() % 25 + 1;
	for (int i = 1; i < 15; ++i)
	{
		do
		{
			SorteioLotoFacil[i] = rand() % 25 + 1;
			NumeroIgual = 0;

			for (int j = 0; j < i; ++j)
			{
				if (SorteioLotoFacil[i] == SorteioLotoFacil[j])
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
			if (SorteioLotoFacil[j] > SorteioLotoFacil[j + 1])
			{
				Auxiliar = SorteioLotoFacil[j];
				SorteioLotoFacil[j] = SorteioLotoFacil[j + 1];
				SorteioLotoFacil[j + 1] = Auxiliar;
			}
		}
	}
}

//=============================================================================
void LotoFacil::gerarRespostaLotoFacil(void)
{
	int Acertos = 0;

	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (SorteioLotoFacil[i] == ApostaLotoFacil[j])
			{
				Acertos++;
			}
		}
	}

	setQuatidadeCertas(Acertos);
}

//=============================================================================
void LotoFacil::getSorteioLotoFacil(int OSorteio[15])
{
	for (int i = 0; i < 15; ++i)
	{
		OSorteio[i] = SorteioLotoFacil[i];
	}
}

//=============================================================================
void LotoFacil::setApostaLotoFacil(int UmaAposta[15])
{
	for (int i = 0; i < 15; ++i)
	{
		ApostaLotoFacil[i] = UmaAposta[i];
	}
}