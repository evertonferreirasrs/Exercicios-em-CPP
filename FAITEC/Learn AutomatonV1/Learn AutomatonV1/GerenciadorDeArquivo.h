#ifndef GEH
#define GEH

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Jogador.h"

using namespace std;

class GerenciadorDeArquivo
{
public:
	GerenciadorDeArquivo();
	~GerenciadorDeArquivo();

	
	void Gravar(void);

	void Ler(void);

	vector<Jogador> getLista(void);

	void setLista(vector<Jogador>);

	void Gravar(Jogador );

	void limparBuffer(void);

private:

	ofstream Out;

	ifstream In;

	Jogador Jo;

	vector<Jogador> ListaInterna;

};

#endif