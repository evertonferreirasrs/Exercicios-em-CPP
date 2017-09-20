#include "InterfaceUsuario.h"


InterfaceUsuario::InterfaceUsuario()
{
	Opcao = 0;
	Acertos = 0;
	RegiaoSorteio = "";

	for (int i = 0; i < 6; ++i)
	{
		Jogo[i] = 0;
	}
	for (int i = 0; i < 15; ++i)
	{
		Jogo2[i] = 0;
	}
}
//-----------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}
//-----------------------------------
void InterfaceUsuario::setOpcao(int AOpcao)
{
	Opcao = AOpcao;
}
//-----------------------------------
int InterfaceUsuario::getOpcao(void)
{
	return Opcao;
}
//-----------------------------------
void InterfaceUsuario::setAcertos(int OsAcertos)
{
	Acertos = OsAcertos;
}
//-----------------------------------
void InterfaceUsuario::getJogo(int OJogo[6])
{
	for (int i = 0; i < 6; ++i)
	{
		OJogo[i] = Jogo[i];
	}
}
//-----------------------------------
void InterfaceUsuario::getJogo2(int OJogo[15])
{
	for (int i = 0; i < 15; ++i)
	{
		OJogo[i] = Jogo2[i];
	}
}
//-----------------------------------
void InterfaceUsuario::MostarMenu(void)
{
	system("cls");
	do
	{
		cout << " Loteria da CAIXA " << endl;
		cout << " Escolha a Opcao "  << endl;
		cout << " 1 - Mega-Sena "    << endl;
		cout << " 2 - Lotofacil "    << endl;
		cout << " 3 - Sair "         << endl;
		cout << " Entre com a Opcao: ";
		cin  >> Opcao;
	} while (Opcao < 1 || Opcao > 3);
	
}

void InterfaceUsuario::LerNumeroJogo(void)
{
	system("cls");
	for (int i = 0; i < 6; ++i)
	{
		cout << "Entre com o " << i + 1 << "o numero da aposta: ";
		cin  >> Jogo[i];
	}
}
//-----------------------------------
void InterfaceUsuario::LerNumeroJogo2(void)
{
	system("cls");
	for (int i = 0; i < 15; ++i)
	{
		cout << "Entre com o " << i + 1 << "o numero da aposta: ";
		cin >> Jogo2[i];
	}
}
//-----------------------------------
void InterfaceUsuario::gerarResultado(void)
{
	cout << "Voce acertou : " << Acertos << " numeros" << endl;

	system("pause");
}

//-------------------------------------------------

void InterfaceUsuario::mostrarRegiao(void)
{
		cout << "Regiao onde foi realizado o sorteio: " << RegiaoSorteio << endl;
}

//-------------------------------------------------
void InterfaceUsuario::mostrarData(void)
{
	cout << "Data do sorteio: " << DataSorteio << endl << endl;
}
//------------------------------------------------
void InterfaceUsuario::setRegiaoSorteio(string UmaRegiaoSorteada)
{
	RegiaoSorteio = UmaRegiaoSorteada;
}
//------------------------------------------------
void InterfaceUsuario::setDataSorteio(string UmaDataSorteada)
{
	DataSorteio = UmaDataSorteada;
}