#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	OpcaoMenu1 = -1;
	OpcaoMenu2 = -1;


	for (int i = 0; i < 5; ++i)
	{
		CjA1[i] = i;
		CjA2[i] = i + 2;
		CjB1[i] = "cachorro" + 1;
		CjB2[i] = "cachorro" + (i + 1);
	}

}

//---------------------------------------------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}

//---------------------------------------------------------------------------------
int InterfaceUsuario::getOpcao1(void)
{
	return OpcaoMenu1;
}

//---------------------------------------------------------------------------------
int InterfaceUsuario::getOpcao2(void)
{
	return OpcaoMenu2;
}

//---------------------------------------------------------------------------------
void InterfaceUsuario::getCjsInt(int OutroVetor[5], int OutroVetor2[5])
{
	for (int i = 0; i < 5; i++)
	{
		OutroVetor[i] = CjA1[i];
		OutroVetor2[i] = CjA2[i];
	}
}

//---------------------------------------------------------------------------------
void InterfaceUsuario::getCjsString(string OutroVetor[5], string OutroVetor2[5])
{
	for (int i = 0; i < 5; i++)
	{
		OutroVetor[i] = CjB1[i];
		OutroVetor2[i] = CjB2[i];
	}
}

//---------------------------------------------------------------------------------
void InterfaceUsuario::mostrarMenu1(void)
{
	do{
		system("cls");
		cout << "1 - Conjunto de numero inteiros positivos." << endl;
		cout << "2 - Conjunto de palavras." << endl;
		cout << "0 - Sair." << endl <<endl;
		cout << "Opcao: ";
		cin >> OpcaoMenu1;
		if (OpcaoMenu1 < 0 || OpcaoMenu1 > 2)
		{
			system("cls");
			cout << "Opcao Invalida!!";
		}
	} while (OpcaoMenu1 < 0 || OpcaoMenu1 > 2);
}

//---------------------------------------------------------------------------------
void InterfaceUsuario::mostrarMenu2(void)
{
	do{
		system("cls");
		cout << "1 - Cj1 (Esta contido) Cj2" << endl;
		cout << "2 - Cj1 (Uniao) Cj2" << endl;
		cout << "3 - Cj1 (Intercesao) Cj2" << endl;
		cout << "4 - Cj1 (Pertence) Cj2" << endl;
		cout << "5 - Cj2 - Cj1" << endl;
		cout << "0 - Sair" << endl;
		cout << "Opcao: ";
		cin >> OpcaoMenu2;
		if (OpcaoMenu2 < 0 || OpcaoMenu2 > 5)
		{
			system("cls");
			cout << "Opcao Invalida!!";
		}
	} while (OpcaoMenu2 < 0 || OpcaoMenu2 > 5);

}

void InterfaceUsuario::mostrarCjSolucao(int CjSolucao[10])
{
	for (int i = 0; i < 10; ++i)
	{
		if (CjSolucao[i] != -1)
		{
			cout << CjSolucao[i];
		}
	}
	system("pause");
}