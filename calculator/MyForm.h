#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <msclr\marshal_cppstd.h>
#include <math.h>
#include "stack.h"
#define PI 3.141592653589793238462643383279502884197169
namespace calculator {

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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instrukcjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorachToolStripMenuItem;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::ToolStripMenuItem^  skórkiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  szalonyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  blackRedWhiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pinkyToolStripMenuItem;
	private: System::Windows::Forms::Button^  button24;









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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instrukcjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorachToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skórkiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->szalonyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->blackRedWhiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pinkyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::RoyalBlue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(12, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::RoyalBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(81, 69);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(149, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(12, 110);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::RoyalBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(81, 110);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->AutoSize = true;
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(149, 110);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::RoyalBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(12, 150);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::RoyalBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(81, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 34);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->AutoSize = true;
			this->button9->BackColor = System::Drawing::Color::RoyalBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(149, 150);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(63, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->AutoSize = true;
			this->button10->BackColor = System::Drawing::Color::Navy;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(218, 150);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(63, 34);
			this->button10->TabIndex = 9;
			this->button10->Text = L"x";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->BackColor = System::Drawing::Color::RoyalBlue;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(81, 191);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 34);
			this->button11->TabIndex = 10;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->AutoSize = true;
			this->button12->BackColor = System::Drawing::Color::Navy;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(218, 232);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(132, 42);
			this->button12->TabIndex = 11;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->AutoSize = true;
			this->button13->BackColor = System::Drawing::Color::Navy;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(287, 150);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(63, 34);
			this->button13->TabIndex = 12;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->AutoSize = true;
			this->button14->BackColor = System::Drawing::Color::Navy;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(218, 69);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(63, 34);
			this->button14->TabIndex = 13;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->AutoSize = true;
			this->button15->BackColor = System::Drawing::Color::Navy;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(218, 110);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(63, 34);
			this->button15->TabIndex = 14;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->AutoSize = true;
			this->button16->BackColor = System::Drawing::Color::Navy;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(218, 191);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(63, 34);
			this->button16->TabIndex = 15;
			this->button16->Text = L"(";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->AutoSize = true;
			this->button17->BackColor = System::Drawing::Color::Navy;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Location = System::Drawing::Point(287, 191);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(63, 34);
			this->button17->TabIndex = 16;
			this->button17->Text = L")";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(10, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 30);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button18
			// 
			this->button18->AutoSize = true;
			this->button18->BackColor = System::Drawing::Color::Navy;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(12, 191);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(63, 34);
			this->button18->TabIndex = 18;
			this->button18->Text = L",";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->AutoSize = true;
			this->button19->BackColor = System::Drawing::Color::Navy;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(149, 191);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(63, 34);
			this->button19->TabIndex = 19;
			this->button19->Text = L"^";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->AutoSize = true;
			this->button20->BackColor = System::Drawing::Color::Crimson;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button20->Location = System::Drawing::Point(287, 69);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(63, 34);
			this->button20->TabIndex = 20;
			this->button20->Text = L"CLEAN";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->AutoSize = true;
			this->button21->BackColor = System::Drawing::Color::Navy;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(12, 232);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(63, 42);
			this->button21->TabIndex = 21;
			this->button21->Text = L"sin";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->AutoSize = true;
			this->button22->BackColor = System::Drawing::Color::Navy;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button22->Location = System::Drawing::Point(81, 232);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(62, 42);
			this->button22->TabIndex = 22;
			this->button22->Text = L"cos";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->skórkiToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(360, 24);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->pomocToolStripMenuItem });
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->instrukcjaToolStripMenuItem,
					this->oAutorachToolStripMenuItem
			});
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// instrukcjaToolStripMenuItem
			// 
			this->instrukcjaToolStripMenuItem->Name = L"instrukcjaToolStripMenuItem";
			this->instrukcjaToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->instrukcjaToolStripMenuItem->Text = L"Instrukcja";
			this->instrukcjaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::instrukcjaToolStripMenuItem_Click);
			// 
			// oAutorachToolStripMenuItem
			// 
			this->oAutorachToolStripMenuItem->Name = L"oAutorachToolStripMenuItem";
			this->oAutorachToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->oAutorachToolStripMenuItem->Text = L"O autorach";
			this->oAutorachToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oAutorachToolStripMenuItem_Click);
			// 
			// skórkiToolStripMenuItem
			// 
			this->skórkiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->standardToolStripMenuItem,
					this->szalonyToolStripMenuItem, this->blackRedWhiteToolStripMenuItem, this->pinkyToolStripMenuItem
			});
			this->skórkiToolStripMenuItem->Name = L"skórkiToolStripMenuItem";
			this->skórkiToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->skórkiToolStripMenuItem->Text = L"Skórki";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardToolStripMenuItem_Click);
			// 
			// szalonyToolStripMenuItem
			// 
			this->szalonyToolStripMenuItem->Name = L"szalonyToolStripMenuItem";
			this->szalonyToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->szalonyToolStripMenuItem->Text = L"Military";
			this->szalonyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::szalonyToolStripMenuItem_Click);
			// 
			// blackRedWhiteToolStripMenuItem
			// 
			this->blackRedWhiteToolStripMenuItem->Name = L"blackRedWhiteToolStripMenuItem";
			this->blackRedWhiteToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->blackRedWhiteToolStripMenuItem->Text = L"BlackRedWhite";
			this->blackRedWhiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::blackRedWhiteToolStripMenuItem_Click);
			// 
			// pinkyToolStripMenuItem
			// 
			this->pinkyToolStripMenuItem->Name = L"pinkyToolStripMenuItem";
			this->pinkyToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->pinkyToolStripMenuItem->Text = L"Pinky";
			this->pinkyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pinkyToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Location = System::Drawing::Point(0, 288);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(1, 0, 10, 0);
			this->statusStrip1->Size = System::Drawing::Size(360, 22);
			this->statusStrip1->TabIndex = 24;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::statusStrip1_ItemClicked);
			// 
			// button23
			// 
			this->button23->AutoSize = true;
			this->button23->BackColor = System::Drawing::Color::Crimson;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->ForeColor = System::Drawing::Color::White;
			this->button23->Location = System::Drawing::Point(287, 109);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(63, 34);
			this->button23->TabIndex = 25;
			this->button23->Text = L"DEL";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->AutoSize = true;
			this->button24->BackColor = System::Drawing::Color::Navy;
			this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button24->Location = System::Drawing::Point(149, 232);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(63, 42);
			this->button24->TabIndex = 26;
			this->button24->Text = L"]";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->button12;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(360, 310);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Calcololo";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) // 1
	{
		if (textBox1->Text == "0")
			textBox1->Text = "1";
		else
			MyForm::textBox1->Text = textBox1->Text + "1";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) // 2
	{
		if (textBox1->Text == "0")
			textBox1->Text = "2";
		else
			MyForm::textBox1->Text = textBox1->Text + "2";
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) // 3
	{
		if (textBox1->Text == "0")
			textBox1->Text = "3";
		else
			MyForm::textBox1->Text = textBox1->Text + "3";
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) // 4
	{
		if (textBox1->Text == "0")
			textBox1->Text = "4";
		else
			MyForm::textBox1->Text = textBox1->Text + "4";
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) // 5
	{
		if (textBox1->Text == "0")
			textBox1->Text = "5";
		else
			MyForm::textBox1->Text = textBox1->Text + "5";
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) // 6
	{
		if (textBox1->Text == "0")
			textBox1->Text = "6";
		else
			MyForm::textBox1->Text = textBox1->Text + "6";
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) // 7
	{
		if (textBox1->Text == "0")
			textBox1->Text = "7";
		else
			MyForm::textBox1->Text = textBox1->Text + "7";
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) // 8
	{
		if (textBox1->Text == "0")
			textBox1->Text = "8";
		else
			MyForm::textBox1->Text = textBox1->Text + "8";
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) // 9
	{
		if (textBox1->Text == "0")
			textBox1->Text = "9";
		else
			MyForm::textBox1->Text = textBox1->Text + "9";
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) // 0
	{
		if (textBox1->Text == "0")
			textBox1->Text = "0";
		else
			MyForm::textBox1->Text = textBox1->Text + "0";
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) // +
	{
		if (textBox1->Text == "0");
		else
			MyForm::textBox1->Text = textBox1->Text + "+";
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) // -
	{
		if (textBox1->Text == "0")
			textBox1->Text = "-";
		else
			MyForm::textBox1->Text = textBox1->Text + "-";
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) // *
	{
		if (textBox1->Text == "0");
		else
			MyForm::textBox1->Text = textBox1->Text + "*";
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) // /
	{
		if (textBox1->Text == "0");
		else
			MyForm::textBox1->Text = textBox1->Text + "/";
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) // (
	{
		if (textBox1->Text == "0")
			textBox1->Text = "(";
		else
			MyForm::textBox1->Text = textBox1->Text + "(";
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) // )
	{
		if (textBox1->Text == "0");
		else
			MyForm::textBox1->Text = textBox1->Text + ")";
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) // =
	{
		//przepisuje string z textBox1 do str uzywajac konwersji z System^ string do std::string
		std::string str = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
		//inicjuje zmienne stringowe na puste
		std::string onp="", stos1="";
		int ile_znakow = 0;//zmienna do zliczania operatorow
		int k = 0;//zmienna do poruszania sie po onp
		int wsk_stosu = 0;//zmienna do poruszania sie po stringu dla operatorow (ala stos)
		int ile_liczb = 0, ile_nawiasow = 0, ile_minusow = 0;
		int length = str.length();//dlugosc wyrazenia w notacji klasycznej
		//licze ile operatorow dzialan znajduje sie w wyrazeniu
		for (int i = 0; i < length; i++) 
		{
			if (str[i] == '+' || str[i] == '*' || str[i] == '^' || str[i] == '/')
				ile_znakow++;
			if (str[i] == '(' || str[i] == ')')
				ile_nawiasow++;
		}
		//ile_nawiasow%2!=0 - bledne wyrazenie!
		//licze ile minusow unarnych oraz binarnych znajduje sie w wyrazeniu
		for (int i = 0; i < length; i++)
			if (str[i] == '-')
				ile_minusow++;
	//wypelniam stos1 spacjami
	for (int i = 0; i < 100/*2*(ile_znakow+ile_nawiasow)+2*ile_minusow*/; i++) 
		stos1 = stos1 + " ";
	//wypelniam spacjami string w ktorym bedzie wyrazenie w onp
	for (int i = 0; i < 100/*length + (ile_znakow * 4) + 4*ile_minusow*/; i++)
		onp = onp + " ";

	int czy_sin=0,czy_cos = 0;
	//zmiana wyrazenia z notacji klasycznej na onp
	for (int i = 0; i < length; i++)
	{

		if (isdigit(str[i])) //jesli znajdziesz cyfre..
		{
			while (isdigit(str[i]) || str[i] == ',')// przemieszczaj sie po stringu az do napotkania operatora
			{
				onp[k] = str[i];
				i++;
				k++;
			}

			if (ispunct(str[i]) || str[i] == 0)//jesli napotkales operator lub koniec stringa -> koniec liczby
			{
				k++;//zostaw spacje po liczbie
				ile_liczb++;
			}
		}

		if (ispunct(str[i]) || str[i]=='s' || str[i]=='c')
		{
			switch (str[i])
			{

				case 's':
					czy_sin = 1;
					i += 2;
					break;
				case 'c':
					czy_cos = 1;
					i += 2;
					break;
				case '(':
					wsk_stosu++;
					stos1[wsk_stosu] = '(';
					break;
				case ')':
					while (stos1[wsk_stosu] != '(')
					{
						onp[k] = stos1[wsk_stosu];
						k++;
						wsk_stosu--;
					}
					wsk_stosu--;
					if (stos1[wsk_stosu] != '(' && stos1[wsk_stosu] != ' ')//przenies dzialanie z przed nawiasu
					{
						onp[k++] = stos1[wsk_stosu--];
						k++;//zostaw spacje po operatorze zeby odroznic minusa oznaczajacego dzialanie od tego oznaczajacego liczbe ujemna
					}
					break;
				case ']':
					while (stos1[wsk_stosu] != '[')
					{
						onp[k] = stos1[wsk_stosu];
						k++;
						wsk_stosu--;
					}
					wsk_stosu--;
					if (czy_sin)
						onp[k++] = 's';
					else if (czy_cos)
						onp[k++] = 'c';
					czy_sin = 0;
					czy_cos = 0;
					break;
				case '[':
					wsk_stosu++;
					stos1[wsk_stosu] = '[';
					break;
				case '*':
					wsk_stosu++;
					stos1[wsk_stosu] = '*';
					break;
				case '^':
					wsk_stosu++;
					stos1[wsk_stosu] = '^';
					break;
				case '-':
					//jesli minus stoi przed nawiasem lub cosinusem lub sinusem , policz nawias, odejmij od 0 i dodaj
					if(str[i+1]=='(' || str[i+1]=='s' || str[i+1]=='c')
					{
						while (stos1[wsk_stosu] == '*')
						{
							onp[k] = '*';
							k++;
							wsk_stosu--;
						}
				
						if (i == 0) //w przypadku gdy minus stoi na poczatku wyrazenia nie ma dodawania
						{
							onp[k++] = '0';
							k++;
						}
						wsk_stosu++;
						stos1[wsk_stosu] = '-';
					}
					//w przeciwnym wypadku - stoi przed liczba - zamien liczba - liczba na liczba + (-liczba)
					else
					{
						while (stos1[wsk_stosu] == '*')
						{
							onp[k] = '*';
							k++;
							wsk_stosu--;
						}
						onp[k++] = '-';
						if (i != 0 && str[i-1]!='(') //jesli minus stoi na poczatku wyrazenia nie ma dodwania
						{
							wsk_stosu++;
							stos1[wsk_stosu] = '+';
						}
					}
					break;
				default:
					while (stos1[wsk_stosu] == '*')
					{
						onp[k] = '*';
						k++;
						wsk_stosu--;
					}
				
					wsk_stosu++;
					stos1[wsk_stosu] = str[i];
					break;
			}//end of switch
		}//end of if
	}//end of for

	while (wsk_stosu>0)//spisz pozostale operatory ze stosu
	{
		onp[k] = stos1[wsk_stosu];
		k++;
		wsk_stosu--;
	}

	double wynik = 0;//wynik poszczegolnych dzialan
	double temp = 0;//tymczasowa zmienna uzywana podczas odejmowania, dzielenia oraz potegowania
	double liczba = 0;//tymczasowe miejsce do pobieranej liczby
	int i = 0;//zmienna do przemieszczania sie po wyrazeniu onp
	int l = 0;//zmienna do zliczania miejsc po przecinku
	int kr = 0; //czy kropka? (0/1 nie/tak)
	double s = 1.0;//zmienna odpowiedzialna za znak (-1/1 liczba ujemna/dodatnia)
	stack stos(ile_liczb);//wielkosc stosu uzalezniona od ilosci policzonych liczb			
	length = onp.length();//dlugosc wyrazenia w onp potrzebna do warunku koncowego petli
	//obliczanie wyrazenia
	for (int i = 0; i <= length; i++)
	{
		//zeruj wartosci zmiennych warunkowych
		kr = 0;
		l = 0;
		liczba = 0;
		
		if (onp[i] == '-' && isdigit(onp[i + 1]))
		{
			s = -1.0;
			continue;
		}

		//jesli znajdziesz liczbe
		if (isdigit(onp[i]))
		{
			//zapisz jej pierwsza cyfre
			liczba = onp[i] - 48;
			//jesli liczba jest jednocyfrowa - dodaj ja na stos, kontynuuj z pominieciem dalszego ciala petli
			if (!isdigit(onp[i + 1]) && onp[i + 1] != ',')
			{
				liczba *= s;
				stos.push(liczba);
				continue;
			}
			//liczba wielocyfrowa
			i++;
			//kontynuuj do napotkania spacji
			while (onp[i] != ' ')
			{
				//jesli napotkasz kropke - kr=1
				if (onp[i] == ',')
				{
					kr = 1;
					i++;
					continue;
				}
				//jesli wczesniej znaleziono kropke - zwiekszaj ilosc miejsc po przecinku
				if (kr == 1)
					l++;
				liczba *= 10;
				liczba = liczba + onp[i] - 48;
				i++;
			}
			//podziel liczbe przez 10^ilosc miejsc po przecinku
			liczba = liczba / pow(10, l);
			liczba *= s;
			//dodaj liczbe na stos
			stos.push(liczba);
		}
		//w przeciwnym wypadku - operator
		else
		{
			switch (onp[i])
			{
			case 'c':
				wynik = cos(stos.pop()*PI / 180);
				stos.push(wynik);
				break;
			case 's':
				wynik = sin(stos.pop()*PI/180);
				stos.push(wynik);
				break;
			case '+':
				wynik = stos.pop() + stos.pop();
				stos.push(wynik);
				//stos.print();
				break;
			case ' ':
				break;
			case '-':
				temp = stos.pop();
				wynik = stos.pop() - temp;
				stos.push(wynik);
				break;
			case '/':
				temp = stos.pop();
				wynik = stos.pop() / temp;
				stos.push(wynik);
				//stos.print();
				break;
			case '*':
				wynik = stos.pop() * stos.pop();
				stos.push(wynik);
				//stos.print();
				break;
			case '^':
				temp = stos.pop();
				wynik = pow(stos.pop(), temp);
				stos.push(wynik);
				//stos.print();
				break;
			default:
				break;
			}//end of switch
		}//end of else
		s = 1.0;
	}//end of for

	//wypisz wynik
	textBox1->Text = Convert::ToString(wynik);

}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) // .
{
	if (textBox1->Text == "0")
		MyForm::textBox1->Text = textBox1->Text + ",";
	else
		MyForm::textBox1->Text = textBox1->Text + ",";
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) // ^
{
	if (textBox1->Text == "0");
	else
		MyForm::textBox1->Text = textBox1->Text + "^";
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) // C
{
	if (textBox1->Text == "0");
	else
		MyForm::textBox1->Text = "0";
	//czy_dzialanie = 0;
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) //sin
{
	if (textBox1->Text == "0")
		MyForm::textBox1->Text = "sin[";
	else
		MyForm::textBox1->Text = MyForm::textBox1->Text + "sin[";
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) //cos
{
	if (textBox1->Text == "0")
		MyForm::textBox1->Text = "cos[";
	else
		MyForm::textBox1->Text = MyForm::textBox1->Text + "cos[";
}


