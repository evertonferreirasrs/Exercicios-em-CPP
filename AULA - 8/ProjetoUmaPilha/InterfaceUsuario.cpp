#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	CaracteresLidos = "";
}

InterfaceUsuario::~InterfaceUsuario()
{

}

void InterfaceUsuario::entrarCaracteres(void)
{
	cout << "Entre com uma cadeia de no maximo 10 caracteres:" << endl;
	getline(cin, CaracteresLidos);
}

void InterfaceUsuario::getCaracteres(string &AlgunsCaracteres)
{
	AlgunsCaracteres = CaracteresLidos;
}

void InterfaceUsuario::mostrarTopo(char OTopo)
{
	cout << "Topo = " << OTopo << endl;
	system("pause");
}

void InterfaceUsuario::mostrarPilha(string &APilha)
{
	for (int i = 0; i < 10; ++i)
		cout << "Pilha[" << i << "] = " << APilha[i] << endl;
	system("pause");
}