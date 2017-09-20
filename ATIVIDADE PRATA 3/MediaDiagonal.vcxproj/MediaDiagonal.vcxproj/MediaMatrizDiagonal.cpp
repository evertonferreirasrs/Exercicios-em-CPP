#include "MediaDiagonalMatriz.h"

//---------------------------------------------------------------------------------
MediaMatrizDiagonal::MediaMatrizDiagonal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Matriz[i][j] = 0.0;
		}
	}
	Media = 0.0;
}

//---------------------------------------------------------------------------------
MediaMatrizDiagonal::~MediaMatrizDiagonal()
{

}

//---------------------------------------------------------------------------------
void MediaMatrizDiagonal::criarMatriz(float AMatriz[10][10])
{
	float Numero;
	int Maior = 1025;
	int Menor = -1065;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Numero = float(rand() % (Maior - Menor + 1) + Menor);
			AMatriz[i][j] = Numero / 100;

			Matriz[i][j] = AMatriz[i][j];
		}
	}

}

//---------------------------------------------------------------------------------
float MediaMatrizDiagonal::calcularMedia(float AMedia[10][10])
{
	float Resultado = 0.0;

	for (int i = 0; i < 10; i++)
	{
		Resultado = Resultado + Matriz[i][i];
	}

	Resultado = Resultado / 10;

	Media = Resultado;

	return Media;
}