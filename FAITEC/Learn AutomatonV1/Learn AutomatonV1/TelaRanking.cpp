#include "TelaRanking.h"

// ================================================================================================
void LearnAutomatonV1::TelaRanking::setList(vector<Jogador> List){

	String^ Str = "                         ";

	String^ Str2 = "                        ";

	string Tmp = "                          ";

	string Tmp2 = "                         ";

	char Tmp3[30];

	array<String^>^ Palavra;

	vector<Jogador>::reverse_iterator Rit;
	
	int Index = 0;
	
	for (Rit = List.rbegin(); Rit != List.rend(); ++Rit){

		Tmp = List[Index].getNome();

		for (int Jotex = 0; Jotex < Tmp.length(); ++Jotex){

			Tmp3[Jotex] = Tmp.at(Jotex);

		}

		Str = marshal_as<String^>(Tmp3);
		
		Palavra = Str->Split('#');


		TabelaRanking->Rows->Add();
		TabelaRanking->Rows[Index]->Cells[1]->Value = Convert::ToString(List[Index].getPontuacao());
		TabelaRanking->Rows[Index]->Cells[0]->Value = Convert::ToString(Palavra[0]);
		
		
		Index++;

		Str = "                           ";
		Tmp2 = "                          ";

	}

	

	
}

