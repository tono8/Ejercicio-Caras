#include "frmPrincipal.h"
#include "Windows.h"
using namespace pryTareaAcademica;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew frmPrincipal());
	return 0;
}