#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	double Vertices[4];
public:
	InterfaceUsuario();
	~InterfaceUsuario();
	void lerVertices(void);
	void getVertices(double[4]);
	void mostrarComprimento(double);
};