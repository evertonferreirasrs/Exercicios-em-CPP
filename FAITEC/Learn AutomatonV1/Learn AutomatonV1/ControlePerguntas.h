#ifndef CPERGUNTAH
#define CPERGUNTAH
// ================================================================================================
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
// ================================================================================================
#include "Pergunta.h"
// ================================================================================================

class ControlePerguntas
{
public:
	ControlePerguntas();
	~ControlePerguntas();

	void sortearPerguntas(void);
	void verificarResposta(char[]);
	void getPergSorteada(int[]);
	int getAcertos(void);

private:

	Pergunta VetPerg[30];
	int Marcados[30]; 
	int Escolhidos[10]; 
	int NumeroSorteado;
	int Acertos;
	
};
// ================================================================================================
#endif