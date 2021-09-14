#include "Table.h"
#include "Choice.h"
#include <string.h>

using namespace System::IO;

bool is_table_after_search = false;

System::Void HereWeGoAgain::Table::Table_Load(System::Object^ sender, System::EventArgs^ e)
{
    if (this->main_table->RowCount == 0)
        this->label_if_table_exists->Visible = true;
    else
        this->label_if_table_exists->Visible = false;

    this->main_table->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
    this->button_save->Enabled = false;
    this->button_search->Enabled = false;
}

System::Void HereWeGoAgain::Table::button_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->main_table->RowCount > 0)
    {
        if (MessageBox::Show("If you leave without saving, all unsaved data will be lost", "Warning!", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK)
        {
            Choice^ p = gcnew Choice();
            this->Hide();
            p->Show();
        }
        else { System::Void(); }
    }
    else
    {
        Choice^ p = gcnew Choice();
        this->Hide();
        p->Show();
    }

}

System::Void HereWeGoAgain::Table::button_save_Click(System::Object^ sender, System::EventArgs^ e)
{
    SavingFile();
}

System::Void HereWeGoAgain::Table::button_open_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (this->main_table->RowCount > 0)
    {
        if (MessageBox::Show("If you open new table without saving, all unsaved data will be lost", "Warning!", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK)
        {
            ReadingFile();
        }
        else
            return;
    }
    else
    {
        ReadingFile();
    }

    if (this->main_table->RowCount > 0)
    {
        this->button_save->Enabled = true;
        this->button_search->Enabled = true;
    }
}

System::Void HereWeGoAgain::Table::Table_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    Application::Exit();
}

System::Void HereWeGoAgain::Table::button_edit_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->button_open->Visible = false;
    this->button_open->Enabled = false;

    this->button_edit->Visible = false;
    this->button_edit->Enabled = false;

    this->button_save->Visible = false;
    this->button_save->Enabled = false;

    this->button_search->Visible = false;
    this->button_search->Enabled = false;

    this->button_back->Visible = false;
    this->button_back->Enabled = false;

    this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
    this->groupBox1->Text = L"Edit";
    this->main_table->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnKeystroke;
    this->main_table->Enabled = true;

    if (this->main_table->RowCount == 0)
        this->button_edit_add_row->Enabled = false;
    this->button_edit_add_row->Visible = true;

    this->button_edit_delete_row->Enabled = true;
    this->button_edit_delete_row->Visible = true;

    this->button_edit_add_raw_end->Enabled = true;
    this->button_edit_add_raw_end->Visible = true;

    this->button_edit_info->Enabled = true;
    this->button_edit_info->Visible = true;

    this->button_edit_back->Enabled = true;
    this->button_edit_back->Visible = true;

    if (this->main_table->RowCount == 0)
    {
        this->label_if_table_exists->Visible = true;
        this->button_edit_delete_row->Enabled = false;
    }
    else
    {
        this->label_if_table_exists->Visible = false;
        this->button_edit_delete_row->Enabled = true;
    }

    this->button_edit_delete_row->Enabled = false;
}

System::Void HereWeGoAgain::Table::button_search_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->button_open->Visible = false;
    this->button_open->Enabled = false;

    this->button_edit->Visible = false;
    this->button_edit->Enabled = false;

    this->button_save->Visible = false;
    this->button_save->Enabled = false;

    this->button_search->Visible = false;
    this->button_search->Enabled = false;

    this->button_back->Visible = false;
    this->button_back->Enabled = false;

    this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
    this->groupBox1->Text = L"Search";
    is_table_after_search = false;
    this->button_search_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
    this->button_search_search->Text = "Search";

    this->label_number->Visible = true;
    this->label_name->Visible = true;
    this->label_date->Visible = true;
    this->label_type->Visible = true;
    this->label_address->Visible = true;

    this->textBox_name->Visible = true;
    this->textBox_name->Enabled = true;
    this->maskedTextBox_number->Visible = true;
    this->maskedTextBox_number->Enabled = true;
    this->maskedTextBox_date->Visible = true;
    this->maskedTextBox_date->Enabled = true;
    this->maskedTextBox_type->Visible = true;
    this->maskedTextBox_type->Enabled = true;
    this->textBox_address->Visible = true;
    this->textBox_address->Enabled = true;

    this->button_search_back->Enabled = true;
    this->button_search_back->Visible = true;

    this->button_search_search->Visible = true;
}

