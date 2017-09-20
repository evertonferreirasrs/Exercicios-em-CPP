#include <iostream>
using namespace std;
#include <string>

class InterfaceUsuario
{
private:
	int OpcaoMenu1,
		OpcaoMenu2;

	int	   CjA1[5],
		   CjA2[5];
	
	string CjB1[5],
		   CjB2[5];

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int getOpcao1(void);
	int getOpcao2(void);
	void getCjsInt(int[], int[]);
	void getCjsString(string[], string[]);
	void mostrarMenu1(void);
	void mostrarMenu2(void);
	void mostrarCjSolucao(int[]);
};
