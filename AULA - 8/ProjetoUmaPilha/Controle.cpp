#include "Controle.h"

Controle::Controle()
{

}

Controle::~Controle()
{

}

void Controle::gerenciarExecucao(void)
{
	InterfaceUsuario iu;
	Pilha			 pilha;
	string			 CaracteresEntrados = "";

	iu.entrarCaracteres();
	iu.getCaracteres(CaracteresEntrados);

	for (int i = 0; (unsigned)i < CaracteresEntrados.size(); ++i)
		pilha.empilhar(CaracteresEntrados.at(i));

	string PilhaLida = "";
	char   UmChar = '\0';

	int TamanhoVetorChar = CaracteresEntrados.size();
	for (int i = 0; i < TamanhoVetorChar; ++i)
		PilhaLida += pilha.desempilhar();

	iu.mostrarPilha(PilhaLida);
}