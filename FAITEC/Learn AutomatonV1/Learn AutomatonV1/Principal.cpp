#include "Controle.h"

[STAThread]
// ================================================================================================

void Main(array<String^>^ args){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Controle c;
	c.controlarExecucao();
}