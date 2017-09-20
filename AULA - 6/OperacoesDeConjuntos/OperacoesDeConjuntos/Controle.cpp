#include "Controle.h"

Controle::Controle()
{

}

Controle::~Controle()
{

}

void Controle::controlarExecucao(void)
{
	InterfaceUsuario iu;
	ManipulacaoDeConjuntos mdc;

	int CjA1[5] = { 0, 0, 0, 0, 0 },
		CjA2[5] = { 0, 0, 0, 0, 0 };
	int CjSolucaoA[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	do{
		iu.mostrarMenu1();

		//nesta linha vem a entrada de dados do teclado
		iu.getCjsInt(CjA1, CjA2);
		mdc.setCjA(CjA1, CjA2);

		switch (iu.getOpcao1()){
		case 1:
			iu.mostrarMenu2();
			switch (iu.getOpcao2())
			{
			case 1://esta contido
				mdc.calcularIntersecaoA();
				break;

			case 2://Uniao
				mdc.calcularUniaoA();
				break;

			case 3://intersecao
				mdc.calcularIntersecaoA();
				break;

			case 4://pertence
				mdc.calcularIntersecaoA();
				break;			

			case 5://Subtracao A
				mdc.calcularSubtracaoA();
				break;
			}

			mdc.getSolucaoA(CjSolucaoA);
			iu.mostrarCjSolucao(CjSolucaoA);

			break;

		case 2:
			iu.mostrarMenu2();
			break;
		}
	} while (iu.getOpcao1() != 0);
}