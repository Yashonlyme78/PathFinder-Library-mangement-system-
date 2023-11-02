#pragma once
#include "student.h"

namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for studentregister
	/// </summary>
	public ref class studentregister : public System::Windows::Forms::Form
	{
	public:
		studentregister(void)
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
		~studentregister()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbaddress;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbconfirmpassword;


	private: System::Windows::Forms::Label^ Phone;
	private: System::Windows::Forms::TextBox^ tbphone;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::Button^ okregister;
	private: System::Windows::Forms::Button^ cancelregister;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbaddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbconfirmpassword = (gcnew System::Windows::Forms::TextBox());
			this->Phone = (gcnew System::Windows::Forms::Label());
			this->tbphone = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->okregister = (gcnew System::Windows::Forms::Button());
			this->cancelregister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(282, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student Register ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbname
			// 
			this->tbname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(375, 137);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(527, 44);
			this->tbname->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(75, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 37);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->Location = System::Drawing::Point(375, 187);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(527, 44);
			this->tbemail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(75, 294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 37);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Address";
			// 
			// tbaddress
			// 
			this->tbaddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbaddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbaddress->Location = System::Drawing::Point(375, 287);
			this->tbaddress->Name = L"tbaddress";
			this->tbaddress->Size = System::Drawing::Size(527, 44);
			this->tbaddress->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(75, 394);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(280, 37);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Confirm Password";
			// 
			// tbconfirmpassword
			// 
			this->tbconfirmpassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbconfirmpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbconfirmpassword->Location = System::Drawing::Point(375, 387);
			this->tbconfirmpassword->Name = L"tbconfirmpassword";
			this->tbconfirmpassword->Size = System::Drawing::Size(527, 44);
			this->tbconfirmpassword->TabIndex = 2;
			// 
			// Phone
			// 
			this->Phone->AutoSize = true;
			this->Phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone->Location = System::Drawing::Point(75, 244);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(109, 37);
			this->Phone->TabIndex = 1;
			this->Phone->Text = L"Phone";
			// 
			// tbphone
			// 
			this->tbphone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbphone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbphone->Location = System::Drawing::Point(375, 237);
			this->tbphone->Name = L"tbphone";
			this->tbphone->Size = System::Drawing::Size(527, 44);
			this->tbphone->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(75, 344);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 37);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// tbpassword
			// 
			this->tbpassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->Location = System::Drawing::Point(375, 337);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(527, 44);
			this->tbpassword->TabIndex = 2;
			// 
			// okregister
			// 
			this->okregister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okregister->Location = System::Drawing::Point(375, 472);
			this->okregister->Name = L"okregister";
			this->okregister->Size = System::Drawing::Size(225, 58);
			this->okregister->TabIndex = 3;
			this->okregister->Text = L"OK";
			this->okregister->UseVisualStyleBackColor = true;
			this->okregister->Click += gcnew System::EventHandler(this, &studentregister::okregister_Click);
			// 
			// cancelregister
			// 
			this->cancelregister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelregister->Location = System::Drawing::Point(677, 472);
			this->cancelregister->Name = L"cancelregister";
			this->cancelregister->Size = System::Drawing::Size(225, 58);
			this->cancelregister->TabIndex = 3;
			this->cancelregister->Text = L"Cancel";
			this->cancelregister->UseVisualStyleBackColor = true;
			this->cancelregister->Click += gcnew System::EventHandler(this, &studentregister::cancelregister_Click);
			// 
			// studentregister
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(938, 595);
			this->Controls->Add(this->cancelregister);
			this->Controls->Add(this->okregister);
			this->Controls->Add(this->tbphone);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->tbconfirmpassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbaddress);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"studentregister";
			this->Text = L"studentregister";
			this->Load += gcnew System::EventHandler(this, &studentregister::studentregister_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void studentregister_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	//public: Student^ user = nullptr;
	private: System::Void okregister_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbname->Text;
		String^ email = tbemail->Text;
		String^ phone = tbphone->Text;
		String^ address = tbaddress->Text;
		String^ password = tbpassword->Text;
		String^ confirmPassword = tbconfirmpassword->Text;

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || address->Length == 0
			|| password->Length == 0) {
			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}
		try {
			MessageBox::Show("Success", "Success", MessageBoxButtons::OK);


			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);

			String^ sqlQuery = "INSERT INTO Student (name, email, phone, address, password) VALUES (@name, @email, @phone, @address, @password);";
			SqlCommand^ command = gcnew SqlCommand (sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@name", name);
			command->Parameters->AddWithValue("@email", email);
			command->Parameters->AddWithValue("@phone", phone);
			command->Parameters->AddWithValue("@address", address);
			command->Parameters->AddWithValue("@password", password);
			sqlConn->Open();
			command->ExecuteNonQuery();
			sqlConn->Close();
			//user = gcnew Student;
			//user->name = name;
			//user->email = email;
			//user->phone = phone;
			//user->address = address;
			//user->password = password;

			//this->Close();

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
private: System::Void cancelregister_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
