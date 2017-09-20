#ifndef OrdenadorZaAH
#define OrdenadorZaAH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>
//------------------------------------
class OrdenadorZaA
{
private:
	string Vetor[100];
public:
	OrdenadorZaA();
	~OrdenadorZaA();
	void gerarOrdenacaoZA();
	void setVetor(string[]);
	void getVetor(string[]);
};
//------------------------------------
#endif
