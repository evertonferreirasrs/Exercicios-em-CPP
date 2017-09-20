#include "TelaAFD.h"

// ================================================================================================
void LearnAutomatonV1::TelaAFD::computar(int TabelaTransicao[MAX][MAX], int EstadosFinais[MAX]){

	int  EstadoOndeParou = 0;
	int  Tam_Palavra = -1;
	bool AceitaAlfabeto = true;
	bool AceitaPalavra = false;

	String ^ Palavra;
	String ^ Alfabeto;

	Palavra = "";
	Alfabeto = "";

	Palavra  = Convert::ToString(TxB_PalavraDigitada->Text);
	Alfabeto = Convert::ToString(TxB_Alfabeto->Text);
	Tam_Palavra = Palavra->Length;

	for (int x = 0; x < Tam_Palavra; ++x){

		if (AceitaAlfabeto == false){

			break;

		}

		for (int y = 0; y < QtdDeSimbolos; ++y){

			if (ListaDeSimbolos[y] == Palavra[x]){

				EstadoOndeParou = TabelaTransicao[EstadoOndeParou][y];
				AceitaAlfabeto = true;
				break;
			} 
			else{

				AceitaAlfabeto = false;
				
			} 
		} 
	} 

	if (AceitaAlfabeto == false){

		TxB_Status->Text = "Simbolo Indefinido !";
	}
	else{

		for (int z = 0; z < NumEstadosFinais; ++z){

			if (EstadoOndeParou == EstFinais[z]) {

				AceitaPalavra = true;
				break;
			} 
			else{

				AceitaPalavra = false;
			} 
		}

		if ((AceitaPalavra) && (AceitaAlfabeto)){

			TxB_Status->Text = "Aceitou !";
		} 
		else{

			TxB_Status->Text = "Rejeitou !";
		} 

		AceitaAlfabeto = 1;
	}
}
