#pragma once

namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for View_Seats
	/// </summary>
	public ref class View_Seats : public System::Windows::Forms::Form
	{
	public:
		View_Seats(void)
		{
			InitializeComponent();

			String^ connectionString = "Data Source=localhost\\sqlexpress;Initial Catalog=login;Integrated Security=True";
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			connection->Open();


			String^ sqlQuery = "SELECT [table], seats FROM tableseats;";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, connection);
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read()) {
				int totalTables = reader->GetInt32(0);
				int seatsPerTable = reader->GetInt32(1);
				int totalseats = totalTables * seatsPerTable;
				reader->Close();

				for (int i = 1; i <= totalseats; i++) {
					CheckBox^ labelbox = gcnew CheckBox();
					labelbox->Text = "Seats " + i;
					String^ sqlQuery2 = "SELECT seatvalue FROM totalseats WHERE Seatid = @seatid;";
					SqlCommand^ command2 = gcnew SqlCommand(sqlQuery2, connection);
					command2->Parameters->Add(gcnew SqlParameter("@Seatid", i));
					SqlDataReader^ reader2 = command2->ExecuteReader();
					reader2->Read();
					int seatvalue = reader2->GetInt32(0);
					reader2->Close();

					if (seatvalue == 1) {
						labelbox->Checked = true;
					}
					else {
						labelbox->Checked = false;
					}

					flowLayoutPanel1->Controls->Add(labelbox);
				}



					/*
				for (int table = 1; table <= totalTables; table++) {
					GroupBox^ groupBox1 = gcnew GroupBox();
					groupBox1->Text = "Table" + table;
					flowLayoutPanel1->Controls->Add(groupBox1);

					for (int i = 1; i <= seatsPerTable; i++) {
						Label^ labelbox = gcnew Label();
						labelbox->Text = "Seats " + i;
						groupBox1->Controls->Add(labelbox);
					}
				}
				*/

			}
			connection->Close();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~View_Seats()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(View_Seats::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 112);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(969, 568);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &View_Seats::flowLayoutPanel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-450, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(242, 80);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(-483, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1930, 111);
			this->label1->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(37, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(217, 79);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// View_Seats
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 680);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"View_Seats";
			this->Text = L"View_Seats";
			this->Load += gcnew System::EventHandler(this, &View_Seats::View_Seats_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void View_Seats_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
