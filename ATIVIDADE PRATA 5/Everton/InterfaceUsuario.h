#ifndef InterfaceUsuarioH
#define InterfaceUsuarioH
//-----------------------------------------------------------------------
#include <iostream>
using namespace std;
#include <string>
#include <time.h>
//-----------------------------------------------------------------------
class InterfaceUsuario
{
private:
	int    Opcao;
	int    MegaSena[6];
	int    Acertos;
	int    LotoFacil[15];
	string RegiaoSorteio;
	string DataSorteio;

public:
	InterfaceUsuario();
	~InterfaceUsuario();
	int  mostrarMenu(void);
	void setAcertos(int);
	void mostrarResultado(void);
	void mostrarRegiao(void);
	void setRegiaoSorteada(string);
	void mostrarData(void);
	void setDataSorteio(string);	
	void lerMegaSena(void);
	void mostrarSorteioMegaSena(int[]);
	void getApostaMegaSena(int[]);	
	void lerLotoFacil(void);
	void mostrarSorteioLotoFacil(int[]);
	void getApostaLotoFacil(int[]);
	void mostrarApostaMegaSena(void);
	void mostrarApostaLotoFacil(void);
};
//-----------------------------------------------------------------------
#endif
