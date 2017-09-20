#ifndef MegaSenaH
#define MegaSenaH
#include <iostream>
using namespace std;
#include <string>
#include "JogosCaixa.h"
//-----------------------------------
class MegaSena : public JogosCaixa
{
private:
	int Jogo[6];
	int Resultado[6];

public:
	MegaSena();
	~MegaSena();
	void gerarJogo(void);
	void gerarResultado(void);
	void setJogo(int[]);
};
//-----------------------------------
#endif
