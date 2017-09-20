#include "InterfaceUsuario.h"

//-----------------------------------------------------------------------
InterfaceUsuario::InterfaceUsuario()
{
	Opcao = 0;
	Acertos = 0;
	RegiaoSorteio = "";
	
	for (int i = 0; i < 6; ++i)
	{
		MegaSena[i] = 0;
	}
	
	for (int i = 0; i < 15; ++i)
	{
		LotoFacil[i] = 0;
	}
}
//-----------------------------------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}
//-----------------------------------------------------------------------
int InterfaceUsuario::mostrarMenu(void)
{
	system("cls");
	do
	{
		cout << " Loteria da CAIXA "	<< endl;
		cout << " Escolha a Opcao "		<< endl;
		cout << " 1 - Mega-Sena "		<< endl;
		cout << " 2 - Lotofacil "		<< endl;
		cout << " 3 - Sair "			<< endl;
		cout << " Entre com a Opcao: ";
		cin >> Opcao;
	
	} while (Opcao > 3 || Opcao < 1);
	
	if (Opcao == 3)
	{
		cout << endl;
		cout << "Obrigado!!" << endl << endl;
	}

	return Opcao;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::lerMegaSena(void)
{
	system("cls");
	cout << endl;
	cout << " MEGA SENA - Entre com os 6 Numeros " << endl << endl;
	for (int i = 0; i < 6; ++i)
	{
		cout << "Numero " << i+1 << ": ";
		cin  >> MegaSena[i];
		cout << endl;
	}
	system("cls");
}
//-----------------------------------------------------------------------
void InterfaceUsuario::setAcertos(int OAcertos)
{
	Acertos = OAcertos;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::mostrarResultado(void)
{
	cout << "Quantidade de acertos: " << Acertos << endl << endl;

	system("pause");
}
//-----------------------------------------------------------------------
void InterfaceUsuario::mostrarSorteioMegaSena(int SorteioMegaSena[6])
{
	cout << endl;
	cout << "Numeros sorteados: ";
	for (int i = 0; i < 6; ++i)
	{
		cout << SorteioMegaSena[i] << " ";
	}
	cout << endl << endl;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::mostrarApostaMegaSena(void)
{
	cout << endl;
	cout << "Numeros da APOSTA: ";
	for (int i = 0; i < 6; ++i)
	{
		cout << MegaSena[i] << " ";
	}
	cout << endl;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::getApostaMegaSena(int UmaAposta[6])
{
	for (int i = 0; i < 6; ++i)
	{
		UmaAposta[i] = MegaSena[i];
	}
}
//-----------------------------------------------------------------------
void InterfaceUsuario::lerLotoFacil(void)
{
	system("cls");
	cout << endl;
	cout << "LOTOFACIL - Entre com os 15 numeros" << endl << endl;
	for (int i = 0; i < 15; ++i)
	{
		cout << "Numero " << i + 1 << ": ";
		cin >> LotoFacil[i];
		cout << endl;
	}
	system("cls");
}
//----------------------------------------------------------------------- 
void InterfaceUsuario::mostrarSorteioLotoFacil(int SorteioLotoFacil[15])
{
	cout << endl;
	cout << "Numeros sorteados: ";
	for (int i = 0; i < 15; ++i)
	{
		cout << SorteioLotoFacil[i] << " ";
	}
	cout << endl << endl;
}
//----------------------------------------------------------------------- 
void InterfaceUsuario::mostrarApostaLotoFacil(void)
{
	cout << endl;
	cout << "Numeros da Aposta: ";
	for (int i = 0; i < 15; ++i)
	{
		cout << LotoFacil[i] << " ";
	}
	cout << endl;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::getApostaLotoFacil(int UmaAposta[6])
{
	for (int i = 0; i < 15; ++i)
	{
		UmaAposta[i] = LotoFacil[i];
	}
}
//-----------------------------------------------------------------------
void InterfaceUsuario::mostrarRegiao(void)
{
	cout << "Regiao do Sorteio: " << RegiaoSorteio << endl;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::mostrarData(void)
{
	cout << "Data do sorteio: " << DataSorteio << endl << endl;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::setRegiaoSorteada(string UmaRegiaoSorteada)
{
	RegiaoSorteio = UmaRegiaoSorteada;
}
//-----------------------------------------------------------------------
void InterfaceUsuario::setDataSorteio(string DataSorteada)
{
	DataSorteio = DataSorteada;
}
