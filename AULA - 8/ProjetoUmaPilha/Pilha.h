#ifndef PilhaH
#define PilhaH
//-----------------------
#include <iostream>
using namespace std;
#include <string>

#define MAX_PILHA 10

class Pilha
{
private:
	char VetorPilha[MAX_PILHA];
	int Topo;
public:
	Pilha();
	~Pilha();
	bool empilhar(char );
	char desempilhar(void);
	void esvaziarPilha(void);
	void mostrarPilha(string &);
	bool estarVazia(void);
	char mostrarTopo(void);
};
//-----------------------
#endif