
#include "CalculoBaskara.h"


CalculoBaskara::CalculoBaskara()
{
	for (int i = 0; i < 3; ++i)
	{
		VetorValores[i] = 0.0;
	}
	for (int i = 0; i < 2; ++i)
	{
		VetorResultado[i] = 0.0;
	}
}


CalculoBaskara::~CalculoBaskara()
{

}

void CalculoBaskara::calcularBaskara(double OVetorValores[3], double OVetorResultado[2])
{
	double Delta = 0.0;

	for (int i = 0; i < 3; i++)
	{
		VetorValores[i] = OVetorValores[i];
	}

	Delta = pow(VetorValores[1], 2) - (4 * VetorValores[0] * VetorValores[2]);

	VetorResultado[0] = (-VetorValores[1] + sqrt(Delta)) / 2 * VetorValores[0];
	VetorResultado[1] = (-VetorValores[1] - sqrt(Delta)) / 2 * VetorValores[0];

	for (int i = 0; i < 2; ++i)
	{
		OVetorResultado[i] = VetorResultado[i];
	}
}
