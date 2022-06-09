#pragma once
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Autolibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminFutureAdd
	/// </summary>
	public ref class AdminFutureAdd : public System::Windows::Forms::Form
	{
	public:
		AdminFutureAdd(void)
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
		~AdminFutureAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminFutureAdd::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button1->Location = System::Drawing::Point(80, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 46);
			this->button1->TabIndex = 16;
			this->button1->Text = L"������ �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminFutureAdd::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label4->Location = System::Drawing::Point(104, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 18);
			this->label4->TabIndex = 15;
			this->label4->Text = L"г� �������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label3->Location = System::Drawing::Point(127, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 18);
			this->label3->TabIndex = 14;
			this->label3->Text = L"�����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(131, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 18);
			this->label2->TabIndex = 13;
			this->label2->Text = L"�����";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(110, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 26);
			this->label1->TabIndex = 12;
			this->label1->Text = L"������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 219);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(122, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 162);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(223, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 17, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(402, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 26);
			this->label5->TabIndex = 18;
			this->label5->Text = L"��������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(437, 141);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 18);
			this->label6->TabIndex = 20;
			this->label6->Text = L"�����";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(345, 162);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(244, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(36, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 20);
			this->textBox1->TabIndex = 21;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->button3->Location = System::Drawing::Point(390, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 46);
			this->button3->TabIndex = 22;
			this->button3->Text = L"�������� �����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminFutureAdd::button3_Click);
			// 
			// AdminFutureAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 378);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Name = L"AdminFutureAdd";
			this->Text = L"������� �����";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ AddTitle = textBox1->Text;
		String^ AddAuthor = textBox2->Text;
		String^ AddYear = textBox3->Text;
		msclr::interop::marshal_context context0;
		msclr::interop::marshal_context context1;
		msclr::interop::marshal_context context2;
		std::string title = context0.marshal_as<std::string>(AddTitle);
		std::string author = context1.marshal_as<std::string>(AddAuthor);
		std::string year = context2.marshal_as<std::string>(AddYear);
		std::ifstream in_library;
		in_library.open("future_books.txt");
		bool alreadyExists = false;
		char arr[500];
		char* tmp;
		while (in_library.getline(arr, 500)) {
			tmp = strtok(arr, "\"");
			if (tmp != NULL)
			{
				std::string line(tmp);
				if (line.compare(title) == 0)
				{
					alreadyExists = true;
					break;
				}
			}
		}
		in_library.close();
		if (!alreadyExists)
		{
			if (!title.empty() && !author.empty() && !year.empty())
			{
				std::ofstream library;
				library.open("future_books.txt", std::ios::app);
				library << "\"" << title << "\" | " << author << " | " << year << "\n";
				library.close();
				MessageBox::Show("������ ������");
			}
			else MessageBox::Show("�� ��������� �� �� ����");
		}
		else MessageBox::Show("����� ��� � ������");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Delete = textBox4->Text;
		msclr::interop::marshal_context context;
		std::string title = "\"" + context.marshal_as<std::string>(Delete) + "\"";

		std::ifstream in_library;
		in_library.open("future_books.txt");
		//Get length of file
		in_library.seekg(0, in_library.end);
		int length = in_library.tellg();
		in_library.seekg(0, in_library.beg);
		///////////////////////////
		char* buffer = new char[length];
		in_library.get(buffer, length, '`');
		in_library.close();

		std::string text(buffer);
		size_t pos1 = text.find(title);
		if (pos1 != std::string::npos)
		{
			size_t pos2 = text.find("\n", pos1);
			text.erase(pos1, (pos2 + 1) - pos1);
			std::ofstream library;
			library.open("future_books.txt", std::ios::trunc);
			library << text;
			library.close();
			MessageBox::Show("�������� ������");
		}
		else MessageBox::Show("���� ����� �� ����");
		delete buffer;
	}
};
}
