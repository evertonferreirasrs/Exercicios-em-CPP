#ifndef LotoFacil_H
#define LotoFacil_H
//-----------------------------------------------------------------------
#include "JogoLoteria.h"
//-----------------------------------------------------------------------
class LotoFacil : public JogoLoteria
{
private:
	int JogoLoto[15];
	int ResultadoLoto[15];

public:
	LotoFacil();
	~LotoFacil();
	void gerarJogoLoto(void);
	void gerarAcertosLoto(void);
	void getJogoLoto(int[]);
	void setJogoLoto(int[]);
};
//-----------------------------------------------------------------------
#endif

