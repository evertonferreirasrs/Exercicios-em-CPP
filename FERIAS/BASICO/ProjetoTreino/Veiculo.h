#ifndef VeiculoH
#define VeiculoH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>

#include "CarroPasseio.h"
#include "Motor.h"

class Veiculo : public CarroPasseio
{
private:
	int x;
	int y;

	Motor m;

public:
	Veiculo();
	~Veiculo();
	void receberCilindro(int);
	void receberPotencia(int);
};
//------------------------------------
#endif 
