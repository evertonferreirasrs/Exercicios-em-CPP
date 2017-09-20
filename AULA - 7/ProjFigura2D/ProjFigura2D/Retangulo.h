#ifndef RetanguloH
#define RetanguloH
// ================================================
#include "Figura.h"

class Retangulo : public Figura
{
private:

public:
	Retangulo();
	~Retangulo();

	double obterArea()
	{
		return getArea();
	}
};
// ================================================
#endif   