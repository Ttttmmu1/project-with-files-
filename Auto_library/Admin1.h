#pragma once
#include "AdminAdd.h"
#include "AdminDelete.h"

namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button9;



	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(245, 57);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 61);
			this->button1->TabIndex = 1;
			this->button1->Text = L"������� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(458, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 61);
			this->button2->TabIndex = 2;
			this->button2->Text = L"������ ������ ����";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(460, 57);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 61);
			this->button3->TabIndex = 3;
			this->button3->Text = L"������ �����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(363, 241);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 61);
			this->button4->TabIndex = 4;
			this->button4->Text = L"�����";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(29, 57);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(189, 61);
			this->button5->TabIndex = 5;
			this->button5->Text = L"�������� �����";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(140, 241);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(189, 61);
			this->button6->TabIndex = 6;
			this->button6->Text = L"������ ������";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(245, 154);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(191, 61);
			this->button7->TabIndex = 7;
			this->button7->Text = L"����� �� ������ ������ ������";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(29, 154);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(189, 61);
			this->button8->TabIndex = 8;
			this->button8->Text = L"�������� ����";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(671, 332);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������� �� �� ������ �������";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(281, 367);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(138, 23);
			this->button9->TabIndex = 10;
			this->button9->Text = L"������� � �����";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Admin::button9_Click);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 402);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Form::Close();
	}
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		AdminAdd^ addForm = gcnew AdminAdd;
		addForm->Show();
    }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminDelete^ deleteForm = gcnew AdminDelete;
		deleteForm->Show();
	}
};
}
