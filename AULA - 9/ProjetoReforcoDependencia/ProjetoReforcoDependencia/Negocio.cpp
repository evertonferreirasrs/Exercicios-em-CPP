#include "Negocio.h"
//--------------------------------------------
Negocio::Negocio()
{
	PrecoProduto[0] = (float)14.92;
	PrecoProduto[1] = (float)2.20;
	PrecoProduto[2] = (float)5.68;
}
//-------------------------------------------
Negocio::~Negocio()
{

}
//--------------------------------------------
float Negocio::calcularVenda(float QuantidadeVendida[3])
{
	float Total = 0.0;

	for (int i = 0; i < 3; ++i)
	{
		Total = Total + QuantidadeVendida[i] * PrecoProduto[i];
		//Total += QuantidadeVendida[i] + PrecoProduto[i];
	}

	return Total;
}