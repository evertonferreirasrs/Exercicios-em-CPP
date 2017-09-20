#include "SegmentoDeReta.h"

SegmentoDeReta::SegmentoDeReta()
{
	Comprimento = 0.0;
	for (int i = 0; i < 4; ++i)
	{
		Vertices[i] = 0.0;
	}
}

SegmentoDeReta::~SegmentoDeReta()
{

}

void SegmentoDeReta::setVertices(double NovosVertices[4])
{
	for (int i = 0; i < 4; ++i)
		Vertices[i] = NovosVertices[i];
}

double SegmentoDeReta::calcularComprimento(void)
{
	Comprimento = sqrt(pow(Vertices[2] - Vertices[0], 2.0) + pow(Vertices[3] - Vertices[1], 2.0));
	return Comprimento;
}
