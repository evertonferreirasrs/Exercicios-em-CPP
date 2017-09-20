#ifndef FiguraH
#define FiguraH
// ================================================
#include <iostream>
using namespace std;
#include <string>

class Figura
{
private:
	double Area,
		   Perimetro,
		   LadoA,
		   LadoB,
		   LadoC;
	
	string NomeDaFigura,
		   UnidadeDeEngenhariaArea,
		   UnidadeDeEngenhariaPerimetro;
public:
	Figura();
	~Figura();

protected:
	double getArea(void);  // Vai ser enchergado em ambas as classes Filha e Mae
	double getPerimetro(void);
	double getLadoA(void);
	double getLadoB(void);
	double getLadoC(void);
	string getNomeDaFigura(void);
	string getUnidadeDeEngenhariaArea(void);
	string getUnidadeDeEngenhariaPerimetro(void);

	void setArea(double);
	void setPerimetro(double);
	void setLadoA(double);
	void setLadoB(double);
	void setLadoC(double);
	void setNomeDaFigura(string);
	void setUnidadeDeEngenhariaArea(string);
	void setUnidadeDeEngenhariaPerimetro(string);
};
// ================================================
#endif