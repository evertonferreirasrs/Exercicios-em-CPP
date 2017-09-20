#ifndef MotorH
#define MotorH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>
//------------------------------------

//------------------------------------

class Motor 
{
private:
	int NumeroDeCilindros;
	int NumeroPotencia;

public:
	Motor();
	~Motor();
	void receberCilindro(int);
	void receberPotencia(int);
};
//------------------------------------
#endif 
