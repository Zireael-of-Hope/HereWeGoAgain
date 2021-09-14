#pragma once

namespace HereWeGoAgain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Start
	/// </summary>
	public ref class Start : public System::Windows::Forms::Form
	{
	public:
		Start(void)
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
		~Start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_presstostart;
	private: System::Windows::Forms::Label^ label1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Start::typeid));
			this->button_presstostart = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_presstostart
			// 
			this->button_presstostart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_presstostart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_presstostart->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_presstostart->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_presstostart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_presstostart->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_presstostart->ForeColor = System::Drawing::Color::White;
			this->button_presstostart->Location = System::Drawing::Point(482, 423);
			this->button_presstostart->Margin = System::Windows::Forms::Padding(2);
			this->button_presstostart->Name = L"button_presstostart";
			this->button_presstostart->Size = System::Drawing::Size(235, 58); 
			this->button_presstostart->TabIndex = 0;
			this->button_presstostart->Text = L"Press to start";
			this->button_presstostart->UseVisualStyleBackColor = false;
			this->button_presstostart->Click += gcnew System::EventHandler(this, &Start::button_presstostart_Click);
			this->button_presstostart->MouseEnter += gcnew System::EventHandler(this, &Start::button_presstostart_MouseEnter);
			this->button_presstostart->MouseLeave += gcnew System::EventHandler(this, &Start::button_presstostart_MouseLeave);
			this->button_presstostart->TabStop = false;

			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(314, 219);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(602, 88);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Software module development\r\n\"Telephone network Customers\"";
			// 
			// Start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_presstostart);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Telephone Network Customers";
			this->Load += gcnew System::EventHandler(this, &Start::Start_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Start_Load(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button_presstostart_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_presstostart_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_presstostart_MouseEnter(System::Object^ sender, System::EventArgs^ e);
};
}
