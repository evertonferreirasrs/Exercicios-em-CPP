#include <iostream>
using namespace std;
#include <string>

class CalculoSupermercado
{
private:
	double PrecoProd1;
	double PrecoProd2;
	double Matriz[2][4];
	double Total;

public:
	CalculoSupermercado();
	~CalculoSupermercado();
	double CalcularVenda(double, double, double[2][4]);
	
};

int main(int argc, char *argv[])
{
	double PrecoProd1 = 0.0;
	double PrecoProd2 = 0.0;
	double Total = 0.0;
	double Matriz[2][4];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; i < 4; j++)
		{
			Matriz[i][j] = 0.0;
		}
	}

	cout << "\n Entre com o valor do primeiro produto: R$ ";
	cin >> PrecoProd1;
	cout << "\n Entre com o valor do segundo produto: R$ ";
	cin >> PrecoProd1;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
			{
				cout << "\n Quantidade vendida do primeiro produto no dia " << j + 1 << ": ";
				cin >> Matriz[i][j];
			}
			else if (i == 1)
			{
				cout << "\n Quantidade vendida do segundo produto no dia " << j + 1 << ": ";
				cin >> Matriz[i][j];
			}
		}
	}

	CalculoSupermercado cv;
	Total = cv.CalcularVenda(PrecoProd1, PrecoProd1, Matriz);

	cout << "\n Venda Total: R$ " << Total << endl;

	return 0;
}

CalculoSupermercado::CalculoSupermercado()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; i < 4; j++)
		{
			Matriz[i][j] = 0.0;
		}
	}
	PrecoProd1 = 0.0;
	PrecoProd2 = 0.0;
}

CalculoSupermercado::~CalculoSupermercado()
{

}


double CalculoSupermercado::CalcularVenda(double PrecoProd1, double PrecoProd2, double Matriz[2][4])
{
	double Total = 0.0;
	double VendasProd1 = 0.0;
	double VendasProd2 = 0.0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
			{
				VendasProd1 = VendasProd1 + (Matriz[i][j] * PrecoProd1);
			}
			else if (i == 1)
			{
				VendasProd2 = VendasProd2 + (Matriz[i][j] * PrecoProd2);
			}
		}
	}

	Total = VendasProd1 + VendasProd2;

	return Total;
}