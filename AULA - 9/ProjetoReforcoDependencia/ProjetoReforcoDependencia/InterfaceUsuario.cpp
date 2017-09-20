#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	
}
//------------------------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}
//------------------------------------------------------------
void InterfaceUsuario::lerProduto(float Produtos[3])
{
	string prompts[3] = { "Kilos de carne = ",
						  "Caixas de leite UHT = ",
						  "Kilos de maca = " };
	for (int i = 0; i < 3; ++i)
	{
		cout << prompts[i];
		cin >> Produtos[i];
	}
}
//------------------------------------------------------------
void InterfaceUsuario::mostrarTotalVendido(float OTotal)
{
	cout << "----------------------------------" << endl;
	cout << "Total da Venda = " << OTotal << endl;;
	cout << "----------------------------------" << endl;
}