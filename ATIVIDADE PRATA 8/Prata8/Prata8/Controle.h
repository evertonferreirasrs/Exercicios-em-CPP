#ifndef ControleH
#define ControleH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>
//------------------------------------
#include "InterfaceUsuario.h"
#include "OrdenadorPalavra.h"
//------------------------------------
class Controle
{
private:

public:
	Controle();
	~Controle();
	void controlarExecucao(void);
};
#endif