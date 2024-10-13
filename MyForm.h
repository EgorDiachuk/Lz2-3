#pragma once

namespace Lz23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Timer^ timer5;
	private: System::Windows::Forms::Timer^ timer6;
	private: System::Windows::Forms::Timer^ timer7;
	private: System::Windows::Forms::Timer^ timer8;
	private: System::Windows::Forms::Timer^ timer9;
	private: System::Windows::Forms::Timer^ timer10;
	private: System::Windows::Forms::Timer^ timer11;
	private: System::Windows::Forms::Timer^ timer12;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer11 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer12 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1214, 515);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(1206, 489);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(317, 26);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(528, 424);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Лінія", L"Прямокутник", L"Зафарбований прямокутник",
					L"Еліпс", L"Зафарбований еліпс", L"Сектор"
			});
			this->listBox1->Location = System::Drawing::Point(22, 26);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(211, 124);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(1206, 489);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(52, 17);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(814, 457);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBox18);
			this->tabPage3->Controls->Add(this->pictureBox17);
			this->tabPage3->Controls->Add(this->pictureBox16);
			this->tabPage3->Controls->Add(this->pictureBox15);
			this->tabPage3->Controls->Add(this->pictureBox14);
			this->tabPage3->Controls->Add(this->pictureBox13);
			this->tabPage3->Controls->Add(this->pictureBox12);
			this->tabPage3->Controls->Add(this->pictureBox11);
			this->tabPage3->Controls->Add(this->pictureBox6);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->pictureBox5);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(1206, 489);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(486, 180);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(267, 141);
			this->pictureBox18->TabIndex = 13;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(486, 181);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(276, 141);
			this->pictureBox17->TabIndex = 12;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(487, 183);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(258, 139);
			this->pictureBox16->TabIndex = 11;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(498, 183);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(247, 141);
			this->pictureBox15->TabIndex = 10;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(504, 181);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(225, 139);
			this->pictureBox14->TabIndex = 9;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(505, 177);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(207, 139);
			this->pictureBox13->TabIndex = 8;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(476, 177);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(275, 143);
			this->pictureBox12->TabIndex = 7;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(486, 180);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(259, 140);
			this->pictureBox11->TabIndex = 6;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(480, 176);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(232, 148);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 431);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(108, 431);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(475, 176);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(254, 143);
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(475, 176);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(264, 143);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(475, 176);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(237, 143);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->pictureBox19);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->listBox2);
			this->tabPage4->Controls->Add(this->pictureBox10);
			this->tabPage4->Controls->Add(this->pictureBox9);
			this->tabPage4->Controls->Add(this->pictureBox8);
			this->tabPage4->Controls->Add(this->pictureBox7);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(1206, 489);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Завдання 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(1011, 29);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(221, 215);
			this->pictureBox19->TabIndex = 6;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(462, 341);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Play";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"Яблуко", L"Груша ", L"Апельсин", L"Слива", L"!!!!!!!!!" });
			this->listBox2->Location = System::Drawing::Point(240, 325);
			this->listBox2->Margin = System::Windows::Forms::Padding(2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(167, 84);
			this->listBox2->TabIndex = 4;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(742, 8);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(273, 262);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 3;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(476, 18);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(262, 244);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 2;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(230, 18);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(248, 241);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(7, 29);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(229, 230);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 1;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 1;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 1;
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Interval = 1;
			this->timer7->Tick += gcnew System::EventHandler(this, &MyForm::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Interval = 1;
			this->timer8->Tick += gcnew System::EventHandler(this, &MyForm::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Interval = 1;
			this->timer9->Tick += gcnew System::EventHandler(this, &MyForm::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Interval = 1;
			this->timer10->Tick += gcnew System::EventHandler(this, &MyForm::timer10_Tick);
			// 
			// timer11
			// 
			this->timer11->Interval = 1;
			this->timer11->Tick += gcnew System::EventHandler(this, &MyForm::timer11_Tick);
			// 
			// timer12
			// 
			this->timer12->Interval = 1;
			this->timer12->Tick += gcnew System::EventHandler(this, &MyForm::timer12_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1214, 515);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Refresh();
	}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Pen^ pn = gcnew System::Drawing::Pen(Color::DarkGreen, 4);
	if (listBox1->SelectedIndex == 0) {
		e->Graphics->DrawLine(pn, 150, 40, 360, 180);
	}
	else if (listBox1->SelectedIndex == 1) {
		e->Graphics->DrawRectangle(pn, 150, 30, 300, 110);
	}
	else if (listBox1->SelectedIndex == 2) {
		e->Graphics->FillRectangle(Brushes::DarkGreen, 150, 30, 300, 110);
	}
	else if (listBox1->SelectedIndex == 3) {
		e->Graphics->DrawEllipse(pn, 100, 30, 250, 110);
	}
	else if (listBox1->SelectedIndex == 4) {
		e->Graphics->FillEllipse(Brushes::DarkGreen, 100, 30, 250, 110);
	}
	else if (listBox1->SelectedIndex == 5) {
		e->Graphics->FillPie(Brushes::DarkGreen, 50, 0, 200, 190, 0, 90);
	}
}
private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Brush^ br = gcnew System::Drawing::SolidBrush(Color::Yellow);
	Pen^ pen = gcnew Pen(Color::Black, 2);
	array<Point>^ star = gcnew array<Point>(11);
	star[0].X = 250; star[0].Y = 30;
	star[1].X = 300; star[1].Y = 120;
	star[2].X = 410; star[2].Y = 130;
	star[3].X = 340; star[3].Y = 200;
	star[4].X = 360; star[4].Y = 300;
	star[5].X = 260; star[5].Y = 260;
	star[6].X = 165; star[6].Y = 310;
	star[7].X = 180; star[7].Y = 210;
	star[8].X = 100; star[8].Y = 140;
	star[9].X = 205; star[9].Y = 125;
	star[10].X = 250; star[10].Y = 30;

	e->Graphics->FillPolygon(br, star);
	e->Graphics->DrawPolygon(pen, star);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval = 60;
	timer2->Interval = 60;
	timer3->Interval = 60;
	timer4->Interval = 60;
	timer5->Interval = 60;
	timer6->Interval = 60;
	timer7->Interval = 60;
	timer8->Interval = 60;
	timer9->Interval = 60;
	timer10->Interval = 60;
	timer11->Interval = 60;
	timer12->Interval = 60;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval = 0;
	timer2->Interval = 0;
	timer3->Interval = 0;
	timer4->Interval = 0;
	timer5->Interval = 0;
	timer6->Interval = 0;
	timer7->Interval = 0;
	timer8->Interval = 0;
	timer9->Interval = 0;
	timer10->Interval = 0;
	timer11->Interval = 0;
	timer12->Interval = 0;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = true;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;

	timer2->Enabled = true;
	timer2->Interval = 60;
	timer1->Enabled = false;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = true;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;

	timer3->Enabled = true;
	timer3->Interval = 60;
	timer2->Enabled = false;
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = true;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	timer4->Enabled = true;
	timer4->Interval = 60;
	timer3->Enabled = false;
}
private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = true;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	timer5->Enabled = true;
	timer5->Interval = 60;
	timer4->Enabled = false;
}
	   private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
		   pictureBox3->Visible = false;
		   pictureBox4->Visible = false;
		   pictureBox5->Visible = false;
		   pictureBox6->Visible = false;
		   pictureBox11->Visible = true;
		   pictureBox12->Visible = false;
		   pictureBox13->Visible = false;
		   pictureBox14->Visible = false;
		   pictureBox15->Visible = false;
		   pictureBox16->Visible = false;
		   pictureBox17->Visible = false;
		   pictureBox18->Visible = false;
		   timer6->Enabled = true;
		   timer6->Interval = 60;
		   timer5->Enabled = false;
	   }
			  private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
				  pictureBox3->Visible = false;
				  pictureBox4->Visible = false;
				  pictureBox5->Visible = false;
				  pictureBox6->Visible = false;
				  pictureBox11->Visible = false;
				  pictureBox12->Visible = true;
				  pictureBox13->Visible = false;
				  pictureBox14->Visible = false;
				  pictureBox15->Visible = false;
				  pictureBox16->Visible = false;
				  pictureBox17->Visible = false;
				  pictureBox18->Visible = false;
				  timer7->Enabled = true;
				  timer7->Interval = 60;
				  timer6->Enabled = false;
			  }
