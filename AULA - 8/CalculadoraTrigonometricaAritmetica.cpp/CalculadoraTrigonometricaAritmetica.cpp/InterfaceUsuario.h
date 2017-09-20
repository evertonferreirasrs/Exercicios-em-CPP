#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//------------------------------------
#include <iostream>
using namespace std;
#include <string>
//-----------------------------------------------
class InterfaceUsuario
{
private:
	int Opcao;
	float Operandos[2];
	float Angulo;
	float ResultadoTrigonometricos[3];
	float ResultadoAritmeticos[4];
	void lerOperandosAritmeticos(float[2]);
	float lerAngulo(void);
public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int lerDados(float[3]);
	void mostrarResultadosAritmeticos(float[4]);
	void mostrarResultadosTrigonometricos(float[3]);

};
//------------------------------------
#endif

