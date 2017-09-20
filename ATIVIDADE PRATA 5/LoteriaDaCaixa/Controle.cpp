#include "Controle.h"

//=============================================================================
Controle::Controle()
{

}

//=============================================================================
Controle::~Controle()
{

}

//=============================================================================
void Controle::controlarExecucao(void)
{
	InterfaceUsuario iu;
	MegaSena ms;
	LotoFacil lf;
	
	int Opcao;
	int SorteioMegaSena[6]   =  { 0, 0, 0, 0, 0, 0 };
	int ApostaMegaSena[6]    =  { 0, 0, 0, 0, 0, 0 };
	int SorteioLotoFacil[15] =  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int ApostaLotoFacil[15]  =  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	
	do
	{
		Opcao = iu.mostrarMenu();
		
		switch (Opcao)
		{
		case 1: 
				iu.lerApostaMegaSena();
				iu.getApostaMegaSena(ApostaMegaSena);
				ms.setApostaMegaSena(ApostaMegaSena);

				ms.gerarSorteioMegaSena();
				ms.gerarRespostaMegaSena();
				ms.getSorteioMegaSena(SorteioMegaSena);
				
				ms.gerarData();
				iu.setDataSorteada(ms.getData());
				iu.mostrarData();

				ms.gerarRegioes();
				iu.setRegiaoSorteada(ms.getRegioes());
				iu.mostrarRegiao();
				iu.mostrarApostaMegaSena();
				iu.mostrarSorteioMegaSena(SorteioMegaSena);
				iu.setQuantidadeAcertos(ms.getQuantidadeCertas());
				iu.mostrarResultado();

			break;

		case 2: 
			    iu.lerApostaLotoFacil();
			    iu.getApostaLotoFacil(ApostaLotoFacil);
			    lf.setApostaLotoFacil(ApostaLotoFacil);

			    lf.gerarSorteioLotoFacil();
			    lf.gerarRespostaLotoFacil();
			    lf.getSorteioLotoFacil(SorteioLotoFacil);
			    
				ms.gerarData();
				iu.setDataSorteada(ms.getData());
				iu.mostrarData();

				lf.gerarRegioes();
				iu.setRegiaoSorteada(lf.getRegioes());
				iu.mostrarRegiao();
				iu.mostrarApostaLotoFacil();
				iu.mostrarSorteioLotoFacil(SorteioLotoFacil);
			    iu.setQuantidadeAcertos(lf.getQuantidadeCertas());
				iu.mostrarResultado();

			break;

		case 3: 
			break;
		}

	} while (Opcao != 3);
}