#include "Jogador.h"

// ================================================================================================
Jogador::Jogador()
{

}

// ================================================================================================
Jogador::~Jogador()
{

}

// ================================================================================================
void Jogador::setNome(string N){

	int Tam = N.length();
	int Ind;

	for (Ind = 0; Ind < Tam; ++Ind){

		Nome[Ind] = N[Ind];

	}

	Nome[Ind] = '\0';
}

// ================================================================================================
void Jogador::setPontuacao(int P){

	Pontuacao = P;
}