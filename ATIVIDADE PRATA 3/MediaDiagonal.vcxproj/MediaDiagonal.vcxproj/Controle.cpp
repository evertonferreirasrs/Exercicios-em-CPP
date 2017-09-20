#include "Controle.h"

//---------------------------------------------------------------------------------
Controle::Controle()
{

}

//---------------------------------------------------------------------------------
Controle::~Controle()
{

}

//---------------------------------------------------------------------------------
void Controle::GerenciarExecucao(void)
{
	float Matriz[10][10];
	float Media;

	InterfaceUsuario    iu;
	MediaMatrizDiagonal mmd;

	mmd.criarMatriz(Matriz);
	Media = mmd.calcularMedia(Matriz);

	iu.exibirMatriz(Matriz);
	iu.exibirResultado(Media);
}