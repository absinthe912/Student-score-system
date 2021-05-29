#include "MainForm.h"
using namespace Student_Score_System;
[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Student_Score_System::MainForm form;
	Application::Run(% form);
}