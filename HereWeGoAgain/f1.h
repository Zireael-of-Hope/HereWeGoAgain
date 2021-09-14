#pragma once

namespace HereWeGoAgain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ f1
	/// </summary>
	public ref class f1 : public System::Windows::Forms::Form
	{
	public:
		f1(void)
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
		~f1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox_lights_out;
	private: System::Windows::Forms::PictureBox^ pictureBox_full_lights;
	private: System::Windows::Forms::PictureBox^ pictureBox_four_lights;
	private: System::Windows::Forms::PictureBox^ pictureBox_three_lights;
	private: System::Windows::Forms::PictureBox^ pictureBox_two_lights;
	private: System::Windows::Forms::PictureBox^ pictureBox_one_light;
	private: System::Windows::Forms::Label^ label_game_info;
	private: System::Windows::Forms::Label^ label_time_result;
	private: System::Windows::Forms::Button^ button_back;
	private: System::Windows::Forms::Label^ label_you_best;
	private: System::Windows::Forms::Label^ label_yor_best_result;

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(f1::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox_lights_out = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_full_lights = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_four_lights = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_three_lights = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_two_lights = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_one_light = (gcnew System::Windows::Forms::PictureBox());
			this->label_game_info = (gcnew System::Windows::Forms::Label());
			this->label_time_result = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->label_you_best = (gcnew System::Windows::Forms::Label());
			this->label_yor_best_result = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_lights_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_full_lights))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_four_lights))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_three_lights))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_two_lights))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_one_light))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &f1::timer1_Tick);
			// 
			// pictureBox_lights_out
			// 
			this->pictureBox_lights_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_lights_out.Image")));
			this->pictureBox_lights_out->Location = System::Drawing::Point(280, 10);
			this->pictureBox_lights_out->Name = L"pictureBox_lights_out";
			this->pictureBox_lights_out->Size = System::Drawing::Size(640, 437);
			this->pictureBox_lights_out->TabIndex = 0;
			this->pictureBox_lights_out->TabStop = false;
			// 
			// pictureBox_full_lights
			// 
			this->pictureBox_full_lights->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_full_lights.Image")));
			this->pictureBox_full_lights->Location = System::Drawing::Point(280, 10);
			this->pictureBox_full_lights->Name = L"pictureBox_full_lights";
			this->pictureBox_full_lights->Size = System::Drawing::Size(640, 437);
			this->pictureBox_full_lights->TabIndex = 1;
			this->pictureBox_full_lights->TabStop = false;
			// 
			// pictureBox_four_lights
			// 
			this->pictureBox_four_lights->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_four_lights.Image")));
			this->pictureBox_four_lights->Location = System::Drawing::Point(280, 10);
			this->pictureBox_four_lights->Name = L"pictureBox_four_lights";
			this->pictureBox_four_lights->Size = System::Drawing::Size(640, 437);
			this->pictureBox_four_lights->TabIndex = 2;
			this->pictureBox_four_lights->TabStop = false;
			// 
			// pictureBox_three_lights
			// 
			this->pictureBox_three_lights->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_three_lights.Image")));
			this->pictureBox_three_lights->Location = System::Drawing::Point(280, 10);
			this->pictureBox_three_lights->Name = L"pictureBox_three_lights";
			this->pictureBox_three_lights->Size = System::Drawing::Size(640, 437);
			this->pictureBox_three_lights->TabIndex = 3;
			this->pictureBox_three_lights->TabStop = false;
			// 
			// pictureBox_two_lights
			// 
			this->pictureBox_two_lights->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_two_lights.Image")));
			this->pictureBox_two_lights->Location = System::Drawing::Point(280, 10);
			this->pictureBox_two_lights->Name = L"pictureBox_two_lights";
			this->pictureBox_two_lights->Size = System::Drawing::Size(640, 437);
			this->pictureBox_two_lights->TabIndex = 4;
			this->pictureBox_two_lights->TabStop = false;
			// 
			// pictureBox_one_light
			// 
			this->pictureBox_one_light->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_one_light.Image")));
			this->pictureBox_one_light->Location = System::Drawing::Point(280, 10);
			this->pictureBox_one_light->Name = L"pictureBox_one_light";
			this->pictureBox_one_light->Size = System::Drawing::Size(640, 437);
			this->pictureBox_one_light->TabIndex = 5;
			this->pictureBox_one_light->TabStop = false;
			// 
			// label_game_info
			// 
			this->label_game_info->AutoSize = true;
			this->label_game_info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_game_info->Location = System::Drawing::Point(220, 450);
			this->label_game_info->Name = L"label_game_info";
			this->label_game_info->Size = System::Drawing::Size(758, 23);
			this->label_game_info->TabIndex = 6;
			this->label_game_info->Text = L"Tap Space when you\'re ready to race, then tap again when the lights go out.\r\n";
			// 
			// label_time_result
			// 
			this->label_time_result->AutoSize = true;
			this->label_time_result->BackColor = System::Drawing::Color::Transparent;
			this->label_time_result->Font = (gcnew System::Drawing::Font(L"Arial", 80.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_time_result->Location = System::Drawing::Point(419, 482);
			this->label_time_result->Name = L"label_time_result";
			this->label_time_result->Size = System::Drawing::Size(380, 119);
			this->label_time_result->TabIndex = 7;
			this->label_time_result->Text = L"00.000";
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_back->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 12.25F));
			this->button_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_back->Location = System::Drawing::Point(12, 10);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(36, 34);
			this->button_back->TabIndex = 8;
			this->button_back->TabStop = false;
			this->button_back->Text = L"<";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &f1::button_back_Click);
			this->button_back->MouseEnter += gcnew System::EventHandler(this, &f1::button_back_MouseEnter);
			this->button_back->MouseLeave += gcnew System::EventHandler(this, &f1::button_back_MouseLeave);
			// 
			// label_you_best
			// 
			this->label_you_best->AutoSize = true;
			this->label_you_best->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_you_best->Location = System::Drawing::Point(514, 606);
			this->label_you_best->Name = L"label_you_best";
			this->label_you_best->Size = System::Drawing::Size(107, 46);
			this->label_you_best->TabIndex = 9;
			this->label_you_best->Text = L"Your best:\r\n\r\n";
			// 
			// label_yor_best_result
			// 
			this->label_yor_best_result->AutoSize = true;
			this->label_yor_best_result->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_yor_best_result->Location = System::Drawing::Point(618, 607);
			this->label_yor_best_result->Name = L"label_yor_best_result";
			this->label_yor_best_result->Size = System::Drawing::Size(70, 23);
			this->label_yor_best_result->TabIndex = 10;
			this->label_yor_best_result->Text = L"00.000";
			// 
			// f1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->label_yor_best_result);
			this->Controls->Add(this->label_you_best);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label_game_info);
			this->Controls->Add(this->pictureBox_full_lights);
			this->Controls->Add(this->pictureBox_lights_out);
			this->Controls->Add(this->label_time_result);
			this->Controls->Add(this->pictureBox_one_light);
			this->Controls->Add(this->pictureBox_two_lights);
			this->Controls->Add(this->pictureBox_three_lights);
			this->Controls->Add(this->pictureBox_four_lights);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"f1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"F1 Reaction Test";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &f1::f1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &f1::f1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &f1::f1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_lights_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_full_lights))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_four_lights))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_three_lights))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_two_lights))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_one_light))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void f1_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void f1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void f1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void button_back_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_back_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);

	private: void ConvertChronoToLine();
	private: void RecordSaver(char*);
	};
}
