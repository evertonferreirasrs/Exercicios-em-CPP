#ifndef AlgebraNumericaH
#define AlgebraNumericaH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>

#include "Algebra.h"
#include "Calculadora.h"
//----------------------------------------------
class AlgebraNumeria : public Algebra
{
private:
	Calculadora calc;
public:
	AlgebraNumeria();
	~AlgebraNumeria();
};
//-----------------------------------------------
#endif
