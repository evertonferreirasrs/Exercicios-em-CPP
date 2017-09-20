#include "Controle.h"

Controle::Controle()
{
	
}

//------------------------------------------------------------------------------------
Controle::~Controle()
{

}

//------------------------------------------------------------------------------------
void Controle::gerenciarExecucao(void)
{
	int Valores[10];
	int Escolha;
	InterfaceUsuario iu;
	Ordenacao o;
	Escolha = iu.mostrarMenu();
	do
	{
		switch (Escolha)
		{
		case 1:
			iu.lerValores(Valores);
			o.colocarEmOrdemCrescente(Valores);
			iu.mostrarResultado(Valores);
			Escolha = iu.mostrarMenu();
			break;
		case 2:
			iu.lerValores(Valores);
			o.colocarEmOrdemDecrescente(Valores);
			iu.mostrarResultado(Valores);
			Escolha = iu.mostrarMenu();
			break;
		case 3:
			break;
		}
	} while (Escolha != 3);

}