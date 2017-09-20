#include "InterfaceUsuario.h"

//--------------------------------------------
InterfaceUsuario::InterfaceUsuario()
{
	Opcao = 0;
	Palavra = "";
	for (int i = 0; i < 100; i++)
	{
		VetorPalavra[i] = "";
	}
}
//--------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{
}
//--------------------------------------------
int InterfaceUsuario::lerOpcao(void)
{
	system("cls");
	cout << "\t|---------------------------------------|" << endl;
	cout << "\t|  Escolha a opcao:                     |" << endl;
	cout << "\t|  1. Ordenar na ordem de a -> z        |" << endl;
	cout << "\t|  2. Ordenar na ordem de z -> a        |" << endl;
	cout << "\t|  3. Encerrar a execucao do programa   |" << endl ;
	cout << "\t|---------------------------------------|" << endl << endl;
	cout << "Opcao: ";
	cin >> Opcao;

	return Opcao;
}
void InterfaceUsuario::lerPalavras(void)
{
	int i = 0;
	cout << "Digite fim para sair" << endl << endl;
	cout << "Entre com a palavra: ";
	cin >> Palavra;

	while (Palavra != "fim")
	{
		VetorPalavra[i] = Palavra;
		cout << "Entre com a palavra: ";
		cin >> Palavra;
		i++;
	}
	system("cls");
}
void InterfaceUsuario::getVetorPalavra(string UmVetorPalavra[100])
{
	int i = 0;
	while (i < 100 && VetorPalavra[i] != "")
	{
		UmVetorPalavra[i] = VetorPalavra[i];
		i++;
	}
	
}
void InterfaceUsuario::setVetorPalavra(string UmVetorPalavra[100])
{
	int i = 0;
	while (i < 100 && VetorPalavra[i] != "")
	{
		VetorPalavra[i] = UmVetorPalavra[i];
		i++;
	}
}
void InterfaceUsuario::gerarResultado()
{
	int i = 0;

	while (i < 100 && VetorPalavra[i] != "")
	{
		cout << "Palavra: " << VetorPalavra[i] << endl;
		i++;
	}
	system("pause");
}