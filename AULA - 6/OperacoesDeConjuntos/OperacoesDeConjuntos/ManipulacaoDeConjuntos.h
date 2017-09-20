#include <iostream>
using namespace std;
#include <string>

// Conjunto Natural

class ManipulacaoDeConjuntos
{
private:
	int    CjA1[5],
		   CjA2[5],
		   CjSolucaoA[10];
	string CjB1[5],
		   CjB2[5],
		   CjSolucaoB[10];
	
public:
	ManipulacaoDeConjuntos();
	~ManipulacaoDeConjuntos();
	void setCjA(int[], int[]);
	void setCjB(string[], string[]);
	void getSolucaoB(string []);
	void getSolucaoA(int []);
	void calcularIntersecaoA(void);
	void calcularIntersecaoB(void);
	void calcularUniaoA(void);
	void calcularSubtracaoA(void);
};