private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = true;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	timer8->Enabled = true;
	timer8->Interval = 60;
	timer7->Enabled = false;
}
private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = true;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	timer9->Enabled = true;
	timer9->Interval = 60;
	timer8->Enabled = false;
}
private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = true;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	timer10->Enabled = true;
	timer10->Interval = 60;
	timer9->Enabled = false;
}
private: System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = true;
	pictureBox17->Visible = false;
	pictureBox18->Visible = false;
	timer11->Enabled = true;
	timer11->Interval = 60;
	timer10->Enabled = false;
}
private: System::Void timer11_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = true;
	pictureBox18->Visible = false;
	timer12->Enabled = true;
	timer12->Interval = 60;
	timer11->Enabled = false;
}
private: System::Void timer12_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	pictureBox6->Visible = false;
	pictureBox11->Visible = false;
	pictureBox12->Visible = false;
	pictureBox13->Visible = false;
	pictureBox14->Visible = false;
	pictureBox15->Visible = false;
	pictureBox16->Visible = false;
	pictureBox17->Visible = false;
	pictureBox18->Visible = true;
	timer1->Enabled = true;
	timer1->Interval = 60;
	timer12->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ f;
	if (listBox2->SelectedIndex == 0) {
		pictureBox7->Visible = true;
		f = gcnew System::Media::SoundPlayer("apple.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 1) {
		pictureBox8->Visible = true;
		f = gcnew System::Media::SoundPlayer("pear.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 2) {
		pictureBox9->Visible = true;
		f = gcnew System::Media::SoundPlayer("orange.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 3) {
		pictureBox10->Visible = true;
		f = gcnew System::Media::SoundPlayer("plum.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 4) {
		pictureBox19->Visible = true;
		f = gcnew System::Media::SoundPlayer("111111.wav");
		f->Play();
	}
}

};
}
