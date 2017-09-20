#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	Palavras[0] = "primeiro";
	Palavras[1] = "segundo";
	Palavras[2] = "terceiro";
	Palavras[3] = "quarto";
	Palavras[4] = "quinto";
	Palavras[5] = "sexto";
	Palavras[6] = "setimo";
	Palavras[7] = "oitavo";
	Palavras[8] = "nono";
	Palavras[9] = "decimo";

	Opcao = 0;
}

//------------------------------------------------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}

//------------------------------------------------------------------------------------
int InterfaceUsuario::mostrarMenu()
{
	int AOpcao;
	do{
		system("cls");
		cout << " \tEscolha uma opcao: " << endl << endl;
		cout << " \t1. Ordem Crescente" << endl;
		cout << " \t2. Ordemdecrescente" << endl;
		cout << " \t3. Sair" << endl << endl;

		cout << "Opcao Escolhida: ";
		cin >> AOpcao;

		if (AOpcao <1 || AOpcao >3)
		{
			cout << " \tOpcao Invalida!!";
		}
	} while (AOpcao <1 || AOpcao >3);
	
	Opcao = AOpcao;

	return Opcao;
}

//------------------------------------------------------------------------------------
void InterfaceUsuario::lerValores(int Valores[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Insira o " << Palavras[i] << " valor : ";
		cin >> Valores[i];
	}
	for (int i = 0; i < 10; i++)
	{
		NumerosLidos[i] = Valores[i];
	}
	
	system("cls");

}

//------------------------------------------------------------------------------------
void InterfaceUsuario::mostrarResultado(int Valores[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << " Em ordem : " << Valores[i] << endl;
	}

	system("pause");

}