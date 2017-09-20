#include "Pilha.h"

Pilha::Pilha()
{
	for (int i = 0; i < 10; ++i)
		VetorPilha[i] = 0;
	Topo = 0;
}

Pilha::~Pilha()
{

}

bool Pilha::empilhar(char UmCaractere)
{
	if (Topo < MAX_PILHA)
		VetorPilha[Topo++] = UmCaractere;
	else
		return false;
	return true;
}

char Pilha::desempilhar(void)
{
	if (Topo == 0)
		return VetorPilha[Topo];
	else if (Topo == MAX_PILHA)
		return (VetorPilha[--Topo]);
	else if (Topo < MAX_PILHA && Topo > 0)
		return (VetorPilha[--Topo]);
}

void Pilha::esvaziarPilha(void)
{
	Topo = 0;
}

void Pilha::mostrarPilha(string &PilhaLida)
{
	for (int i = 0; i < 10; ++i)
		PilhaLida.at(i) = VetorPilha[i];
}

bool Pilha::estarVazia(void)
{
	if (Topo == 0)
		return true;
	else
		return false;
}

char Pilha::mostrarTopo(void)
{
	return VetorPilha[Topo];
}