/// 
/// Кнопки управления редактированием и прочее
/// 
System::Void HereWeGoAgain::Table::button_edit_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->button_open->Visible = true;
    this->button_open->Enabled = true;

    this->button_edit->Visible = true;
    this->button_edit->Enabled = true;

    this->button_save->Visible = true;
    if (this->main_table->RowCount > 0)
        this->button_save->Enabled = true;
    else
        this->button_save->Enabled = false;

    this->button_search->Visible = true;
    if (this->main_table->RowCount > 0)
        this->button_search->Enabled = true;
    else
        this->button_search->Enabled = false;

    this->button_back->Visible = true;
    this->button_back->Enabled = true;

    this->groupBox1->ForeColor = System::Drawing::Color::White;
    this->groupBox1->Text = L"Actions";
    this->main_table->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;

    this->main_table->Enabled = false;
    this->main_table->ClearSelection();

    this->button_edit_add_row->Enabled = false;
    this->button_edit_add_row->Visible = false;

    this->button_edit_delete_row->Enabled = false;
    this->button_edit_delete_row->Visible = false;

    this->button_edit_info->Enabled = false;
    this->button_edit_info->Visible = false;

    this->button_edit_back->Enabled = false;
    this->button_edit_back->Visible = false;

    this->button_edit_add_raw_end->Enabled = false;
    this->button_edit_add_raw_end->Visible = false;
}

System::Void HereWeGoAgain::Table::button_edit_delete_row_Click(System::Object^ sender, System::EventArgs^ e)
{
    int i;

    if (this->main_table->CurrentCell->ColumnIndex == 0)
        this->main_table->Rows->RemoveAt(this->main_table->CurrentRow->Index);

    if (this->main_table->RowCount > 0)
        for (i = this->main_table->CurrentRow->Index; i < this->main_table->RowCount; i++)
            this->main_table->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);

    //активация-дизактивация конпки
    if (this->main_table->RowCount == 0)
    {
        this->label_if_table_exists->Visible = true;
        this->button_edit_delete_row->Enabled = false;
        this->button_edit_add_row->Enabled = false;
    }
}

System::Void HereWeGoAgain::Table::button_edit_add_row_Click(System::Object^ sender, System::EventArgs^ e)
{
    int i;

    this->main_table->Rows->Insert(this->main_table->CurrentCell->RowIndex);
    this->main_table->Rows[this->main_table->CurrentCell->RowIndex - 1]->Cells[0]->Value = Convert::ToString(this->main_table->CurrentCell->RowIndex);
    for (i = this->main_table->CurrentRow->Index; i < this->main_table->RowCount; i++)
    {
        this->main_table->Rows[i]->Cells[0]->Value = Convert::ToString(i + 1);
    }

    //активация-дизактивация кнопок 
    if (this->main_table->CurrentCell->ColumnIndex == 0)
        this->button_edit_delete_row->Enabled = true;
    else
        this->button_edit_delete_row->Enabled = false;
}

System::Void HereWeGoAgain::Table::main_table_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    if (this->main_table->CurrentCell->ColumnIndex == 0)
    {
        this->button_edit_delete_row->Enabled = true;
        this->button_edit_add_row->Enabled = true;
    }
    else
    {
        this->button_edit_delete_row->Enabled = false;
        this->button_edit_add_row->Enabled = false;
    }
}

System::Void HereWeGoAgain::Table::button_edit_add_raw_end_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->label_if_table_exists->Visible = false;

    this->main_table->Rows->Add();

    this->main_table->Rows[this->main_table->RowCount - 1]->Cells[0]->Value = Convert::ToString(this->main_table->RowCount);
}

