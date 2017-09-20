
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

void InterfaceUsuario::getVetorValores(double OVetorValores[3])
{
	for (int i = 0; i < 3; ++i)
	{
		OVetorValores[i] = VetorValores[i];
	}

}

void InterfaceUsuario::setVetorResultado(double OVetorResultado[2])
{
	for (int i = 0; i < 2; ++i)
	{
		VetorResultado[i] = OVetorResultado[i];
	}
}

void InterfaceUsuario::lerValores(void)
{
	for (int i = 0; i < 3; ++i)
	{
		cout << "Entre com o valor:";
		cin >> VetorValores[i];
	}
}

void InterfaceUsuario::mostrarResultado(void)
{
	cout << "X1: " << VetorResultado[0] << endl;
	cout << "X2: " << VetorResultado[1] << endl;
	system("pause");
}
