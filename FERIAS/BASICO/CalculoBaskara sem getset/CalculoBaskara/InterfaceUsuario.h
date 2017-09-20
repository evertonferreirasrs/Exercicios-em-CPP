#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	double VetorValores[3];
	double VetorResultado[2];
public:
	InterfaceUsuario();
	~InterfaceUsuario();
	void lerValores(double[3]); // com ou sem valor
	void mostrarResultado(double[2]); // com ou sem valor
};

