#pragma once
#include <list>
#include <iterator> // для std::advance

namespace Lz12 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(57, 83);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(177, 228);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(323, 83);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(178, 228);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Location = System::Drawing::Point(596, 83);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(178, 228);
			this->listBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(87, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 40);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Початковий \r\nсписок";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(330, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 40);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Вставка 25 перед \r\nдодатними";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(592, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 40);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Вилучення від\'ємних \r\nчисел";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(308, 383);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 52);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(898, 490);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Створюємо лінійний двозв'язний список цілих чисел
		std::list<int> myList = { 12, -5, 7, 0, -14, 3, -2 };

		// Виведення початкового списку у listBox1
		listBox1->Items->Clear();
		for (int x : myList) {
			listBox1->Items->Add(x.ToString());
		}

		// 1. Вставляємо число 25 ПЕРЕД кожним елементом з додатним значенням (x > 0)
		for (auto it = myList.begin(); it != myList.end(); ++it) {
			if (*it > 0) {
				myList.insert(it, 25); // insert автоматично вставляє елемент ПЕРЕД поточним ітератором it
			}
		}

		// Виведення проміжного результату у listBox2
		listBox2->Items->Clear();
		for (int x : myList) {
			listBox2->Items->Add(x.ToString());
		}

		// 2. Вилучаємо зі списку всі від'ємні числа (x < 0)
		for (auto it = myList.begin(); it != myList.end(); ) {
			if (*it < 0) {
				it = myList.erase(it); // видаляємо елемент і отримуємо ітератор на наступний
			}
			else {
				++it; // якщо число невід'ємне, переходимо до наступного елемента
			}
		}

		// Виведення кінцевого результату у listBox3
		listBox3->Items->Clear();
		for (int x : myList) {
			listBox3->Items->Add(x.ToString());
		}
	}
};
}
