#ifndef JogosCaixaH
#define JogosCaixaH
#include <iostream>
using namespace std;
#include <string>
#include <time.h>
//-----------------------------------
class JogosCaixa
{
private:
	int Acertos;
	string Regiao;
	string Norte;
	string Nordeste;
	string Sudeste;
	string CentroOeste;
	string Data;

protected:
	void setAcertos(int);

public:
	JogosCaixa();
	~JogosCaixa();
	int getAcertos(void);
	void   gerarRegiao(void);
	void   gerarData(void);
	string getRegiao(void);
	string getData(void);
};
//-----------------------------------
#endif
