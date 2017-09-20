#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
#include <iostream>
using namespace std;
#include <string>
#include <time.h>
//-----------------------------------
class InterfaceUsuario
{
private:
	int Opcao;
	int Jogo[6];
	int Jogo2[15];
	int Acertos;
	string RegiaoSorteio;
	string DataSorteio;

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	void MostarMenu(void);
	void LerNumeroJogo(void);
	void LerNumeroJogo2(void);
	void setOpcao(int);
	int getOpcao(void);
	void setAcertos(int);
	void getJogo(int[]);
	void getJogo2(int[]);
	void gerarResultado(void);
	void mostrarRegiao(void);
	void setRegiaoSorteio(string);
	void mostrarData(void);
	void setDataSorteio(string);
};
//-----------------------------------
#endif
