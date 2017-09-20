//Everton Aparecido Ferreira
#include <iostream>
#include <string>
using namespace std;

class Arvore
{
private:
	string Nome;
	float Altura;
	float Idade;

public:
	Arvore();
	~Arvore();
};

int main(int argc, char *argv[])
{
	Arvore a1, a2;

	return 0;
}

Arvore::Arvore()
{
	Nome = "";
	Altura = 0.0;
	Idade = 0.0;

	cout << "Passando pelo metodo construtor de Arvore" << endl;
}

Arvore::~Arvore()
{
	cout << "Passando pelo metodo destrutor de Arvore" << endl;
}