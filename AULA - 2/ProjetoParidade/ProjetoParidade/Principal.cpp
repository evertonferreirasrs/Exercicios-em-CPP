#include <iostream>
using namespace std;
#include <string>

class VerificadorDeParidade
{
private:
	int Inteiro;
	string Resposta;
public:
	VerificadorDeParidade();
	~VerificadorDeParidade();
	string verificarParidade(int);

};

int main(int argc, char *argv[])
{
	int UmValorInteiro = 0;
	string UmObjetoString = "";
	VerificadorDeParidade vdp;



	cout << "Digite um numero inteiro positivo ou zero: ";
	cin >> UmValorInteiro;

	UmObjetoString = vdp.verificarParidade(UmValorInteiro);

	cout << UmObjetoString << endl;
	return 0;
}

VerificadorDeParidade::VerificadorDeParidade()
{
	Inteiro = 0;
	Resposta = "";
}

VerificadorDeParidade::~VerificadorDeParidade()
{

}

string VerificadorDeParidade::verificarParidade(int UmInteiro)
{
	string UmaString = "";

	Inteiro = UmInteiro;

	if ((UmInteiro % 2) == 0)
		UmaString = "Eh par.";
	else
		UmaString = "Eh impar.";
	Resposta = UmaString;

	return Resposta;
}
