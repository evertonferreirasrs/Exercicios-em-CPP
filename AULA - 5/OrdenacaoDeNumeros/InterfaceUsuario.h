#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>

class InterfaceUsuario
{
private:
	string Palavras[10];
	int Opcao;
	int NumerosLidos[10];

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int mostrarMenu(void);
	void lerValores(int[10]);
	void mostrarResultado(int[10]);

};