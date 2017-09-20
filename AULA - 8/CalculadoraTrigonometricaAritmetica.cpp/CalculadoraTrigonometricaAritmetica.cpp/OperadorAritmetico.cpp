#include "OperadorAritmetico.h"
//-----------------------------------------------
OperadorAritmetico::OperadorAritmetico()
{

}//-----------------------------------------------

OperadorAritmetico::~OperadorAritmetico()
{

}
//-----------------------------------------------
void OperadorAritmetico::fazer4Operacoes(float OsOperandos[3], float OsResultados[4])
{
	OsResultados[0] = OsOperandos[0] + OsOperandos[1];
	OsResultados[1] = OsOperandos[0] - OsOperandos[1];
	OsResultados[2] = OsOperandos[0] * OsOperandos[1];
	OsResultados[3] = OsOperandos[0] / OsOperandos[1];
}
//-----------------------------------------------