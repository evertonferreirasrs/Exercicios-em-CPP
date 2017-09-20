#include "Motor.h"


Motor::Motor()
{
	NumeroDeCilindros = 0;
	NumeroPotencia = 0;
}


Motor::~Motor()
{
}

void Motor::receberCilindro(int Cilindro)
{
	NumeroDeCilindros = Cilindro;

}

void Motor::receberPotencia(int Potencia)
{
	NumeroPotencia = Potencia;

}