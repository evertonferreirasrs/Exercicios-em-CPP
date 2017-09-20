#ifndef ARQH
#define ARQH
// ================================================================================================
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// ================================================================================================

class ManipuladorDeArquivo
{
public:
	ManipuladorDeArquivo();

	void gravar(void);
	void Ler(char[25], int);
	void setNome(char[]);
	void setPontos(int);
	int  getPOntos(void);
	void getNome(string);

private:

	string Nome;
	int    Pontos;
};
// ================================================================================================
#endif