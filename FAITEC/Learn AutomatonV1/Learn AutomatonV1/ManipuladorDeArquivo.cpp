#include "ManipuladorDeArquivo.h"

// ================================================================================================
ManipuladorDeArquivo::ManipuladorDeArquivo()
{

	Nome = "#########################";

}

// ================================================================================================
void ManipuladorDeArquivo::gravar(void){

	ofstream Arq;

	Arq.open("Ranking.txt",ios::app);
	Arq << Pontos << "#" << Nome << '\n';
	Arq.close();

}

// ================================================================================================
void ManipuladorDeArquivo::Ler(char Nome[25], int Acertos){

	string tmp;
	
	ifstream Arq;

	Arq.open("Ranking.txt",ios::beg);

	if (Arq.is_open()){

		while (getline(Arq, tmp,'#'));


		for (int index = 0; index < tmp.length(); ++index){

			Nome[index] = tmp[index];

		}
									
		while (getline(Arq, tmp));
		cout << tmp;

	}

	Arq.close();

}

// ================================================================================================
void ManipuladorDeArquivo::setNome(char N[]){

	int index = 0;

	while (N[index] != '#'){

		Nome.at(index) = N[index];
		++index;
	}

	cout << Nome;

}

// ================================================================================================
void ManipuladorDeArquivo::setPontos(int P){

	Pontos = P;
}

// ================================================================================================
void ManipuladorDeArquivo::getNome(string Retorno){

	Retorno = Nome;
}

// ================================================================================================
int ManipuladorDeArquivo::getPOntos(void){

	return Pontos;
}