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
	SegmentoDeReta   sdr;

	double OsVerticesLidos[4] = { 0.0, 0.0, 0.0, 0.0 };
	double ComprimentoCalculado = 0.0;

	iu.lerVertices();
	iu.getVertices(OsVerticesLidos);

	sdr.setVertices(OsVerticesLidos);
	ComprimentoCalculado = sdr.calcularComprimento();

	iu.mostrarComprimento(ComprimentoCalculado);
}