#ifndef CirculoH
#define CirculoH
// ================================================
#include "Figura.h"

class Circulo : public Figura
{
private:

public:
	Circulo();
	~Circulo();

	double obterArea()
	{
		return getArea();
	}
};
// ================================================
#endif