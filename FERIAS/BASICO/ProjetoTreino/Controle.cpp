#include "Controle.h"

//------------------------------------
Controle::Controle()
{
}

//------------------------------------
Controle::~Controle()
{
}

//------------------------------------
void Controle::controlarExecucao(void)
{
	int UmCilindro = 0;
	int UmPotencia = 0;

	InterfaceUsuario iu;
	Veiculo v;

	UmCilindro = iu.lerCilindro(UmCilindro);
	UmPotencia = iu.lerPotencia(UmPotencia);
	

	v.receberCilindro(UmCilindro);
	v.receberPotencia(UmPotencia);

	iu.mostrarResultado(UmPotencia, UmCilindro);




}