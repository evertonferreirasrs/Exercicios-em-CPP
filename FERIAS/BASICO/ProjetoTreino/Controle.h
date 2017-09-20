#pragma once
#ifndef ControleH
#define ControleH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>

#include "InterfaceUsuario.h"
#include "CarroPasseio.h"
#include "Veiculo.h"
#include "Motor.h"

class Controle
{
private:

public:
	Controle();
	~Controle();
	void controlarExecucao(void);
};
//------------------------------------
#endif