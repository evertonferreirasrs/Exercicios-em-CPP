#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	int    OpcaoUsuario,
		   NumerosLidos[10],
		   NumerosEmOrdem[10];
	string Palavra[10];

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int lerOpcao(void);
	void lerNumeros(int[10]);
	void apresentarResultado(int[10]);
};