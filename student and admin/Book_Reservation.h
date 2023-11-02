#pragma once
namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Book_Reservation
	/// </summary>
	public ref class Book_Reservation : public System::Windows::Forms::Form
	{
	public:
		Book_Reservation(void)
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
		~Book_Reservation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textbox_Date;
	private: System::Windows::Forms::TextBox^ textbox_Duration;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textbox_Time;
	private: System::Windows::Forms::TextBox^ textbox_Table;
	private: System::Windows::Forms::TextBox^ textbox_Seat;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ Book_btn;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Book_Reservation::typeid));
			this->textbox_Date = (gcnew System::Windows::Forms::TextBox());
			this->textbox_Duration = (gcnew System::Windows::Forms::TextBox());
			this->textbox_Time = (gcnew System::Windows::Forms::TextBox());
			this->textbox_Table = (gcnew System::Windows::Forms::TextBox());
			this->textbox_Seat = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Book_btn = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textbox_Date
			// 
			this->textbox_Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Date->Location = System::Drawing::Point(856, 211);
			this->textbox_Date->Name = L"textbox_Date";
			this->textbox_Date->Size = System::Drawing::Size(362, 38);
			this->textbox_Date->TabIndex = 0;
			// 
			// textbox_Duration
			// 
			this->textbox_Duration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Duration->Location = System::Drawing::Point(856, 326);
			this->textbox_Duration->Name = L"textbox_Duration";
			this->textbox_Duration->Size = System::Drawing::Size(362, 38);
			this->textbox_Duration->TabIndex = 1;
			// 
			// textbox_Time
			// 
			this->textbox_Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Time->Location = System::Drawing::Point(856, 267);
			this->textbox_Time->Name = L"textbox_Time";
			this->textbox_Time->Size = System::Drawing::Size(362, 38);
			this->textbox_Time->TabIndex = 2;
			// 
			// textbox_Table
			// 
			this->textbox_Table->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Table->Location = System::Drawing::Point(856, 394);
			this->textbox_Table->Name = L"textbox_Table";
			this->textbox_Table->Size = System::Drawing::Size(362, 38);
			this->textbox_Table->TabIndex = 3;
			// 
			// textbox_Seat
			// 
			this->textbox_Seat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textbox_Seat->Location = System::Drawing::Point(856, 452);
			this->textbox_Seat->Name = L"textbox_Seat";
			this->textbox_Seat->Size = System::Drawing::Size(362, 38);
			this->textbox_Seat->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(553, 208);
			this->label1->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 38);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Date :";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(553, 264);
			this->label2->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 38);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Time :";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(701, 391);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 38);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Table :";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(553, 322);
			this->label4->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 38);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Duration :";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(708, 458);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 30);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Seat :";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(546, 390);
			this->label6->Margin = System::Windows::Forms::Padding(10, 9, 10, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(298, 101);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Preference";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Book_btn
			// 
			this->Book_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->Book_btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Book_btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Book_btn->Location = System::Drawing::Point(723, 514);
			this->Book_btn->Name = L"Book_btn";
			this->Book_btn->Size = System::Drawing::Size(271, 52);
			this->Book_btn->TabIndex = 12;
			this->Book_btn->Text = L"Book";
			this->Book_btn->UseVisualStyleBackColor = false;
			this->Book_btn->Click += gcnew System::EventHandler(this, &Book_Reservation::Book_btn_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-18, -9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1778, 121);
			this->label7->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(504, 143);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(0, 8, 0, 0);
			this->label8->Size = System::Drawing::Size(742, 442);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Reserve Your Seat Here";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(97, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(306, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// Book_Reservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1710, 682);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Book_btn);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textbox_Seat);
			this->Controls->Add(this->textbox_Table);
			this->Controls->Add(this->textbox_Time);
			this->Controls->Add(this->textbox_Duration);
			this->Controls->Add(this->textbox_Date);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label8);
			this->Name = L"Book_Reservation";
			this->Text = L"Book_Reservation";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Book_btn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		String^ dateNumberDummy = textbox_Date->Text;
		String^ timeNumberDummy = textbox_Time->Text;
		String^ tableNumberDummy = textbox_Table->Text;
		String^ seatswithintableDummy = textbox_Seat->Text;
		String^ durationNumberDummy = textbox_Duration->Text;


		if ((tableNumberDummy->Length == 0) || (seatswithintableDummy->Length == 0) || (durationNumberDummy->Length == 0) || (dateNumberDummy->Length == 0) || (timeNumberDummy->Length == 0)) {
			MessageBox::Show("Please enter the correct value of Date, Time, Duration, Table and Seats", "Invalid Input", MessageBoxButtons::OK);
			return;
		}

		//Max seats from tableseats
		String^ sqlqueryFormaxseats = "SELECT * FROM tableseats;";
		SqlCommand^ commandMaxSeats = gcnew SqlCommand(sqlqueryFormaxseats, connection);
		SqlDataReader^ reader = commandMaxSeats->ExecuteReader();
		reader->Read();
		int maxtables = reader->GetInt32(0);
		int maxseats = reader->GetInt32(1);
		reader->Close();

		//Check for maximum duartion
		String^ sqlqueryForMaxDuration = "SELECT duration FROM tableseats;";
		SqlCommand^ commandMaxDuration = gcnew SqlCommand(sqlqueryForMaxDuration, connection);
		SqlDataReader^ reader3 = commandMaxDuration->ExecuteReader();
		reader3->Read();
		int maxduration = reader3->GetInt32(0);
		reader3->Close();

		int durationNumber = System::Convert::ToInt32(durationNumberDummy);

		if (durationNumber > maxduration) {

			MessageBox::Show("The entered duration is longer than the max duation allowed that is " + maxduration + " hours", "Invalid Input", MessageBoxButtons::OK);

		}

		//Checking seatvalue in totalseats
		int tableNumber = System::Convert::ToInt32(tableNumberDummy);
		int seatsWithinTable = System::Convert::ToInt32(seatswithintableDummy);
		int seatIndex = 0;
		if ((tableNumber > 0) && (tableNumber <= maxtables) && (seatsWithinTable <= maxseats)) {
			seatIndex = (tableNumber * maxseats) - (maxseats - seatsWithinTable);
		}
		else {
			MessageBox::Show("Incorrect number of saets", "Seat Not Booked", MessageBoxButtons::OK);
			return;
		}

		String^ sqlqueryForChecking = "SELECT seatvalue FROM totalseats WHERE Seatid = @seatIndex;";
		SqlCommand^ commandCheck = gcnew SqlCommand(sqlqueryForChecking, connection);
		commandCheck->Parameters->Add(gcnew SqlParameter("@seatIndex", seatIndex));
		SqlDataReader^ reader2 = commandCheck->ExecuteReader();

		if (reader2->Read()) {
			int seatvalue = reader2->GetInt32(0);

			if (seatvalue == 0) {
				reader2->Close();

				String^ sqlqueryForEditinginSeatvalue = "UPDATE totalseats SET seatvalue = @newvalue_one WHERE Seatid = @seatIndex;";
				SqlCommand^ commandEditinginSeatValue = gcnew SqlCommand();
				commandEditinginSeatValue->Connection = connection;
				commandEditinginSeatValue->CommandText = sqlqueryForEditinginSeatvalue;
				commandEditinginSeatValue->Parameters->Add(gcnew SqlParameter("@newvalue_one", 1));
				commandEditinginSeatValue->Parameters->Add(gcnew SqlParameter("@seatIndex", seatIndex));
				commandEditinginSeatValue->ExecuteNonQuery();

				
				String^ sqlqueryForReservation = "UPDATE Reservation SET seatvalue = @newvalue_one, Date = @datevalue, Time = @timevalue, Duration = @durationvalue WHERE Seatid = @seatIndex;";
				SqlCommand^ commandEditingReservation = gcnew SqlCommand();
				commandEditingReservation->Connection = connection;
				commandEditingReservation->CommandText = sqlqueryForReservation;
				commandEditingReservation->Parameters->Add(gcnew SqlParameter("@newvalue_one", 1));
				commandEditingReservation->Parameters->Add(gcnew SqlParameter("@datevalue", dateNumberDummy));
				commandEditingReservation->Parameters->Add(gcnew SqlParameter("@timevalue", timeNumberDummy));
				commandEditingReservation->Parameters->Add(gcnew SqlParameter("@durationvalue", durationNumberDummy));
				commandEditingReservation->Parameters->Add(gcnew SqlParameter("@seatIndex", seatIndex));
				commandEditingReservation->ExecuteNonQuery();
				

				MessageBox::Show("Seat is Booked", "Seat Booked", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Full", "Seats is Full", MessageBoxButtons::OK);
				reader2->Close();
			}
		}
		connection->Close();
	};
	}
	;
};