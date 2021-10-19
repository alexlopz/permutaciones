#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
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
	private: System::Windows::Forms::TextBox^ textBoxN;
	private: System::Windows::Forms::TextBox^ textBoxR;


	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonLimpiar;

	private: System::Windows::Forms::Button^ buttonCalcular;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;

	long long n, r, factorial, resultado1, resultado2, restaDenominador, combinacion;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label15;







	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxR = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonCalcular = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxN
			// 
			this->textBoxN->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBoxN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxN->Location = System::Drawing::Point(217, 3);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(139, 29);
			this->textBoxN->TabIndex = 0;
			// 
			// textBoxR
			// 
			this->textBoxR->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBoxR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxR->Location = System::Drawing::Point(216, 50);
			this->textBoxR->Name = L"textBoxR";
			this->textBoxR->Size = System::Drawing::Size(140, 29);
			this->textBoxR->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar el valor de N";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ingresar el valor de R";
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonLimpiar->Location = System::Drawing::Point(26, 103);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(105, 23);
			this->buttonLimpiar->TabIndex = 4;
			this->buttonLimpiar->Text = L"LIMPIAR";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Form1::buttonLimpiar_Click);
			// 
			// buttonCalcular
			// 
			this->buttonCalcular->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buttonCalcular->BackColor = System::Drawing::SystemColors::ControlLight;
			this->buttonCalcular->Location = System::Drawing::Point(234, 103);
			this->buttonCalcular->Name = L"buttonCalcular";
			this->buttonCalcular->Size = System::Drawing::Size(105, 23);
			this->buttonCalcular->TabIndex = 5;
			this->buttonCalcular->Text = L"CALCULAR";
			this->buttonCalcular->UseVisualStyleBackColor = false;
			this->buttonCalcular->Click += gcnew System::EventHandler(this, &Form1::buttonCalcular_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"TOTAL:";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"_________________";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"n!";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(53, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"(n - r)!";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(163, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"=";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(277, 151);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"0";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(232, 171);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"_________________";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(277, 195);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"0";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(276, 252);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(45, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(283, 17);
			this->label12->TabIndex = 16;
			this->label12->Text = L"CALCULADORA DE PERMUTACIONES";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				85.86388F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.13613F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				208)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label11, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->buttonLimpiar, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label8, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label10, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label9, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBoxR, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label7, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->buttonCalcular, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button3, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->textBoxN, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(19, 61);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.72414F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.27586F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 24)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(391, 331);
			this->tableLayoutPanel1->TabIndex = 17;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::tableLayoutPanel1_Paint);
			this->tableLayoutPanel1->Hide();
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Location = System::Drawing::Point(3, 305);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Inicio";
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->label13, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button2, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label14, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label15, 0, 4);
			this->tableLayoutPanel2->Location = System::Drawing::Point(48, 63);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 85)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 82)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(331, 342);
			this->tableLayoutPanel2->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(117, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(97, 37);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Hola!";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(78, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Descargar manual";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(50, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Empezar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(12, 93);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(306, 20);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Presiona Empezar parar ir a la calculadora";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(14, 313);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(302, 20);
			this->label15->TabIndex = 4;
			this->label15->Text = L"GRUPO 1:  Mate Discreta Sección D";
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(434, 417);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label12);
			this->Name = L"Form1";
			this->Text = L"Calculadora de Permutaciones";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (!String::IsNullOrEmpty(textBoxN->Text) && !String::IsNullOrEmpty(textBoxR->Text))
		{
			n = Convert::ToInt64(textBoxN->Text);
			r = Convert::ToInt64(textBoxR->Text);

			if (r > n || n > 99 || r > 99) {
				MessageBox::Show("El valor de N debe ser mayor que R, o puede que N o R son mayores o iguales a 100");
			}
			else
			{
				
				restaDenominador = n - r;

				/*if (restaDenominador == 1) {
					resultado2 = restaDenominador * 1;
				}*/

				if (restaDenominador == 1) {

					resultado2 = restaDenominador * 1;
				}

				if (n == 1) {

					resultado1 = 1;
				}

				if (restaDenominador == 0) {

					resultado2 = 1;
				}

				factorial = 1;
				while (n > 1) {
					resultado1 = factorial *= n--;
				}

				factorial = 1;
				while (restaDenominador > 1) {
					resultado2 = factorial *= restaDenominador--;
				}

				combinacion = resultado1 / resultado2;

				label9->Text = Convert::ToString(resultado1);
				label8->Text = Convert::ToString(resultado2);
				label11->Text = Convert::ToString(combinacion);
			}

		}

	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	n = 0;
	r = 0; 
	factorial = 0; 
	resultado1 = 0;  
	resultado2 = 0; 
	restaDenominador = 0; 
	combinacion = 0;

	label9->Text = Convert::ToString(0);
	label8->Text = Convert::ToString(0);
	label11->Text = Convert::ToString(0);
	textBoxN->Text = "";
	textBoxR->Text = "";
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel2->Hide();
	tableLayoutPanel1->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	tableLayoutPanel1->Hide();
	tableLayoutPanel2->Show();

	n = 0;
	r = 0;
	factorial = 0;
	resultado1 = 0;
	resultado2 = 0;
	restaDenominador = 0;
	combinacion = 0;

	label9->Text = Convert::ToString(0);
	label8->Text = Convert::ToString(0);
	label11->Text = Convert::ToString(0);
	textBoxN->Text = "";
	textBoxR->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://docs.google.com/spreadsheets/d/1T6y3-I6GqZ69krkgacWMOJOgDwT0UHNz3FRlvtlpnS8/edit?usp=sharing");
}
};
}
