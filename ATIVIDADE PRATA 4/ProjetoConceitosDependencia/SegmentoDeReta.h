#include <iostream>
using namespace std;
#include <string>


class SegmentoDeReta
{
private:
	double Comprimento;
	double Vertices[4];
public:
	SegmentoDeReta();
	~SegmentoDeReta();
	void setVertices(double[4]);
	double calcularComprimento(void);
};