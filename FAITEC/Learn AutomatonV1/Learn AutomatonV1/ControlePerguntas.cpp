#include "ControlePerguntas.h"
#define MAX 5

// ================================================================================================
ControlePerguntas::ControlePerguntas()
{
	srand(time(NULL));

	VetPerg[0].setNumeroDaPergunta(0);
	VetPerg[0].setRespostaCorreta('s');

	VetPerg[1].setNumeroDaPergunta(1);
	VetPerg[1].setRespostaCorreta('n');

	VetPerg[2].setNumeroDaPergunta(2);
	VetPerg[2].setRespostaCorreta('s');

	VetPerg[3].setNumeroDaPergunta(3);
	VetPerg[3].setRespostaCorreta('b');

	VetPerg[4].setNumeroDaPergunta(4);
	VetPerg[4].setRespostaCorreta('c');

	VetPerg[5].setNumeroDaPergunta(5);
	VetPerg[5].setRespostaCorreta('s');

	VetPerg[6].setNumeroDaPergunta(6);
	VetPerg[6].setRespostaCorreta('a');

	VetPerg[7].setNumeroDaPergunta(7);
	VetPerg[7].setRespostaCorreta('a');

	VetPerg[8].setNumeroDaPergunta(8);
	VetPerg[8].setRespostaCorreta('s');

	VetPerg[9].setNumeroDaPergunta(9);
	VetPerg[9].setRespostaCorreta('c');

	VetPerg[10].setNumeroDaPergunta(10);
	VetPerg[10].setRespostaCorreta('a');

	VetPerg[11].setNumeroDaPergunta(11);
	VetPerg[11].setRespostaCorreta('b');

	VetPerg[12].setNumeroDaPergunta(12);
	VetPerg[12].setRespostaCorreta('b');


	VetPerg[13].setNumeroDaPergunta(13);
	VetPerg[13].setRespostaCorreta('b');

	VetPerg[14].setNumeroDaPergunta(14);
	VetPerg[14].setRespostaCorreta('a');

	VetPerg[15].setNumeroDaPergunta(15);
	VetPerg[15].setRespostaCorreta('c');

	VetPerg[16].setNumeroDaPergunta(16);
	VetPerg[16].setRespostaCorreta('b');

	VetPerg[17].setNumeroDaPergunta(17);
	VetPerg[17].setRespostaCorreta('c');

	VetPerg[18].setNumeroDaPergunta(18);
	VetPerg[18].setRespostaCorreta('a');

	VetPerg[19].setNumeroDaPergunta(19);
	VetPerg[19].setRespostaCorreta('b');

	VetPerg[20].setNumeroDaPergunta(20);
	VetPerg[20].setRespostaCorreta('s');

	VetPerg[21].setNumeroDaPergunta(21);
	VetPerg[21].setRespostaCorreta('n');

	VetPerg[22].setNumeroDaPergunta(22);
	VetPerg[22].setRespostaCorreta('s');

	VetPerg[23].setNumeroDaPergunta(23);
	VetPerg[23].setRespostaCorreta('n');

	VetPerg[24].setNumeroDaPergunta(24);
	VetPerg[24].setRespostaCorreta('s');

	VetPerg[25].setNumeroDaPergunta(25);
	VetPerg[25].setRespostaCorreta('c');

	VetPerg[26].setNumeroDaPergunta(26);
	VetPerg[26].setRespostaCorreta('c');

	VetPerg[27].setNumeroDaPergunta(27);
	VetPerg[27].setRespostaCorreta('a');

	VetPerg[28].setNumeroDaPergunta(28);
	VetPerg[28].setRespostaCorreta('b');

	VetPerg[29].setNumeroDaPergunta(29);
	VetPerg[29].setRespostaCorreta('s');

	for (int ind = 0; ind < 30; ++ind){

		Marcados[ind] = 0;

	}

	for (int ind = 0; ind < 10; ++ind){

		Escolhidos[ind] = 0;

	}

	Acertos = 0;
}

// ================================================================================================
ControlePerguntas::~ControlePerguntas()
{

}

// ================================================================================================
void ControlePerguntas::verificarResposta(char RespUser[]){
	
	Acertos = 0;

	for (int index1 = 0; index1 < 30; ++index1){

		for (int index2 = 0; index2 < 10; ++index2){

			if (Escolhidos[index2] == VetPerg[index1].getNumeroDaPergunta()){

				if (RespUser[index2] == VetPerg[index1].getRespostaCorreta()){

					Acertos++;
								
						break;													
				}
			}
		}
	}
}

// ================================================================================================
void ControlePerguntas::sortearPerguntas(void){

	for (int ind = 0; ind < 30; ++ind){

		Marcados[ind] = 0;
	}

	for (int ind = 0; ind < 10; ++ind){

		Escolhidos[ind] = 0;
	}

	int j = 0;

	for (int n = 0; n < 30; ++n){

		NumeroSorteado = rand() % 30; 

		Marcados[NumeroSorteado] = 1;

		Sleep(1);
	}

	for (int n = 0; n < 30; ++n){

		if (Marcados[n] == 1){

			if (j < 10){
			
				Escolhidos[j] = n; 
				j++;
			}
			else{

				break;
			}
		}
	}
}

// ================================================================================================
void ControlePerguntas::getPergSorteada(int Retorno[]){ 
	
	for (int i = 0; i < 10; ++i){

		Retorno[i] = Escolhidos[i];
	}
}

// ================================================================================================
int ControlePerguntas::getAcertos(void){

	return Acertos;
}