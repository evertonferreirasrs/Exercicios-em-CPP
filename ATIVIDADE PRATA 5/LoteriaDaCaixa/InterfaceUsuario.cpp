#include "InterfaceUsuario.h"

//=============================================================================
InterfaceUsuario::InterfaceUsuario()
{
	Opcao = 0;
	QuantidadeAcertos = 0;
	RegiaoSorteada = "";
	
	for (int i = 0; i < 6; ++i)
	{
		ApostaMegaSena[i] = 0;
	}
	
	for (int i = 0; i < 15; ++i)
	{
		ApostaLotoFacil[i] = 0;
	}
}

//=============================================================================
InterfaceUsuario::~InterfaceUsuario()
{

}

//=============================================================================
int InterfaceUsuario::mostrarMenu(void)
{
	system("cls");
	do
	{
		cout << "\t====================================" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t||   Simulacao Loteria da Caixa   ||" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t====================================" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t||  [1] - Mega-Sena               ||" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t||  [2] - LotoFacil               ||" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t||  [3] - Sair                    ||" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t||                                ||" << endl;
		cout << "\t====================================" << endl;
		cout << "\tO que deseja jogar? ";
		cin >> Opcao;
	
	} while (Opcao > 3 || Opcao < 1);
	
	if (Opcao == 3)
	{
		cout << endl;
		cout << "\tObrigado, ate mais ! :D" << endl << endl;
	}

	return Opcao;
}

//=============================================================================
void InterfaceUsuario::lerApostaMegaSena(void)
{
	system("cls");
	cout << endl;
	cout << "\t  [ MEGA SENA ] - Digite 6 numeros (aposta)" << endl << endl;
	cout << "==================================================================" << endl << endl;
	for (int i = 0; i < 6; ++i)
	{
		cout << "Aposta [" << i+1 << "]: ";
		cin  >> ApostaMegaSena[i];
		cout << endl;
	}
	system("cls");
}

//=============================================================================
void InterfaceUsuario::setQuantidadeAcertos(int Acertos)
{
	QuantidadeAcertos = Acertos;
}

//=============================================================================
void InterfaceUsuario::mostrarResultado(void)
{
	cout << "==================================================================" << endl;
	cout << "Quantidade de acertos: " << QuantidadeAcertos << endl << endl;
	cout << "==================================================================" << endl << endl << endl;
	
	system("pause");
}

//============================================================================= 
void InterfaceUsuario::mostrarSorteioMegaSena(int SorteioMegaSena[6])
{
	cout << endl;
	cout << "==================================================================" << endl;
	cout << "Os numeros sorteados sao: ";
	for (int i = 0; i < 6; ++i)
	{
		cout << SorteioMegaSena[i] << " ";
	}
	cout << endl << endl;
}

//============================================================================= 
void InterfaceUsuario::mostrarApostaMegaSena(void)
{
	cout << endl;
	cout << "==================================================================" << endl;
	cout << "Os numeros da APOSTA: ";
	for (int i = 0; i < 6; ++i)
	{
		cout << ApostaMegaSena[i] << " ";
	}
	cout << endl;
}

//=============================================================================
void InterfaceUsuario::getApostaMegaSena(int UmaAposta[6])
{
	for (int i = 0; i < 6; ++i)
	{
		UmaAposta[i] = ApostaMegaSena[i];
	}
}

//=============================================================================
void InterfaceUsuario::mostrarRegiao(void)
{
	cout << "==================================================================" << endl;
	cout << "Regiao onde foi sorteado o Caminhao da Sorte: " << RegiaoSorteada << endl;
}

//=============================================================================
void InterfaceUsuario::mostrarData(void)
{
	cout << "==================================================================" << endl;
	cout << "Data do sorteio: " << DataSorteada << endl << endl;
}

//=============================================================================
void InterfaceUsuario::lerApostaLotoFacil(void)
{
	system("cls");
	cout << endl;
	cout << "\t  [ LOTOFACIL ] - Digite 15 numeros (aposta)" << endl << endl;
	cout << "==================================================================" << endl << endl;
	for (int i = 0; i < 15; ++i)
	{
		cout << "Aposta [" << i + 1 << "]: ";
		cin  >> ApostaLotoFacil[i];
		cout << endl;
	}
	system("cls");
}

//============================================================================= 
void InterfaceUsuario::mostrarSorteioLotoFacil(int SorteioLotoFacil[15])
{
	cout << endl;
	cout << "==================================================================" << endl;
	cout << "Os numeros sorteados sao: ";
	for (int i = 0; i < 15; ++i)
	{
		cout << SorteioLotoFacil[i] << " ";
	}
	cout << endl << endl;
}

//============================================================================= 
void InterfaceUsuario::mostrarApostaLotoFacil(void)
{
	cout << endl;
	cout << "==================================================================" << endl;
	cout << "Os numeros da Aposta: ";
	for (int i = 0; i < 15; ++i)
	{
		cout << ApostaLotoFacil[i] << " ";
	}
	cout << endl;
}

//=============================================================================
void InterfaceUsuario::getApostaLotoFacil(int UmaAposta[6])
{
	for (int i = 0; i < 15; ++i)
	{
		UmaAposta[i] = ApostaLotoFacil[i];
	}
}

//=============================================================================
void InterfaceUsuario::setRegiaoSorteada(string UmaRegiaoSorteada)
{
	RegiaoSorteada = UmaRegiaoSorteada;
}

//=============================================================================
void InterfaceUsuario::setDataSorteada(string UmaDataSorteada)
{
	DataSorteada = UmaDataSorteada;
}
