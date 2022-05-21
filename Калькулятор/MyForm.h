#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(22, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 26);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Решить систему уравнений";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(75, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"X +";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(22, 19);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(283, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Заполните систему линейных уравнений:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(156, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 15);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Y +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(237, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 15);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Z =";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(267, 54);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(44, 20);
			this->textBox4->TabIndex = 33;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(267, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(44, 20);
			this->textBox5->TabIndex = 40;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(237, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 15);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Z =";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(187, 80);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(44, 20);
			this->textBox6->TabIndex = 38;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(156, 81);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 15);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Y +";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(106, 80);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(44, 20);
			this->textBox7->TabIndex = 36;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(75, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 15);
			this->label6->TabIndex = 35;
			this->label6->Text = L"X +";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(25, 80);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 20);
			this->textBox8->TabIndex = 34;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(267, 106);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(44, 20);
			this->textBox9->TabIndex = 47;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(237, 107);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 15);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Z =";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(187, 106);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(44, 20);
			this->textBox10->TabIndex = 45;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(156, 107);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 15);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Y +";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(106, 106);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(44, 20);
			this->textBox11->TabIndex = 43;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(75, 107);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 15);
			this->label9->TabIndex = 42;
			this->label9->Text = L"X +";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(25, 106);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(44, 20);
			this->textBox12->TabIndex = 41;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(225, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 26);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(90, 200);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(60, 20);
			this->textBox13->TabIndex = 49;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 200);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 17);
			this->label11->TabIndex = 50;
			this->label11->Text = L"Ответ:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(62, 202);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 15);
			this->label12->TabIndex = 51;
			this->label12->Text = L"X =";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(152, 202);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 15);
			this->label13->TabIndex = 52;
			this->label13->Text = L"Y =";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(180, 200);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(60, 20);
			this->textBox14->TabIndex = 53;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(242, 202);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 15);
			this->label14->TabIndex = 54;
			this->label14->Text = L"Z =";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(270, 200);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(60, 20);
			this->textBox15->TabIndex = 55;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 56;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 54);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(44, 20);
			this->textBox3->TabIndex = 58;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 20);
			this->textBox2->TabIndex = 57;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(338, 240);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox15_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   double determinant(double matrix[3][3])
	   {
		   double a11 = matrix[0][0];
		   double a12 = matrix[0][1];
		   double a13 = matrix[0][2];
		   double a21 = matrix[1][0];
		   double a22 = matrix[1][1];
		   double a23 = matrix[1][2];
		   double a31 = matrix[2][0];
		   double a32 = matrix[2][1];
		   double a33 = matrix[2][2];

		   return (a11 * a22 * a33) + (a12 * a23 * a31) + (a13 * a21 * a32) -
			   (a13 * a22 * a31) - (a11 * a23 * a32) - (a12 * a21 * a33);
	   }
	   double determinantX1(double coefMatrix[3][3], double constTermsMatrix[3])
	   {
		   double a12 = coefMatrix[0][1];
		   double a13 = coefMatrix[0][2];
		   double a22 = coefMatrix[1][1];
		   double a23 = coefMatrix[1][2];
		   double a32 = coefMatrix[2][1];
		   double a33 = coefMatrix[2][2];
		   double c1 = constTermsMatrix[0];
		   double c2 = constTermsMatrix[1];
		   double c3 = constTermsMatrix[2];

		   return (c1 * a22 * a33) + (a12 * a23 * c3) + (a13 * c2 * a32) -
			   (a13 * a22 * c3) - (c1 * a23 * a32) - (a12 * c2 * a33);
	   }
	   double determinantX2(double coefMatrix[3][3], double constTermsMatrix[3])
	   {
		   double a11 = coefMatrix[0][0];
		   double a13 = coefMatrix[0][2];
		   double a21 = coefMatrix[1][0];
		   double a23 = coefMatrix[1][2];
		   double a31 = coefMatrix[2][0];
		   double a33 = coefMatrix[2][2];
		   double c1 = constTermsMatrix[0];
		   double c2 = constTermsMatrix[1];
		   double c3 = constTermsMatrix[2];

		   return (a11 * c2 * a33) + (c1 * a23 * a31) + (a13 * a21 * c3) -
			   (a13 * c2 * a31) - (a11 * a23 * c3) - (c1 * a21 * a33);
	   }
	   double determinantX3(double coefMatrix[3][3], double constTermsMatrix[3])
	   {
		   double a11 = coefMatrix[0][0];
		   double a12 = coefMatrix[0][1];
		   double a21 = coefMatrix[1][0];
		   double a22 = coefMatrix[1][1];
		   double a31 = coefMatrix[2][0];
		   double a32 = coefMatrix[2][1];
		   double c1 = constTermsMatrix[0];
		   double c2 = constTermsMatrix[1];
		   double c3 = constTermsMatrix[2];

		   return (a11 * a22 * c3) + (a12 * c2 * a31) + (c1 * a21 * a32) -
			   (c1 * a22 * a31) - (a11 * c2 * a32) - (a12 * a21 * c3);
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	double coefA1 = System::Convert::ToDouble(textBox1->Text);
	double coefB1 = System::Convert::ToDouble(textBox2->Text);
	double coefC1 = System::Convert::ToDouble(textBox3->Text);
	double coefD1 = System::Convert::ToDouble(textBox4->Text);

	double coefA2 = System::Convert::ToDouble(textBox8->Text);
	double coefB2 = System::Convert::ToDouble(textBox7->Text);
	double coefC2 = System::Convert::ToDouble(textBox6->Text);
	double coefD2 = System::Convert::ToDouble(textBox5->Text);

	double coefA3 = System::Convert::ToDouble(textBox12->Text);
	double coefB3 = System::Convert::ToDouble(textBox11->Text);
	double coefC3 = System::Convert::ToDouble(textBox10->Text);
	double coefD3 = System::Convert::ToDouble(textBox9->Text);

	double coefficientsMatrix3x3[3][3];
	double constantTermsMatrix3x1[3];

	coefficientsMatrix3x3[0][0] = coefA1;
	coefficientsMatrix3x3[0][1] = coefB1;
	coefficientsMatrix3x3[0][2] = coefC1;

	coefficientsMatrix3x3[1][0] = coefA2;
	coefficientsMatrix3x3[1][1] = coefB2;
	coefficientsMatrix3x3[1][2] = coefC2;

	coefficientsMatrix3x3[2][0] = coefA3;
	coefficientsMatrix3x3[2][1] = coefB3;
	coefficientsMatrix3x3[2][2] = coefC3;

	constantTermsMatrix3x1[0] = coefD1;
	constantTermsMatrix3x1[1] = coefD2;
	constantTermsMatrix3x1[2] = coefD3;

	double det = determinant(coefficientsMatrix3x3);
	double detX1 = determinantX1(coefficientsMatrix3x3, constantTermsMatrix3x1);
	double detX2 = determinantX2(coefficientsMatrix3x3, constantTermsMatrix3x1);
	double detX3 = determinantX3(coefficientsMatrix3x3, constantTermsMatrix3x1);

	float X = (float)detX1 / (float)det;
	float Y = (float)detX2 / (float)det;
	float Z = (float)detX3 / (float)det;

	if (det != 0)
	{
		textBox13->Text = System::Convert::ToString(X);
		textBox14->Text = System::Convert::ToString(Y);
		textBox15->Text = System::Convert::ToString(Z);
	}
	else
		MessageBox::Show("Система не имеет решений");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = ""; textBox4->Text = "";
	textBox5->Text = ""; textBox6->Text = ""; textBox7->Text = ""; textBox8->Text = "";
	textBox9->Text = ""; textBox10->Text = ""; textBox11->Text = ""; textBox12->Text = "";
	textBox13->Text = ""; textBox14->Text = ""; textBox15->Text = "";
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && number != 44 && number != 45)
		e->Handled = true;
}
};
}