System::Void HereWeGoAgain::Table::main_table_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    bool result;
    if (this->main_table->RowCount > 0)
    {
        if (this->main_table->CurrentCell->Value == nullptr)
            return System::Void();

        switch (this->main_table->CurrentCell->ColumnIndex)
        {
        case 2:
            result = checking_number_cell();
            if (result)
            {
                return System::Void();
            }
            else
            {
                MessageBox::Show("Incorrect input!\nExample: 435-7656", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                this->main_table->CurrentCell->Value = nullptr;
            }
            break;
        case 3:
            result = checking_date_cell();
            if (result)
            {
                return System::Void();
            }
            else
            {
                MessageBox::Show("Incorrect input!\nExample: 23.07.2002", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                this->main_table->CurrentCell->Value = nullptr;
            }
            break;
        case 4:
            result = checking_type_cell();
            if (result)
            {
                return System::Void();
            }
            else
            {
                MessageBox::Show("Incorrect input!\nExample: 2 (from 0 to 4)", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                this->main_table->CurrentCell->Value = nullptr;

            }
            break;
        }
    }
    else return System::Void();
}

System::Void HereWeGoAgain::Table::button_edit_info_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Input examples:\n\nName: Any sign\nNumber: 456-4546 (only this way)\nDate 23.07.2002 (only this way)\nType: Number from 0 to 4\nAddress: Any sign",
        "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

///
/// Кнопки поиска и прочее 
/// 
System::Void HereWeGoAgain::Table::button_search_search_Click(System::Object^ sender, System::EventArgs^ e)
{
    bool static refresh;
    int i, j, k, n, pass_to_stay_visible, year_and_type_from_maskbox, year_and_type_from_table; // безымянные переменные для циклов 
    char table_boofer_string[31], search_boofer_string[31];
    String^ boofer_line = "";

    if (is_table_after_search == false)
    {
        for (i = 0; i < this->main_table->RowCount; i++)
        {
            pass_to_stay_visible = 0;
            for (j = 0; j < 5; j++)
            {
                switch (j)
                {
                case 0:
                    if (this->textBox_name->Text == "")
                    {
                        pass_to_stay_visible++;
                        continue;
                    }

                    for (k = 0; k < this->textBox_name->Text->Length; k++)
                        search_boofer_string[k] = this->textBox_name->Text[k];
                    search_boofer_string[k] = '\0';
                    _strlwr(search_boofer_string);

                    boofer_line = Convert::ToString(this->main_table->Rows[i]->Cells[j + 1]->Value);
                    n = boofer_line->Length;
                    for (k = 0; k < n; k++)
                        table_boofer_string[k] = boofer_line[k];
                    table_boofer_string[k] = '\0';
                    _strlwr(table_boofer_string);


                    if (strstr(table_boofer_string, search_boofer_string) != NULL)
                        pass_to_stay_visible++;
                    break;

                case 1:
                    if (this->maskedTextBox_number->Text == "   -")
                    {
                        pass_to_stay_visible++;
                        continue;
                    }

                    for (k = 0; k < this->maskedTextBox_number->Text->Length; k++)
                        search_boofer_string[k] = this->maskedTextBox_number->Text[k];
                    search_boofer_string[k] = '\0';
                    _strlwr(search_boofer_string);


                    boofer_line = Convert::ToString(this->main_table->Rows[i]->Cells[j + 1]->Value);
                    n = boofer_line->Length;
                    for (k = 0; k < n; k++)
                        table_boofer_string[k] = boofer_line[k];
                    table_boofer_string[k] = '\0';
                    _strlwr(table_boofer_string);

                    if (strcmp(table_boofer_string, search_boofer_string) == 0)
                        pass_to_stay_visible++;
                    break;

                case 2:
                    if (this->maskedTextBox_date->Text == "")
                    {
                        pass_to_stay_visible++;
                        continue;
                    }

                    year_and_type_from_maskbox = Convert::ToInt32(this->maskedTextBox_date->Text);

                    boofer_line = Convert::ToString(this->main_table->Rows[i]->Cells[j + 1]->Value);
                    n = boofer_line->Length;
                    for (k = 6; k < 10; k++)
                        table_boofer_string[k - 6] = boofer_line[k];
                    table_boofer_string[k - 6] = '\0';
                    boofer_line = gcnew String(table_boofer_string);

                    year_and_type_from_table = Convert::ToInt32(boofer_line);

                    if (year_and_type_from_maskbox == year_and_type_from_table)
                        pass_to_stay_visible++;
                    break;

                case 3:
                    if (this->maskedTextBox_type->Text == "")
                    {
                        pass_to_stay_visible++;
                        continue;
                    }

                    year_and_type_from_maskbox = Convert::ToInt32(this->maskedTextBox_type->Text);

                    boofer_line = Convert::ToString(this->main_table->Rows[i]->Cells[j + 1]->Value);
                    table_boofer_string[0] = boofer_line[0];
                    table_boofer_string[1] = '\0';
                    boofer_line = gcnew String(table_boofer_string);

                    year_and_type_from_table = Convert::ToInt32(boofer_line);

                    if (year_and_type_from_maskbox == year_and_type_from_table)
                        pass_to_stay_visible++;
                    break;

                case 4:
                    if (this->textBox_address->Text == "")
                    {
                        pass_to_stay_visible++;
                        continue;
                    }

                    for (k = 0; k < this->textBox_address->Text->Length; k++)
                        search_boofer_string[k] = this->textBox_address->Text[k];
                    search_boofer_string[k] = '\0';
                    _strlwr(search_boofer_string);


                    boofer_line = Convert::ToString(this->main_table->Rows[i]->Cells[j + 1]->Value);
                    n = boofer_line->Length;
                    for (k = 0; k < n; k++)
                        table_boofer_string[k] = boofer_line[k];
                    table_boofer_string[k] = '\0';
                    _strlwr(table_boofer_string);


                    if (strstr(table_boofer_string, search_boofer_string) != NULL)
                        pass_to_stay_visible++;
                    break;
                }
            }
            if (pass_to_stay_visible != 5)
                this->main_table->Rows[i]->Visible = false;
        }
        delete boofer_line;
        is_table_after_search = true;
        this->button_search_search->Text = "Reset";
        this->button_search_search->ForeColor = System::Drawing::Color::Red;
    }
    else 
    {
        for (i = 0; i < this->main_table->RowCount; i++)
            this->main_table->Rows[i]->Visible = true;
        this->textBox_name->Clear();
        this->maskedTextBox_date->Clear();
        this->maskedTextBox_type->Clear();
        this->maskedTextBox_number->Clear();
        this->textBox_address->Clear();
        is_table_after_search = false;
        this->button_search_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
            static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
        this->button_search_search->Text = "Search";
    }
}

System::Void HereWeGoAgain::Table::button_search_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    int i;

    this->button_open->Visible = true;
    this->button_open->Enabled = true;

    this->button_edit->Visible = true;
    this->button_edit->Enabled = true;

    this->button_save->Visible = true;
    if (this->main_table->RowCount > 0)
        this->button_save->Enabled = true;
    else
        this->button_save->Enabled = false;

    this->button_search->Visible = true;
    this->button_search->Enabled = true;

    this->button_back->Visible = true;
    this->button_back->Enabled = true;

    this->groupBox1->ForeColor = System::Drawing::Color::White;
    this->groupBox1->Text = L"Actions";

    this->label_number->Visible = false;
    this->label_name->Visible = false;
    this->label_date->Visible = false;
    this->label_type->Visible = false;
    this->label_address->Visible = false;

    this->textBox_name->Visible = false;
    this->textBox_name->Enabled = false;
    this->textBox_name->Clear();
    this->maskedTextBox_number->Visible = false;
    this->maskedTextBox_number->Enabled = false;
    this->maskedTextBox_number->Clear();
    this->maskedTextBox_date->Visible = false;
    this->maskedTextBox_date->Enabled = false;
    this->maskedTextBox_date->Clear();
    this->maskedTextBox_type->Visible = false;
    this->maskedTextBox_type->Enabled = false;
    this->maskedTextBox_type->Clear();
    this->textBox_address->Visible = false;
    this->textBox_address->Enabled = false;
    this->textBox_address->Clear();

    this->button_search_back->Enabled = false;
    this->button_search_back->Visible = false;

    this->button_search_search->Enabled = false;
    this->button_search_search->Visible = false;

    for (i = 0; i < this->main_table->RowCount; i++)
        this->main_table->Rows[i]->Visible = true;
}

                        /*проверка изменений значений параметров поиска*/
System::Void HereWeGoAgain::Table::textBox_name_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox_name->Text == "" && this->maskedTextBox_number->Text == "   -" && this->maskedTextBox_date->Text == "" && this->maskedTextBox_type->Text == "" && this->textBox_address->Text == "")
        this->button_search_search->Enabled = false;
    else
        this->button_search_search->Enabled = true;
}

