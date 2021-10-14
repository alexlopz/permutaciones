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
			this->SuspendLayout();
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(213, 24);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(100, 20);
			this->textBoxN->TabIndex = 0;
			// 
			// textBoxR
			// 
			this->textBoxR->Location = System::Drawing::Point(213, 62);
			this->textBoxR->Name = L"textBoxR";
			this->textBoxR->Size = System::Drawing::Size(100, 20);
			this->textBoxR->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingresar el valor de N";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ingresar el valor de R";
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(16, 116);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(105, 23);
			this->buttonLimpiar->TabIndex = 4;
			this->buttonLimpiar->Text = L"LIMPIAR";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &Form1::buttonLimpiar_Click);
			// 
			// buttonCalcular
			// 
			this->buttonCalcular->Location = System::Drawing::Point(208, 116);
			this->buttonCalcular->Name = L"buttonCalcular";
			this->buttonCalcular->Size = System::Drawing::Size(105, 23);
			this->buttonCalcular->TabIndex = 5;
			this->buttonCalcular->Text = L"CALCULAR";
			this->buttonCalcular->UseVisualStyleBackColor = true;
			this->buttonCalcular->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 278);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"TOTAL";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"_________________";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"n!";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"(n - r)!";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(140, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(204, 162);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"0";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(165, 176);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(109, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"_________________";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(204, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 322);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonCalcular);
			this->Controls->Add(this->buttonLimpiar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxR);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->label5);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, r, factorial, resultado;

		if (!String::IsNullOrEmpty(textBoxN->Text) && !String::IsNullOrEmpty(textBoxR->Text))
		{
			n = Convert::ToInt64(textBoxN->Text);
			r = Convert::ToInt64(textBoxR->Text);

			factorial = 1;
			while (n > 1) {
				factorial *= n--;
			}

			label9->Text = Convert::ToString(factorial);
		}

	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
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
};
}
