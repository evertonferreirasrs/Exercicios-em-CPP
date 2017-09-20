#include <iostream>
using namespace std;
#include <string>

class OrdenadorDeNumeros
{
private:
	int Opcao,
		Numeros[10],
		NumerosOrdenados[10];
public:
	OrdenadorDeNumeros();
	~OrdenadorDeNumeros();
	void ordenarNumeros(int,int[10],int[10]);
};