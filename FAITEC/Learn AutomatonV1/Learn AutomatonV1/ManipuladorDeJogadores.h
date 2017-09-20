#ifndef MANIPULADORH
#define MANIPULADORH
// ================================================================================================
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Jogador.h"
using namespace std;
// ================================================================================================

struct sortear{

	bool operator()(Jogador Jo1, Jogador Jo2){

		return Jo1.getPontuacao() > Jo2.getPontuacao();
	}


};

class ManipuladorDeJogadores
{
public:
	ManipuladorDeJogadores();
	~ManipuladorDeJogadores();

	void adicionarJogador(int,string);
	void organizar(void);
	vector<Jogador> getList(void);
	void setLista(vector<Jogador>);
	Jogador getJogador(void);
	
	
private:
		
	vector<Jogador> Lista;
	string Nome;
	int    Pontuacao;
	vector<Jogador>::iterator Iterador;
	Jogador Tmp;
};
// ================================================================================================
#endif