#pragma once
#include "finaldash.h"
#include "Admin.h"
#include "librarian_options1.h"

namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for adminlogin
	/// </summary>
	public ref class adminlogin : public System::Windows::Forms::Form
	{
	public:
		adminlogin(void)
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
		~adminlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ email;
	protected:
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::TextBox^ tbemail;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ okbtn;
	private: System::Windows::Forms::Button^ cancelbtn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminlogin::typeid));
			this->email = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->tbemail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->okbtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->email->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->email->Location = System::Drawing::Point(1095, 219);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(464, 143);
			this->email->TabIndex = 0;
			this->email->Text = L"Email";
			this->email->Click += gcnew System::EventHandler(this, &adminlogin::email_Click);
			// 
			// Password
			// 
			this->Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->Password->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Password->Location = System::Drawing::Point(1095, 299);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(464, 143);
			this->Password->TabIndex = 0;
			this->Password->Text = L"Password";
			this->Password->Click += gcnew System::EventHandler(this, &adminlogin::Password_Click);
			// 
			// tbpassword
			// 
			this->tbpassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->Location = System::Drawing::Point(1100, 333);
			this->tbpassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(563, 38);
			this->tbpassword->TabIndex = 1;
			this->tbpassword->TextChanged += gcnew System::EventHandler(this, &adminlogin::tbpassword_TextChanged);
			// 
			// tbemail
			// 
			this->tbemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemail->Location = System::Drawing::Point(1100, 255);
			this->tbemail->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbemail->Name = L"tbemail";
			this->tbemail->Size = System::Drawing::Size(563, 38);
			this->tbemail->TabIndex = 2;
			this->tbemail->TextChanged += gcnew System::EventHandler(this, &adminlogin::tbemail_TextChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(228, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1268, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Admin Login";
			// 
			// okbtn
			// 
			this->okbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->okbtn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->okbtn->Location = System::Drawing::Point(1102, 411);
			this->okbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->okbtn->Name = L"okbtn";
			this->okbtn->Size = System::Drawing::Size(243, 46);
			this->okbtn->TabIndex = 4;
			this->okbtn->Text = L"OK";
			this->okbtn->UseVisualStyleBackColor = false;
			this->okbtn->Click += gcnew System::EventHandler(this, &adminlogin::okbtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelbtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cancelbtn->Location = System::Drawing::Point(1420, 411);
			this->cancelbtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(243, 46);
			this->cancelbtn->TabIndex = 4;
			this->cancelbtn->Text = L"Cancel";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &adminlogin::cancelbtn_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-7, -8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1732, 110);
			this->label2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(1069, 142);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 8, 0, 0);
			this->label3->Size = System::Drawing::Size(620, 375);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Admin Login";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &adminlogin::label3_Click);
			// 
			// adminlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1710, 682);
			this->Controls->Add(this->cancelbtn);
			this->Controls->Add(this->okbtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbemail);
			this->Controls->Add(this->tbpassword);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"adminlogin";
			this->Text = L"adminlogin";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &adminlogin::adminlogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adminlogin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void email_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Password_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbpassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public:Admin^ user = nullptr;
	private: System::Void okbtn_Click(System::Object^ sender, System::EventArgs^ e) {



		String^ email = this->tbemail->Text;
		String^ password = this->tbpassword->Text;
		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter Email and Password",
				"Email and Password Empty", MessageBoxButtons::OK);

			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "Select * From Admin Where email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();

			//MessageBox::Show("Login Sucessfull!!",
				//"Database Connection Error", MessageBoxButtons::OK);
			if (reader->Read()) {
				user = gcnew Admin;
				user->id = reader->GetInt32(0);
				user->email = reader->GetString(1);
				user->password = reader->GetString(2);


				Librarian_Options^ Finaldash = gcnew Librarian_Options();
				Finaldash ->Show();
				this->Close();


			}
			else {
				MessageBox::Show("Email and Password is incorrect ",
					"Email and Password Error", MessageBoxButtons::OK);

			}

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Connect Database",
				"Database Connection Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	}

};
}
