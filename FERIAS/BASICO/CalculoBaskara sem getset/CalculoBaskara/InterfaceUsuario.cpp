
#include "InterfaceUsuario.h"


InterfaceUsuario::InterfaceUsuario()
{
	for (int i = 0; i < 3; ++i)
	{
		VetorValores[i] = 0.0;
	}
	for (int i = 0; i < 2; ++i)
	{
		VetorResultado[i] = 0.0;
	}
}


InterfaceUsuario::~InterfaceUsuario()
{

}

void InterfaceUsuario::lerValores(double OVetorValores[3])
{
	for (int i = 0; i < 3; ++i)
	{
		cout << "Entre com o valor:";
		cin >> VetorValores[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		OVetorValores[i] = VetorValores[i];
	}
}

void InterfaceUsuario::mostrarResultado(double OVetorResultado[2])
{
	cout << "X1: " << OVetorResultado[0] << endl;
	cout << "X2: " << OVetorResultado[1] << endl;
	system("pause");
}
