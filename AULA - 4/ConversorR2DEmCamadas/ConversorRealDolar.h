#include <iostream>
using namespace std;
#include <string>

class ConversorRealDolar
{
private:
	double  ValorEmReal,
			ValorEmDolar,
			ValorDaTaxa;
public:
	ConversorRealDolar();
	~ConversorRealDolar();
	double converterR2D(double, double);

};