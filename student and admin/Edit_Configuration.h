#pragma once
//#include "student or admin.h"
namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Edit_Configuration
	/// </summary>
	public ref class Edit_Configuration : public System::Windows::Forms::Form
	{
	public:
		Edit_Configuration(void)
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
		~Edit_Configuration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textbox_Tables;
	private: System::Windows::Forms::TextBox^ textbox_Seats;

	private: System::Windows::Forms::TextBox^ textbox_Time;
	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ intilaize_okay_btn;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Edit_Configuration::typeid));
			this->textbox_Tables = (gcnew System::Windows::Forms::TextBox());
			this->textbox_Seats = (gcnew System::Windows::Forms::TextBox());
			this->textbox_Time = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->intilaize_okay_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textbox_Tables
			// 
			this->textbox_Tables->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Tables->Location = System::Drawing::Point(727, 311);
			this->textbox_Tables->Name = L"textbox_Tables";
			this->textbox_Tables->Size = System::Drawing::Size(513, 38);
			this->textbox_Tables->TabIndex = 0;
			//this->textbox_Tables->TextChanged += gcnew System::EventHandler(this, &Edit_Configuration::textbox_Tables_TextChanged);
			// 
			// textbox_Seats
			// 
			this->textbox_Seats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Seats->Location = System::Drawing::Point(727, 384);
			this->textbox_Seats->Name = L"textbox_Seats";
			this->textbox_Seats->Size = System::Drawing::Size(513, 38);
			this->textbox_Seats->TabIndex = 1;
			// 
			// textbox_Time
			// 
			this->textbox_Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Time->Location = System::Drawing::Point(727, 456);
			this->textbox_Time->Name = L"textbox_Time";
			this->textbox_Time->Size = System::Drawing::Size(513, 38);
			this->textbox_Time->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(721, 276);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(295, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Number of Tables :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(721, 350);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(410, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Number of Seats per Table :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(721, 422);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(426, 31);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Maximum Duration for Seat :";
			// 
			// intilaize_okay_btn
			// 
			this->intilaize_okay_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->intilaize_okay_btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->intilaize_okay_btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->intilaize_okay_btn->Location = System::Drawing::Point(809, 541);
			this->intilaize_okay_btn->Name = L"intilaize_okay_btn";
			this->intilaize_okay_btn->Size = System::Drawing::Size(349, 62);
			this->intilaize_okay_btn->TabIndex = 6;
			this->intilaize_okay_btn->Text = L"OK";
			this->intilaize_okay_btn->UseVisualStyleBackColor = false;
			this->intilaize_okay_btn->Click += gcnew System::EventHandler(this, &Edit_Configuration::intilaize_okay_btn_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-26, -3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(2109, 126);
			this->label4->TabIndex = 7;
			//this->label4->Click += gcnew System::EventHandler(this, &Edit_Configuration::label4_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(665, 180);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(0, 8, 0, 0);
			this->label5->Size = System::Drawing::Size(637, 423);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Add Table/Seats";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(46, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(335, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// Edit_Configuration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 682);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->intilaize_okay_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textbox_Time);
			this->Controls->Add(this->textbox_Seats);
			this->Controls->Add(this->textbox_Tables);
			this->Controls->Add(this->label5);
			this->Name = L"Edit_Configuration";
			this->Text = L"Edit Configuration";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void intilaize_okay_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ tables = this->textbox_Tables->Text;
		String^ seats = this->textbox_Seats->Text;
		String^ time = this->textbox_Time->Text;




		if (tables->Length == 0 || seats->Length == 0 || time->Length == 0) {
			MessageBox::Show("Please enter the correct value of Tables, Seats and Time", "Invalid Input", MessageBoxButtons::OK);
			return;
		}
		int tablesInt = System::Convert::ToInt32(tables);
		int seatsInt = System::Convert::ToInt32(seats);
		int timeInt = System::Convert::ToInt32(time);
		int totalseats = tablesInt * seatsInt;

		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		// Create a SqlCommand with parameterized values
		String^ sqlQuery = "INSERT INTO tableseats ([table], seats, duration) VALUES (@tables, @seats, @duration)";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, connection);
		command->Parameters->Add(gcnew SqlParameter("@tables", tables));
		command->Parameters->Add(gcnew SqlParameter("@seats", seats));
		command->Parameters->Add(gcnew SqlParameter("@duration", time));


		
		
		for (int i = 1; i <= totalseats; i++) {
			String^ sqlQuery3 = "INSERT INTO Reservation ([Seatid], seatvalue, Date, Duration, Time) VALUES (@Seatid, @seatvalue, @Date, @Duration, @Time)";
			SqlCommand^ command3 = gcnew SqlCommand(sqlQuery3, connection);
			command3->Parameters->Add(gcnew SqlParameter("@Seatid", i));
			command3->Parameters->Add(gcnew SqlParameter("@seatvalue", 0));
			command3->Parameters->Add(gcnew SqlParameter("@Date", "None"));
			command3->Parameters->Add(gcnew SqlParameter("@Duration", "None"));
			command3->Parameters->Add(gcnew SqlParameter("@Time", "None"));
			connection->Open();
			command3->ExecuteNonQuery();
			connection->Close();

		}
		


		for (int i = 1; i <= totalseats; i++) {
			String^ sqlQuery2 = "INSERT INTO totalseats ([Seatid], seatvalue) VALUES (@Seatid, @seatvalue)";
			SqlCommand^ command2 = gcnew SqlCommand(sqlQuery2, connection);
			command2->Parameters->Add(gcnew SqlParameter("@Seatid", i));
			command2->Parameters->Add(gcnew SqlParameter("@seatvalue", 0));
			connection->Open();
			command2->ExecuteNonQuery();
			connection->Close();

		}
		try {
			// Open the connection
			connection->Open();
			// Execute the INSERT command
			int rowsAffected = command->ExecuteNonQuery();

			// Check if the INSERT was successful
			if (rowsAffected > 0) {
				MessageBox::Show("Data inserted successfully.", "Success", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Data insertion failed.", "Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK);
		}
		finally {
			// Close the connection
			connection->Close();
		}

	}
	


};
}
