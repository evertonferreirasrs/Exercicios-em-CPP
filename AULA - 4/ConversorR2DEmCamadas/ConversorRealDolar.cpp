#include "ConversorRealDolar.h"

ConversorRealDolar::ConversorRealDolar()
{
	ValorEmReal  = 0.0;
	ValorDaTaxa  = 0.0;
	ValorEmDolar = 0.0;
}

ConversorRealDolar::~ConversorRealDolar()
{

}

double ConversorRealDolar::converterR2D(double UmValorReal, double UmValorDeTaxa)
{
	ValorEmReal = UmValorReal;
	ValorDaTaxa = UmValorDeTaxa;
	ValorEmDolar = ValorEmReal * ValorDaTaxa;
	return ValorEmDolar;
}