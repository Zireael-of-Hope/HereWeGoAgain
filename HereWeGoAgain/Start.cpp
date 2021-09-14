#include "Start.h"
#include "Choice.h"
#include <Windows.h>

using namespace HereWeGoAgain; // Название проекта
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Start);
	return 0;
}

System::Void HereWeGoAgain::Start::button_presstostart_Click(System::Object^ sender, System::EventArgs^ e)
{
	Choice^ p = gcnew Choice();
	this->Hide();
	p->Show();
}

System::Void HereWeGoAgain::Start::button_presstostart_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	this->button_presstostart->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Start::button_presstostart_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	this->button_presstostart->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}
