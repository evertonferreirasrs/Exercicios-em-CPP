#include "GerenciadorDeArquivo.h"


GerenciadorDeArquivo::GerenciadorDeArquivo()
{
}


GerenciadorDeArquivo::~GerenciadorDeArquivo()
{
}

void GerenciadorDeArquivo::setLista(vector<Jogador> List){

	ListaInterna = List;

}

vector<Jogador> GerenciadorDeArquivo::getLista(void){

	return ListaInterna;
}

void GerenciadorDeArquivo::Gravar(void){

	vector<Jogador>::iterator It;
	int Index = 0;

	Out.open("Ranking.dat", ios::binary | ios::app | ios::in | ios::out);

	for (It = ListaInterna.begin(); It != ListaInterna.end(); It++){

		Jo.setNome(ListaInterna[Index].getNome());
		Jo.setPontuacao(ListaInterna[Index].getPontuacao());

		Out.write(reinterpret_cast<char*>(&Jo), sizeof(Jogador));

		Index++;
	}

	Out.close();

}

void GerenciadorDeArquivo::Ler(void){

	In.open("Ranking.dat", ios::binary | ios::beg| ios::out | ios::in);

		

	In.read(reinterpret_cast<char*>(&Jo), sizeof(Jogador));

	ListaInterna.push_back(Jo);

	In.read(reinterpret_cast<char*>(&Jo), sizeof(Jogador));
		
	if (!In){

		cerr << "error!!";

	}
	else{

		while (!In.eof()){

					

			ListaInterna.push_back(Jo);

			In.read(reinterpret_cast<char*>(&Jo), sizeof(Jogador));


		}


	}

	

	In.close();



}

void GerenciadorDeArquivo::Gravar(Jogador Jog){

	
	

	Out.open("Ranking.dat", ios::binary | ios::app | ios::in | ios::out);

				

		Out.write(reinterpret_cast<char*>(&Jog), sizeof(Jogador));

			

	Out.close();

}

void GerenciadorDeArquivo::limparBuffer(void){

	ListaInterna.erase(ListaInterna.begin(), ListaInterna.end());

}