#include "Controle.h"
//-----------------------------------------------
Controle::Controle()
{
	  
}
//-----------------------------------------------
Controle::~Controle()
{

}
//-----------------------------------------------
void Controle::controlarExecucao(void)
{

	InterfaceUsuario iu;
	Calculadora calc;

	int AOpcao = 0;
	float Dados[3] = { 0.0, 0.0, 0.0 };

	float ResultadoAritmeticos[4] = { 0.0, 0.0, 0.0, 0.0 };
	float ResultadoTrigonometrico[3] = { 0.0, 0.0, 0.0 };
	while (true)
	{
		AOpcao = iu.lerDados(Dados);
		if (AOpcao == 1)
		{
			calc.fazerCalculosAritimeticos(Dados, ResultadoAritmeticos);
			iu.mostrarResultadosAritmeticos(ResultadoAritmeticos);
			continue;
		}
		else if (AOpcao == 2)
		{
			calc.fazerCalculosTrigonometricos(Dados, ResultadoTrigonometrico);
			iu.mostrarResultadosTrigonometricos(ResultadoTrigonometrico);
			continue;
		}
		else if (AOpcao == 3)
		{
			continue;
		}
		else if (AOpcao == 4)
		{
			break;
		}
	}
}