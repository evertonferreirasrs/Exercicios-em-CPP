#ifndef Circulo_H
#define Circulo_H
//-----------------------------------------------------------------------
#include "JogoLoteria.h"
//-----------------------------------------------------------------------
class MegaSena : public JogoLoteria
{
private:
	int JogoMega[6];
	int ResultadoMega[6];

public:
	MegaSena();
	~MegaSena();
	void gerarJogoMega(void);
	void gerarAcertosMega(void);
	void getJogoMega(int[]); 
	void setJogoMega(int[]);
};
//-----------------------------------------------------------------------
#endif