#ifndef AlgebraSimbolicaH
#define AlgebraSimbolicaH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>

#include "Algebra.h"
#include "Pilha.h"
//-----------------------------------
class AlgebraSimbolica : public Algebra
{
private:
	Pilha p;
public:
	AlgebraSimbolica();
	~AlgebraSimbolica();
};
//-----------------------------------------------
#endif