System::Void HereWeGoAgain::Table::textBox_address_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox_name->Text == "" && this->maskedTextBox_number->Text == "   -" && this->maskedTextBox_date->Text == "" && this->maskedTextBox_type->Text == "" && this->textBox_address->Text == "")
        this->button_search_search->Enabled = false;
    else
        this->button_search_search->Enabled = true;
}

System::Void HereWeGoAgain::Table::maskedTextBox_number_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox_name->Text == "" && this->maskedTextBox_number->Text == "   -" && this->maskedTextBox_date->Text == "" && this->maskedTextBox_type->Text == "" && this->textBox_address->Text == "")
        this->button_search_search->Enabled = false;
    else
        this->button_search_search->Enabled = true;
}

System::Void HereWeGoAgain::Table::maskedTextBox_date_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox_name->Text == "" && this->maskedTextBox_number->Text == "   -" && this->maskedTextBox_date->Text == "" && this->maskedTextBox_type->Text == "" && this->textBox_address->Text == "")
        this->button_search_search->Enabled = false;
    else
        this->button_search_search->Enabled = true;
}

System::Void HereWeGoAgain::Table::maskedTextBox_type_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (this->textBox_name->Text == "" && this->maskedTextBox_number->Text == "   -" && this->maskedTextBox_date->Text == "" && this->maskedTextBox_type->Text == "" && this->textBox_address->Text == "")
        this->button_search_search->Enabled = false;
    else
        this->button_search_search->Enabled = true;
}
///
/// Входы и выходы курсора на элменты
/// 
System::Void HereWeGoAgain::Table::button_edit_add_row_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
    ToolTip^ tt = gcnew ToolTip();
    tt->UseAnimation = true;
    tt->SetToolTip(this->button_edit_add_row, "Чтобы добавить сторку -\nвыберите ячейку с номером\nстроки.\n\nСтрока будет добавлена перед\nвыбранной строкой.");
}

