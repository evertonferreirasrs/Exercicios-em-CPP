#ifndef PERGH
#define PERGH
// ================================================================================================
class Pergunta
{
public:
	Pergunta();
	 ~Pergunta();

	 void setNumeroDaPergunta(int);
	 void setRespostaCorreta(char);
	 void setTipoPergunta(int);
	 int  getNumeroDaPergunta(void);
	 int  getTipoPergunta(void);
	 char getRespostaCorreta(void);
	 int  getNumeroDeAlternativas(void);

private:

	int  NumeroDaPergunta;
	char RespostaCorreta;
	int  TipoPergunta;
	int  NumeroDeAlternativas;
};
// ================================================================================================
#endif