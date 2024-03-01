#pragma once
#include <vector>
#include <iostream>

namespace FromKalkulator {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(74, 177);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 70);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(477, 177);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 70);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(856, 167);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(283, 80);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(624, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 102);
			this->button1->TabIndex = 3;
			this->button1->Text = L"»того";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1561, 658);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   template <typename G>
		   G Plus(const pair <char, pair <G, G>>& para)
		   {
			   return para.second.first + para.second.second;
		   }

		   template <typename G>
		   G Minus(const pair <char, pair <G, G>>& para)
		   {
			   return para.second.first - para.second.second;
		   }

		   template <typename G>
		   G Multiply(const pair <char, pair <G, G>>& para)
		   {
			   return para.second.first * para.second.second;
		   }

		   template <typename G>
		   G Divide(const pair <char, pair <G, G>>& para)
		   {
			   return para.second.first / para.second.second;
		   }

	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		double a = System::Convert::ToDouble(textBox1->Text);
		double b = System::Convert::ToDouble(textBox3->Text);
		char sw = System::Convert::ToChar(textBox2->Text);

		double result;
		pair <char, pair <double, double>> n = { sw,{ a,b} };
		switch (sw)
		{
		case '+':
		{
			result = Plus(n);
			break;
		}
		case '-':
		{
			result = Minus(n);
			break;
		}
		case '*':
		{
			result = Multiply(n);
			break;
		}
		case '/':
		{
			result = Divide(n);
			break;
		}
		
		}
		MessageBox::Show(System::Convert::ToString(result),
			"»того:", MessageBoxButtons::OKCancel,
			MessageBoxIcon::Asterisk);
	}
	};
}
