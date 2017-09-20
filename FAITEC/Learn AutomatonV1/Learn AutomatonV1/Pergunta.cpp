#include "Pergunta.h"

// ================================================================================================
Pergunta::Pergunta()
{
	NumeroDaPergunta = 0;
	RespostaCorreta  = 'x';
}

// ================================================================================================
Pergunta::~Pergunta()
{

}

// ================================================================================================
void Pergunta::setNumeroDaPergunta(int Val){

	NumeroDaPergunta = Val;
}

// ================================================================================================
void Pergunta::setRespostaCorreta(char Val){

	RespostaCorreta = Val;
}

// ================================================================================================
int Pergunta::getNumeroDaPergunta(void){

	return NumeroDaPergunta;
}

// ================================================================================================
char Pergunta::getRespostaCorreta(void){

	return RespostaCorreta;
}

// ================================================================================================
void Pergunta::setTipoPergunta(int T){

	TipoPergunta = T;

	if (TipoPergunta == 1){

		NumeroDeAlternativas = 2;
	}
	else{

		NumeroDeAlternativas = 3;
	}
}

// ================================================================================================
int Pergunta::getTipoPergunta(void){

	return TipoPergunta;
}

// ================================================================================================
int Pergunta::getNumeroDeAlternativas(void){

	return NumeroDeAlternativas;
}