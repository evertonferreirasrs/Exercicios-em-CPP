#include "Controle.h"

Controle::Controle()
{

}
Controle::~Controle()
{

}
void Controle::controlarExecucao(void)
{
	int OpcaoUsuario = 0,
		Numeros[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		NumerosOrdenados[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	InterfaceUsuario iu;
	OrdenadorDeNumeros odn;

	do
	{
		OpcaoUsuario = iu.lerOpcao();
		switch (OpcaoUsuario)
		{
		case 1:
			iu.lerNumeros(Numeros);
			odn.ordenarNumeros(OpcaoUsuario, Numeros, NumerosOrdenados);
			iu.apresentarResultado(NumerosOrdenados);
			break;
		case 2:
			iu.lerNumeros(Numeros);
			odn.ordenarNumeros(OpcaoUsuario, Numeros, NumerosOrdenados);
			iu.apresentarResultado(NumerosOrdenados);
			break;
		case 3:

			break;
		}

	} while (OpcaoUsuario != 3);

}