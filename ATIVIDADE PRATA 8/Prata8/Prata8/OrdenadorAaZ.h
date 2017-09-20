#ifndef OrdenadorAaZH
#define OrdenadorAaZH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>
//------------------------------------
class OrdenadorAaZ
{
private:
	string Vetor[100];
public:
	OrdenadorAaZ();
	~OrdenadorAaZ();
	void gerarOrdenacaoAZ();
	void setVetor(string[]);
	void getVetor(string[]);
};
//------------------------------------
#endif