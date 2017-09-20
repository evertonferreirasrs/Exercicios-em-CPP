#include "SimuladorLoteria.h"

//=============================================================================
SimuladorLoteria::SimuladorLoteria()
{
	srand(time(NULL));
	
	QuantidadeCertas = 0;

	Regioes     = "";
	Norte       = "Norte";
	Nordeste    = "Nordeste";
	Sudeste     = "Sudeste";
	CentroOeste = "Centro-Oeste";

	Data = "";
}

//=============================================================================
SimuladorLoteria::~SimuladorLoteria()
{

}

//=============================================================================
void SimuladorLoteria::setQuatidadeCertas(int UmaQuantidadeAcertos)
{
	QuantidadeCertas = UmaQuantidadeAcertos;
}

//=============================================================================
int SimuladorLoteria::getQuantidadeCertas(void)
{
	return QuantidadeCertas;
}

//=============================================================================
string SimuladorLoteria::getRegioes(void)
{
	return Regioes;
}

//=============================================================================
void SimuladorLoteria::gerarRegioes(void)
{
	int Opcao;
	
		Opcao = rand() % 4 + 1;

		switch (Opcao)
		{
		case 1:
			Regioes = Norte;
			break;

		case 2:
			Regioes = Nordeste;
			break;

		case 3:
			Regioes = Sudeste;
			break;

		case 4:
			Regioes = CentroOeste;
			break;
		}
}

//=============================================================================
void SimuladorLoteria::gerarData(void)
{
	char DataAuxiliar[9];
	_strdate_s(DataAuxiliar);

	Data = DataAuxiliar[3];

	Data = Data + DataAuxiliar[4];
	Data = Data + "/";
	Data = Data + DataAuxiliar[0];
	Data = Data + DataAuxiliar[1];
	Data = Data + "/";
	Data = Data + DataAuxiliar[6];
	Data = Data + DataAuxiliar[7];
}

//=============================================================================
string SimuladorLoteria::getData(void)
{
	return Data;
}