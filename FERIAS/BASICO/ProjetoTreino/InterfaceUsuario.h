#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int lerCilindro(int);
	int lerPotencia(int);
	void mostrarResultado(int, int);
	
};
//------------------------------------
#endif