private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) 
{
}
private: System::Void statusStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) 
{
}
private: System::Void oAutorachToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("Autorzy:\n-Mateusz Bajdak\n-Katarzyna Muter\n-Krzysztof Waniewski\n-Aleksandra Stempien\n-Anna Kedziora");
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) //DEL
{
	if (textBox1->Text == "0");
	else if (textBox1->TextLength == 1)
		textBox1->Text = "0";
	else
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->TextLength - 1);
	}
}
private: System::Void instrukcjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	MessageBox::Show("Kalkulator naukowy\nMozesz wpisac wyrazenie z klawiatury lub skorzystac z przyciskow\nWyrazenie moze byc dowolnie skomplikowane :)\nArgumenty sinusa i cosinusa zapisywane sa w nawiasach kwadratowych []\nMilego korzystania z naszej aplikacji!");
}

private: System::Void MyForm_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
{
	if (MessageBox::Show("Do you really want to exit?", "Calcololo", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2) == System::Windows::Forms::DialogResult::No)
		e->Cancel = true;
}
private: System::Void szalonyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::button1->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button2->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button3->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button4->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button5->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button6->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button7->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button8->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button9->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button11->BackColor = System::Drawing::Color::YellowGreen;
	MyForm::button10->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button14->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button15->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button13->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button16->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button24->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button17->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button12->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button22->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button21->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button19->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button18->BackColor = System::Drawing::Color::DarkOliveGreen;
	MyForm::button23->BackColor = System::Drawing::Color::Crimson;
	MyForm::button20->BackColor = System::Drawing::Color::Crimson;
	BackColor = System::Drawing::Color::PaleGoldenrod;



}
private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::button1->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button2->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button3->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button4->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button5->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button6->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button7->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button8->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button9->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button11->BackColor = System::Drawing::Color::RoyalBlue;
	MyForm::button10->BackColor = System::Drawing::Color::Navy;
	MyForm::button14->BackColor = System::Drawing::Color::Navy;
	MyForm::button15->BackColor = System::Drawing::Color::Navy;
	MyForm::button13->BackColor = System::Drawing::Color::Navy;
	MyForm::button16->BackColor = System::Drawing::Color::Navy;
	MyForm::button24->BackColor = System::Drawing::Color::Navy;
	MyForm::button17->BackColor = System::Drawing::Color::Navy;
	MyForm::button12->BackColor = System::Drawing::Color::Navy;
	MyForm::button22->BackColor = System::Drawing::Color::Navy;
	MyForm::button21->BackColor = System::Drawing::Color::Navy;
	MyForm::button19->BackColor = System::Drawing::Color::Navy;
	MyForm::button18->BackColor = System::Drawing::Color::Navy;
	MyForm::button23->BackColor = System::Drawing::Color::Crimson;
	MyForm::button20->BackColor = System::Drawing::Color::Crimson;
	BackColor = System::Drawing::Color::Silver;
}
private: System::Void blackRedWhiteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::button1->BackColor = System::Drawing::Color::Gray;
	MyForm::button2->BackColor = System::Drawing::Color::Gray;
	MyForm::button3->BackColor = System::Drawing::Color::Gray;
	MyForm::button4->BackColor = System::Drawing::Color::Gray;
	MyForm::button5->BackColor = System::Drawing::Color::Gray;
	MyForm::button6->BackColor = System::Drawing::Color::Gray;
	MyForm::button7->BackColor = System::Drawing::Color::Gray;
	MyForm::button8->BackColor = System::Drawing::Color::Gray;
	MyForm::button9->BackColor = System::Drawing::Color::Gray;
	MyForm::button11->BackColor = System::Drawing::Color::Gray;
	MyForm::button10->BackColor = System::Drawing::Color::Black;
	MyForm::button14->BackColor = System::Drawing::Color::Black;
	MyForm::button15->BackColor = System::Drawing::Color::Black;
	MyForm::button13->BackColor = System::Drawing::Color::Black;
	MyForm::button16->BackColor = System::Drawing::Color::Black;
	MyForm::button17->BackColor = System::Drawing::Color::Black;
	MyForm::button12->BackColor = System::Drawing::Color::Black;
	MyForm::button22->BackColor = System::Drawing::Color::Black;
	MyForm::button21->BackColor = System::Drawing::Color::Black;
	MyForm::button19->BackColor = System::Drawing::Color::Black;
	MyForm::button24->BackColor = System::Drawing::Color::Black;
	MyForm::button18->BackColor = System::Drawing::Color::Black;
	MyForm::button23->BackColor = System::Drawing::Color::Crimson;
	MyForm::button20->BackColor = System::Drawing::Color::Crimson;
	BackColor = System::Drawing::Color::WhiteSmoke;
}
private: System::Void pinkyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::button1->BackColor = System::Drawing::Color::LightPink;
	MyForm::button2->BackColor = System::Drawing::Color::LightPink;
	MyForm::button3->BackColor = System::Drawing::Color::LightPink;
	MyForm::button4->BackColor = System::Drawing::Color::LightPink;
	MyForm::button5->BackColor = System::Drawing::Color::LightPink;
	MyForm::button6->BackColor = System::Drawing::Color::LightPink;
	MyForm::button7->BackColor = System::Drawing::Color::LightPink;
	MyForm::button8->BackColor = System::Drawing::Color::LightPink;
	MyForm::button9->BackColor = System::Drawing::Color::LightPink;
	MyForm::button11->BackColor = System::Drawing::Color::LightPink;
	MyForm::button10->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button14->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button15->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button13->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button16->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button17->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button12->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button22->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button21->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button19->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button18->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button24->BackColor = System::Drawing::Color::DeepPink;
	MyForm::button23->BackColor = System::Drawing::Color::Purple;
	MyForm::button20->BackColor = System::Drawing::Color::Purple;
	BackColor = System::Drawing::Color::LavenderBlush;
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) // ]
{
	if (textBox1->Text == "0");
	else
		MyForm::textBox1->Text = textBox1->Text + "]";
}
};
}
