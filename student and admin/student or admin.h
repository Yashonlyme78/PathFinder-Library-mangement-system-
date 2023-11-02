#pragma once
#include "studentlogin.h"
#include "adminlogin.h"
namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for studentoradmin
	/// </summary>
	public ref class studentoradmin : public System::Windows::Forms::Form
	{
	public:
		studentoradmin(void)
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
		~studentoradmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnstudent;
	private: System::Windows::Forms::Button^ btnadmin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;









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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnstudent = (gcnew System::Windows::Forms::Button());
			this->btnadmin = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(289, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 46);
			this->label1->TabIndex = 0;
			this->label1->Click += gcnew System::EventHandler(this, &studentoradmin::label1_Click);
			// 
			// btnstudent
			// 
			this->btnstudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnstudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->btnstudent->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnstudent->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnstudent->Location = System::Drawing::Point(0, 312);
			this->btnstudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnstudent->Name = L"btnstudent";
			this->btnstudent->Size = System::Drawing::Size(1689, 58);
			this->btnstudent->TabIndex = 1;
			this->btnstudent->Text = L"Student";
			this->btnstudent->UseVisualStyleBackColor = false;
			this->btnstudent->Click += gcnew System::EventHandler(this, &studentoradmin::btnstudent_Click);
			// 
			// btnadmin
			// 
			this->btnadmin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnadmin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->btnadmin->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadmin->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnadmin->Location = System::Drawing::Point(0, 384);
			this->btnadmin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnadmin->Name = L"btnadmin";
			this->btnadmin->Size = System::Drawing::Size(1689, 58);
			this->btnadmin->TabIndex = 2;
			this->btnadmin->Text = L"Admin";
			this->btnadmin->UseVisualStyleBackColor = false;
			this->btnadmin->Click += gcnew System::EventHandler(this, &studentoradmin::btnadmin_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-18, -9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1738, 114);
			this->label2->TabIndex = 3;
			this->label2->Click += gcnew System::EventHandler(this, &studentoradmin::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(-9, 221);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 8, 0, 0);
			this->label3->Size = System::Drawing::Size(1729, 260);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Who Are You\?";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &studentoradmin::label3_Click);
			// 
			// studentoradmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1710, 682);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnadmin);
			this->Controls->Add(this->btnstudent);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"studentoradmin";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentoradmin";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &studentoradmin::studentoradmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnstudent_Click(System::Object^ sender, System::EventArgs^ e) {
		studentlogin^ Studentlogin = gcnew studentlogin;
		Studentlogin->Show();
	}
	private: System::Void btnadmin_Click(System::Object^ sender, System::EventArgs^ e) {
		adminlogin^ Adminlogin = gcnew adminlogin;
		Adminlogin->Show();
	}
private: System::Void studentoradmin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
