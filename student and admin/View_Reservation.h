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
	/// Summary for View_Reservation
	/// </summary>
	public ref class View_Reservation : public System::Windows::Forms::Form
	{
	public:
		View_Reservation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dynamic_date_label->Text = "(Choose Table and Seat)";
			dynamic_time_label->Text = "(Choose Table and Seat)";
			dynamic_duration_lable->Text = "(Choose Table and Seat)";
			dynamic_book_status_label->Text = "(Choose Table and Seat)";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View_Reservation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ dynamic_duration_lable;


	private: System::Windows::Forms::Label^ dynamic_time_label;

	private: System::Windows::Forms::Label^ dynamic_date_label;
	private: System::Windows::Forms::Button^ button_View_Reservation;

	private: System::Windows::Forms::TextBox^ textBox_Table;
	private: System::Windows::Forms::TextBox^ textBox_Seat;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ dynamic_book_status_label;
	private: System::Windows::Forms::Label^ label7;








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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dynamic_duration_lable = (gcnew System::Windows::Forms::Label());
			this->dynamic_time_label = (gcnew System::Windows::Forms::Label());
			this->dynamic_date_label = (gcnew System::Windows::Forms::Label());
			this->button_View_Reservation = (gcnew System::Windows::Forms::Button());
			this->textBox_Table = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Seat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dynamic_book_status_label = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(665, 351);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Date";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(663, 406);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Time";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(663, 447);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Duration";
			// 
			// dynamic_duration_lable
			// 
			this->dynamic_duration_lable->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dynamic_duration_lable->Location = System::Drawing::Point(922, 447);
			this->dynamic_duration_lable->Name = L"dynamic_duration_lable";
			this->dynamic_duration_lable->Size = System::Drawing::Size(97, 24);
			this->dynamic_duration_lable->TabIndex = 5;
			this->dynamic_duration_lable->Text = L"label4";
			// 
			// dynamic_time_label
			// 
			this->dynamic_time_label->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dynamic_time_label->Location = System::Drawing::Point(922, 406);
			this->dynamic_time_label->Name = L"dynamic_time_label";
			this->dynamic_time_label->Size = System::Drawing::Size(107, 31);
			this->dynamic_time_label->TabIndex = 4;
			this->dynamic_time_label->Text = L"label5";
			// 
			// dynamic_date_label
			// 
			this->dynamic_date_label->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dynamic_date_label->Location = System::Drawing::Point(922, 351);
			this->dynamic_date_label->Name = L"dynamic_date_label";
			this->dynamic_date_label->Size = System::Drawing::Size(107, 31);
			this->dynamic_date_label->TabIndex = 3;
			this->dynamic_date_label->Text = L"label6";
			//this->dynamic_date_label->Click += gcnew System::EventHandler(this, &View_Reservation::dynamic_date_label_Click);
			// 
			// button_View_Reservation
			// 
			this->button_View_Reservation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button_View_Reservation->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_View_Reservation->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_View_Reservation->Location = System::Drawing::Point(549, 245);
			this->button_View_Reservation->Name = L"button_View_Reservation";
			this->button_View_Reservation->Size = System::Drawing::Size(500, 80);
			this->button_View_Reservation->TabIndex = 6;
			this->button_View_Reservation->Text = L"View Reseravtion";
			this->button_View_Reservation->UseVisualStyleBackColor = false;
			this->button_View_Reservation->Click += gcnew System::EventHandler(this, &View_Reservation::button_View_Reservation_Click);
			// 
			// textBox_Table
			// 
			this->textBox_Table->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Table->Location = System::Drawing::Point(785, 181);
			this->textBox_Table->Name = L"textBox_Table";
			this->textBox_Table->Size = System::Drawing::Size(200, 35);
			this->textBox_Table->TabIndex = 7;
			// 
			// textBox_Seat
			// 
			this->textBox_Seat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_Seat->Location = System::Drawing::Point(785, 119);
			this->textBox_Seat->Name = L"textBox_Seat";
			this->textBox_Seat->Size = System::Drawing::Size(200, 38);
			this->textBox_Seat->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(634, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 32);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Table No.";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(634, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 30);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Seat No.";
			//this->label5->Click += gcnew System::EventHandler(this, &View_Reservation::label5_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(663, 498);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Book Status";
			// 
			// dynamic_book_status_label
			// 
			this->dynamic_book_status_label->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dynamic_book_status_label->Location = System::Drawing::Point(922, 498);
			this->dynamic_book_status_label->Name = L"dynamic_book_status_label";
			this->dynamic_book_status_label->Size = System::Drawing::Size(97, 24);
			this->dynamic_book_status_label->TabIndex = 12;
			this->dynamic_book_status_label->Text = L"label4";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-15, -4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(2472, 101);
			this->label7->TabIndex = 13;
			// 
			// View_Reservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 590);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dynamic_book_status_label);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_Seat);
			this->Controls->Add(this->textBox_Table);
			this->Controls->Add(this->button_View_Reservation);
			this->Controls->Add(this->dynamic_duration_lable);
			this->Controls->Add(this->dynamic_time_label);
			this->Controls->Add(this->dynamic_date_label);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"View_Reservation";
			this->Text = L"View_Reservation";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button_View_Reservation_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	connection->Open();


	String^ tables = this->textBox_Table->Text;
	String^ seats = this->textBox_Seat->Text;
	int tablesInt = System::Convert::ToInt32(tables);
	int seatsInt = System::Convert::ToInt32(seats);


	String^ sqlqueryFormaxseats = "SELECT * FROM tableseats;";
	SqlCommand^ commandMaxSeats = gcnew SqlCommand(sqlqueryFormaxseats, connection);
	SqlDataReader^ reader = commandMaxSeats->ExecuteReader();
	reader->Read();
	int maxtables = reader->GetInt32(0);
	int maxseats = reader->GetInt32(1);
	reader->Close();


	int seatIndex = (tablesInt * maxseats) - (maxseats - seatsInt);

	//if ((tablesInt < 0) && (tablesInt > maxtables) && (seatsInt > maxseats)) {
	//	MessageBox::Show("Incorrect number of saets", "Seat Not Booked", MessageBoxButtons::OK);
	//	return;
	//}


	String^ sqlqueryForViewReservation = "SELECT seatvalue,Date,Time,Duration FROM Reservation WHERE Seatid = @seatid;";
	SqlCommand^ commandViewReservation = gcnew SqlCommand(sqlqueryForViewReservation, connection);
	commandViewReservation->Parameters->Add(gcnew SqlParameter("@seatid", seatIndex));
	SqlDataReader^ reader2 = commandViewReservation->ExecuteReader();

	reader2->Read();
	int seat_Status = reader2->GetInt32(0);
	String^ Date = reader2->GetString(1);
	String^ Time = reader2->GetString(2);
	String^ Duration = reader2->GetString(3);
	reader2->Close();



	String^ seat_Status_REAL="";

	if (seat_Status == 0) {
		seat_Status_REAL = "None";
	}
	else {
		seat_Status_REAL = "Booked";
	}

	dynamic_date_label->Text = Date;
	dynamic_time_label->Text = Time;
	dynamic_duration_lable->Text = Duration;
	dynamic_book_status_label->Text = seat_Status_REAL;



}
};
}