System::Void HereWeGoAgain::Table::button_edit_add_raw_end_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_add_raw_end->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_add_raw_end_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
    ToolTip^ tt = gcnew ToolTip();
    tt->UseAnimation = true;
    tt->SetToolTip(this->button_edit_add_raw_end, "Добавление строки\nв конец таблицы");
}

System::Void HereWeGoAgain::Table::button_edit_add_raw_end_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_add_raw_end->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_search_search_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_search_search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_search_search_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_search_search->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_edit_add_row_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_add_row->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_edit_delete_row_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_delete_row->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_edit_back_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_back->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_open_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_open->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_add_row_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_add_row->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_delete_row_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_delete_row->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit->FlatAppearance->BorderColor = System::Drawing::Color::White;

}

System::Void HereWeGoAgain::Table::button_edit_back_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_back->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_save_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_save->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_search_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_search->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_back_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_back->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_delete_row_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
    ToolTip^ tt = gcnew ToolTip();
    tt->UseAnimation = true;
    tt->SetToolTip(this->button_edit_delete_row, "Чтобы удалить сторку -\nвыберите ячейку с номером\nстроки");
}

System::Void HereWeGoAgain::Table::button_open_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_open->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_search_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_search->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_back_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_back->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_save_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_save->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_search_back_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_search_back->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_search_back_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_search_back->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

System::Void HereWeGoAgain::Table::button_search_search_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
    ToolTip^ tt = gcnew ToolTip();
    tt->UseAnimation = true;
    tt->SetToolTip(this->button_search_search, "Введите данные поиска в поля,\n которые вам необходимы.\n Оставьте поле пустым, если оно\n не участвует в поиске.");
}

System::Void HereWeGoAgain::Table::maskedTextBox_date_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
    ToolTip^ tt = gcnew ToolTip();
    tt->UseAnimation = true;
    tt->SetToolTip(this->maskedTextBox_date, "Enter the year of installation");
}

System::Void HereWeGoAgain::Table::button_edit_info_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_info->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
        static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
}

System::Void HereWeGoAgain::Table::button_edit_info_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_edit_info->FlatAppearance->BorderColor = System::Drawing::Color::White;
}

