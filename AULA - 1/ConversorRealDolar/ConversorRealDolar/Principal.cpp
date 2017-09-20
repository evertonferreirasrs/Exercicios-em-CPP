#include <iostream>
using namespace std;
#include <string>

class ConversorRealDolar
{
	private:
		double	ValorReal, ValorDolar, TaxaDeConversao;

	public:
		ConversorRealDolar();
		~ConversorRealDolar();
		double converterR2D(double, double);
};

int main(int argc, char *argv[])
{
	double UmValorReal = 0.0, Taxa = 0.0;
	double ValorEmDolar = 0.0;

	cout << "Entre com um valor em real: ";
	cin >> UmValorReal;
	cout << "Entre com a taxa de conversao de real para dolar: ";
	cin >> Taxa;

	ConversorRealDolar crd;
	ValorEmDolar = crd.converterR2D(UmValorReal, Taxa);
		
	cout << "-------------------------------------------------" << endl;
	cout << "R$: " << UmValorReal << " US$: " << ValorEmDolar << endl;
	cout << "------------------------------------------------" << endl;
	
	return 0;
}

ConversorRealDolar::ConversorRealDolar()
{
	ValorDolar = 0.0;
	ValorDolar = 0.0;
	TaxaDeConversao = 0.0;
}

ConversorRealDolar::~ConversorRealDolar()
{

}

double ConversorRealDolar::converterR2D(double UmValorReal, double UmaTaxa)
{
	double ValorEmDolar = 0.0;

	ValorReal = UmValorReal;
	TaxaDeConversao = UmaTaxa;
	
	ValorEmDolar = UmValorReal * UmaTaxa;

	ValorDolar = ValorEmDolar;

	return ValorDolar;
}