
#ifndef JOGADORH
#define JOGADORH
// ================================================================================================
#include <iostream>
#include <string>
using namespace std;
// ================================================================================================

class Jogador
{
public:
	Jogador();
	~Jogador();

	void setNome(string);
	void setPontuacao(int);
	
	string getNome(void){

		return Nome;
	}

	int getPontuacao(void){

		return Pontuacao;

	}

private:

	int  Pontuacao;
	char Nome[30];

};
// ================================================================================================
#endif