#include "Controle.h"


Controle::Controle()
{
}


Controle::~Controle()
{
}

void Controle::controlarExecucao()
{
	double Valores[3] = { 0, 0, 0 };
	double Resultado[2] = { 0, 0 };

	InterfaceUsuario iu;
	CalculoBaskara cb;

	iu.lerValores();

	iu.getVetorValores(Valores);

	cb.calcularBaskara(Valores, Resultado);

	iu.setVetorResultado(Resultado);

	iu.mostrarResultado();
}