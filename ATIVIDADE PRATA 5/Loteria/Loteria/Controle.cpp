#include "Controle.h"

//-----------------------------------
Controle::Controle()
{

}
//-----------------------------------
Controle::~Controle()
{

}
//-----------------------------------
void Controle::controlarExecucao()
{
	InterfaceUsuario iu;
	MegaSena m;
	Lotofacil l;
	int Aposta[6] = { 0, 0, 0, 0, 0, 0 };
	int Aposta2[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	do
	{
		iu.MostarMenu();
		if (iu.getOpcao() != 3)
		{
			if (iu.getOpcao() == 1)
			{
				iu.LerNumeroJogo();
			}
			else if (iu.getOpcao() == 2)
			{
				iu.LerNumeroJogo2();
			}
		}

		switch (iu.getOpcao())
		{
		case 1:
			iu.getJogo(Aposta);
			m.setJogo(Aposta);
			m.gerarJogo();			
			m.gerarResultado();
			iu.setAcertos(m.getAcertos());

			
			break;
		case 2:
			iu.getJogo2(Aposta2);
			l.setJogo(Aposta2);
			l.gerarJogo();
			l.gerarResultado();
			iu.setAcertos(l.getAcertos());
			break;
		}
		if (iu.getOpcao() != 3)
		{
			iu.gerarResultado();
		}

	} while (iu.getOpcao() != 3);
}
//-----------------------------------