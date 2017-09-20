#include "Ordenacao.h"

Ordenacao::Ordenacao()
{
	for (int i = 0; i < 10; ++i)
	{
		ValoresFinal[i] = 0;
	}
}

//------------------------------------------------------------------------------------
Ordenacao::~Ordenacao()
{

}

//------------------------------------------------------------------------------------
void Ordenacao::colocarEmOrdemCrescente(int NumerosLidos[])
{
	int aux;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{

			if (NumerosLidos[j]> NumerosLidos[j + 1])
			{
				aux = NumerosLidos[j + 1];
				NumerosLidos[j + 1] = NumerosLidos[j];
				NumerosLidos[j] = aux;

			}
		}
	}
	for (int cont = 0; cont < 10; cont++)
	{
		ValoresFinal[cont] = NumerosLidos[cont];
	}
}

//------------------------------------------------------------------------------------
void Ordenacao::colocarEmOrdemDecrescente(int NumerosLidos[])
{
	int aux;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9; j++)
		{

			if (NumerosLidos[j]< NumerosLidos[j + 1])
			{
				aux = NumerosLidos[j + 1];
				NumerosLidos[j + 1] = NumerosLidos[j];
				NumerosLidos[j] = aux;

			}
		}
	}
	for (int cont = 0; cont < 10; cont++)
	{
		ValoresFinal[cont] = NumerosLidos[cont];
	}

}
