#ifndef SimuladorLoteria_H
#define SimuladorLoteria_H
//=============================================================================
#include <iostream>
using namespace std;
#include <string>
#include <time.h>

class SimuladorLoteria
{
private:
	int QuantidadeCertas;
	string Regioes;
	string Norte;
	string Nordeste;
	string Sudeste;
	string CentroOeste;
	string Data;

public:
	SimuladorLoteria();
	~SimuladorLoteria();
	int    getQuantidadeCertas(void);
	string getRegioes(void);
	void   gerarRegioes(void);
	void   gerarData(void);
	string getData(void);

protected:
	void setQuatidadeCertas(int);
	
};
//=============================================================================
#endif
