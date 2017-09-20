#include "Controle.h"

//----------------------------------
Controle::Controle()
{
}
//----------------------------------
Controle::~Controle()
{
}
//----------------------------------
void Controle::controlarExecucao(void)
{
	int Opcao = 0;
	string Vet[100];

	for (int i = 0; i < 100; ++i)
	{
		Vet[i] = "";
	}
	
	InterfaceUsuario iu;
	OrdenadorPalavra op;

	iu.lerPalavras();
	iu.getVetorPalavra(Vet);
	op.setVetorPreenchido(Vet);

	do
	{
		Opcao = iu.lerOpcao();
		switch (Opcao)
		{
		case 1:
			op.OrdenarAZ();
			op.getVetorAZ(Vet);
			iu.setVetorPalavra(Vet);
			iu.gerarResultado();
			break;
		case 2:
			op.OrdenarZA();
			op.getVetorZA(Vet);
			iu.setVetorPalavra(Vet);
			iu.gerarResultado();
			break;
		case 3:
			break;
		default:
			break;
		}

	} while (Opcao != 3);
}
//----------------------------------}