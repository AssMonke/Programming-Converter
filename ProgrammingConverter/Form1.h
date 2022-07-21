#pragma once
#include <windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Conversion.h"

namespace WindowsForm 
{
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Label^ convertLabel;
		System::Windows::Forms::TextBox^ convertInput;
		System::Windows::Forms::Panel^ convertTypePanel;
		System::Windows::Forms::RadioButton^ binaryOption;
		System::Windows::Forms::RadioButton^ hexOption;
		System::Windows::Forms::RadioButton^ decOption;
		System::Windows::Forms::Label^ binary8Con;
		System::Windows::Forms::Label^ byteCon;
		System::Windows::Forms::Label^ twoByteCon;
		System::Windows::Forms::Label^ fourByteCon;
		System::Windows::Forms::Label^ eightByteCon;
		System::Windows::Forms::Label^ hexCon;
		System::Windows::Forms::Label^ boolCon;
		System::Windows::Forms::ToolTip^ toolTipManager;
		System::Windows::Forms::CheckBox^ isSigned;
		System::Windows::Forms::Label^ charCounter;
		System::Windows::Forms::Button^ binary8Cpy;
		System::Windows::Forms::Button^ hexCpy;
		System::Windows::Forms::Button^ oneCpy;
		System::Windows::Forms::Button^ twoCpy;
		System::Windows::Forms::Button^ boolCpy;
		System::Windows::Forms::Button^ fourCpy;
		System::Windows::Forms::Button^ eightCpy;
		System::Windows::Forms::Label^ copyLabel;
		System::Windows::Forms::Label^ warning;
		System::Windows::Forms::Button^ binary16Cpy;
		System::Windows::Forms::Label^ binary16Con;
		System::Windows::Forms::Button^ binary32Cpy;
		System::Windows::Forms::Label^ binary32Con;
		System::Windows::Forms::Button^ binary64Cpy;
		System::Windows::Forms::Label^ binary64Con;
		System::Windows::Forms::RadioButton^ floatOption;
		System::Windows::Forms::Button^ doubleCpy;
		System::Windows::Forms::Button^ floatCpy;
		System::Windows::Forms::Label^ doubleCon;
		System::Windows::Forms::Label^ floatCon;
		System::Windows::Forms::Button^ stringCpy;
		System::Windows::Forms::Label^ stringCon;
		System::Windows::Forms::RadioButton^ stringOption;
		System::Windows::Forms::Button^ binaryCpy;
		System::Windows::Forms::Label^ binaryCon;
		System::Windows::Forms::PictureBox^ header;
		System::Windows::Forms::Button^ convertButton;
		System::Windows::Forms::TextBox^ roundPlace;
		System::Windows::Forms::CheckBox^ isRounded;
		System::Windows::Forms::CheckBox^ isTopMost;
		System::ComponentModel::IContainer^ components;

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->convertLabel = (gcnew System::Windows::Forms::Label());
			this->convertInput = (gcnew System::Windows::Forms::TextBox());
			this->binaryOption = (gcnew System::Windows::Forms::RadioButton());
			this->convertTypePanel = (gcnew System::Windows::Forms::Panel());
			this->stringOption = (gcnew System::Windows::Forms::RadioButton());
			this->floatOption = (gcnew System::Windows::Forms::RadioButton());
			this->hexOption = (gcnew System::Windows::Forms::RadioButton());
			this->decOption = (gcnew System::Windows::Forms::RadioButton());
			this->binary8Con = (gcnew System::Windows::Forms::Label());
			this->byteCon = (gcnew System::Windows::Forms::Label());
			this->twoByteCon = (gcnew System::Windows::Forms::Label());
			this->fourByteCon = (gcnew System::Windows::Forms::Label());
			this->eightByteCon = (gcnew System::Windows::Forms::Label());
			this->hexCon = (gcnew System::Windows::Forms::Label());
			this->boolCon = (gcnew System::Windows::Forms::Label());
			this->toolTipManager = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->charCounter = (gcnew System::Windows::Forms::Label());
			this->copyLabel = (gcnew System::Windows::Forms::Label());
			this->isSigned = (gcnew System::Windows::Forms::CheckBox());
			this->warning = (gcnew System::Windows::Forms::Label());
			this->binary16Con = (gcnew System::Windows::Forms::Label());
			this->binary32Con = (gcnew System::Windows::Forms::Label());
			this->binary64Con = (gcnew System::Windows::Forms::Label());
			this->doubleCon = (gcnew System::Windows::Forms::Label());
			this->floatCon = (gcnew System::Windows::Forms::Label());
			this->binaryCon = (gcnew System::Windows::Forms::Label());
			this->stringCon = (gcnew System::Windows::Forms::Label());
			this->roundPlace = (gcnew System::Windows::Forms::TextBox());
			this->isRounded = (gcnew System::Windows::Forms::CheckBox());
			this->isTopMost = (gcnew System::Windows::Forms::CheckBox());
			this->binary8Cpy = (gcnew System::Windows::Forms::Button());
			this->hexCpy = (gcnew System::Windows::Forms::Button());
			this->oneCpy = (gcnew System::Windows::Forms::Button());
			this->twoCpy = (gcnew System::Windows::Forms::Button());
			this->boolCpy = (gcnew System::Windows::Forms::Button());
			this->fourCpy = (gcnew System::Windows::Forms::Button());
			this->eightCpy = (gcnew System::Windows::Forms::Button());
			this->binary16Cpy = (gcnew System::Windows::Forms::Button());
			this->binary32Cpy = (gcnew System::Windows::Forms::Button());
			this->binary64Cpy = (gcnew System::Windows::Forms::Button());
			this->doubleCpy = (gcnew System::Windows::Forms::Button());
			this->floatCpy = (gcnew System::Windows::Forms::Button());
			this->stringCpy = (gcnew System::Windows::Forms::Button());
			this->binaryCpy = (gcnew System::Windows::Forms::Button());
			this->header = (gcnew System::Windows::Forms::PictureBox());
			this->convertButton = (gcnew System::Windows::Forms::Button());
			this->convertTypePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->header))->BeginInit();
			this->SuspendLayout();
			// 
			// convertLabel
			// 
			this->convertLabel->AutoSize = true;
			this->convertLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->convertLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convertLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->convertLabel->Location = System::Drawing::Point(18, 9);
			this->convertLabel->Name = L"convertLabel";
			this->convertLabel->Size = System::Drawing::Size(302, 31);
			this->convertLabel->TabIndex = 0;
			this->convertLabel->Text = L"Programming Converter";
			this->convertLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// convertInput
			// 
			this->convertInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->convertInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->convertInput->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->convertInput->Location = System::Drawing::Point(21, 43);
			this->convertInput->MaxLength = 9999;
			this->convertInput->Name = L"convertInput";
			this->convertInput->Size = System::Drawing::Size(538, 20);
			this->convertInput->TabIndex = 1;
			// 
			// binaryOption
			// 
			this->binaryOption->AutoSize = true;
			this->binaryOption->Checked = true;
			this->binaryOption->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binaryOption->FlatAppearance->BorderSize = 0;
			this->binaryOption->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binaryOption->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->binaryOption->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->binaryOption->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binaryOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->binaryOption->Location = System::Drawing::Point(3, 3);
			this->binaryOption->Name = L"binaryOption";
			this->binaryOption->Size = System::Drawing::Size(53, 17);
			this->binaryOption->TabIndex = 2;
			this->binaryOption->TabStop = true;
			this->binaryOption->Text = L"Binary";
			this->toolTipManager->SetToolTip(this->binaryOption, L"Convert from binary");
			this->binaryOption->UseVisualStyleBackColor = true;
			// 
			// convertTypePanel
			// 
			this->convertTypePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->convertTypePanel->Controls->Add(this->stringOption);
			this->convertTypePanel->Controls->Add(this->floatOption);
			this->convertTypePanel->Controls->Add(this->hexOption);
			this->convertTypePanel->Controls->Add(this->decOption);
			this->convertTypePanel->Controls->Add(this->binaryOption);
			this->convertTypePanel->Location = System::Drawing::Point(21, 69);
			this->convertTypePanel->Name = L"convertTypePanel";
			this->convertTypePanel->Size = System::Drawing::Size(274, 28);
			this->convertTypePanel->TabIndex = 3;
			// 
			// stringOption
			// 
			this->stringOption->AutoSize = true;
			this->stringOption->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->stringOption->FlatAppearance->BorderSize = 0;
			this->stringOption->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->stringOption->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->stringOption->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->stringOption->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stringOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->stringOption->Location = System::Drawing::Point(218, 3);
			this->stringOption->Name = L"stringOption";
			this->stringOption->Size = System::Drawing::Size(51, 17);
			this->stringOption->TabIndex = 6;
			this->stringOption->Text = L"String";
			this->toolTipManager->SetToolTip(this->stringOption, L"Convert from string");
			this->stringOption->UseVisualStyleBackColor = true;
			// 
			// floatOption
			// 
			this->floatOption->AutoSize = true;
			this->floatOption->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->floatOption->FlatAppearance->BorderSize = 0;
			this->floatOption->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->floatOption->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->floatOption->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->floatOption->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->floatOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->floatOption->Location = System::Drawing::Point(164, 3);
			this->floatOption->Name = L"floatOption";
			this->floatOption->Size = System::Drawing::Size(47, 17);
			this->floatOption->TabIndex = 5;
			this->floatOption->Text = L"Float";
			this->toolTipManager->SetToolTip(this->floatOption, L"Convert from decimal floating point");
			this->floatOption->UseVisualStyleBackColor = true;
			// 
			// hexOption
			// 
			this->hexOption->AutoSize = true;
			this->hexOption->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->hexOption->FlatAppearance->BorderSize = 0;
			this->hexOption->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->hexOption->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->hexOption->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->hexOption->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hexOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->hexOption->Location = System::Drawing::Point(63, 3);
			this->hexOption->Name = L"hexOption";
			this->hexOption->Size = System::Drawing::Size(43, 17);
			this->hexOption->TabIndex = 4;
			this->hexOption->Text = L"Hex";
			this->toolTipManager->SetToolTip(this->hexOption, L"Convert from hexadecimal");
			this->hexOption->UseVisualStyleBackColor = true;
			// 
			// decOption
			// 
			this->decOption->AutoSize = true;
			this->decOption->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->decOption->FlatAppearance->BorderSize = 0;
			this->decOption->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->decOption->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->decOption->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->decOption->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->decOption->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->decOption->Location = System::Drawing::Point(113, 3);
			this->decOption->Name = L"decOption";
			this->decOption->Size = System::Drawing::Size(44, 17);
			this->decOption->TabIndex = 3;
			this->decOption->Text = L"Dec";
			this->toolTipManager->SetToolTip(this->decOption, L"Convert from decimal integer");
			this->decOption->UseVisualStyleBackColor = true;
			// 
			// binary8Con
			// 
			this->binary8Con->AutoSize = true;
			this->binary8Con->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary8Con->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->binary8Con->Location = System::Drawing::Point(40, 124);
			this->binary8Con->Name = L"binary8Con";
			this->binary8Con->Size = System::Drawing::Size(93, 17);
			this->binary8Con->TabIndex = 4;
			this->binary8Con->Text = L"8 Bit Binary: -";
			this->toolTipManager->SetToolTip(this->binary8Con, L"1 byte; signed: two\'s complement; float: IEEE 754");
			// 
			// byteCon
			// 
			this->byteCon->AutoSize = true;
			this->byteCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->byteCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->byteCon->Location = System::Drawing::Point(40, 243);
			this->byteCon->Name = L"byteCon";
			this->byteCon->Size = System::Drawing::Size(80, 17);
			this->byteCon->TabIndex = 5;
			this->byteCon->Text = L"1 Byte Int: -";
			this->toolTipManager->SetToolTip(this->byteCon, L"C++ char; signed/unsigned: -128-127; 0-255");
			// 
			// twoByteCon
			// 
			this->twoByteCon->AutoSize = true;
			this->twoByteCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoByteCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->twoByteCon->Location = System::Drawing::Point(40, 260);
			this->twoByteCon->Name = L"twoByteCon";
			this->twoByteCon->Size = System::Drawing::Size(80, 17);
			this->twoByteCon->TabIndex = 6;
			this->twoByteCon->Text = L"2 Byte Int: -";
			this->toolTipManager->SetToolTip(this->twoByteCon, L"C++ short int; signed/unsigned: -32768-32767; 0-65535");
			// 
			// fourByteCon
			// 
			this->fourByteCon->AutoSize = true;
			this->fourByteCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourByteCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->fourByteCon->Location = System::Drawing::Point(40, 277);
			this->fourByteCon->Name = L"fourByteCon";
			this->fourByteCon->Size = System::Drawing::Size(80, 17);
			this->fourByteCon->TabIndex = 7;
			this->fourByteCon->Text = L"4 Byte Int: -";
			this->toolTipManager->SetToolTip(this->fourByteCon, L"C++ int; signed/unsigned: -2147483648-2147483647; 0-4294967295");
			// 
			// eightByteCon
			// 
			this->eightByteCon->AutoSize = true;
			this->eightByteCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightByteCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->eightByteCon->Location = System::Drawing::Point(40, 294);
			this->eightByteCon->Name = L"eightByteCon";
			this->eightByteCon->Size = System::Drawing::Size(80, 17);
			this->eightByteCon->TabIndex = 8;
			this->eightByteCon->Text = L"8 Byte Int: -";
			this->toolTipManager->SetToolTip(this->eightByteCon, L"C++ long long int; signed/unsigned: -9223372036854775808-9223372036854775807; 0-1"
				L"8446744073709551615");
			// 
			// hexCon
			// 
			this->hexCon->AutoSize = true;
			this->hexCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hexCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->hexCon->Location = System::Drawing::Point(40, 209);
			this->hexCon->Name = L"hexCon";
			this->hexCon->Size = System::Drawing::Size(101, 17);
			this->hexCon->TabIndex = 9;
			this->hexCon->Text = L"Hexadecimal: -";
			this->toolTipManager->SetToolTip(this->hexCon, L"Base 16; 0-F");
			// 
			// boolCon
			// 
			this->boolCon->AutoSize = true;
			this->boolCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boolCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->boolCon->Location = System::Drawing::Point(40, 226);
			this->boolCon->Name = L"boolCon";
			this->boolCon->Size = System::Drawing::Size(73, 17);
			this->boolCon->TabIndex = 10;
			this->boolCon->Text = L"Boolean: -";
			this->toolTipManager->SetToolTip(this->boolCon, L"C++ bool; 0=false; else=true");
			// 
			// charCounter
			// 
			this->charCounter->AutoSize = true;
			this->charCounter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->charCounter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->charCounter->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->charCounter->Location = System::Drawing::Point(565, 44);
			this->charCounter->Name = L"charCounter";
			this->charCounter->Size = System::Drawing::Size(61, 17);
			this->charCounter->TabIndex = 12;
			this->charCounter->Text = L"Chars: 0";
			this->toolTipManager->SetToolTip(this->charCounter, L"Characters in the text box");
			// 
			// copyLabel
			// 
			this->copyLabel->AutoSize = true;
			this->copyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->copyLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->copyLabel->Location = System::Drawing::Point(18, 110);
			this->copyLabel->Name = L"copyLabel";
			this->copyLabel->Size = System::Drawing::Size(31, 13);
			this->copyLabel->TabIndex = 20;
			this->copyLabel->Text = L"Copy";
			this->toolTipManager->SetToolTip(this->copyLabel, L"Click button to copy converted value.");
			// 
			// isSigned
			// 
			this->isSigned->AutoSize = true;
			this->isSigned->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->isSigned->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->isSigned->FlatAppearance->BorderSize = 0;
			this->isSigned->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->isSigned->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->isSigned->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->isSigned->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->isSigned->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->isSigned->Location = System::Drawing::Point(297, 73);
			this->isSigned->Name = L"isSigned";
			this->isSigned->Size = System::Drawing::Size(56, 17);
			this->isSigned->TabIndex = 11;
			this->isSigned->Text = L"Signed";
			this->toolTipManager->SetToolTip(this->isSigned, L"Set conversions to signed");
			this->isSigned->UseVisualStyleBackColor = false;
			// 
			// warning
			// 
			this->warning->AutoSize = true;
			this->warning->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->warning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->warning->ForeColor = System::Drawing::Color::Red;
			this->warning->Location = System::Drawing::Point(315, 27);
			this->warning->Name = L"warning";
			this->warning->Size = System::Drawing::Size(0, 13);
			this->warning->TabIndex = 21;
			this->toolTipManager->SetToolTip(this->warning, L"signed/unsigned: -9223372036854775808-9223372036854775807; 0-18446744073709551615"
				L"");
			// 
			// binary16Con
			// 
			this->binary16Con->AutoSize = true;
			this->binary16Con->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary16Con->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->binary16Con->Location = System::Drawing::Point(40, 141);
			this->binary16Con->Name = L"binary16Con";
			this->binary16Con->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->binary16Con->Size = System::Drawing::Size(101, 17);
			this->binary16Con->TabIndex = 22;
			this->binary16Con->Text = L"16 Bit Binary: -";
			this->toolTipManager->SetToolTip(this->binary16Con, L"2 bytes; signed: two\'s complement; float: IEEE 754");
			// 
			// binary32Con
			// 
			this->binary32Con->AutoSize = true;
			this->binary32Con->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary32Con->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->binary32Con->Location = System::Drawing::Point(40, 158);
			this->binary32Con->Name = L"binary32Con";
			this->binary32Con->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->binary32Con->Size = System::Drawing::Size(101, 17);
			this->binary32Con->TabIndex = 24;
			this->binary32Con->Text = L"32 Bit Binary: -";
			this->toolTipManager->SetToolTip(this->binary32Con, L"4 bytes; signed: two\'s complement; float: IEEE 754");
			// 
			// binary64Con
			// 
			this->binary64Con->AutoSize = true;
			this->binary64Con->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary64Con->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->binary64Con->Location = System::Drawing::Point(40, 175);
			this->binary64Con->Name = L"binary64Con";
			this->binary64Con->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->binary64Con->Size = System::Drawing::Size(101, 17);
			this->binary64Con->TabIndex = 26;
			this->binary64Con->Text = L"64 Bit Binary: -";
			this->toolTipManager->SetToolTip(this->binary64Con, L"8 bytes; signed: two\'s complement; float: IEEE 754");
			// 
			// doubleCon
			// 
			this->doubleCon->AutoSize = true;
			this->doubleCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doubleCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->doubleCon->Location = System::Drawing::Point(40, 328);
			this->doubleCon->Name = L"doubleCon";
			this->doubleCon->Size = System::Drawing::Size(151, 17);
			this->doubleCon->TabIndex = 29;
			this->doubleCon->Text = L"8 Byte Floating Point: -";
			this->toolTipManager->SetToolTip(this->doubleCon, L"C++ double; -1.79769 E+308 - 1.79769 E+308");
			// 
			// floatCon
			// 
			this->floatCon->AutoSize = true;
			this->floatCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->floatCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->floatCon->Location = System::Drawing::Point(40, 311);
			this->floatCon->Name = L"floatCon";
			this->floatCon->Size = System::Drawing::Size(151, 17);
			this->floatCon->TabIndex = 28;
			this->floatCon->Text = L"4 Byte Floating Point: -";
			this->toolTipManager->SetToolTip(this->floatCon, L"C++ float; -3.4 E+38 - 3.4 E+38");
			// 
			// binaryCon
			// 
			this->binaryCon->AutoSize = true;
			this->binaryCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binaryCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->binaryCon->Location = System::Drawing::Point(40, 192);
			this->binaryCon->Name = L"binaryCon";
			this->binaryCon->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->binaryCon->Size = System::Drawing::Size(61, 17);
			this->binaryCon->TabIndex = 34;
			this->binaryCon->Text = L"Binary: -";
			this->toolTipManager->SetToolTip(this->binaryCon, L"Unrestricted size up to UINT_MAX; will use minimum bits needed to represent the n"
				L"umber; signed: two\'s complement; float: IEEE 754");
			// 
			// stringCon
			// 
			this->stringCon->AutoSize = true;
			this->stringCon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stringCon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(235)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->stringCon->Location = System::Drawing::Point(40, 345);
			this->stringCon->Name = L"stringCon";
			this->stringCon->Size = System::Drawing::Size(58, 17);
			this->stringCon->TabIndex = 32;
			this->stringCon->Text = L"String: -";
			this->toolTipManager->SetToolTip(this->stringCon, L"Text");
			// 
			// roundPlace
			// 
			this->roundPlace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->roundPlace->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->roundPlace->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->roundPlace->Location = System::Drawing::Point(432, 69);
			this->roundPlace->MaxLength = 2;
			this->roundPlace->Name = L"roundPlace";
			this->roundPlace->Size = System::Drawing::Size(21, 20);
			this->roundPlace->TabIndex = 38;
			this->roundPlace->Text = L"0";
			this->roundPlace->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTipManager->SetToolTip(this->roundPlace, L"Places to round");
			this->roundPlace->Visible = false;
			// 
			// isRounded
			// 
			this->isRounded->AutoSize = true;
			this->isRounded->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->isRounded->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->isRounded->FlatAppearance->BorderSize = 0;
			this->isRounded->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->isRounded->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->isRounded->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->isRounded->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->isRounded->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->isRounded->Location = System::Drawing::Point(359, 72);
			this->isRounded->Name = L"isRounded";
			this->isRounded->Size = System::Drawing::Size(67, 17);
			this->isRounded->TabIndex = 39;
			this->isRounded->Text = L"Rounded";
			this->toolTipManager->SetToolTip(this->isRounded, L"Round floats to given place");
			this->isRounded->UseVisualStyleBackColor = false;
			this->isRounded->CheckedChanged += gcnew System::EventHandler(this, &Form1::isRounded_CheckedChanged);
			// 
			// isTopMost
			// 
			this->isTopMost->AutoSize = true;
			this->isTopMost->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->isTopMost->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->isTopMost->FlatAppearance->BorderSize = 0;
			this->isTopMost->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->isTopMost->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->isTopMost->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->isTopMost->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->isTopMost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->isTopMost->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->isTopMost->Location = System::Drawing::Point(569, 12);
			this->isTopMost->Name = L"isTopMost";
			this->isTopMost->Size = System::Drawing::Size(68, 17);
			this->isTopMost->TabIndex = 40;
			this->isTopMost->Text = L"Top Most";
			this->toolTipManager->SetToolTip(this->isTopMost, L"Always show window on top.");
			this->isTopMost->UseVisualStyleBackColor = false;
			this->isTopMost->CheckedChanged += gcnew System::EventHandler(this, &Form1::isTopMost_CheckedChanged);
			// 
			// binary8Cpy
			// 
			this->binary8Cpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->binary8Cpy->FlatAppearance->BorderSize = 0;
			this->binary8Cpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binary8Cpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->binary8Cpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binary8Cpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary8Cpy->Location = System::Drawing::Point(22, 127);
			this->binary8Cpy->Name = L"binary8Cpy";
			this->binary8Cpy->Size = System::Drawing::Size(12, 12);
			this->binary8Cpy->TabIndex = 13;
			this->toolTipManager->SetToolTip(this->binary8Cpy, L"Copy");
			this->binary8Cpy->UseVisualStyleBackColor = false;
			this->binary8Cpy->Click += gcnew System::EventHandler(this, &Form1::binary8Cpy_Click);
			// 
			// hexCpy
			// 
			this->hexCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->hexCpy->FlatAppearance->BorderSize = 0;
			this->hexCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->hexCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->hexCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hexCpy->Location = System::Drawing::Point(22, 211);
			this->hexCpy->Name = L"hexCpy";
			this->hexCpy->Size = System::Drawing::Size(12, 12);
			this->hexCpy->TabIndex = 14;
			this->toolTipManager->SetToolTip(this->hexCpy, L"Copy");
			this->hexCpy->UseVisualStyleBackColor = false;
			this->hexCpy->Click += gcnew System::EventHandler(this, &Form1::hexCpy_Click);
			// 
			// oneCpy
			// 
			this->oneCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->oneCpy->FlatAppearance->BorderSize = 0;
			this->oneCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->oneCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->oneCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->oneCpy->Location = System::Drawing::Point(22, 245);
			this->oneCpy->Name = L"oneCpy";
			this->oneCpy->Size = System::Drawing::Size(12, 12);
			this->oneCpy->TabIndex = 15;
			this->toolTipManager->SetToolTip(this->oneCpy, L"Copy");
			this->oneCpy->UseVisualStyleBackColor = false;
			this->oneCpy->Click += gcnew System::EventHandler(this, &Form1::oneCpy_Click);
			// 
			// twoCpy
			// 
			this->twoCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->twoCpy->FlatAppearance->BorderSize = 0;
			this->twoCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->twoCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->twoCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->twoCpy->Location = System::Drawing::Point(22, 262);
			this->twoCpy->Name = L"twoCpy";
			this->twoCpy->Size = System::Drawing::Size(12, 12);
			this->twoCpy->TabIndex = 16;
			this->toolTipManager->SetToolTip(this->twoCpy, L"Copy");
			this->twoCpy->UseVisualStyleBackColor = false;
			this->twoCpy->Click += gcnew System::EventHandler(this, &Form1::twoCpy_Click);
			// 
			// boolCpy
			// 
			this->boolCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->boolCpy->FlatAppearance->BorderSize = 0;
			this->boolCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->boolCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->boolCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boolCpy->Location = System::Drawing::Point(22, 228);
			this->boolCpy->Name = L"boolCpy";
			this->boolCpy->Size = System::Drawing::Size(12, 12);
			this->boolCpy->TabIndex = 17;
			this->toolTipManager->SetToolTip(this->boolCpy, L"Copy");
			this->boolCpy->UseVisualStyleBackColor = false;
			this->boolCpy->Click += gcnew System::EventHandler(this, &Form1::boolCpy_Click);
			// 
			// fourCpy
			// 
			this->fourCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->fourCpy->FlatAppearance->BorderSize = 0;
			this->fourCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->fourCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->fourCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fourCpy->Location = System::Drawing::Point(22, 279);
			this->fourCpy->Name = L"fourCpy";
			this->fourCpy->Size = System::Drawing::Size(12, 12);
			this->fourCpy->TabIndex = 18;
			this->toolTipManager->SetToolTip(this->fourCpy, L"Copy");
			this->fourCpy->UseVisualStyleBackColor = false;
			this->fourCpy->Click += gcnew System::EventHandler(this, &Form1::fourCpy_Click);
			// 
			// eightCpy
			// 
			this->eightCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->eightCpy->FlatAppearance->BorderSize = 0;
			this->eightCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->eightCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->eightCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eightCpy->Location = System::Drawing::Point(22, 296);
			this->eightCpy->Name = L"eightCpy";
			this->eightCpy->Size = System::Drawing::Size(12, 12);
			this->eightCpy->TabIndex = 19;
			this->toolTipManager->SetToolTip(this->eightCpy, L"Copy");
			this->eightCpy->UseVisualStyleBackColor = false;
			this->eightCpy->Click += gcnew System::EventHandler(this, &Form1::eightCpy_Click);
			// 
			// binary16Cpy
			// 
			this->binary16Cpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->binary16Cpy->FlatAppearance->BorderSize = 0;
			this->binary16Cpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binary16Cpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->binary16Cpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binary16Cpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary16Cpy->Location = System::Drawing::Point(22, 144);
			this->binary16Cpy->Name = L"binary16Cpy";
			this->binary16Cpy->Size = System::Drawing::Size(12, 12);
			this->binary16Cpy->TabIndex = 23;
			this->toolTipManager->SetToolTip(this->binary16Cpy, L"Copy");
			this->binary16Cpy->UseVisualStyleBackColor = false;
			this->binary16Cpy->Click += gcnew System::EventHandler(this, &Form1::binary16Cpy_Click);
			// 
			// binary32Cpy
			// 
			this->binary32Cpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->binary32Cpy->FlatAppearance->BorderSize = 0;
			this->binary32Cpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binary32Cpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->binary32Cpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binary32Cpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary32Cpy->Location = System::Drawing::Point(22, 161);
			this->binary32Cpy->Name = L"binary32Cpy";
			this->binary32Cpy->Size = System::Drawing::Size(12, 12);
			this->binary32Cpy->TabIndex = 25;
			this->toolTipManager->SetToolTip(this->binary32Cpy, L"Copy");
			this->binary32Cpy->UseVisualStyleBackColor = false;
			this->binary32Cpy->Click += gcnew System::EventHandler(this, &Form1::binary32Cpy_Click);
			// 
			// binary64Cpy
			// 
			this->binary64Cpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->binary64Cpy->FlatAppearance->BorderSize = 0;
			this->binary64Cpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binary64Cpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->binary64Cpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binary64Cpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binary64Cpy->Location = System::Drawing::Point(22, 178);
			this->binary64Cpy->Name = L"binary64Cpy";
			this->binary64Cpy->Size = System::Drawing::Size(12, 12);
			this->binary64Cpy->TabIndex = 27;
			this->toolTipManager->SetToolTip(this->binary64Cpy, L"Copy");
			this->binary64Cpy->UseVisualStyleBackColor = false;
			this->binary64Cpy->Click += gcnew System::EventHandler(this, &Form1::binary64Cpy_Click);
			// 
			// doubleCpy
			// 
			this->doubleCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->doubleCpy->FlatAppearance->BorderSize = 0;
			this->doubleCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->doubleCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->doubleCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->doubleCpy->Location = System::Drawing::Point(22, 330);
			this->doubleCpy->Name = L"doubleCpy";
			this->doubleCpy->Size = System::Drawing::Size(12, 12);
			this->doubleCpy->TabIndex = 31;
			this->toolTipManager->SetToolTip(this->doubleCpy, L"Copy");
			this->doubleCpy->UseVisualStyleBackColor = false;
			this->doubleCpy->Click += gcnew System::EventHandler(this, &Form1::doubleCpy_Click);
			// 
			// floatCpy
			// 
			this->floatCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->floatCpy->FlatAppearance->BorderSize = 0;
			this->floatCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->floatCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->floatCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->floatCpy->Location = System::Drawing::Point(22, 313);
			this->floatCpy->Name = L"floatCpy";
			this->floatCpy->Size = System::Drawing::Size(12, 12);
			this->floatCpy->TabIndex = 30;
			this->toolTipManager->SetToolTip(this->floatCpy, L"Copy");
			this->floatCpy->UseVisualStyleBackColor = false;
			this->floatCpy->Click += gcnew System::EventHandler(this, &Form1::floatCpy_Click);
			// 
			// stringCpy
			// 
			this->stringCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->stringCpy->FlatAppearance->BorderSize = 0;
			this->stringCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->stringCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->stringCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->stringCpy->Location = System::Drawing::Point(22, 347);
			this->stringCpy->Name = L"stringCpy";
			this->stringCpy->Size = System::Drawing::Size(12, 12);
			this->stringCpy->TabIndex = 33;
			this->toolTipManager->SetToolTip(this->stringCpy, L"Copy");
			this->stringCpy->UseVisualStyleBackColor = false;
			this->stringCpy->Click += gcnew System::EventHandler(this, &Form1::stringCpy_Click);
			// 
			// binaryCpy
			// 
			this->binaryCpy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->binaryCpy->FlatAppearance->BorderSize = 0;
			this->binaryCpy->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->binaryCpy->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->binaryCpy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->binaryCpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binaryCpy->Location = System::Drawing::Point(22, 195);
			this->binaryCpy->Name = L"binaryCpy";
			this->binaryCpy->Size = System::Drawing::Size(12, 12);
			this->binaryCpy->TabIndex = 35;
			this->toolTipManager->SetToolTip(this->binaryCpy, L"Copy");
			this->binaryCpy->UseVisualStyleBackColor = false;
			this->binaryCpy->Click += gcnew System::EventHandler(this, &Form1::binaryCpy_Click);
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->header->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->header->Location = System::Drawing::Point(-1, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(658, 107);
			this->header->TabIndex = 36;
			this->header->TabStop = false;
			// 
			// convertButton
			// 
			this->convertButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->convertButton->FlatAppearance->BorderSize = 0;
			this->convertButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->convertButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->convertButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->convertButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convertButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->convertButton->Location = System::Drawing::Point(459, 69);
			this->convertButton->Name = L"convertButton";
			this->convertButton->Size = System::Drawing::Size(167, 28);
			this->convertButton->TabIndex = 37;
			this->convertButton->Text = L"Convert";
			this->convertButton->UseVisualStyleBackColor = false;
			this->convertButton->Click += gcnew System::EventHandler(this, &Form1::convertButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)));
			this->ClientSize = System::Drawing::Size(649, 372);
			this->Controls->Add(this->isTopMost);
			this->Controls->Add(this->isRounded);
			this->Controls->Add(this->roundPlace);
			this->Controls->Add(this->convertButton);
			this->Controls->Add(this->binaryCpy);
			this->Controls->Add(this->binaryCon);
			this->Controls->Add(this->stringCpy);
			this->Controls->Add(this->stringCon);
			this->Controls->Add(this->doubleCpy);
			this->Controls->Add(this->floatCpy);
			this->Controls->Add(this->doubleCon);
			this->Controls->Add(this->floatCon);
			this->Controls->Add(this->binary64Cpy);
			this->Controls->Add(this->binary64Con);
			this->Controls->Add(this->binary32Cpy);
			this->Controls->Add(this->binary32Con);
			this->Controls->Add(this->binary16Cpy);
			this->Controls->Add(this->binary16Con);
			this->Controls->Add(this->warning);
			this->Controls->Add(this->copyLabel);
			this->Controls->Add(this->eightCpy);
			this->Controls->Add(this->fourCpy);
			this->Controls->Add(this->boolCpy);
			this->Controls->Add(this->twoCpy);
			this->Controls->Add(this->oneCpy);
			this->Controls->Add(this->hexCpy);
			this->Controls->Add(this->binary8Cpy);
			this->Controls->Add(this->charCounter);
			this->Controls->Add(this->isSigned);
			this->Controls->Add(this->boolCon);
			this->Controls->Add(this->hexCon);
			this->Controls->Add(this->eightByteCon);
			this->Controls->Add(this->fourByteCon);
			this->Controls->Add(this->twoByteCon);
			this->Controls->Add(this->byteCon);
			this->Controls->Add(this->binary8Con);
			this->Controls->Add(this->convertTypePanel);
			this->Controls->Add(this->convertInput);
			this->Controls->Add(this->convertLabel);
			this->Controls->Add(this->header);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = gcnew System::Drawing::Icon("icon.ico");
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Programming Converter";
			this->convertTypePanel->ResumeLayout(false);
			this->convertTypePanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->header))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		System::Void convertButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			unsigned char type = 0;
			if (hexOption->Checked) { type = 1; }
			else if (decOption->Checked) { type = 2; }
			else if (floatOption->Checked) { type = 3; }
			else if (stringOption->Checked) { type = 4; }

			charCounter->Text = "Chars: " + convertInput->TextLength;

			System::String^ msg;
			if (VerifyInput(type, isSigned->Checked, convertInput->Text, &msg) && (!isRounded->Checked || VerifyInput(2, false, roundPlace->Text, &msg)))
			{
				warning->Text = "";
				if (isSigned->Checked)
				{
					binary8Con->Text = "8 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 8, System::Convert::ToInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 8, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 8, convertInput->Text));
					binary16Con->Text = "16 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 16, System::Convert::ToInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 16, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 16, convertInput->Text));
					binary32Con->Text = "32 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 32, System::Convert::ToInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 32, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 32, convertInput->Text));
					binary64Con->Text = "64 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 64, System::Convert::ToInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 64, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 64, convertInput->Text));
					binaryCon->Text = "Binary: " + (type == 2 ? ConvertToBinary(2, 0, System::Convert::ToInt64(convertInput->Text)) : ConvertToBinary(type, 0, convertInput->Text));
					hexCon->Text = "Hex: " + (type == 2 ? ConvertToHex(2, System::Convert::ToInt64(convertInput->Text)) : type == 3 ? ConvertToHex(3, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToHex(type, true, convertInput->Text));
					boolCon->Text = "Bool: " + (type != 3 ? (SConvertToDec(type, convertInput->Text) == 0 ? 0 : 1) : (SConvertToDec(3, 64, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) == 0 ? 0 : 1));
					byteCon->Text = "1 Byte Int: " + (type != 3 ? (char)SConvertToDec(type, convertInput->Text) : SConvertToDec(3, 8, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					twoByteCon->Text = "2 Byte Int: " + (type != 3 ? (short int)SConvertToDec(type, convertInput->Text) : SConvertToDec(3, 16, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					fourByteCon->Text = "4 Byte Int: " + (type != 3 ? (int)SConvertToDec(type, convertInput->Text) : SConvertToDec(3, 32, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					eightByteCon->Text = "8 Byte Int: " + (type != 3 ? SConvertToDec(type, convertInput->Text) : SConvertToDec(3, 64, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					floatCon->Text = "4 Byte Float: " + (ConvertToFloat(type, true, System::Convert::ToUInt64(roundPlace->Text), convertInput->Text)).ToString();
					doubleCon->Text = "8 Byte Float: " + (ConvertToDouble(type, true, System::Convert::ToUInt64(roundPlace->Text), convertInput->Text)).ToString();
					stringCon->Text = "String: " + ConvertToString(type, true, convertInput->Text);
				}
				else
				{
					binary8Con->Text = "8 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 8, System::Convert::ToUInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 8, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 8, convertInput->Text));
					binary16Con->Text = "16 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 16, System::Convert::ToUInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 16, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 16, convertInput->Text));
					binary32Con->Text = "32 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 32, System::Convert::ToUInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 32, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 32, convertInput->Text));
					binary64Con->Text = "64 Bit Binary: " + (type == 2 ? ConvertToBinary(2, 64, System::Convert::ToUInt64(convertInput->Text)) : type == 3 ? ConvertToBinary(3, 64, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToBinary(type, 64, convertInput->Text));
					binaryCon->Text = "Binary: " + (type == 2 ? ConvertToBinary(2, 0, System::Convert::ToUInt64(convertInput->Text)) : ConvertToBinary(type, 0, convertInput->Text));
					hexCon->Text = "Hex: " + (type == 2 ? ConvertToHex(type, System::Convert::ToUInt64(convertInput->Text)) : type == 3 ? ConvertToHex(3, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) : ConvertToHex(type, false, convertInput->Text));
					boolCon->Text = "Bool: " + (type != 3 ? (ConvertToDec(type, convertInput->Text) == 0 ? 0 : 1) : (SConvertToDec(3, 64, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text))) == 0 ? 0 : 1));
					byteCon->Text = "1 Byte Int: " + (type != 3 ? (unsigned char)ConvertToDec(type, convertInput->Text) : SConvertToDec(3, 8, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					twoByteCon->Text = "2 Byte Int: " + (type != 3 ? (unsigned short int)ConvertToDec(type, convertInput->Text) : SConvertToDec(3, 16, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					fourByteCon->Text = "4 Byte Int: " + (type != 3 ? (unsigned int)ConvertToDec(type, convertInput->Text) : SConvertToDec(3, 32, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					eightByteCon->Text = "8 Byte Int: " + (type != 3 ? ConvertToDec(type, convertInput->Text) : SConvertToDec(3, 64, std::stod(msclr::interop::marshal_as<std::string>(convertInput->Text)))).ToString();
					floatCon->Text = "4 Byte Float: " + (ConvertToFloat(type, false, System::Convert::ToUInt64(roundPlace->Text), convertInput->Text)).ToString();
					doubleCon->Text = "8 Byte Float: " + (ConvertToDouble(type, false, System::Convert::ToUInt64(roundPlace->Text), convertInput->Text)).ToString();
					stringCon->Text = "String: " + ConvertToString(type, false, convertInput->Text);
				}
			}
			else
			{
				warning->Text = msg;
				binary8Con->Text = "8 Bit Binary: -";
				binary16Con->Text = "16 Bit Binary: -";
				binary32Con->Text = "32 Bit Binary: -";
				binary64Con->Text = "64 Bit Binary: -";
				binaryCon->Text = "Binary: -";
				hexCon->Text = "Hex: -";
				boolCon->Text = "Bool: -";
				byteCon->Text = "1 Byte Int: -";
				twoByteCon->Text = "2 Byte Int: -";
				fourByteCon->Text = "4 Byte Int: -";
				eightByteCon->Text = "8 Byte Int: -";
				floatCon->Text = "4 Byte Float: -";
				doubleCon->Text = "8 Byte Float: -";
				stringCon->Text = "String: -";
			}
		}
		System::Void binary8Cpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(binary8Con->Text);
			temp.erase(0, 14);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void binary16Cpy_Click(System::Object^ sender, System::EventArgs^ e)
		{
			std::string temp = msclr::interop::marshal_as<std::string>(binary16Con->Text);
			temp.erase(0, 15);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void binary32Cpy_Click(System::Object^ sender, System::EventArgs^ e)
		{
			std::string temp = msclr::interop::marshal_as<std::string>(binary32Con->Text);
			temp.erase(0, 15);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void binary64Cpy_Click(System::Object^ sender, System::EventArgs^ e)
		{
			std::string temp = msclr::interop::marshal_as<std::string>(binary64Con->Text);
			temp.erase(0, 15);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void binaryCpy_Click(System::Object^ sender, System::EventArgs^ e)
		{
			std::string temp = msclr::interop::marshal_as<std::string>(binaryCon->Text);
			temp.erase(0, 8);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void hexCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(hexCon->Text);
			temp.erase(0, 5);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void boolCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(boolCon->Text);
			temp.erase(0, 6);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void oneCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(byteCon->Text);
			temp.erase(0, 12);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void twoCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(twoByteCon->Text);
			temp.erase(0, 12);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void fourCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(fourByteCon->Text);
			temp.erase(0, 12);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void eightCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(eightByteCon->Text);
			temp.erase(0, 12);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void floatCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(floatCon->Text);
			temp.erase(0, 14);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void doubleCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(doubleCon->Text);
			temp.erase(0, 14);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void stringCpy_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			std::string temp = msclr::interop::marshal_as<std::string>(stringCon->Text);
			temp.erase(0, 8);
			const char* output = temp.c_str();
			const size_t len = strlen(output) + 1;
			HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
			memcpy(GlobalLock(hMem), output, len);
			GlobalUnlock(hMem);
			OpenClipboard(0);
			EmptyClipboard();
			SetClipboardData(CF_TEXT, hMem);
			CloseClipboard();
		}
		System::Void isRounded_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { roundPlace->Visible = !roundPlace->Visible; roundPlace->Text = "0"; }
		System::Void isTopMost_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { this->TopMost = !this->TopMost; }
	};
}
