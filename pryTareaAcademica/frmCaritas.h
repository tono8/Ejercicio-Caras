#pragma once
#include "Cara1.h"
#include "Cara2.h"
#include "Cara3.h"

namespace pryTareaAcademica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCaritas
	/// </summary>
	public ref class frmCaritas : public System::Windows::Forms::Form
	{
	private:
		Graphics^ g;
		Cara1* cara1;
		Cara2* cara2;
		Cara3* cara3;
	public:
		frmCaritas(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			cara1 = new Cara1();
			cara2 = new Cara2();
			cara3 = new Cara3();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCaritas()
		{
			if (components)
			{
				delete components;
				delete g;
			}
		}
	private: System::Windows::Forms::Button^ btnCara1;
	private: System::Windows::Forms::Button^ btnCara2;
	private: System::Windows::Forms::Button^ btnCara3;
	protected:

	protected:



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
			this->btnCara1 = (gcnew System::Windows::Forms::Button());
			this->btnCara2 = (gcnew System::Windows::Forms::Button());
			this->btnCara3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnCara1
			// 
			this->btnCara1->Location = System::Drawing::Point(148, 52);
			this->btnCara1->Name = L"btnCara1";
			this->btnCara1->Size = System::Drawing::Size(130, 60);
			this->btnCara1->TabIndex = 1;
			this->btnCara1->Text = L"Cara 1";
			this->btnCara1->UseVisualStyleBackColor = true;
			this->btnCara1->Click += gcnew System::EventHandler(this, &frmCaritas::btnCara1_Click);
			// 
			// btnCara2
			// 
			this->btnCara2->Location = System::Drawing::Point(284, 52);
			this->btnCara2->Name = L"btnCara2";
			this->btnCara2->Size = System::Drawing::Size(130, 60);
			this->btnCara2->TabIndex = 1;
			this->btnCara2->Text = L"Cara 2";
			this->btnCara2->UseVisualStyleBackColor = true;
			this->btnCara2->Click += gcnew System::EventHandler(this, &frmCaritas::btnCara2_Click);
			// 
			// btnCara3
			// 
			this->btnCara3->Location = System::Drawing::Point(420, 52);
			this->btnCara3->Name = L"btnCara3";
			this->btnCara3->Size = System::Drawing::Size(130, 60);
			this->btnCara3->TabIndex = 1;
			this->btnCara3->Text = L"Cara 3";
			this->btnCara3->UseVisualStyleBackColor = true;
			this->btnCara3->Click += gcnew System::EventHandler(this, &frmCaritas::btnCara3_Click);
			// 
			// frmCaritas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 441);
			this->Controls->Add(this->btnCara3);
			this->Controls->Add(this->btnCara2);
			this->Controls->Add(this->btnCara1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmCaritas";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC-TA1-Caritas - Seleccion de caritas";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCara1_Click(System::Object^ sender, System::EventArgs^ e) {
		cara1->mostrarSeleccion(CreateGraphics());
	}
	private: System::Void btnCara2_Click(System::Object^ sender, System::EventArgs^ e) {
		cara2->mostrarSeleccion(CreateGraphics());
	}
	private: System::Void btnCara3_Click(System::Object^ sender, System::EventArgs^ e) {
		cara3->mostrarSeleccion(CreateGraphics());
	}
	};
}