///
/// Мои фукции
/// 
void HereWeGoAgain::Table::ReadingFile()
{
    int i;
    String^ line = "";
        
    this->main_table->Rows->Clear();
    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        try {
            StreamReader^ sr = File::OpenText(this->openFileDialog1->FileName);
            line = sr->ReadLine();
            if (line[0] == '4' && line[1] == '5' && line[2] == '7' && line[3] == '7' && line[4] == '6' && line[5] == '4' && line[6] == '6' && line[7] == '4')
            {
                line = sr->ReadLine();
                while (line != nullptr)
                {
                    this->main_table->Rows->Add();
                    this->main_table->Rows[this->main_table->RowCount - 1]->Cells[0]->Value = Convert::ToString(this->main_table->RowCount);
                    for (i = 0; i < 5; i++)
                    {
                        if (line[0] != '\\')
                            this->main_table->Rows[this->main_table->RowCount - 1]->Cells[i + 1]->Value = line;
                        else
                            this->main_table->Rows[this->main_table->RowCount - 1]->Cells[i + 1]->Value = nullptr;
                        line = sr->ReadLine();
                    }
                }
            }
            else
            {
                MessageBox::Show("This file does not contain a table!", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
            }
            sr->Close();
            delete sr;
            this->label_if_table_exists->Visible = false;
        }
        catch (Exception^ e)
        {
            MessageBox::Show("Table hasn't been opened", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else return;

    this->main_table->ClearSelection();
}

void HereWeGoAgain::Table::SavingFile()
{
    int i, j;

    if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        try {
            StreamWriter^ sw = File::CreateText(this->saveFileDialog1->FileName);
            sw->WriteLine("45776464");
            for (i = 0; i < this->main_table->RowCount; i++)
            {
                for (j = 1; j < 6; j++)
                {
                    if (this->main_table->Rows[i]->Cells[j]->Value != nullptr)
                        sw->WriteLine(this->main_table->Rows[i]->Cells[j]->Value);
                    else
                        sw->WriteLine("\\");
                }
            }
            sw->Close();
            delete sw;
        }
        catch (Exception^ e)
        {
            MessageBox::Show("Table hasn't been saved", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    else return;
}

bool HereWeGoAgain::Table::checking_number_cell()
{
    char correct_symbols[] = "0123456789";
    char current_symbol_check[] = {' ', '\0'};
    int pass_to_correct_value = 0, i;

    String^ str_number = gcnew String(this->main_table->CurrentCell->Value->ToString());
    if (str_number->Length != 8)
        return false;

    for (i = 0; i < 8; i++)
    {
        if (i == 3)
        {
            continue;
        }
        current_symbol_check[0] = str_number[i];
        if (strstr(correct_symbols, current_symbol_check) != NULL)
            pass_to_correct_value++;
    }
        
    if (str_number[3] == '-')
        pass_to_correct_value++;

    if (pass_to_correct_value == 8)
        return true;
    else return false;
}

bool HereWeGoAgain::Table::checking_date_cell()
{
    char correct_symbols[] = "0123456789";
    char current_symbol_check[] = { ' ', '\0' };
    int pass_to_correct_value = 0, i;

    String^ str_date = gcnew String(this->main_table->CurrentCell->Value->ToString());
    if (str_date->Length != 10)
        return false;

    for (i = 0; i < 10; i++)
    {
        switch (i)
        {
        case 2:  continue;
        case 5:  continue;
        }
        current_symbol_check[0] = str_date[i];
        if (strstr(correct_symbols, current_symbol_check) != NULL)
            pass_to_correct_value++;
    }

    if (str_date[2] == '.')
        pass_to_correct_value++;
    if (str_date[5] == '.')
        pass_to_correct_value++;

    if (pass_to_correct_value == 10)
        return true;
    else return false;
}

bool HereWeGoAgain::Table::checking_type_cell()
{
    String^ str_type = gcnew String(this->main_table->CurrentCell->Value->ToString());
    if (str_type->Length != 1)
        return false;

    if (str_type[0] != '0' && str_type[0] != '1' && str_type[0] != '2' && str_type[0] != '3' && str_type[0] != '4')
        return false;
    else
        return true;
}


