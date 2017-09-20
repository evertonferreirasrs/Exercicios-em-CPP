#ifndef JogoLoteria_H
#define JogoLoteria_H
//=============================================================================
#include <iostream>
using namespace std;
#include <string>
#include <time.h>
//-----------------------------------------------------------------------
class JogoLoteria
{
private:
	int QuantidadeAcertos;
	string Regiao;
	string Norte;
	string Nordeste;
	string Sudeste;
	string CentroOeste;
	string Data;

public:
	JogoLoteria();
	~JogoLoteria();
	int    getQuantidadeAcertos(void);
	string getRegiao(void);
	void   gerarRegiao(void);
	void   gerarData(void);
	string getData(void);

protected:
	void setQuatidadeAcertos(int);
	
};
//-----------------------------------------------------------------------
#endif
