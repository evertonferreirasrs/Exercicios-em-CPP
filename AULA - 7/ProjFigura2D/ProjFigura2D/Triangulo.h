#ifndef TrianguloH
#define TrianguloH
// ================================================
#include "Figura.h"

class Triangulo : public Figura
{
private:

public:
	Triangulo();
	~Triangulo();

	double obterArea()
	{
		return getArea();
	}
};
// ================================================
#endif