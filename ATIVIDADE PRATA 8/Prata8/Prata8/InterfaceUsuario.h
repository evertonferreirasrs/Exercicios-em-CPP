#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//--------------------------------
#include <iostream>
using namespace std;
#include <string>
//--------------------------------
class InterfaceUsuario
{
private:
	int Opcao;
	string Palavra;
	string VetorPalavra[100];
public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int lerOpcao(void);
	void lerPalavras(void);
	void gerarResultado(void);
	void getVetorPalavra(string [100]);
	void setVetorPalavra(string[100]);
};
//----------------------------------
#endif