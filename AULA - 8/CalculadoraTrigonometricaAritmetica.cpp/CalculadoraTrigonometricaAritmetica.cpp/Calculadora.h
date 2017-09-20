#ifndef CalculadoraH
#define CalculadoraH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>
#include "OperadorAritmetico.h"
#include"OperadorTrigonometrico.h"
//-----------------------------------------------
class Calculadora
{
private:
	    OperadorAritmetico oa;
	    OperadorTrigonometrico ot;

	float Operandosaritimeticos[2],
		  ResultadoOperacaoAritimetica[4],
	      ResultadoOperacaoTrigonometrico[3];

	float Angulo;
	float ResultadoTrigonometrico[3];
	 
public:
	Calculadora();
	~Calculadora();
	 void fazerCalculosAritimeticos(float[3],float[4]);
	void fazerCalculosTrigonometricos(float[3], float[3]);
};
//------------------------------------
#endif

