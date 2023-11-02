#pragma once
#include "View_Seats.h"
#include "Book_Reservation.h"
#include "View_Reservation.h"
namespace studentandadmin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Student_Options
	/// </summary>
	public ref class Student_Options : public System::Windows::Forms::Form
	{
	public:
		Student_Options(void)
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
		~Student_Options()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Book_Resevation_Btn;
	protected:
	private: System::Windows::Forms::Button^ View_Reservation_Btn;
	private: System::Windows::Forms::Button^ Enter_Library_Btn;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Student_Options::typeid));
			this->Book_Resevation_Btn = (gcnew System::Windows::Forms::Button());
			this->View_Reservation_Btn = (gcnew System::Windows::Forms::Button());
			this->Enter_Library_Btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Book_Resevation_Btn
			// 
			this->Book_Resevation_Btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Book_Resevation_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->Book_Resevation_Btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Book_Resevation_Btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Book_Resevation_Btn->Location = System::Drawing::Point(702, 265);
			this->Book_Resevation_Btn->Name = L"Book_Resevation_Btn";
			this->Book_Resevation_Btn->Size = System::Drawing::Size(308, 68);
			this->Book_Resevation_Btn->TabIndex = 0;
			this->Book_Resevation_Btn->Text = L"Book Seats";
			this->Book_Resevation_Btn->UseVisualStyleBackColor = false;
			this->Book_Resevation_Btn->Click += gcnew System::EventHandler(this, &Student_Options::Book_Resevation_Btn_Click);
			// 
			// View_Reservation_Btn
			// 
			this->View_Reservation_Btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->View_Reservation_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->View_Reservation_Btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->View_Reservation_Btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->View_Reservation_Btn->Location = System::Drawing::Point(702, 377);
			this->View_Reservation_Btn->Name = L"View_Reservation_Btn";
			this->View_Reservation_Btn->Size = System::Drawing::Size(308, 68);
			this->View_Reservation_Btn->TabIndex = 1;
			this->View_Reservation_Btn->Text = L"View Reservation";
			this->View_Reservation_Btn->UseVisualStyleBackColor = false;
			this->View_Reservation_Btn->Click += gcnew System::EventHandler(this, &Student_Options::View_Reservation_Btn_Click);
			// 
			// Enter_Library_Btn
			// 
			this->Enter_Library_Btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Enter_Library_Btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->Enter_Library_Btn->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter_Library_Btn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Enter_Library_Btn->Location = System::Drawing::Point(702, 489);
			this->Enter_Library_Btn->Name = L"Enter_Library_Btn";
			this->Enter_Library_Btn->Size = System::Drawing::Size(308, 68);
			this->Enter_Library_Btn->TabIndex = 2;
			this->Enter_Library_Btn->Text = L"Enter Library";
			this->Enter_Library_Btn->UseVisualStyleBackColor = false;
			this->Enter_Library_Btn->Click += gcnew System::EventHandler(this, &Student_Options::Enter_Library_Btn_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label1->Location = System::Drawing::Point(-30, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1751, 112);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label2->Location = System::Drawing::Point(328, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1041, 346);
			this->label2->TabIndex = 4;
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(13)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(58, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(306, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Student_Options
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1710, 682);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Enter_Library_Btn);
			this->Controls->Add(this->View_Reservation_Btn);
			this->Controls->Add(this->Book_Resevation_Btn);
			this->Controls->Add(this->label2);
			this->Name = L"Student_Options";
			this->Text = L"Student_Options";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Enter_Library_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("You have entered the library", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void Book_Resevation_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

		Book_Reservation^ bookreservation = gcnew Book_Reservation;
		bookreservation->Show();

	}
	private: System::Void View_Reservation_Btn_Click(System::Object^ sender, System::EventArgs^ e) {

		View_Reservation^ viewreservation = gcnew View_Reservation;
		viewreservation->Show();

	}
	};
}
