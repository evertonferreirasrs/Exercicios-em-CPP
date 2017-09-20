#include "Controle.h"
//-----------------------------------------------------------------------
Controle::Controle()
{

}
//-----------------------------------------------------------------------
Controle::~Controle()
{

}
//-----------------------------------------------------------------------
void Controle::controlarExecucao(void)
{
	InterfaceUsuario iu;
	MegaSena m;
	LotoFacil l;
	
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
				iu.lerMegaSena();
				iu.getApostaMegaSena(ApostaMegaSena);
				m.setJogoMega(ApostaMegaSena);

				m.gerarJogoMega();
				m.gerarAcertosMega();
				m.getJogoMega(SorteioMegaSena);
				
				m.gerarData();
				iu.setDataSorteio(m.getData());
				iu.mostrarData();

				m.gerarRegiao();
				iu.setRegiaoSorteada(m.getRegiao());
				iu.mostrarRegiao();
				iu.mostrarApostaMegaSena();
				iu.mostrarSorteioMegaSena(SorteioMegaSena);
				iu.setAcertos(m.getQuantidadeAcertos());
				iu.mostrarResultado();

			break;

		case 2: 
			    iu.lerLotoFacil();
			    iu.getApostaLotoFacil(ApostaLotoFacil);
			    l.setJogoLoto(ApostaLotoFacil);

			    l.gerarJogoLoto();
			    l.gerarAcertosLoto();
			    l.getJogoLoto(SorteioLotoFacil);
			    
				l.gerarData();
				iu.setDataSorteio(l.getData());
				iu.mostrarData();

				l.gerarRegiao();
				iu.setRegiaoSorteada(l.getRegiao());
				iu.mostrarRegiao();
				iu.mostrarApostaLotoFacil();
				iu.mostrarSorteioLotoFacil(SorteioLotoFacil);
			    iu.setAcertos(l.getQuantidadeAcertos());
				iu.mostrarResultado();

			break;

		case 3: 
			break;
		}

	} while (Opcao != 3);
}