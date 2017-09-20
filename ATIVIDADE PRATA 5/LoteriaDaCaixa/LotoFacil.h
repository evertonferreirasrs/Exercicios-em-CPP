#ifndef LotoFacil_H
#define LotoFacil_H
//=============================================================================
#include "SimuladorLoteria.h"

class LotoFacil : public SimuladorLoteria
{
private:
	int ApostaLotoFacil[15];
	int SorteioLotoFacil[15];

public:
	LotoFacil();
	~LotoFacil();
	void gerarSorteioLotoFacil(void);
	void gerarRespostaLotoFacil(void);
	void getSorteioLotoFacil(int[]);
	void setApostaLotoFacil(int[]);
};
//=============================================================================
#endif

