#include "Calculadora.h"
//-----------------------------------------------
Calculadora::Calculadora()
{

}
//-----------------------------------------------
Calculadora::~Calculadora()
{

}
//-----------------------------------------------
void Calculadora::fazerCalculosAritimeticos(float OsDados[3], float OsResultados[4])
{
	oa.fazer4Operacoes(OsDados, OsResultados);
}
//-----------------------------------------------
void Calculadora::fazerCalculosTrigonometricos(float OsDados[3], float OsResultados[3])
{
	ot.calcularGrandezasTrigonometricos(OsDados, OsResultados);
}
//-----------------------------------------------
