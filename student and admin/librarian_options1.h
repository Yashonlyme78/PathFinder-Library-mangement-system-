#pragma once
#include "Edit_Configuration.h"
#include "View_Seats.h"
#include "Student_Options.h"
#include "Admin.h"
#include "Student_Options.h"
namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Librarian_Options
	/// </summary>
	public ref class Librarian_Options : public System::Windows::Forms::Form
	{
	public:
		Librarian_Options(void)
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
		~Librarian_Options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ View_Edit_Configuration_Btn;
	private: System::Windows::Forms::Button^ View_Seats_Btn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label7;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->View_Edit_Configuration_Btn = (gcnew System::Windows::Forms::Button());
			this->View_Seats_Btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// View_Edit_Configuration_Btn
			// 
			this->View_Edit_Configuration_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->View_Edit_Configuration_Btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->View_Edit_Configuration_Btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->View_Edit_Configuration_Btn->Location = System::Drawing::Point(927, 395);
			this->View_Edit_Configuration_Btn->Name = L"View_Edit_Configuration_Btn";
			this->View_Edit_Configuration_Btn->Size = System::Drawing::Size(331, 77);
			this->View_Edit_Configuration_Btn->TabIndex = 0;
			this->View_Edit_Configuration_Btn->Text = L"Edit_Configuration";
			this->View_Edit_Configuration_Btn->UseVisualStyleBackColor = false;
			this->View_Edit_Configuration_Btn->Click += gcnew System::EventHandler(this, &Librarian_Options::View_Edit_Configuration_Btn_Click);
			// 
			// View_Seats_Btn
			// 
			this->View_Seats_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->View_Seats_Btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->View_Seats_Btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->View_Seats_Btn->Location = System::Drawing::Point(927, 271);
			this->View_Seats_Btn->Name = L"View_Seats_Btn";
			this->View_Seats_Btn->Size = System::Drawing::Size(331, 77);
			this->View_Seats_Btn->TabIndex = 1;
			this->View_Seats_Btn->Text = L"View Seats";
			this->View_Seats_Btn->UseVisualStyleBackColor = false;
			this->View_Seats_Btn->Click += gcnew System::EventHandler(this, &Librarian_Options::View_Seats_Btn_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(796, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(596, 330);
			this->label2->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-23, -5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(2026, 121);
			this->label7->TabIndex = 14;
			// 
			// Librarian_Options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 571);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->View_Seats_Btn);
			this->Controls->Add(this->View_Edit_Configuration_Btn);
			this->Controls->Add(this->label2);
			this->Name = L"Librarian_Options";
			this->Text = L"Librairan_Options";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Librarian_Options::Librarian_Options_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void View_Edit_Configuration_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

		Edit_Configuration^ formsnew = gcnew Edit_Configuration;
		formsnew->Show();
	}
	private: System::Void View_Seats_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

		View_Seats^ viewseats = gcnew View_Seats;
		viewseats->Show();

	}
	private: System::Void Student_Options_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

		Student_Options^ studentoptions = gcnew Student_Options;
		studentoptions->Show();

	}
	private: System::Void Librarian_Options_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
