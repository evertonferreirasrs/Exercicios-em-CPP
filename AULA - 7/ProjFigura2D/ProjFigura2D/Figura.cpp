#include "Figura.h"

Figura::Figura()
{
	Area = 0.0;
	Perimetro = 0.0;
	LadoA = 0.0;
	LadoB = 0.0;
	LadoC = 0.0;

	NomeDaFigura = "";
	UnidadeDeEngenhariaArea = "m²";
	UnidadeDeEngenhariaPerimetro = "m";
}

Figura::~Figura()
{

}

//GETs-----------------------------------------------------------------------------------
double Figura::getPerimetro(void)
{
	return Perimetro;
}

double Figura::getLadoA(void)
{
	return LadoA;
}

double Figura::getLadoB(void)
{
	return LadoB;
}

double Figura::getLadoC(void)
{
	return LadoC;
}

string Figura::getNomeDaFigura(void)
{
	return NomeDaFigura;
}

string Figura::getUnidadeDeEngenhariaArea(void)
{
	return UnidadeDeEngenhariaArea;
}

string Figura::getUnidadeDeEngenhariaPerimetro(void)
{
	return UnidadeDeEngenhariaPerimetro;
}

//SETs----------------------------------------------------------------
void Figura::setArea(double UmaArea)
{
	Area = UmaArea;
}

void Figura::setPerimetro(double UmPerimetro)
{
	Perimetro = UmPerimetro;
}
void Figura::setLadoA(double UmLado)
{
	LadoA = UmLado;
}

void Figura::setLadoB(double UmLado)
{
	LadoB = UmLado;
}

void Figura::setLadoC(double Umlado)
{
	LadoC = Umlado;
}

void Figura::setNomeDaFigura(string UmNome)
{
	NomeDaFigura = UmNome;
}

void Figura::setUnidadeDeEngenhariaArea(string UmaArea)
{
	UnidadeDeEngenhariaArea = UmaArea;
}

void Figura::setUnidadeDeEngenhariaPerimetro(string UmPerimetro)
{
	UnidadeDeEngenhariaPerimetro = UmPerimetro;
}