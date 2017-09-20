#include "Controle.h"
//----------------------------------------
Controle::Controle()
{

}
//----------------------------------------
Controle::~Controle()
{

}
//----------------------------------------
void Controle::gerenciarExecucao()
{
	InterfaceUsuario iu;
	Negocio			 negocio;
	float			 Produtos[3] = { 0.0, 0.0, 0.0 };
	float			 VendaTotal = 0.0;

	iu.lerProduto(Produtos);
	VendaTotal = negocio.calcularVenda(Produtos);
	iu.mostrarTotalVendido(VendaTotal);
}
//---------------------------------------