#pragma once

namespace HereWeGoAgain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Table
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public:
		Table(void)
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
		~Table()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_table;
	protected:

	private: System::Windows::Forms::Button^ button_open;
	private: System::Windows::Forms::Button^ button_back;
	private: System::Windows::Forms::Button^ button_search;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button_save;

	private: System::Windows::Forms::Button^ button_edit;
	private: System::Windows::Forms::Button^ button_edit_add_row;
	private: System::Windows::Forms::Button^ button_edit_delete_row;
	private: System::Windows::Forms::Label^ label_if_table_exists;
	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::Windows::Forms::Button^ button_edit_back;
	private: System::Windows::Forms::Button^ button_edit_add_raw_end;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::Label^ label_address;
	private: System::Windows::Forms::Label^ label_type;
	private: System::Windows::Forms::Label^ label_date;
	private: System::Windows::Forms::Label^ label_number;
	private: System::Windows::Forms::Label^ label_name;

	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::Button^ button_search_search;
	private: System::Windows::Forms::Button^ button_search_back;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_type;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_number;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_date;
	private: System::Windows::Forms::Button^ button_edit_info;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ row_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ address;

	private: System::ComponentModel::IContainer^ components;

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Table::typeid));
			this->main_table = (gcnew System::Windows::Forms::DataGridView());
			this->row_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_open = (gcnew System::Windows::Forms::Button());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->button_search = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->maskedTextBox_date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_number = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label_address = (gcnew System::Windows::Forms::Label());
			this->label_date = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_number = (gcnew System::Windows::Forms::Label());
			this->button_edit_add_raw_end = (gcnew System::Windows::Forms::Button());
			this->button_edit_add_row = (gcnew System::Windows::Forms::Button());
			this->label_type = (gcnew System::Windows::Forms::Label());
			this->button_edit_info = (gcnew System::Windows::Forms::Button());
			this->button_edit_delete_row = (gcnew System::Windows::Forms::Button());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox_type = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_edit = (gcnew System::Windows::Forms::Button());
			this->button_search_back = (gcnew System::Windows::Forms::Button());
			this->button_search_search = (gcnew System::Windows::Forms::Button());
			this->button_edit_back = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label_if_table_exists = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_table
			// 
			this->main_table->AllowUserToAddRows = false;
			this->main_table->AllowUserToDeleteRows = false;
			this->main_table->AllowUserToResizeColumns = false;
			this->main_table->AllowUserToResizeRows = false;
			this->main_table->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->main_table->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->main_table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->main_table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->main_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->main_table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->row_number,
					this->name, this->phone_number, this->date, this->type, this->address
			});
			this->main_table->Enabled = false;
			this->main_table->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->main_table->Location = System::Drawing::Point(283, 36);
			this->main_table->Margin = System::Windows::Forms::Padding(2);
			this->main_table->Name = L"main_table";
			this->main_table->RowHeadersVisible = false;
			this->main_table->RowHeadersWidth = 35;
			this->main_table->RowTemplate->Height = 28;
			this->main_table->Size = System::Drawing::Size(879, 578);
			this->main_table->TabIndex = 0;
			this->main_table->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Table::main_table_CellClick);
			this->main_table->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Table::main_table_CellValueChanged);
			// 
			// row_number
			// 
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::Gold;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			this->row_number->DefaultCellStyle = dataGridViewCellStyle2;
			this->row_number->Frozen = true;
			this->row_number->HeaderText = L"є";
			this->row_number->MinimumWidth = 8;
			this->row_number->Name = L"row_number";
			this->row_number->ReadOnly = true;
			this->row_number->Width = 35;
			// 
			// name
			// 
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			this->name->DefaultCellStyle = dataGridViewCellStyle3;
			this->name->Frozen = true;
			this->name->HeaderText = L"Name";
			this->name->MaxInputLength = 30;
			this->name->MinimumWidth = 8;
			this->name->Name = L"name";
			this->name->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->name->Width = 210;
			// 
			// phone_number
			// 
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			this->phone_number->DefaultCellStyle = dataGridViewCellStyle4;
			this->phone_number->Frozen = true;
			this->phone_number->HeaderText = L"Phone Number";
			this->phone_number->MaxInputLength = 8;
			this->phone_number->MinimumWidth = 8;
			this->phone_number->Name = L"phone_number";
			this->phone_number->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->phone_number->Width = 160;
			// 
			// date
			// 
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->date->DefaultCellStyle = dataGridViewCellStyle5;
			this->date->Frozen = true;
			this->date->HeaderText = L"Installation Date";
			this->date->MaxInputLength = 10;
			this->date->MinimumWidth = 8;
			this->date->Name = L"date";
			this->date->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->date->Width = 160;
			// 
			// type
			// 
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			this->type->DefaultCellStyle = dataGridViewCellStyle6;
			this->type->Frozen = true;
			this->type->HeaderText = L"Payment Type";
			this->type->MaxInputLength = 1;
			this->type->MinimumWidth = 8;
			this->type->Name = L"type";
			this->type->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->type->Width = 54;
			// 
			// address
			// 
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::Color::Black;
			this->address->DefaultCellStyle = dataGridViewCellStyle7;
			this->address->Frozen = true;
			this->address->HeaderText = L"Address";
			this->address->MaxInputLength = 30;
			this->address->MinimumWidth = 8;
			this->address->Name = L"address";
			this->address->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->address->Width = 258;
			// 
			// button_open
			// 
			this->button_open->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_open->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_open->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_open->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_open->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_open->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_open->ForeColor = System::Drawing::Color::White;
			this->button_open->Location = System::Drawing::Point(28, 32);
			this->button_open->Margin = System::Windows::Forms::Padding(2);
			this->button_open->Name = L"button_open";
			this->button_open->Size = System::Drawing::Size(193, 70);
			this->button_open->TabIndex = 1;
			this->button_open->TabStop = false;
			this->button_open->Text = L"Open";
			this->button_open->UseVisualStyleBackColor = false;
			this->button_open->Click += gcnew System::EventHandler(this, &Table::button_open_Click);
			this->button_open->MouseEnter += gcnew System::EventHandler(this, &Table::button_open_MouseEnter);
			this->button_open->MouseLeave += gcnew System::EventHandler(this, &Table::button_open_MouseLeave);
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_back->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_back->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_back->ForeColor = System::Drawing::Color::White;
			this->button_back->Location = System::Drawing::Point(28, 381);
			this->button_back->Margin = System::Windows::Forms::Padding(2);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(193, 70);
			this->button_back->TabIndex = 1;
			this->button_back->TabStop = false;
			this->button_back->Text = L"Back";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &Table::button_back_Click);
			this->button_back->MouseEnter += gcnew System::EventHandler(this, &Table::button_back_MouseEnter);
			this->button_back->MouseLeave += gcnew System::EventHandler(this, &Table::button_back_MouseLeave);
			// 
			// button_search
			// 
			this->button_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_search->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_search->ForeColor = System::Drawing::Color::White;
			this->button_search->Location = System::Drawing::Point(28, 293);
			this->button_search->Margin = System::Windows::Forms::Padding(2);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(193, 70);
			this->button_search->TabIndex = 1;
			this->button_search->TabStop = false;
			this->button_search->Text = L"Search";
			this->button_search->UseVisualStyleBackColor = false;
			this->button_search->Click += gcnew System::EventHandler(this, &Table::button_search_Click);
			this->button_search->MouseEnter += gcnew System::EventHandler(this, &Table::button_search_MouseEnter);
			this->button_search->MouseLeave += gcnew System::EventHandler(this, &Table::button_search_MouseLeave);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->maskedTextBox_date);
			this->groupBox1->Controls->Add(this->maskedTextBox_number);
			this->groupBox1->Controls->Add(this->label_address);
			this->groupBox1->Controls->Add(this->label_date);
			this->groupBox1->Controls->Add(this->textBox_name);
			this->groupBox1->Controls->Add(this->label_name);
			this->groupBox1->Controls->Add(this->label_number);
			this->groupBox1->Controls->Add(this->button_edit_add_raw_end);
			this->groupBox1->Controls->Add(this->button_edit_add_row);
			this->groupBox1->Controls->Add(this->label_type);
			this->groupBox1->Controls->Add(this->button_edit_info);
			this->groupBox1->Controls->Add(this->button_edit_delete_row);
			this->groupBox1->Controls->Add(this->button_search);
			this->groupBox1->Controls->Add(this->textBox_address);
			this->groupBox1->Controls->Add(this->maskedTextBox_type);
			this->groupBox1->Controls->Add(this->button_save);
			this->groupBox1->Controls->Add(this->button_edit);
			this->groupBox1->Controls->Add(this->button_open);
			this->groupBox1->Controls->Add(this->button_search_back);
			this->groupBox1->Controls->Add(this->button_search_search);
			this->groupBox1->Controls->Add(this->button_back);
			this->groupBox1->Controls->Add(this->button_edit_back);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Bold));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(19, 29);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(246, 585);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Actions";
			// 
			// maskedTextBox_date
			// 
			this->maskedTextBox_date->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->maskedTextBox_date->ForeColor = System::Drawing::Color::White;
			this->maskedTextBox_date->Location = System::Drawing::Point(28, 183);
			this->maskedTextBox_date->Mask = L"0000";
			this->maskedTextBox_date->Name = L"maskedTextBox_date";
			this->maskedTextBox_date->Size = System::Drawing::Size(193, 24);
			this->maskedTextBox_date->TabIndex = 4;
			this->maskedTextBox_date->Visible = false;
			this->maskedTextBox_date->TextChanged += gcnew System::EventHandler(this, &Table::maskedTextBox_date_TextChanged);
			this->maskedTextBox_date->MouseHover += gcnew System::EventHandler(this, &Table::maskedTextBox_date_MouseHover);
			// 
			// maskedTextBox_number
			// 
			this->maskedTextBox_number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->maskedTextBox_number->ForeColor = System::Drawing::Color::White;
			this->maskedTextBox_number->Location = System::Drawing::Point(28, 113);
			this->maskedTextBox_number->Mask = L"000-0000";
			this->maskedTextBox_number->Name = L"maskedTextBox_number";
			this->maskedTextBox_number->Size = System::Drawing::Size(193, 24);
			this->maskedTextBox_number->TabIndex = 6;
			this->maskedTextBox_number->Visible = false;
			this->maskedTextBox_number->TextChanged += gcnew System::EventHandler(this, &Table::maskedTextBox_number_TextChanged);
			// 
			// label_address
			// 
			this->label_address->AutoSize = true;
			this->label_address->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label_address->Location = System::Drawing::Point(92, 293);
			this->label_address->Name = L"label_address";
			this->label_address->Size = System::Drawing::Size(61, 17);
			this->label_address->TabIndex = 11;
			this->label_address->Text = L"Address";
			this->label_address->Visible = false;
			// 
			// label_date
			// 
			this->label_date->AutoSize = true;
			this->label_date->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label_date->Location = System::Drawing::Point(65, 153);
			this->label_date->Name = L"label_date";
			this->label_date->Size = System::Drawing::Size(116, 17);
			this->label_date->TabIndex = 9;
			this->label_date->Text = L"Installation date";
			this->label_date->Visible = false;
			// 
			// textBox_name
			// 
			this->textBox_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_name->ForeColor = System::Drawing::Color::White;
			this->textBox_name->Location = System::Drawing::Point(28, 43);
			this->textBox_name->MaxLength = 30;
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(193, 24);
			this->textBox_name->TabIndex = 5;
			this->textBox_name->Visible = false;
			this->textBox_name->TextChanged += gcnew System::EventHandler(this, &Table::textBox_name_TextChanged);
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(98, 13);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(50, 17);
			this->label_name->TabIndex = 7;
			this->label_name->Text = L"Name";
			this->label_name->Visible = false;
			// 
			// label_number
			// 
			this->label_number->AutoSize = true;
			this->label_number->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label_number->Location = System::Drawing::Point(72, 83);
			this->label_number->Name = L"label_number";
			this->label_number->Size = System::Drawing::Size(106, 17);
			this->label_number->TabIndex = 8;
			this->label_number->Text = L"Phone number";
			this->label_number->Visible = false;
			// 
			// button_edit_add_raw_end
			// 
			this->button_edit_add_raw_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_edit_add_raw_end->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_edit_add_raw_end->Enabled = false;
			this->button_edit_add_raw_end->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_edit_add_raw_end->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_edit_add_raw_end->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit_add_raw_end->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_edit_add_raw_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_edit_add_raw_end->Location = System::Drawing::Point(28, 32);
			this->button_edit_add_raw_end->Margin = System::Windows::Forms::Padding(2);
			this->button_edit_add_raw_end->Name = L"button_edit_add_raw_end";
			this->button_edit_add_raw_end->Size = System::Drawing::Size(193, 70);
			this->button_edit_add_raw_end->TabIndex = 1;
			this->button_edit_add_raw_end->TabStop = false;
			this->button_edit_add_raw_end->Text = L"Add Row";
			this->button_edit_add_raw_end->UseVisualStyleBackColor = false;
			this->button_edit_add_raw_end->Visible = false;
			this->button_edit_add_raw_end->Click += gcnew System::EventHandler(this, &Table::button_edit_add_raw_end_Click);
			this->button_edit_add_raw_end->MouseEnter += gcnew System::EventHandler(this, &Table::button_edit_add_raw_end_MouseEnter);
			this->button_edit_add_raw_end->MouseLeave += gcnew System::EventHandler(this, &Table::button_edit_add_raw_end_MouseLeave);
			this->button_edit_add_raw_end->MouseHover += gcnew System::EventHandler(this, &Table::button_edit_add_raw_end_MouseHover);
			// 
			// button_edit_add_row
			// 
			this->button_edit_add_row->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_edit_add_row->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_edit_add_row->Enabled = false;
			this->button_edit_add_row->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_edit_add_row->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_edit_add_row->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit_add_row->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_edit_add_row->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_edit_add_row->Location = System::Drawing::Point(28, 119);
			this->button_edit_add_row->Margin = System::Windows::Forms::Padding(2);
			this->button_edit_add_row->Name = L"button_edit_add_row";
			this->button_edit_add_row->Size = System::Drawing::Size(193, 70);
			this->button_edit_add_row->TabIndex = 1;
			this->button_edit_add_row->TabStop = false;
			this->button_edit_add_row->Text = L"Insert Row";
			this->button_edit_add_row->UseVisualStyleBackColor = false;
			this->button_edit_add_row->Visible = false;
			this->button_edit_add_row->Click += gcnew System::EventHandler(this, &Table::button_edit_add_row_Click);
			this->button_edit_add_row->MouseEnter += gcnew System::EventHandler(this, &Table::button_edit_add_row_MouseEnter);
			this->button_edit_add_row->MouseLeave += gcnew System::EventHandler(this, &Table::button_edit_add_row_MouseLeave);
			this->button_edit_add_row->MouseHover += gcnew System::EventHandler(this, &Table::button_edit_add_row_MouseHover);
			// 
			// label_type
			// 
			this->label_type->AutoSize = true;
			this->label_type->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->label_type->Location = System::Drawing::Point(72, 223);
			this->label_type->Name = L"label_type";
			this->label_type->Size = System::Drawing::Size(102, 17);
			this->label_type->TabIndex = 10;
			this->label_type->Text = L"Payment Type";
			this->label_type->Visible = false;
			// 
			// button_edit_info
			// 
			this->button_edit_info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_edit_info->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_edit_info->Enabled = false;
			this->button_edit_info->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_edit_info->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_edit_info->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit_info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_edit_info->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_edit_info->Location = System::Drawing::Point(28, 293);
			this->button_edit_info->Margin = System::Windows::Forms::Padding(2);
			this->button_edit_info->Name = L"button_edit_info";
			this->button_edit_info->Size = System::Drawing::Size(193, 70);
			this->button_edit_info->TabIndex = 1;
			this->button_edit_info->TabStop = false;
			this->button_edit_info->Text = L"Info";
			this->button_edit_info->UseVisualStyleBackColor = false;
			this->button_edit_info->Visible = false;
			this->button_edit_info->Click += gcnew System::EventHandler(this, &Table::button_edit_info_Click);
			this->button_edit_info->MouseEnter += gcnew System::EventHandler(this, &Table::button_edit_info_MouseEnter);
			this->button_edit_info->MouseLeave += gcnew System::EventHandler(this, &Table::button_edit_info_MouseLeave);
			// 
			// button_edit_delete_row
			// 
			this->button_edit_delete_row->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_edit_delete_row->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_edit_delete_row->Enabled = false;
			this->button_edit_delete_row->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_edit_delete_row->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_edit_delete_row->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit_delete_row->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_edit_delete_row->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_edit_delete_row->Location = System::Drawing::Point(28, 206);
			this->button_edit_delete_row->Margin = System::Windows::Forms::Padding(2);
			this->button_edit_delete_row->Name = L"button_edit_delete_row";
			this->button_edit_delete_row->Size = System::Drawing::Size(193, 70);
			this->button_edit_delete_row->TabIndex = 1;
			this->button_edit_delete_row->TabStop = false;
			this->button_edit_delete_row->Text = L"Delete Row";
			this->button_edit_delete_row->UseVisualStyleBackColor = false;
			this->button_edit_delete_row->Visible = false;
			this->button_edit_delete_row->Click += gcnew System::EventHandler(this, &Table::button_edit_delete_row_Click);
			this->button_edit_delete_row->MouseEnter += gcnew System::EventHandler(this, &Table::button_edit_delete_row_MouseEnter);
			this->button_edit_delete_row->MouseLeave += gcnew System::EventHandler(this, &Table::button_edit_delete_row_MouseLeave);
			this->button_edit_delete_row->MouseHover += gcnew System::EventHandler(this, &Table::button_edit_delete_row_MouseHover);
			// 
			// textBox_address
			// 
			this->textBox_address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_address->ForeColor = System::Drawing::Color::White;
			this->textBox_address->Location = System::Drawing::Point(28, 323);
			this->textBox_address->MaxLength = 30;
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(193, 24);
			this->textBox_address->TabIndex = 2;
			this->textBox_address->Visible = false;
			this->textBox_address->TextChanged += gcnew System::EventHandler(this, &Table::textBox_address_TextChanged);
			// 
			// maskedTextBox_type
			// 
			this->maskedTextBox_type->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->maskedTextBox_type->ForeColor = System::Drawing::Color::White;
			this->maskedTextBox_type->Location = System::Drawing::Point(28, 253);
			this->maskedTextBox_type->Mask = L"0";
			this->maskedTextBox_type->Name = L"maskedTextBox_type";
			this->maskedTextBox_type->Size = System::Drawing::Size(193, 24);
			this->maskedTextBox_type->TabIndex = 3;
			this->maskedTextBox_type->Visible = false;
			this->maskedTextBox_type->TextChanged += gcnew System::EventHandler(this, &Table::maskedTextBox_type_TextChanged);
			// 
			// button_save
			// 
			this->button_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_save->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_save->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_save->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_save->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_save->ForeColor = System::Drawing::Color::White;
			this->button_save->Location = System::Drawing::Point(28, 206);
			this->button_save->Margin = System::Windows::Forms::Padding(2);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(193, 70);
			this->button_save->TabIndex = 1;
			this->button_save->TabStop = false;
			this->button_save->Text = L"Save";
			this->button_save->UseVisualStyleBackColor = false;
			this->button_save->Click += gcnew System::EventHandler(this, &Table::button_save_Click);
			this->button_save->MouseEnter += gcnew System::EventHandler(this, &Table::button_save_MouseEnter);
			this->button_save->MouseLeave += gcnew System::EventHandler(this, &Table::button_save_MouseLeave);
			// 
			// button_edit
			// 
			this->button_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_edit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_edit->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_edit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_edit->ForeColor = System::Drawing::Color::White;
			this->button_edit->Location = System::Drawing::Point(28, 119);
			this->button_edit->Margin = System::Windows::Forms::Padding(2);
			this->button_edit->Name = L"button_edit";
			this->button_edit->Size = System::Drawing::Size(193, 70);
			this->button_edit->TabIndex = 1;
			this->button_edit->TabStop = false;
			this->button_edit->Text = L"Edit";
			this->button_edit->UseVisualStyleBackColor = false;
			this->button_edit->Click += gcnew System::EventHandler(this, &Table::button_edit_Click);
			this->button_edit->MouseEnter += gcnew System::EventHandler(this, &Table::button_edit_MouseEnter);
			this->button_edit->MouseLeave += gcnew System::EventHandler(this, &Table::button_edit_MouseLeave);
			// 
			// button_search_back
			// 
			this->button_search_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_search_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_search_back->Enabled = false;
			this->button_search_back->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_search_back->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_search_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_search_back->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_search_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_search_back->Location = System::Drawing::Point(28, 468);
			this->button_search_back->Margin = System::Windows::Forms::Padding(2);
			this->button_search_back->Name = L"button_search_back";
			this->button_search_back->Size = System::Drawing::Size(193, 70);
			this->button_search_back->TabIndex = 1;
			this->button_search_back->TabStop = false;
			this->button_search_back->Text = L"Back";
			this->button_search_back->UseVisualStyleBackColor = false;
			this->button_search_back->Visible = false;
			this->button_search_back->Click += gcnew System::EventHandler(this, &Table::button_search_back_Click);
			this->button_search_back->MouseEnter += gcnew System::EventHandler(this, &Table::button_search_back_MouseEnter);
			this->button_search_back->MouseLeave += gcnew System::EventHandler(this, &Table::button_search_back_MouseLeave);
			// 
			// button_search_search
			// 
			this->button_search_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_search_search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_search_search->Enabled = false;
			this->button_search_search->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_search_search->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_search_search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_search_search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_search_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_search_search->Location = System::Drawing::Point(28, 381);
			this->button_search_search->Margin = System::Windows::Forms::Padding(2);
			this->button_search_search->Name = L"button_search_search";
			this->button_search_search->Size = System::Drawing::Size(193, 70);
			this->button_search_search->TabIndex = 1;
			this->button_search_search->TabStop = false;
			this->button_search_search->Text = L"Search";
			this->button_search_search->UseVisualStyleBackColor = false;
			this->button_search_search->Visible = false;
			this->button_search_search->Click += gcnew System::EventHandler(this, &Table::button_search_search_Click);
			this->button_search_search->MouseEnter += gcnew System::EventHandler(this, &Table::button_search_search_MouseEnter);
			this->button_search_search->MouseLeave += gcnew System::EventHandler(this, &Table::button_search_search_MouseLeave);
			this->button_search_search->MouseHover += gcnew System::EventHandler(this, &Table::button_search_search_MouseHover);
			// 
			// button_edit_back
			// 
			this->button_edit_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->button_edit_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_edit_back->Enabled = false;
			this->button_edit_back->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_edit_back->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_edit_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_edit_back->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->button_edit_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->button_edit_back->Location = System::Drawing::Point(28, 381);
			this->button_edit_back->Margin = System::Windows::Forms::Padding(2);
			this->button_edit_back->Name = L"button_edit_back";
			this->button_edit_back->Size = System::Drawing::Size(193, 70);
			this->button_edit_back->TabIndex = 1;
			this->button_edit_back->TabStop = false;
			this->button_edit_back->Text = L"Back";
			this->button_edit_back->UseVisualStyleBackColor = false;
			this->button_edit_back->Visible = false;
			this->button_edit_back->Click += gcnew System::EventHandler(this, &Table::button_edit_back_Click);
			this->button_edit_back->MouseEnter += gcnew System::EventHandler(this, &Table::button_edit_back_MouseEnter);
			this->button_edit_back->MouseLeave += gcnew System::EventHandler(this, &Table::button_edit_back_MouseLeave);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label_if_table_exists
			// 
			this->label_if_table_exists->AutoSize = true;
			this->label_if_table_exists->BackColor = System::Drawing::Color::Transparent;
			this->label_if_table_exists->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Bold));
			this->label_if_table_exists->ForeColor = System::Drawing::Color::White;
			this->label_if_table_exists->Location = System::Drawing::Point(585, 322);
			this->label_if_table_exists->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_if_table_exists->Name = L"label_if_table_exists";
			this->label_if_table_exists->Size = System::Drawing::Size(294, 23);
			this->label_if_table_exists->TabIndex = 5;
			this->label_if_table_exists->Text = L"No active table at the moment";
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->label_if_table_exists);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->main_table);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Table";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Telephone Network Customers";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Table::Table_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Table::Table_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_table))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Table_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_open_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_open_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_back_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_save_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Table_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void button_edit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_delete_row_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_row_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_row_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_delete_row_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_back_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_open_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_row_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_delete_row_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_back_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_save_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_back_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_delete_row_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void main_table_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void button_edit_add_row_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_raw_end_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_raw_end_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_raw_end_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_add_raw_end_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_search_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_search_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_back_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_back_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_search_search_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_name_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_address_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void main_table_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	private: System::Void button_edit_info_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_info_MouseEnter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_edit_info_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void maskedTextBox_date_MouseHover(System::Object^ sender, System::EventArgs^ e);
	private: System::Void maskedTextBox_number_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void maskedTextBox_date_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void maskedTextBox_type_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: void ReadingFile();
	private: void SavingFile();
	private: bool checking_number_cell();
	private: bool checking_date_cell();
	private: bool checking_type_cell();
};
}
