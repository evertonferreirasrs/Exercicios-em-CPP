#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	OValorRealLido   = 0.0;
	OValorDaTaxaLido = 0.0;
	OValorDaTaxaLido = 0.0;
}

InterfaceUsuario::~InterfaceUsuario()
{

}

void InterfaceUsuario::lerRealDolar(double VetorLido[2])
{
	cout << "Entre com o Valor em Real[i]: ";
	cin >> VetorLido[0];
	cout << "Entre com a taxa: ";
	cin >> VetorLido[1];
	OValorRealLido = VetorLido[0];
	OValorDaTaxaLido = VetorLido[1];
}

void InterfaceUsuario::mostrarResultado(double OResultado)
{
	cout << "Valor em dolar = " << OResultado << endl;
	OValorEmDolar = OResultado;
}