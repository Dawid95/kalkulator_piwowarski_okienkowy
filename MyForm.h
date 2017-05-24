#pragma once
#include "Lubelski1.h"
#include"Lomik.h"
#include"Sybilla.h"
#include"Marynka.h"
#include "Oktawia.h"
#include "Iunga.h"
#include "Zula.h"

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Button^  X_button;
	private: System::Windows::Forms::Panel^  top_left;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  hop_logo;

	private: System::Windows::Forms::Button^  alc_btn;

	private: System::Windows::Forms::Panel^  left_panel;
	private: System::Windows::Forms::Button^  gravity_btn;
	private: System::Windows::Forms::Button^  hops_btn;
	private: System::Windows::Forms::Panel^  alkohol;





	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  fg_label;

	private: System::Windows::Forms::TextBox^  sg_label;

	private: System::Windows::Forms::Label^  fg;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  sg;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Panel^  og_converter;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  wynik;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  baza_chmieli;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
















	private: System::ComponentModel::IContainer^  components;













	protected:



	protected:

	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->X_button = (gcnew System::Windows::Forms::Button());
			this->top_left = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hop_logo = (gcnew System::Windows::Forms::PictureBox());
			this->alc_btn = (gcnew System::Windows::Forms::Button());
			this->left_panel = (gcnew System::Windows::Forms::Panel());
			this->gravity_btn = (gcnew System::Windows::Forms::Button());
			this->hops_btn = (gcnew System::Windows::Forms::Button());
			this->alkohol = (gcnew System::Windows::Forms::Panel());
			this->og_converter = (gcnew System::Windows::Forms::Panel());
			this->baza_chmieli = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->fg_label = (gcnew System::Windows::Forms::TextBox());
			this->sg_label = (gcnew System::Windows::Forms::TextBox());
			this->fg = (gcnew System::Windows::Forms::Label());
			this->sg = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->top_left->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hop_logo))->BeginInit();
			this->left_panel->SuspendLayout();
			this->alkohol->SuspendLayout();
			this->og_converter->SuspendLayout();
			this->baza_chmieli->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->panel1->Controls->Add(this->X_button);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(177, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(658, 23);
			this->panel1->TabIndex = 1;
			// 
			// X_button
			// 
			this->X_button->BackColor = System::Drawing::Color::Transparent;
			this->X_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->X_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->X_button->ForeColor = System::Drawing::Color::White;
			this->X_button->Location = System::Drawing::Point(635, 0);
			this->X_button->Name = L"X_button";
			this->X_button->Size = System::Drawing::Size(20, 21);
			this->X_button->TabIndex = 0;
			this->X_button->Text = L"X";
			this->X_button->UseVisualStyleBackColor = false;
			this->X_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// top_left
			// 
			this->top_left->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(107)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->top_left->Controls->Add(this->label2);
			this->top_left->Controls->Add(this->label1);
			this->top_left->Controls->Add(this->hop_logo);
			this->top_left->Location = System::Drawing::Point(0, 0);
			this->top_left->Name = L"top_left";
			this->top_left->Size = System::Drawing::Size(177, 57);
			this->top_left->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lato Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(58, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PIWOWARSKI";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lato Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(61, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"KALKULATOR";
			// 
			// hop_logo
			// 
			this->hop_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hop_logo.Image")));
			this->hop_logo->Location = System::Drawing::Point(3, 3);
			this->hop_logo->Name = L"hop_logo";
			this->hop_logo->Size = System::Drawing::Size(50, 51);
			this->hop_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hop_logo->TabIndex = 0;
			this->hop_logo->TabStop = false;
			// 
			// alc_btn
			// 
			this->alc_btn->BackColor = System::Drawing::Color::Transparent;
			this->alc_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->alc_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->alc_btn->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->alc_btn->ForeColor = System::Drawing::Color::White;
			this->alc_btn->Location = System::Drawing::Point(0, 63);
			this->alc_btn->Name = L"alc_btn";
			this->alc_btn->Size = System::Drawing::Size(177, 53);
			this->alc_btn->TabIndex = 2;
			this->alc_btn->Text = L"Alkohol";
			this->alc_btn->UseVisualStyleBackColor = false;
			this->alc_btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// left_panel
			// 
			this->left_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(112)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->left_panel->Controls->Add(this->alc_btn);
			this->left_panel->Controls->Add(this->gravity_btn);
			this->left_panel->Controls->Add(this->hops_btn);
			this->left_panel->Controls->Add(this->top_left);
			this->left_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->left_panel->Location = System::Drawing::Point(0, 0);
			this->left_panel->Name = L"left_panel";
			this->left_panel->Size = System::Drawing::Size(177, 385);
			this->left_panel->TabIndex = 0;
			// 
			// gravity_btn
			// 
			this->gravity_btn->BackColor = System::Drawing::Color::Transparent;
			this->gravity_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->gravity_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gravity_btn->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gravity_btn->ForeColor = System::Drawing::Color::White;
			this->gravity_btn->Location = System::Drawing::Point(0, 122);
			this->gravity_btn->Name = L"gravity_btn";
			this->gravity_btn->Size = System::Drawing::Size(177, 53);
			this->gravity_btn->TabIndex = 4;
			this->gravity_btn->Text = L"Konwerter Gêstoœci";
			this->gravity_btn->UseVisualStyleBackColor = false;
			this->gravity_btn->Click += gcnew System::EventHandler(this, &MyForm::gravity_btn_Click);
			// 
			// hops_btn
			// 
			this->hops_btn->BackColor = System::Drawing::Color::Transparent;
			this->hops_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->hops_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->hops_btn->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->hops_btn->ForeColor = System::Drawing::Color::White;
			this->hops_btn->Location = System::Drawing::Point(0, 181);
			this->hops_btn->Name = L"hops_btn";
			this->hops_btn->Size = System::Drawing::Size(177, 53);
			this->hops_btn->TabIndex = 3;
			this->hops_btn->Text = L"Baza Chmieli";
			this->hops_btn->UseVisualStyleBackColor = false;
			this->hops_btn->Click += gcnew System::EventHandler(this, &MyForm::hops_btn_Click);
			// 
			// alkohol
			// 
			this->alkohol->BackColor = System::Drawing::SystemColors::ControlDark;
			this->alkohol->Controls->Add(this->og_converter);
			this->alkohol->Controls->Add(this->label5);
			this->alkohol->Controls->Add(this->button4);
			this->alkohol->Controls->Add(this->fg_label);
			this->alkohol->Controls->Add(this->sg_label);
			this->alkohol->Controls->Add(this->fg);
			this->alkohol->Controls->Add(this->sg);
			this->alkohol->Controls->Add(this->label6);
			this->alkohol->Controls->Add(this->label7);
			this->alkohol->Dock = System::Windows::Forms::DockStyle::Fill;
			this->alkohol->Location = System::Drawing::Point(177, 23);
			this->alkohol->Name = L"alkohol";
			this->alkohol->Size = System::Drawing::Size(658, 362);
			this->alkohol->TabIndex = 3;
			// 
			// og_converter
			// 
			this->og_converter->BackColor = System::Drawing::SystemColors::ControlDark;
			this->og_converter->Controls->Add(this->baza_chmieli);
			this->og_converter->Controls->Add(this->label4);
			this->og_converter->Controls->Add(this->textBox1);
			this->og_converter->Controls->Add(this->label3);
			this->og_converter->Controls->Add(this->button2);
			this->og_converter->Controls->Add(this->button1);
			this->og_converter->Controls->Add(this->wynik);
			this->og_converter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->og_converter->Location = System::Drawing::Point(0, 0);
			this->og_converter->Name = L"og_converter";
			this->og_converter->Size = System::Drawing::Size(658, 362);
			this->og_converter->TabIndex = 9;
			this->og_converter->Visible = false;
			// 
			// baza_chmieli
			// 
			this->baza_chmieli->BackColor = System::Drawing::SystemColors::ControlDark;
			this->baza_chmieli->Controls->Add(this->label8);
			this->baza_chmieli->Controls->Add(this->pictureBox7);
			this->baza_chmieli->Controls->Add(this->pictureBox6);
			this->baza_chmieli->Controls->Add(this->pictureBox5);
			this->baza_chmieli->Controls->Add(this->pictureBox3);
			this->baza_chmieli->Controls->Add(this->pictureBox1);
			this->baza_chmieli->Controls->Add(this->splitter1);
			this->baza_chmieli->Controls->Add(this->pictureBox2);
			this->baza_chmieli->Controls->Add(this->pictureBox4);
			this->baza_chmieli->Dock = System::Windows::Forms::DockStyle::Fill;
			this->baza_chmieli->Location = System::Drawing::Point(0, 0);
			this->baza_chmieli->Name = L"baza_chmieli";
			this->baza_chmieli->Size = System::Drawing::Size(658, 362);
			this->baza_chmieli->TabIndex = 11;
			this->baza_chmieli->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(458, 40);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(86, 280);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(541, 40);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(84, 280);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(383, 40);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(75, 280);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(216, 40);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(87, 280);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(26, 40);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 280);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click_1);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 362);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(136, 40);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(85, 280);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(302, 40);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(85, 280);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(189, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Ekstrakt w SG wynosi: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(266, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(226, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Podaj gêstoœæ do konwersji";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(344, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 53);
			this->button2->TabIndex = 6;
			this->button2->Text = L"SG do Brix";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(96, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 53);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Brix do SG";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_2);
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wynik->ForeColor = System::Drawing::Color::White;
			this->wynik->Location = System::Drawing::Point(369, 276);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(53, 19);
			this->wynik->TabIndex = 10;
			this->wynik->Text = L"wynik";
			this->wynik->Visible = false;
			this->wynik->Click += gcnew System::EventHandler(this, &MyForm::wynik_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(189, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 19);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Twoje piwo ma ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(230, 199);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(177, 53);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Oblicz";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// fg_label
			// 
			this->fg_label->Location = System::Drawing::Point(279, 158);
			this->fg_label->Name = L"fg_label";
			this->fg_label->Size = System::Drawing::Size(100, 20);
			this->fg_label->TabIndex = 3;
			// 
			// sg_label
			// 
			this->sg_label->Location = System::Drawing::Point(279, 73);
			this->sg_label->Name = L"sg_label";
			this->sg_label->Size = System::Drawing::Size(100, 20);
			this->sg_label->TabIndex = 2;
			// 
			// fg
			// 
			this->fg->AutoSize = true;
			this->fg->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->fg->ForeColor = System::Drawing::Color::White;
			this->fg->Location = System::Drawing::Point(262, 116);
			this->fg->Name = L"fg";
			this->fg->Size = System::Drawing::Size(135, 19);
			this->fg->TabIndex = 1;
			this->fg->Text = L"Ekstrakt koñcowy";
			// 
			// sg
			// 
			this->sg->AutoSize = true;
			this->sg->Font = (gcnew System::Drawing::Font(L"Lato", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sg->ForeColor = System::Drawing::Color::White;
			this->sg->Location = System::Drawing::Point(251, 40);
			this->sg->Name = L"sg";
			this->sg->Size = System::Drawing::Size(156, 19);
			this->sg->TabIndex = 0;
			this->sg->Text = L"Ekstrakt pocz¹tkowy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(308, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"wynik";
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(367, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 19);
			this->label7->TabIndex = 10;
			this->label7->Text = L"% alk.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lato Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(82, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(474, 19);
			this->label8->TabIndex = 3;
			this->label8->Text = L"KLIKNIJ NA WYBRANY CHMIEL ABY DOWIEDZIEÆ SIÊ WIÊCEJ ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(835, 385);
			this->Controls->Add(this->alkohol);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->left_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->top_left->ResumeLayout(false);
			this->top_left->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hop_logo))->EndInit();
			this->left_panel->ResumeLayout(false);
			this->alkohol->ResumeLayout(false);
			this->alkohol->PerformLayout();
			this->og_converter->ResumeLayout(false);
			this->og_converter->PerformLayout();
			this->baza_chmieli->ResumeLayout(false);
			this->baza_chmieli->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void flowLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
	og_converter->Visible = false;
	baza_chmieli->Visible = false;
	
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ og = sg_label->Text;
	String ^ fg = fg_label->Text;

	double og1 = Convert::ToDouble(og);
	double fg1 = Convert::ToDouble(fg);

	double alc = (og1 - fg1) / 1.938;

	label6->Visible = true;
	label6->Text = alc.ToString("N3");
	
	
	
}
private: System::Void gravity_btn_Click(System::Object^  sender, System::EventArgs^  e) {

	
	og_converter->Visible = true;
	baza_chmieli->Visible = false;
	

	
	
}
private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
	String ^ brix = textBox1->Text;
	double brix1 = Convert::ToDouble(brix);

	double sg = (brix1 / (258.6 - ((brix1 / 258.2)*227.1))) + 1;
	wynik->Visible = true;
	wynik->Text = sg.ToString("N3");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String ^ sg = textBox1->Text;
	double sg1 = Convert::ToDouble(sg);

	double brix = (((182.4601 * sg1 - 775.6821) * sg1 + 1262.7794) * sg1 - 669.5622);
	wynik->Visible = true;
	wynik->Text = brix.ToString("N3");
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void wynik_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void hops_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	
	baza_chmieli->Visible = true;
	


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	Lomik ^f1 = gcnew Lomik();
	f1->ShowDialog(); 	
}
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
	Lubelski1 ^f1 = gcnew Lubelski1();
	f1->ShowDialog(); 	
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Sybilla ^f1 = gcnew Sybilla();
	f1->ShowDialog(); 
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	Marynka ^f1 = gcnew Marynka();
	f1->ShowDialog(); 
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	Iunga ^f1 = gcnew Iunga();
	f1->ShowDialog();
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	Oktawia ^f1 = gcnew Oktawia();
	f1->ShowDialog();
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {

	Zula ^f1 = gcnew Zula();
	f1->ShowDialog();
}
};
}
