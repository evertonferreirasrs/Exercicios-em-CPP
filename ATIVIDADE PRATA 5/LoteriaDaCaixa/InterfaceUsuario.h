#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//=============================================================================
#include <iostream>
using namespace std;
#include <string>
#include <time.h>


class InterfaceUsuario
{
private:
	int    Opcao;
	int    ApostaMegaSena[6];
	int    QuantidadeAcertos;
	int    ApostaLotoFacil[15];
	string RegiaoSorteada;
	string DataSorteada;

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int  mostrarMenu(void);
	void setQuantidadeAcertos(int);
	void mostrarResultado(void);
	void mostrarRegiao(void);
	void setRegiaoSorteada(string);
	void mostrarData(void);
	void setDataSorteada(string);
	
	void lerApostaMegaSena(void);
	void mostrarSorteioMegaSena(int[]);
	void getApostaMegaSena(int[]);
	
	void lerApostaLotoFacil(void);
	void mostrarSorteioLotoFacil(int[]);
	void getApostaLotoFacil(int[]);

	void mostrarApostaMegaSena(void);
	void mostrarApostaLotoFacil(void);

};
//=============================================================================
#endif
