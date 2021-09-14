#include "f1.h"
#include "Choice.h"
#include <iostream>
#include <chrono>

using namespace System::IO;
using namespace std;

int timer_tick_counter;
int is_jump_start; // 1 - начальный экран, 2 - таймер активен, 3 - таймер активен, но в случае нажатия - фальстарт 
int random_interval_to_start;
char best_result[7];
 
struct SimpleTimer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    chrono::duration<float> duration;

    void StartTimer()
    {
        start = chrono::high_resolution_clock::now();
    }

    void StopTimer()
    {
        end = chrono::high_resolution_clock::now();
        duration = end - start;
    }
} reaction_time;


System::Void HereWeGoAgain::f1::f1_Load(System::Object^ sender, System::EventArgs^ e)
{
    int i;
    String^ best = "";
    try {
        StreamReader^ sr = File::OpenText("Records.txt");
        best = sr->ReadLine();
        for (i = 0; i < 6; i++)
        {
            if (i == 2)
            {
                best_result[i] = '.';
                continue;
            }
            best_result[i] = best[i];
        }
        best_result[i] = '\0';
        this->label_yor_best_result->Text = best;
        sr->Close();
        delete sr;
    }
    catch (Exception^ e)
    {
        StreamWriter^ sw = gcnew StreamWriter("Records.txt");
        sw->WriteLine("09.999");
        sw->Close();
        delete sw;
        StreamReader^ sr = File::OpenText("Records.txt");
        best = sr->ReadLine();
        for (i = 0; i < 6; i++)
        {
            if (i == 2)
            {
                best_result[i] = '.';
                continue;
            }
            best_result[i] = best[i];
        }
        best_result[i] = '\0';
        this->label_yor_best_result->Text = best;
        sr->Close();
        delete sr;
        MessageBox::Show("Failed to upload the best result.\nRecord has been reset.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }


    this->pictureBox_full_lights->Visible = false;
    this->pictureBox_four_lights->Visible = false;
    this->pictureBox_three_lights->Visible = false;
    this->pictureBox_two_lights->Visible = false;
    this->pictureBox_one_light->Visible = false;
    this->pictureBox_lights_out->Visible = true;
    is_jump_start = 1;
}

System::Void HereWeGoAgain::f1::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{

    switch (timer_tick_counter)
    {
    case 1:
        this->pictureBox_one_light->Visible = true;
        this->pictureBox_lights_out->Visible = false;
        timer_tick_counter++;
        break;
    case 2:
        this->pictureBox_two_lights->Visible = true;
        this->pictureBox_one_light->Visible = false;
        timer_tick_counter++;
        break;
    case 3:
        this->pictureBox_three_lights->Visible = true;
        this->pictureBox_two_lights->Visible = false;
        timer_tick_counter++;
        break;
        //cgbx_SDvpidfzbiuang;kdfznv[IDFNv;zdfnv[iaeng;kaernb[ xhby-9qanpi4w5nbg[qeotanh aie[rjtb]0ti[e4a
    case 4:
        this->pictureBox_four_lights->Visible = true;
        this->pictureBox_three_lights->Visible = false;
        timer_tick_counter++;
        break;
    case 5:
        this->pictureBox_full_lights->Visible = true;
        this->pictureBox_four_lights->Visible = false;
        timer_tick_counter++;

        srand(time(0));
        random_interval_to_start = rand() % 2000 + 2000;
        timer1->Interval = random_interval_to_start;
        break;
    case 6:
        this->pictureBox_lights_out->Visible = true;
        this->pictureBox_full_lights->Visible = false;
        is_jump_start = 2;
        this->timer1->Stop(); 
        reaction_time.StartTimer();
        break;
    }
}

System::Void HereWeGoAgain::f1::f1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    Application::Exit();
}

System::Void HereWeGoAgain::f1::f1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if (e->KeyCode == Keys::Space)
        switch (is_jump_start)
        {
        case 1:
            timer_tick_counter = 1;
            is_jump_start = 3;
            timer1->Interval = 1000;
            timer1->Enabled = true;
            timer1->Start();
            this->label_time_result->Location = System::Drawing::Point(419, 482);
            this->label_time_result->Text = "00.000";
            break;
        case 2:
            reaction_time.StopTimer();
            ConvertChronoToLine();
            is_jump_start = 1;
            break;
        case 3:
            timer1->Stop();
            is_jump_start = 1;
            timer_tick_counter = 0;
            this->pictureBox_lights_out->Visible = true;
            this->pictureBox_full_lights->Visible = false;
            this->pictureBox_four_lights->Visible = false;
            this->pictureBox_three_lights->Visible = false;
            this->pictureBox_two_lights->Visible = false;
            this->pictureBox_one_light->Visible = false;
            this->label_time_result->Location = System::Drawing::Point(317, 473);
            this->label_time_result->Text = "Jump Start";
            break;
        }
}

System::Void HereWeGoAgain::f1::button_back_MouseEnter(System::Object^ sender, System::EventArgs^ e)
{
    this->button_back->FlatAppearance->BorderColor = System::Drawing::Color::Red;
}

System::Void HereWeGoAgain::f1::button_back_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
    this->button_back->FlatAppearance->BorderColor = System::Drawing::Color::Black;
}

System::Void HereWeGoAgain::f1::button_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    Choice^ p = gcnew Choice();
    this->Hide();
    p->Show();
}

void HereWeGoAgain::f1::ConvertChronoToLine()
{
    int i;
    char reaction_time_str[7];

    String^ reaction_time_boofer = Convert::ToString(reaction_time.duration.count());
    
    if (reaction_time_boofer[1] == ',')
    {
        reaction_time_str[0] = '0';
        reaction_time_str[2] = '.';
        for (i = 1; i < 6; i++)
        {
            if (i == 2)
                continue;
            reaction_time_str[i] = reaction_time_boofer[i - 1];
        }
        reaction_time_str[i] = '\0';
        reaction_time_boofer = gcnew String (reaction_time_str);
        this->label_time_result->Text = reaction_time_boofer;
        RecordSaver(reaction_time_str);
    }
    else
    {
        this->label_time_result->Location = System::Drawing::Point(349, 482);
        this->label_time_result->Text = "Too Slow!";
        is_jump_start = 1;
    }
}

void HereWeGoAgain::f1::RecordSaver(char* reaction_time)
{
    int i;
    bool new_best = false;

    for (i = 0; i < 6; i++)
    {
        if (i == 2)
            continue;
        if (best_result[i] == reaction_time[i])
            continue;
        if (best_result[i] < reaction_time[i])
            break;
        if (best_result[i] > reaction_time[i])
        {
            new_best = true;
            break;
        }
    }

    if (new_best)
    {
        for (i = 0; i < 6; i++)
            best_result[i] = reaction_time[i];

        String^ line = gcnew String(reaction_time);

        StreamWriter^ sw = gcnew StreamWriter("Records.txt");
        sw->WriteLine(line);
        this->label_yor_best_result->Text = line;

        sw->Close();
        delete sw;
    }
}

