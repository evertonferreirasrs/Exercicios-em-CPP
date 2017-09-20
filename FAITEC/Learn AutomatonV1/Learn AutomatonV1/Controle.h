#ifndef ControleH
#define ControleH
// ================================================================================================
#include "TelaPrincipal.h"

#include "ControlePerguntas.h"

#include "TelaSobre.h"

#include "TelaTeoria.h"

#include "TelaPergunta.h"

#include "TelaAFD.h"

#include "TelaRanking.h"

#include "TelaPontuacao.h"

#include "GerenciadorDeArquivo.h"


#include "ManipuladorDeJogadores.h"
// ================================================================================================
using namespace System;
using namespace System::Windows::Forms;
using namespace LearnAutomatonV1;
// ================================================================================================
class Controle
{
public:
	Controle();
    ~Controle();

	void controlarExecucao(void);
};
// ================================================================================================
#endif