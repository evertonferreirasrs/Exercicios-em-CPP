#include "Controle.h"

Controle::Controle()
{

}

Controle::~Controle()
{

}

void Controle::gerenciarExecucao(void)
{
	InterfaceUsuario   iu;
	ConversorRealDolar crd;
	double OValorEmDolar = 0.0;

	double ValoresLidos[2] = { 0.0, 0.0 };
	iu.lerRealDolar(ValoresLidos);
	//Alternativa:
	//ValoresLidos[0] = iu.getOValorRealLido();
	//ValoresLidos[1] = iu.getOValorDaTaxaLido();

	OValorEmDolar = crd.converterR2D(ValoresLidos[0], ValoresLidos[1]);

	iu.mostrarResultado(OValorEmDolar);

}