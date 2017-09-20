#include "InterfaceUsuario.h"


InterfaceUsuario::InterfaceUsuario()
{
}


InterfaceUsuario::~InterfaceUsuario()
{
}

int InterfaceUsuario::lerCilindro(int UmCilindro)
{

	cout << "Entre com Cilindro: ";
	cin  >> UmCilindro;

	return UmCilindro;

}

int InterfaceUsuario::lerPotencia(int UmPotencia)
{
	//int Potencia;

	cout << "Entre com Potencia: ";
	cin >> UmPotencia;

	return UmPotencia;

}

void InterfaceUsuario::mostrarResultado(int Potencia, int Cilindro)
{
	cout << "\nPotencia !" << Potencia;
	cout << "\nCilindro !" << Cilindro;
	cout << "\nFoi armazenado com sucesso !\n";

	
}
