#include"ManipulacaoDeConjuntos.h"

ManipulacaoDeConjuntos::ManipulacaoDeConjuntos()
{
	for (int i = 0; i < 5; i++)
	{
		CjA1[i] = 0;
		CjA1[i] = 0;
		CjB1[i] = "";
		CjB2[i] = "";
	}

	for (int i = 0; i < 10; i++)
	{
		CjSolucaoA[i] = -1;
		CjSolucaoB[i] = "";
	}
}

ManipulacaoDeConjuntos::~ManipulacaoDeConjuntos()
{

}

void ManipulacaoDeConjuntos::setCjA(int Vetor1[5], int Vetor2[5])
{
	for (int i = 0; i < 5; i++)
	{
		CjA1[i] = Vetor1[i];
		CjA2[i] = Vetor2[i];
	}
}

void ManipulacaoDeConjuntos::setCjB(string Vetor1[5], string Vetor2[5])
{
	for (int i = 0; i < 5; i++)
	{
		CjB1[i] = Vetor1[i];
		CjB2[i] = Vetor2[i];
	}
}

void ManipulacaoDeConjuntos::getSolucaoB(string Solucao[10])
{
	for (int i = 0; i < 10; i++)
	{
		Solucao[i] = CjSolucaoB[i];
	}
}

void ManipulacaoDeConjuntos::getSolucaoA(int Solucao[10])
{
	for (int i = 0; i < 10; i++)
	{
		Solucao[i] = CjSolucaoA[i];
		CjSolucaoA[i] = -1;
	}
}

void ManipulacaoDeConjuntos::calcularIntersecaoA(void)
{
	int Index = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (CjA1[i] == CjA2[j])
			{
				CjSolucaoA[Index] = CjA1[i];
				++Index;
			}
		}
	}
}

void ManipulacaoDeConjuntos::calcularUniaoA(void)
{
	int Index = 0;

	for (int i = 0; i < 5; ++i)
	{
		CjSolucaoA[Index] = CjA1[i];
		++Index;
	}

	for (int i = 0; i < 5; ++i)
	{
		int j = 0;
		while (CjSolucaoA[j] != CjA2[i] && j < 10)
		{
			++j;
		}
		if (j == 10)
		{
			CjSolucaoA[Index] = CjA2[i];
		}
	}
}

void ManipulacaoDeConjuntos::calcularSubtracaoA(void)
{
	int Index = 0;

	for (int i = 0; i < 5; ++i)
	{
		CjSolucaoA[Index] = CjA2[i];
		++Index;
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (CjSolucaoA[j] == CjA1[i])
			{
				CjSolucaoA[j] = -1;
			}
		}
	}
}