#include "frmInicio.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PI2021IIIP3EQUIPO1::frmInicio frm;
	Application::Run(% frm);
}
