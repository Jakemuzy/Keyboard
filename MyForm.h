#pragma comment (lib, "User32.lib")
#include<iostream>
#include<windows.h>

namespace Keyboard {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(10, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 84);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Q";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonQ);
			this->button1->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonQ);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(103, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 84);
			this->button2->TabIndex = 1;
			this->button2->Text = L"W";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttonW);
			this->button2->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonW);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(196, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 84);
			this->button3->TabIndex = 2;
			this->button3->Text = L"E";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttonE);
			this->button3->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonE);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(289, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 84);
			this->button4->TabIndex = 3;
			this->button4->Text = L"R";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonR);
			this->button4->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonR);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(382, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 84);
			this->button5->TabIndex = 4;
			this->button5->Text = L"T";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonT);
			this->button5->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonT);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(475, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 84);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Y";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonY);
			this->button6->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonY);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(568, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 84);
			this->button7->TabIndex = 6;
			this->button7->Text = L"U";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonU);
			this->button7->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonU);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(661, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 84);
			this->button8->TabIndex = 7;
			this->button8->Text = L"I";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonI);
			this->button8->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonI);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(847, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(87, 84);
			this->button9->TabIndex = 8;
			this->button9->Text = L"P";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonP);
			this->button9->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonP);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(754, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(87, 84);
			this->button10->TabIndex = 8;
			this->button10->Text = L"O";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonO);
			this->button10->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonO);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(798, 102);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(87, 84);
			this->button11->TabIndex = 17;
			this->button11->Text = L"L";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonL);
			this->button11->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonL);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(891, 102);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(87, 84);
			this->button12->TabIndex = 18;
			this->button12->Text = L"; :";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonColon);
			this->button12->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonColon);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(705, 102);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(87, 84);
			this->button13->TabIndex = 16;
			this->button13->Text = L"K";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonK);
			this->button13->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonK);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(612, 102);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(87, 84);
			this->button14->TabIndex = 15;
			this->button14->Text = L"J";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonJ);
			this->button14->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonJ);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(519, 102);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(87, 84);
			this->button15->TabIndex = 14;
			this->button15->Text = L"H";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonH);
			this->button15->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonH);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(426, 102);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(87, 84);
			this->button16->TabIndex = 13;
			this->button16->Text = L"G";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonG);
			this->button16->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonG);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(333, 102);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(87, 84);
			this->button17->TabIndex = 12;
			this->button17->Text = L"F";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonF);
			this->button17->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonF);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(240, 102);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(87, 84);
			this->button18->TabIndex = 11;
			this->button18->Text = L"D";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::buttonD);
			this->button18->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonD);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(147, 102);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(87, 84);
			this->button19->TabIndex = 10;
			this->button19->Text = L"S";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::buttonS);
			this->button19->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonS);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(54, 102);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(87, 84);
			this->button20->TabIndex = 9;
			this->button20->Text = L"A";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::buttonA);
			this->button20->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonA);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(847, 192);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(87, 84);
			this->button21->TabIndex = 27;
			this->button21->Text = L". >";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::buttonPeriod);
			this->button21->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonPeriod);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::Black;
			this->button22->Location = System::Drawing::Point(940, 192);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(87, 84);
			this->button22->TabIndex = 28;
			this->button22->Text = L"/ \?";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::buttonSlash);
			this->button22->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonSlash);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::Black;
			this->button23->Location = System::Drawing::Point(754, 192);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(87, 84);
			this->button23->TabIndex = 26;
			this->button23->Text = L", <";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::buttonComma);
			this->button23->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonComma);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(661, 192);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(87, 84);
			this->button24->TabIndex = 25;
			this->button24->Text = L"M";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::buttonM);
			this->button24->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonM);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::Black;
			this->button25->Location = System::Drawing::Point(568, 192);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(87, 84);
			this->button25->TabIndex = 24;
			this->button25->Text = L"N";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::buttonN);
			this->button25->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonN);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::Black;
			this->button26->Location = System::Drawing::Point(475, 192);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(87, 84);
			this->button26->TabIndex = 23;
			this->button26->Text = L"B";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::buttonB);
			this->button26->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonB);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::Black;
			this->button27->Location = System::Drawing::Point(382, 192);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(87, 84);
			this->button27->TabIndex = 22;
			this->button27->Text = L"V";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::buttonV);
			this->button27->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonV);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::Black;
			this->button28->Location = System::Drawing::Point(289, 192);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(87, 84);
			this->button28->TabIndex = 21;
			this->button28->Text = L"C";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::buttonC);
			this->button28->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonC);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::Black;
			this->button29->Location = System::Drawing::Point(196, 192);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(87, 84);
			this->button29->TabIndex = 20;
			this->button29->Text = L"X";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::buttonX);
			this->button29->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonX);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::Black;
			this->button30->Location = System::Drawing::Point(103, 192);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(87, 84);
			this->button30->TabIndex = 19;
			this->button30->Text = L"Z";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::buttonZ);
			this->button30->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonZ);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::Black;
			this->button31->Location = System::Drawing::Point(940, 12);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(87, 84);
			this->button31->TabIndex = 29;
			this->button31->Text = L"{ [";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::buttonBracket1);
			this->button31->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonBracket1);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(1033, 12);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(87, 84);
			this->button32->TabIndex = 30;
			this->button32->Text = L"} ]";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::buttonBracketRight);
			this->button32->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonBracketRight);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(984, 102);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(87, 84);
			this->button33->TabIndex = 31;
			this->button33->Text = L"\' \"";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::buttonApostophe);
			this->button33->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonApostophe);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(240, 282);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(459, 84);
			this->button34->TabIndex = 32;
			this->button34->Text = L"Space";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::buttonSpace);
			this->button34->MouseHover += gcnew System::EventHandler(this, &MyForm::buttonSpace);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(54, 282);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(180, 84);
			this->button35->TabIndex = 33;
			this->button35->Text = L"LClk";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::leftClick);
			this->button35->MouseHover += gcnew System::EventHandler(this, &MyForm::leftClick);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(705, 282);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(180, 84);
			this->button36->TabIndex = 34;
			this->button36->Text = L"RClk";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::rightClick);
			this->button36->MouseHover += gcnew System::EventHandler(this, &MyForm::rightClick);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(891, 282);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(229, 84);
			this->button37->TabIndex = 35;
			this->button37->Text = L"Back";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::backButton);
			this->button37->MouseHover += gcnew System::EventHandler(this, &MyForm::backButton);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::IndianRed;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(1033, 192);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(87, 84);
			this->button38->TabIndex = 36;
			this->button38->Text = L"EX";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::exit);
			this->button38->MouseHover += gcnew System::EventHandler(this, &MyForm::exit);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1136, 381);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
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
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void buttonQ(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x51; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonW(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x57; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonE(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x45; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonR(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x52; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonT(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x54; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

private: System::Void buttonY(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x59; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonU(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x55; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonI(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x49; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonO(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x4F; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void button(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonP(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x50; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonBracket1(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xDB; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

}
private: System::Void buttonBracketRight(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xDD; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));

}
private: System::Void buttonA(System::Object^ sender, System::EventArgs^ e) {
	
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x41; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonS(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x53; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonD(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x44; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonF(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x46; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonG(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x47; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonH(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x48; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonJ(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x4A; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonK(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x4B; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonL(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x4C; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonColon(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xBA; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonApostophe(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xDE; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonZ(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x5A; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonX(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x58; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonC(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x43; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonV(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x56; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonB(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x42; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonN(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x4E; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonM(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x4D; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonComma(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xBC; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonPeriod(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xBE; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void buttonSlash(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0xBF; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

private: System::Void buttonSpace(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x20; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void rightClick(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x02; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void leftClick(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x01; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}

private: System::Void backButton(System::Object^ sender, System::EventArgs^ e) {
	INPUT ip;

	ip.type = INPUT_KEYBOARD;
	ip.ki.wScan = 0; // hardware scan code for key
	ip.ki.time = 0;
	ip.ki.dwExtraInfo = 0;
	// Press the "A" key
	ip.ki.wVk = 0x08; // virtual-key code for the "a" key
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	// Release the "A" key
	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}
private: System::Void exit(System::Object^ sender, System::EventArgs^ e) {
	throw;
}
};
}
