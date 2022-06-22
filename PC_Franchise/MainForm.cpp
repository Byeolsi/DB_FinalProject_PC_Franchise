#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	//AllocConsole();                 // Allocate console window
	//freopen("CONOUT$", "a", stderr); // Redirect stderr to console
	//freopen("CONOUT$", "a", stdout); // Redirect stdout also
	//freopen("CONIN$", "r", stdin);
	//SetConsoleTitleA("Test v.1.0");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PCFranchise::MainForm MainForm;
	Application::Run(%MainForm);
}