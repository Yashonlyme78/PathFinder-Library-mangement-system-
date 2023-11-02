#pragma once
#include "student.h"
#include "Admin.h"
#include "finaldash.h"
//#include "studentregister.h"
#include "Student_Options.h"
namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for studentlogin
	/// </summary>
	public ref class studentlogin : public System::Windows::Forms::Form
	{
	public:
		studentlogin(void)
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
		~studentlogin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ emailll;
	private: System::Windows::Forms::TextBox^ tbemailstudent;
	private: System::Windows::Forms::Label^ Password;
	private: System::Windows::Forms::TextBox^ tbpasswordstudent;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ stucancel;
	private: System::Windows::Forms::Button^ stuok;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(studentlogin::typeid));
			this->emailll = (gcnew System::Windows::Forms::Label());
			this->tbemailstudent = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::Label());
			this->tbpasswordstudent = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->stucancel = (gcnew System::Windows::Forms::Button());
			this->stuok = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// emailll
			// 
			this->emailll->AutoSize = true;
			this->emailll->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->emailll->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailll->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->emailll->Location = System::Drawing::Point(1354, 244);
			this->emailll->Name = L"emailll";
			this->emailll->Size = System::Drawing::Size(95, 31);
			this->emailll->TabIndex = 0;
			this->emailll->Text = L"Email";
			// 
			// tbemailstudent
			// 
			this->tbemailstudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbemailstudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbemailstudent->Location = System::Drawing::Point(1355, 278);
			this->tbemailstudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbemailstudent->Name = L"tbemailstudent";
			this->tbemailstudent->Size = System::Drawing::Size(510, 38);
			this->tbemailstudent->TabIndex = 1;
			// 
			// Password
			// 
			this->Password->AutoSize = true;
			this->Password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->Password->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Password->Location = System::Drawing::Point(1354, 318);
			this->Password->Name = L"Password";
			this->Password->Size = System::Drawing::Size(148, 31);
			this->Password->TabIndex = 0;
			this->Password->Text = L"Password";
			// 
			// tbpasswordstudent
			// 
			this->tbpasswordstudent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbpasswordstudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpasswordstudent->Location = System::Drawing::Point(1355, 351);
			this->tbpasswordstudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbpasswordstudent->Name = L"tbpasswordstudent";
			this->tbpasswordstudent->Size = System::Drawing::Size(510, 38);
			this->tbpasswordstudent->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-5, -5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1992, 121);
			this->label1->TabIndex = 3;
			// 
			// stucancel
			// 
			this->stucancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->stucancel->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stucancel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stucancel->Location = System::Drawing::Point(1631, 410);
			this->stucancel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stucancel->Name = L"stucancel";
			this->stucancel->Size = System::Drawing::Size(234, 46);
			this->stucancel->TabIndex = 4;
			this->stucancel->Text = L"Cancel";
			this->stucancel->UseVisualStyleBackColor = false;
			this->stucancel->Click += gcnew System::EventHandler(this, &studentlogin::stucancel_Click);
			// 
			// stuok
			// 
			this->stuok->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->stuok->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stuok->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->stuok->Location = System::Drawing::Point(1355, 410);
			this->stuok->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stuok->Name = L"stuok";
			this->stuok->Size = System::Drawing::Size(242, 46);
			this->stuok->TabIndex = 4;
			this->stuok->Text = L"OK";
			this->stuok->UseVisualStyleBackColor = false;
			this->stuok->Click += gcnew System::EventHandler(this, &studentlogin::stuok_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(1325, 154);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 8, 0, 0);
			this->label2->Size = System::Drawing::Size(576, 394);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Student Login";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(127, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(306, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// studentlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 682);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->stuok);
			this->Controls->Add(this->stucancel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbpasswordstudent);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->tbemailstudent);
			this->Controls->Add(this->emailll);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"studentlogin";
			this->Text = L"studentlogin";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:Student^ user = nullptr;
	private: System::Void stuok_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbemailstudent->Text;
		String^ password = this->tbpasswordstudent->Text;
		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter Email and Password",
				"Email and Password Empty", MessageBoxButtons::OK);

			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "Select * From Student Where email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();

			//MessageBox::Show("Login Sucessfull!!",
				//"Database Connection Error", MessageBoxButtons::OK);
			if (reader->Read()) {
				user = gcnew Student;
				user->id = reader->GetInt32(0);
				user->email = reader->GetString(1);
				user->name = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->address = reader->GetString(4);
				user->password = reader->GetString(5);




				Student_Options^ Finaldash = gcnew Student_Options();
				Finaldash->Show();
				//this->Close();


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

	public: bool switchToRegister = false; // Declare and initialize the switch variable.
	private: System::Void llRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close(); // Close the current loginForm.
	}
	

	private: System::Void stucancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}

/*
private: System::Void studentlogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbemailstudent_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbpasswordstudent_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Password_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void emailll_Click(System::Object^ sender, System::EventArgs^ e) {
}
*/
};
}
