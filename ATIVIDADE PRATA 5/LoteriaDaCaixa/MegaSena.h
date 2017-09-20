#ifndef Circulo_H
#define Circulo_H
//=============================================================================
#include "SimuladorLoteria.h"

class MegaSena : public SimuladorLoteria
{
private:
	int ApostaMegaSena[6];
	int SorteioMegaSena[6];

public:
	MegaSena();
	~MegaSena();
	void gerarSorteioMegaSena(void);
	void gerarRespostaMegaSena(void);
	void getSorteioMegaSena(int[]); 
	void setApostaMegaSena(int[]);
};
//=============================================================================
#endif