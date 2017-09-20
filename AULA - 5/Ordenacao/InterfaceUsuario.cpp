#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	OpcaoUsuario = 0;
	for (int i = 0; i < 10; ++i)
	{
		NumerosLidos[i]   = 0;
		NumerosEmOrdem[i] = 0;
	}

	Palavra[0] = "primeiro";
	Palavra[1] = "segundo";
	Palavra[2] = "terceiro";
	Palavra[3] = "quarto";
	Palavra[4] = "quinto";
	Palavra[5] = "sexto";
	Palavra[6] = "setimo";
	Palavra[7] = "oitavo";
	Palavra[8] = "nono";
	Palavra[9] = "decimo";
}

InterfaceUsuario::~InterfaceUsuario()
{

}

int InterfaceUsuario::lerOpcao()
{
	do
	{
		system("cls");
		cout << "Escolha uma opcao:" << endl << endl;
		cout << "1. Ordem crescente" << endl;
		cout << "2. Ordem decrescente" << endl;
		cout << "3. Sair" << endl;
		cout << "Opcao escolhida: ";
		cin >> OpcaoUsuario;
		if (OpcaoUsuario < 1 || OpcaoUsuario > 3)
		{
			cout << endl << "Opcao invalida." << endl <<"Entre apenas com 1, 2 ou 3!" << endl;
			system("pause");
		}
	} while (OpcaoUsuario < 1 || OpcaoUsuario > 3);

	return OpcaoUsuario;
}

void InterfaceUsuario::lerNumeros(int OsNumerosLidos[10])
{
	system("cls");
	for (int i = 0; i < 10; ++i)
	{
		cout << "Entre com o " << Palavra[i] << " numero:";
		cin  >> OsNumerosLidos[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		NumerosLidos[i] = OsNumerosLidos[i];
	}

}

void InterfaceUsuario::apresentarResultado(int NumerosOrdenados[10])
{
	system("cls");
	for (int i = 0; i < 10; ++i)
	{
		NumerosEmOrdem[i] = NumerosOrdenados[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << Palavra[i] << ": " << endl;
		cout << NumerosEmOrdem[i] << endl;
	}
	system("pause");
	cout << endl;
}