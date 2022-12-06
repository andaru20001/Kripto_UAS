#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f・ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf・en.
			//
		}

		std::string rot13E(std::string plain) {
			std::string rot;
			for (int i = 0; i < plain.length(); i++) {
				if (plain[i] != ' ') {
					if (isupper(plain[i])) {
						rot += char((int(plain[i]) + 13 - 65) % 26 + 65);
					}
					else {
						rot += char((int(plain[i]) + 13 - 97) % 26 + 97);
					}
				}
				else {
					rot += " ";
				}
			}
			return rot;
		}

		std::string rot13D(std::string plain) {
			std::string rot;
			for (int i = 0; i < plain.length(); i++) {
				if (plain[i] != ' ') {
					if (isupper(plain[i])) {
						rot += char((int(plain[i]) - 13 - 65) % 26 + 65);
					}
					else {
						rot += char((int(plain[i]) - 13 - 97) % 26 + 97);
					}
				}
				else {
					rot += " ";
				}
			}
			return rot;
		}

		std::string affineE(std::string plain, int a, int b) {
			std::string affine;
			for (int i = 0; i < plain.length(); i++) {
				if (plain[i] != ' ') {
					if (isupper(plain[i])) {
						affine += char((a * (int(plain[i]) - 65) + b) % 26 + 65);
					}
					else {
						affine += char((a * (int(plain[i]) - 97) + b) % 26 + 97);
					}
				}
				else {
					affine += " ";
				}
			}
			return affine;
		}

		std::string affineD(std::string plain, int a, int b) {
			int temp;
			std::string affine;
			for (int i = 0; i < 26; i++)
			{
				if ((a * i) % 26 == 1) {
					temp = i;
					break;
				}
			}
			a = temp;
			for (int i = 0; i < plain.length(); i++) {
				if (plain[i] == ' ') {
					affine += ' ';
				}
				else if (isupper(plain[i])) {
					if ((plain[i] - 65 - b) < 0)
						affine += char((a * (plain[i] - 65 - b + 26)) % 26 + 65);
					else
						affine += char((a * (plain[i] - 65 - b)) % 26 + 65);
				}
				else {
					if ((plain[i] - 97 - b) < 0)
						affine += char((a * (plain[i] - 97 - b + 26)) % 26 + 97);
					else
						affine += char((a * (plain[i] - 97 - b)) % 26 + 97);
				}
			}
			return affine;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f・ die Designerunterst・zung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge舅dert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Exo 2 Semi Bold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(86, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Program Affine + ROT13 Cipher";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Exo 2 Medium", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(29, 71);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(356, 211);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(348, 185);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"ROT13 - E";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Enkripsikan";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(25, 51);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(297, 82);
			this->panel1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(187, 21);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 21);
			this->textBox1->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Ciphertext :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Plaintext :";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(348, 185);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"ROT13 - D";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(241, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 25);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Dekripsikan";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(25, 51);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(297, 82);
			this->panel2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(89, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(187, 21);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(89, 16);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(187, 21);
			this->textBox4->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Plaintext :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ciphertext :";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(348, 185);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Affine - E";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(136, 18);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(46, 21);
			this->textBox10->TabIndex = 10;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(50, 18);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(46, 21);
			this->textBox9->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(111, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"b :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(241, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 25);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Enkripsikan";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(25, 51);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(297, 82);
			this->panel3->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(89, 48);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(187, 21);
			this->textBox5->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(89, 16);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(187, 21);
			this->textBox6->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Ciphertext :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Plaintext :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"a :";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox11);
			this->tabPage4->Controls->Add(this->textBox12);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label13);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->panel4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(348, 185);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Affine - D";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(136, 18);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(46, 21);
			this->textBox11->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(50, 18);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(46, 21);
			this->textBox12->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(111, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"b :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 20);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"a :";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(241, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 25);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Dekripsikan";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Location = System::Drawing::Point(25, 51);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(297, 82);
			this->panel4->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(89, 48);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(187, 21);
			this->textBox7->TabIndex = 3;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(89, 16);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(187, 21);
			this->textBox8->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 51);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Plaintext :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 19);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ciphertext :";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 309);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string pt = context.marshal_as<std::string>(textBox1->Text);
		std::string ct = rot13E(pt);
		textBox2->Text = context.marshal_as<String^>(ct);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string ct = context.marshal_as<std::string>(textBox4->Text);
		std::string pt = rot13D(ct);
		textBox3->Text = context.marshal_as<String^>(pt);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string pt = context.marshal_as<std::string>(textBox6->Text);
		int a = Convert::ToInt32(textBox9->Text);
		int b = Convert::ToInt32(textBox10->Text);
		std::string ct = affineE(pt,a,b);
		textBox5->Text = context.marshal_as<String^>(ct);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string ct = context.marshal_as<std::string>(textBox8->Text);
		int a = Convert::ToInt32(textBox12->Text);
		int b = Convert::ToInt32(textBox11->Text);
		std::string pt = affineE(ct, a, b);
		textBox7->Text = context.marshal_as<String^>(pt);
	}
};
}
