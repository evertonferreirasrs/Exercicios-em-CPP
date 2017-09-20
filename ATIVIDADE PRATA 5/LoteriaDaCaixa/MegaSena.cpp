#include "MegaSena.h"

//=============================================================================
MegaSena::MegaSena()
{
	srand(time(NULL));

	for (int i = 0; i < 6; ++i)
	{
		SorteioMegaSena[i] = 0;
		ApostaMegaSena[i] = 0;
	}
}

//=============================================================================
MegaSena::~MegaSena()
{

}

//=============================================================================
void MegaSena::gerarSorteioMegaSena(void)
{
	int NumeroIgual = 0;
	int Auxiliar = 0;
	
	SorteioMegaSena[0] = rand() % 60 + 1;
	for (int i = 1; i < 6; ++i)
	{
		do
		{
			SorteioMegaSena[i] = rand() % 60 + 1;
			NumeroIgual = 0;

			for (int j = 0; j < i; ++j)
			{
				if (SorteioMegaSena[i] == SorteioMegaSena[j])
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
			if (SorteioMegaSena[j] > SorteioMegaSena[j + 1])
			{
				Auxiliar = SorteioMegaSena[j];
				SorteioMegaSena[j] = SorteioMegaSena[j+1];
				SorteioMegaSena[j + 1] = Auxiliar;
			}
		}
	}
}

//=============================================================================
void MegaSena::gerarRespostaMegaSena(void)
{
	int Acertos = 0;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (SorteioMegaSena[i] == ApostaMegaSena[j])
			{
				Acertos++;
			}
		}
	}
	
	setQuatidadeCertas(Acertos);
}

//=============================================================================
void MegaSena::getSorteioMegaSena(int OSorteio[6])
{
	for (int i = 0; i < 6; ++i)
	{
		OSorteio[i] = SorteioMegaSena[i];
	}
}

//=============================================================================
void MegaSena::setApostaMegaSena(int UmaAposta[6])
{
	for (int i = 0; i < 6; ++i)
	{
		ApostaMegaSena[i] = UmaAposta[i];
	}
}

/*
	int j = 0;
	int Numero = 0;
	int i = 0;

	while (i < 6)
	{
		Numero = rand() % 6 + 1;
		j = 0;
		while (j < 6 && SorteioMegaSena[j] != Numero)
		{
			j++;
		}

		if (j == 6)
		{
			SorteioMegaSena[i] = Numero;
			i++;
		}
	}
*/