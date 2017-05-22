#pragma once

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




	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  fg_label;

	private: System::Windows::Forms::TextBox^  sg_label;

	private: System::Windows::Forms::Label^  fg;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  sg;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;












	protected:



	protected:

	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->fg_label = (gcnew System::Windows::Forms::TextBox());
			this->sg_label = (gcnew System::Windows::Forms::TextBox());
			this->fg = (gcnew System::Windows::Forms::Label());
			this->sg = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->top_left->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hop_logo))->BeginInit();
			this->left_panel->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->X_button->ForeColor = System::Drawing::Color::Transparent;
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
			this->left_panel->Controls->Add(this->gravity_btn);
			this->left_panel->Controls->Add(this->hops_btn);
			this->left_panel->Controls->Add(this->alc_btn);
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
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->fg_label);
			this->panel2->Controls->Add(this->sg_label);
			this->panel2->Controls->Add(this->fg);
			this->panel2->Controls->Add(this->sg);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(177, 23);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(658, 362);
			this->panel2->TabIndex = 3;
			this->panel2->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(403, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 19);
			this->label7->TabIndex = 8;
			this->label7->Text = L"% alk.";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(356, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"wynik";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lato Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(241, 276);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(835, 385);
			this->Controls->Add(this->panel2);
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
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
	
	panel2->Visible = true;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ og = sg_label->Text;
	String ^ fg = fg_label->Text;

	double og1 = Convert::ToDouble(og);
	double fg1 = Convert::ToDouble(fg);

	double alc = (og1 - fg1) / 1.938;

	label6->Text = alc.ToString("N3");

	label7->Visible = true;
}
};
}
