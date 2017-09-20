#include "Controle.h"


// ================================================================================================
Controle::Controle()
{

}

// ================================================================================================
Controle::~Controle()
{

}

// ================================================================================================
void Controle::controlarExecucao(void){

	LearnAutomatonV1::TelaPrincipal formTelaPrincipal;
	LearnAutomatonV1::TelaSobre     formTelaSobre;
	LearnAutomatonV1::TelaTeoria    formTelaTeoria;
	LearnAutomatonV1::TelaPergunta  formTelaPergunta;
	LearnAutomatonV1::TelaAFD       formAutomato;
	LearnAutomatonV1::TelaRanking   formRanking;
	LearnAutomatonV1::TelaPontuacao formPont;

	ControlePerguntas      CtrlPerg;
	
	ManipuladorDeJogadores MDJ;

	GerenciadorDeArquivo GDA;

	int  Temp[10];
	char Temp2[10];
	char Temp3[25];
	 
	
	GDA.Ler();

	MDJ.setLista(GDA.getLista());

	MDJ.organizar();

	formRanking.setList(MDJ.getList());

	while (formTelaPrincipal.getStatusTelaPrincipal() != 0){

		 formTelaPrincipal.ShowDialog();

		switch (formTelaPrincipal.getStatusTelaPrincipal())
		{
		case 0:

			break;

		case 1:

			formTelaTeoria.ShowDialog();

			break;

		case 2:

			formAutomato.ShowDialog();

			break;

		case 3:

			CtrlPerg.sortearPerguntas();

			CtrlPerg.getPergSorteada(Temp);

			formTelaPergunta.converterVetorParaArray(Temp);
				
			formTelaPergunta.carregarImagens();

			formTelaPergunta.ShowDialog();

			formTelaPergunta.getVetorDeRespostasUser(Temp2);

			CtrlPerg.verificarResposta(Temp2);

			formPont.setPontos(CtrlPerg.getAcertos());

			formPont.ShowDialog();

			formPont.getNome(Temp3);

			MDJ.adicionarJogador(CtrlPerg.getAcertos(), Temp3);		

			GDA.Gravar(MDJ.getJogador());

			
									
			break;

		case 4:
			
			

			GDA.limparBuffer();

			GDA.Ler();

			MDJ.setLista(GDA.getLista());

			MDJ.organizar();

			formRanking.setList(MDJ.getList());

			

			formRanking.ShowDialog();
			
			

			break;
		case 5:

			formTelaSobre.ShowDialog();

			break;

		default:

			break;
		}

		for (int Index = 0; Index < 10; ++Index){

			Temp2[Index] = 'x';

		}

	}

	

}