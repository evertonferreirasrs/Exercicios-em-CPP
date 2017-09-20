#ifndef LotofacilH
#define LotofacilH
#include <iostream>
using namespace std;
#include <string>
#include "JogosCaixa.h"
//-----------------------------------
class Lotofacil : public JogosCaixa
{
private:
	int Jogo[15];
	int Resultado[15];

public:
	Lotofacil();
	~Lotofacil();
	void gerarJogo(void);
	void gerarResultado(void);
	void setJogo(int[]);
};
//-----------------------------------
#endif
