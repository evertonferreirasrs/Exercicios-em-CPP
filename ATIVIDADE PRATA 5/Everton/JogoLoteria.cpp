#include "JogoLoteria.h"
//-----------------------------------------------------------------------
JogoLoteria::JogoLoteria()
{
	srand(time(NULL));
	
	QuantidadeAcertos = 0;

	Regiao     = "";
	Norte       = "Norte";
	Nordeste    = "Nordeste";
	Sudeste     = "Sudeste";
	CentroOeste = "Centro-Oeste";

	Data = "";
}
//-----------------------------------------------------------------------
JogoLoteria::~JogoLoteria()
{

}
//-----------------------------------------------------------------------
void JogoLoteria::setQuatidadeAcertos(int QuantidadeCertas)
{
	QuantidadeAcertos = QuantidadeCertas;
}
//-----------------------------------------------------------------------
int JogoLoteria::getQuantidadeAcertos(void)
{
	return QuantidadeAcertos;
}
//-----------------------------------------------------------------------
string JogoLoteria::getRegiao(void)
{
	return Regiao;
}
//-----------------------------------------------------------------------
void JogoLoteria::gerarRegiao(void)
{
	int Opcao;
	
		Opcao = rand() % 4 + 1;

		switch (Opcao)
		{
		case 1:
			Regiao = Norte;
			break;

		case 2:
			Regiao = Nordeste;
			break;

		case 3:
			Regiao = Sudeste;
			break;

		case 4:
			Regiao = CentroOeste;
			break;
		}
}
//-----------------------------------------------------------------------
void JogoLoteria::gerarData(void)
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

string JogoLoteria::getData(void)
{
	return Data;
}