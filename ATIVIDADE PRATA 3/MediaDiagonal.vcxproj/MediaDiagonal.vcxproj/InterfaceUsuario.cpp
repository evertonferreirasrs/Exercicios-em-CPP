#include "InterfaceUsuario.h"

//---------------------------------------------------------------------------------
InterfaceUsuario::InterfaceUsuario()
{

}

//---------------------------------------------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}

//---------------------------------------------------------------------------------
void InterfaceUsuario::exibirMatriz(float Matriz[10][10])
{
	cout << "Matriz 10x10:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout <<  endl;
		for (int j = 0; j < 10; j++)
		{
			cout << Matriz[i][j] <<" | ";
		}
	}
}

//---------------------------------------------------------------------------------
void InterfaceUsuario::exibirResultado(float Resultado)
{
	cout << endl << endl << "A media da diagonal pricipal eh: " << Resultado << endl;
}