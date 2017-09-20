#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
// ================================================
#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	int Opcao;

	double Raio;

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int mostrarMenu(void);
	double MostrarRaio(void);
};
// ================================================
#endif