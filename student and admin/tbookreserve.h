#pragma once

namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tbookreserve
	/// </summary>
	public ref class tbookreserve : public System::Windows::Forms::Form
	{
	public:
		tbookreserve(void)
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
		~tbookreserve()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btbsok;
	protected:

	private: System::Windows::Forms::TextBox^ tbseat;
	protected:

	private: System::Windows::Forms::Label^ Seat;
	private: System::Windows::Forms::TextBox^ tbtable;

	private: System::Windows::Forms::Label^ label2;


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
			this->btbsok = (gcnew System::Windows::Forms::Button());
			this->tbseat = (gcnew System::Windows::Forms::TextBox());
			this->Seat = (gcnew System::Windows::Forms::Label());
			this->tbtable = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btbsok
			// 
			this->btbsok->Location = System::Drawing::Point(284, 227);
			this->btbsok->Name = L"btbsok";
			this->btbsok->Size = System::Drawing::Size(75, 34);
			this->btbsok->TabIndex = 0;
			this->btbsok->Text = L"ok";
			this->btbsok->UseVisualStyleBackColor = true;
			this->btbsok->Click += gcnew System::EventHandler(this, &tbookreserve::btbsok_Click);
			// 
			// tbseat
			// 
			this->tbseat->Location = System::Drawing::Point(268, 141);
			this->tbseat->Name = L"tbseat";
			this->tbseat->Size = System::Drawing::Size(100, 26);
			this->tbseat->TabIndex = 1;
			this->tbseat->TextChanged += gcnew System::EventHandler(this, &tbookreserve::textBox1_TextChanged);
			// 
			// Seat
			// 
			this->Seat->AutoSize = true;
			this->Seat->Location = System::Drawing::Point(147, 144);
			this->Seat->Name = L"Seat";
			this->Seat->Size = System::Drawing::Size(43, 20);
			this->Seat->TabIndex = 2;
			this->Seat->Text = L"Seat";
			this->Seat->Click += gcnew System::EventHandler(this, &tbookreserve::label1_Click);
			// 
			// tbtable
			// 
			this->tbtable->Location = System::Drawing::Point(268, 97);
			this->tbtable->Name = L"tbtable";
			this->tbtable->Size = System::Drawing::Size(100, 26);
			this->tbtable->TabIndex = 1;
			this->tbtable->TextChanged += gcnew System::EventHandler(this, &tbookreserve::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(147, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Table";
			this->label2->Click += gcnew System::EventHandler(this, &tbookreserve::label1_Click);
			// 
			// tbookreserve
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 525);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Seat);
			this->Controls->Add(this->tbtable);
			this->Controls->Add(this->tbseat);
			this->Controls->Add(this->btbsok);
			this->Name = L"tbookreserve";
			this->Text = L"tbookreserve";
			this->Load += gcnew System::EventHandler(this, &tbookreserve::tbookreserve_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbookreserve_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btbsok_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();
		String^ tableNumber123 = tbtable->Text;
		String^ seatWithinTable123 = tbseat->Text;

		// User input: table number and seat within that table
		int tableNumber = System::Convert::ToInt32(tableNumber123); // Replace with user input
		int seatWithinTable = System::Convert::ToInt32(seatWithinTable123); // Replace with user input

		// Calculate the seat index within the current table
		int seatIndex = (tableNumber) * (seatWithinTable);

		
		String^ sqlquery3 = "select seatvalue from totalseats where Seatid = @seatIndex; ";
		SqlCommand^ command3 = gcnew SqlCommand(sqlquery3, connection);
		command3->Parameters->Add(gcnew SqlParameter("@seatIndex", seatIndex));

		SqlCommand^ command = gcnew SqlCommand(sqlquery3, connection);
		SqlDataReader^ reader = command3->ExecuteReader();

		if (reader->Read()) {
			///int Seatid = reader->GetInt32(0); // Assuming 'seated' is at index 0
			int seatvalue = reader->GetInt32(0); // Assuming 'seatvalues' is at index 1

			if (seatvalue == 0) {
				MessageBox::Show("empty",
					"empty", MessageBoxButtons::OK);
				connection->Close();

				// Display or process the 'status' based on your requirements
				// You can use Windows Forms controls to display it to the user
			}
			else {
				MessageBox::Show("full",
					"full", MessageBoxButtons::OK);
				connection->Close();
			}
		}

		reader->Close();
		connection->Close();
	}
};
}
