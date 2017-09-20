#include "OperadorTrigonometrico.h"
//-----------------------------------------------
OperadorTrigonometrico::OperadorTrigonometrico()
{

}
//-----------------------------------------------
OperadorTrigonometrico::~OperadorTrigonometrico()
{

}
//-----------------------------------------------
void OperadorTrigonometrico::calcularGrandezasTrigonometricos(float OsDados[3], float OsResultados[3])
{
	OsResultados[0] = (float)sin((double)OsDados[2]);
	OsResultados[1] = (float)cos((double)OsDados[2]);
	OsResultados[2] = (float)tan((double)OsDados[2]);
}
//-----------------------------------------------
