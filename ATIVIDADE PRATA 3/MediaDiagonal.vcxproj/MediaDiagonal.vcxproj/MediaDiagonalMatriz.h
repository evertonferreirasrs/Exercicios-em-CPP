#include <iostream>
using namespace std;
#include <string>
#include <ctime>

//---------------------------------------------------------------------------------
class MediaMatrizDiagonal
{
private:
	float Matriz[10][10],
		  Media;
public:
	MediaMatrizDiagonal();
	~MediaMatrizDiagonal();
	void criarMatriz(float[10][10]);
	float calcularMedia(float [10][10]);
};

