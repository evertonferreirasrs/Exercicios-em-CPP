#include "ManipuladorDeJogadores.h"

// ================================================================================================
ManipuladorDeJogadores::ManipuladorDeJogadores()
{

}

// ================================================================================================
ManipuladorDeJogadores::~ManipuladorDeJogadores()
{

}

// ================================================================================================
void ManipuladorDeJogadores::adicionarJogador(int Pontos,string Nome){

			

	Tmp.setNome(Nome);
	Tmp.setPontuacao(Pontos);
	
	Lista.push_back(Tmp);

}

// ================================================================================================
void ManipuladorDeJogadores::organizar(void){

	vector<Jogador>::iterator It;

	It = Lista.begin();

	sort(Lista.begin(), Lista.end(),sortear());

	
}

// ================================================================================================
vector<Jogador> ManipuladorDeJogadores::getList(void){

	return Lista;
}

void  ManipuladorDeJogadores::setLista(vector<Jogador> List){


	Lista = List;

}

Jogador ManipuladorDeJogadores::getJogador(void){

	return Tmp;
}