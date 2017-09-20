#include "OrdenadorDeNumeros.h"

OrdenadorDeNumeros::OrdenadorDeNumeros()
{
	Opcao = 0;
	for (int i = 0; i < 10; ++i)
	{
		Numeros[i] = 0;
		NumerosOrdenados[i] = 0;
	}
}

OrdenadorDeNumeros::~OrdenadorDeNumeros()
{

}

void OrdenadorDeNumeros::ordenarNumeros(int AOpcao,int VetorNumeros[10],int OsNumerosOrdenados[10])
{
	string Ordenado = "sim";
	int Auxiliar = 0;

	Opcao = AOpcao;

	for (int i = 0; i < 10; ++i)
	{
		Numeros[i] = VetorNumeros[i];
		OsNumerosOrdenados[i] = VetorNumeros[i];
	}
	
	if (Opcao == 1)
	{
		do
		{
			Ordenado = "sim";
			for (int i = 0; i < 9; ++i)
			{
				if (OsNumerosOrdenados[i + 1] < OsNumerosOrdenados[i])
				{
					Auxiliar            = OsNumerosOrdenados[i];
					OsNumerosOrdenados[i]     = OsNumerosOrdenados[i + 1];
					OsNumerosOrdenados[i + 1] = Auxiliar;
					Ordenado = "nao";
				}
			}
		} while (Ordenado == "nao");
	}
	else if (Opcao == 2)
	{
		do
		{
			Ordenado = "sim";
			for (int i = 0; i < 9; ++i)
			{
				if (OsNumerosOrdenados[i + 1] > OsNumerosOrdenados[i])
				{
					Auxiliar = OsNumerosOrdenados[i];
					OsNumerosOrdenados[i] = OsNumerosOrdenados[i + 1];
					OsNumerosOrdenados[i + 1] = Auxiliar;
					Ordenado = "nao";
				}
			}
		} while (Ordenado == "nao");
	}
	
	for (int j = 0; j < 10; ++j)
	{
		NumerosOrdenados[j] = OsNumerosOrdenados[j];
	}
}