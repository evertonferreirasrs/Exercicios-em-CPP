#include "TelaPontuacao.h"

// ================================================================================================
void LearnAutomatonV1::TelaPontuacao::getNome(char Nome[]){

	int index;

	for (index = 0; index < str->Length; ++index){

		Nome[index] = (char)str[index];

	}

	Nome[index] = '#';
}