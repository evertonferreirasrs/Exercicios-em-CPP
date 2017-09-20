#include "OrdenadorPalavra.h"

OrdenadorPalavra::OrdenadorPalavra()
{
}

OrdenadorPalavra::~OrdenadorPalavra()
{
}

void OrdenadorPalavra::OrdenarAZ()
{
	oaz.gerarOrdenacaoAZ();
}

void OrdenadorPalavra::OrdenarZA()
{
	oza.gerarOrdenacaoZA();
}

void OrdenadorPalavra::setVetorPreenchido(string UmVetorPreenchido[100])
{
	oaz.setVetor(UmVetorPreenchido);
	oza.setVetor(UmVetorPreenchido);
}

void OrdenadorPalavra::getVetorAZ(string UmVetor[100])
{
	oaz.getVetor(UmVetor);
}

void OrdenadorPalavra::getVetorZA(string UmVetor[100])
{
	oza.getVetor(UmVetor);
}