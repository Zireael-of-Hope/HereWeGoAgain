#include "Choice.h"
#include "Table.h"
#include "f1.h"


System::Void HereWeGoAgain::Choice::Choice_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void HereWeGoAgain::Choice::button_exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void HereWeGoAgain::Choice::button_tableapp_Click(System::Object^ sender, System::EventArgs^ e)
{
	Table^ p = gcnew Table();
	this->Hide();
	p->Show();
}

System::Void HereWeGoAgain::Choice::button_gameapp_Click(System::Object^ sender, System::EventArgs^ e)
{
	f1^ p1 = gcnew f1();
	this->Hide();
	p1->Show();
}

System::Void HereWeGoAgain::Choice::Choice_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	Application::Exit();
}

///
/// ¬ходы и выходы курсора на элменты
/// 
System::Void HereWeGoAgain::Choice::button_tableapp_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	this->button_tableapp->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Choice::button_gameapp_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	this->button_gameapp->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Choice::button_exit_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
	this->button_exit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Choice::button_tableapp_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	this->button_tableapp->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Choice::button_gameapp_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	this->button_gameapp->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Choice::button_exit_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	this->button_exit->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

