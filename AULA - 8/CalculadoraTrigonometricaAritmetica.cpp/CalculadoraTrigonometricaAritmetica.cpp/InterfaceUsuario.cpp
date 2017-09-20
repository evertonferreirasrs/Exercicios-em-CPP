#include "InterfaceUsuario.h"
//-----------------------------------------------
InterfaceUsuario::InterfaceUsuario()
{
	Opcao = 0;
	for (int i = 0; i < 2; ++i)
	Operandos[i] = 0.0;
	Angulo = 0.0;
	for (int i = 0; i < 3; ++i)
		ResultadoTrigonometricos[i] = 0.0;
	for (int i = 0; i < 4; ++i)
		ResultadoAritmeticos[i] = 0.0;
}
//-----------------------------------------------
InterfaceUsuario::~InterfaceUsuario()
{

}
//-----------------------------------------------
int InterfaceUsuario::lerDados(float OsDados[2])
{
	cout << " Escolha a Opcao: " << endl;
	cout << "1. Realizar Operacoes aritmeticas. " << endl;
	cout << "2. Realizar Operacoes trigonometrica." << endl;
	cout << "3. Realizar Operações com caracteres." << endl;
	cout << "4. Encerrar a execucao." << endl;
	cin >> Opcao;

	switch (Opcao)
	{
	case 1:
		lerOperandosAritmeticos(OsDados);
		OsDados[2] = 0.0;

	break;

	case 2:
		OsDados[2] = lerAngulo();
		OsDados[0] = 0.0;
		OsDados[1] = 0.0;
		break;

	default:
		cout << " Opcao Invalida! " << endl;
		break;
	}
	return Opcao;	
}
//-----------------------------------------------
void InterfaceUsuario::lerOperandosAritmeticos(float OsOperandos[2])
{
	cout << "Primeiro Operando: " << endl;
	cin >> Operandos[0];
	cout << "Primeiro Operando: " << endl;
	cin >> Operandos[1];

	for (int i = 0; i < 2; ++i)
		OsOperandos[i] = Operandos[i];
}
//-----------------------------------------------
float InterfaceUsuario::lerAngulo(void)
{
	cout << " Entre com o angulo: ";
	cin >> Angulo;
	return Angulo;

}
//-----------------------------------------------
void InterfaceUsuario::mostrarResultadosAritmeticos(float DadosAritmeticos[4])
{
	cout << " Resultado aritmeticos: " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Soma        =" << DadosAritmeticos[0] << endl;
	cout << "Subtracao       =" << DadosAritmeticos[1] << endl;
	cout << "Multiplicacao      =" << DadosAritmeticos[2] << endl;
	cout << "Divisao        =" << DadosAritmeticos[3] << endl;
	cout << "--------------------------------------------" << endl;

	for (int i = 0; i < 4; ++i)
		ResultadoAritmeticos[i] = DadosAritmeticos[i];

}
//-----------------------------------------------
void InterfaceUsuario::mostrarResultadosTrigonometricos(float DadosTrigonometrico[3])
{
	cout << " Resultado trigonometrico: " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Seno do angulo        =" << DadosTrigonometrico[0] << endl;
	cout << "Coseno do angulo       =" << DadosTrigonometrico[1] << endl;
	cout << "Tangente do angulo     =" << DadosTrigonometrico[2] << endl;
	cout << "--------------------------------------------" << endl;

	for (int i = 0; i < 4; ++i)
		ResultadoTrigonometricos[i] = DadosTrigonometrico[i];
}
//-----------------------------------------------