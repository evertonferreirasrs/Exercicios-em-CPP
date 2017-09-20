#ifndef OrdenadorPalavraH
#define OrdenadorPalavraH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>

#include"OrdenadorAaZ.h"
#include"OrdenadorZaA.h"
//------------------------------------
class OrdenadorPalavra
{
private:
	OrdenadorAaZ oaz;
	OrdenadorZaA oza;
public:
	OrdenadorPalavra();
	~OrdenadorPalavra();
	void OrdenarAZ();
	void OrdenarZA();
	void setVetorPreenchido(string[]);
	void getVetorAZ(string[]);
	void getVetorZA(string[]);
};
//------------------------------------
#endif