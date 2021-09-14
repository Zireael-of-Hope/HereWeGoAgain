#pragma once

 namespace HereWeGoAgain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Choice
	/// </summary>
	public ref class Choice : public System::Windows::Forms::Form
	{
	public:
		Choice(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Choice()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_gameapp;
	private: System::Windows::Forms::Button^ button_tableapp;
	private: System::Windows::Forms::Button^ button_exit;




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Choice::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_gameapp = (gcnew System::Windows::Forms::Button());
			this->button_tableapp = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(452, 144);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 44);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Choose mode:";
			// 
			// button_gameapp
			// 
			this->button_gameapp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_gameapp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_gameapp->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_gameapp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_gameapp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_gameapp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_gameapp->ForeColor = System::Drawing::Color::White;
			this->button_gameapp->Location = System::Drawing::Point(460, 309);
			this->button_gameapp->Margin = System::Windows::Forms::Padding(2);
			this->button_gameapp->Name = L"button_gameapp";
			this->button_gameapp->Size = System::Drawing::Size(279, 76);
			this->button_gameapp->TabIndex = 1;
			this->button_gameapp->TabStop = false;
			this->button_gameapp->Text = L"Game";
			this->button_gameapp->UseVisualStyleBackColor = false;
			this->button_gameapp->Click += gcnew System::EventHandler(this, &Choice::button_gameapp_Click);
			this->button_gameapp->MouseEnter += gcnew System::EventHandler(this, &Choice::button_gameapp_MouseEnter);
			this->button_gameapp->MouseLeave += gcnew System::EventHandler(this, &Choice::button_gameapp_MouseLeave);
			// 
			// button_tableapp
			// 
			this->button_tableapp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_tableapp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_tableapp->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_tableapp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_tableapp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_tableapp->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_tableapp->ForeColor = System::Drawing::Color::White;
			this->button_tableapp->Location = System::Drawing::Point(460, 214);
			this->button_tableapp->Margin = System::Windows::Forms::Padding(2);
			this->button_tableapp->Name = L"button_tableapp";
			this->button_tableapp->Size = System::Drawing::Size(279, 76);
			this->button_tableapp->TabIndex = 0;
			this->button_tableapp->TabStop = false;
			this->button_tableapp->Text = L"Table";
			this->button_tableapp->UseVisualStyleBackColor = false;
			this->button_tableapp->Click += gcnew System::EventHandler(this, &Choice::button_tableapp_Click);
			this->button_tableapp->MouseEnter += gcnew System::EventHandler(this, &Choice::button_tableapp_MouseEnter);
			this->button_tableapp->MouseLeave += gcnew System::EventHandler(this, &Choice::button_tableapp_MouseLeave);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_exit->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(460, 405);
			this->button_exit->Margin = System::Windows::Forms::Padding(2);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(279, 76);
			this->button_exit->TabIndex = 0;
			this->button_exit->TabStop = false;
			this->button_exit->Text = L"Exit";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &Choice::button_exit_Click);
			this->button_exit->MouseEnter += gcnew System::EventHandler(this, &Choice::button_exit_MouseEnter);
			this->button_exit->MouseLeave += gcnew System::EventHandler(this, &Choice::button_exit_MouseLeave);
			// 
			// Choice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_gameapp);
			this->Controls->Add(this->button_tableapp);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Choice";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Telephone Network Customers";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Choice::Choice_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Choice::Choice_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Choice_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_tableapp_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_tableapp_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_gameapp_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_exit_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Choice_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void button_tableapp_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_gameapp_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_exit_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_gameapp_Click(System::Object^ sender, System::EventArgs^ e);
};
}
