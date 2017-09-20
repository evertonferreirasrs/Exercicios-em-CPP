#include <iostream>
using namespace std;
#include <string>
#include <math.h>

class CalculoBaskara
{
private:
	double VetorValores[3];
	double VetorResultado[2];
public:
	CalculoBaskara();
	~CalculoBaskara();
	void calcularBaskara(double[3], double[2]);
};

