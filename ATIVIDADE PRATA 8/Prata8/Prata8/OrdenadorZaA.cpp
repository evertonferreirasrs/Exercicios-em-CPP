#include "OrdenadorZaA.h"


OrdenadorZaA::OrdenadorZaA()
{
	for (int i = 0; i < 100; ++i)
	{
		Vetor[i] = "";
	}
}


OrdenadorZaA::~OrdenadorZaA()
{
}

void OrdenadorZaA::gerarOrdenacaoZA()
{
	int Menor = 0;
	int Tamanho = 0;
	string Aux = "";

	int z = 0;

	while (z < 100 && Vetor[z] != "")
	{
		z++;
	}

	Tamanho = z;

	for (int i = 0; i < Tamanho - 1; ++i)
	{
		Menor = i;
		for (int j = i + 1; j < Tamanho; ++j)
		{
			if (Vetor[j] > Vetor[Menor])
			{
				Menor = j;
			}
		}
		Aux = Vetor[i];
		Vetor[i] = Vetor[Menor];
		Vetor[Menor] = Aux;
	}
}

void OrdenadorZaA::setVetor(string UmVetor[100])
{
	int i = 0;
	while (i < 100 && UmVetor[i] != "")
	{
		Vetor[i] = UmVetor[i];
		i++;
	}
}

void OrdenadorZaA::getVetor(string UmVetor[100])
{
	int i = 0;
	while (i < 100 && Vetor[i] != "")
	{
		UmVetor[i] = Vetor[i];
		i++;
	}
}