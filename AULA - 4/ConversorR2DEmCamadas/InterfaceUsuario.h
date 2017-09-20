#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	double	OValorRealLido,
			OValorDaTaxaLido,
			OValorEmDolar;
public:
	InterfaceUsuario();
	~InterfaceUsuario();
	void lerRealDolar(double[2]);
	void mostrarResultado(double);
	double getOvalorRealLido(void)
	{
		return OValorRealLido;
	}
	double getOValorDaTaxaLido(void)
	{
		return OValorDaTaxaLido;
	}
	double getOValorEmDolar(void)
	{
		return OValorEmDolar;
	}
};