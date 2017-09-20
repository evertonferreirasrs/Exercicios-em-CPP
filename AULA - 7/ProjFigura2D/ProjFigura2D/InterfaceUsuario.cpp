#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	Opcao = 0.0;
	Raio = 0.0;
}

InterfaceUsuario::~InterfaceUsuario()
{
}

int InterfaceUsuario::mostrarMenu()
{
	int AOpcao;
	
	cout << "Escolha uma opção :" << endl;
	cout << "1.	Circulo" << endl;
	cout << "2. Retangulo" << endl;
	cout << "3.	Triangulo" << endl;
	cout << "4.	Sair" << endl;
	cout << "Opcao: ";
	cin  >> AOpcao;
	
	Opcao = AOpcao;
	
	return Opcao;
}

double InterfaceUsuario::MostrarRaio(void)
{
	cout << "Entre com o valor do Raio: " << endl;
	cin >> Raio;

}