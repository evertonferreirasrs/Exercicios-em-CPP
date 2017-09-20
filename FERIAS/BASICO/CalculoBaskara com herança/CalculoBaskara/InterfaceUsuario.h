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
	
	void getVetorValores(double [3]);
	void setVetorResultado(double[2]);

	void lerValores(void); // com ou sem valor
	void mostrarResultado(void); // com ou sem valor
};

