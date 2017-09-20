#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//-------------------------------------
#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	string CaracteresLidos;
	
	public:
	InterfaceUsuario();
	~InterfaceUsuario();
	void entrarCaracteres(void);
	void getCaracteres(string &);
	void mostrarTopo(char);
	void mostrarPilha(string &);
};

//-------------------------------------
#endif