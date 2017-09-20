#include "InterfaceUsuario.h"

InterfaceUsuario::InterfaceUsuario()
{
	for (int i = 0; i < 4; ++i)
		Vertices[i] = 0.0;
}

InterfaceUsuario::~InterfaceUsuario()
{

}

void InterfaceUsuario::lerVertices(void)
{
	system("cls");

	cout << "Leitura do primeiro vertice (X1,Y1): " << endl << endl;

	cout << "Abcissa do vertice 1 (x1) = ";
	cin >> Vertices[0]; 
	cout << "Ordenada do vertice 1 (y1) = ";
	cin >> Vertices[1];

	cout << endl << "Leitura do segundo vertice (X2,Y2): " << endl << endl;
	cout << "Abcissa do vertice 2 (x2) = ";
	cin >> Vertices[2];
	cout << "Ordenada do vertice 2 (y2) = ";
	cin >> Vertices[3];
}

void InterfaceUsuario::getVertices(double VerticesAtuais[4])
{
	for (int i = 0; i < 4; ++i)
		VerticesAtuais[i] = Vertices[i];
}

void InterfaceUsuario::mostrarComprimento(double OComprimento)
{
	cout << endl << endl;
	cout << "Comprimento do segmento de reta = " << OComprimento << endl;
}