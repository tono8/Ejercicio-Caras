#pragma once
#include "frmCaritas.h"
#include "frmCarrera.h"

namespace pryTareaAcademica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblMenuPrincipal;
	protected:

	private: System::Windows::Forms::Button^ btnCarrera;
	private: System::Windows::Forms::Button^ btnCaritas;

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
			this->lblMenuPrincipal = (gcnew System::Windows::Forms::Label());
			this->btnCarrera = (gcnew System::Windows::Forms::Button());
			this->btnCaritas = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblMenuPrincipal
			// 
			this->lblMenuPrincipal->AutoSize = true;
			this->lblMenuPrincipal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMenuPrincipal->Location = System::Drawing::Point(263, 63);
			this->lblMenuPrincipal->Name = L"lblMenuPrincipal";
			this->lblMenuPrincipal->Size = System::Drawing::Size(160, 22);
			this->lblMenuPrincipal->TabIndex = 0;
			this->lblMenuPrincipal->Text = L"MENU PRINCIPAL";
			// 
			// btnCarrera
			// 
			this->btnCarrera->Location = System::Drawing::Point(185, 185);
			this->btnCarrera->Name = L"btnCarrera";
			this->btnCarrera->Size = System::Drawing::Size(130, 60);
			this->btnCarrera->TabIndex = 1;
			this->btnCarrera->Text = L"Inicio de carrera";
			this->btnCarrera->UseVisualStyleBackColor = true;
			this->btnCarrera->Click += gcnew System::EventHandler(this, &frmPrincipal::btnCarrera_Click);
			// 
			// btnCaritas
			// 
			this->btnCaritas->Location = System::Drawing::Point(370, 185);
			this->btnCaritas->Name = L"btnCaritas";
			this->btnCaritas->Size = System::Drawing::Size(130, 60);
			this->btnCaritas->TabIndex = 2;
			this->btnCaritas->Text = L"Cambio de caritas";
			this->btnCaritas->UseVisualStyleBackColor = true;
			this->btnCaritas->Click += gcnew System::EventHandler(this, &frmPrincipal::btnCaritas_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 441);
			this->Controls->Add(this->btnCaritas);
			this->Controls->Add(this->btnCarrera);
			this->Controls->Add(this->lblMenuPrincipal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPrincipal";
			this->ShowIcon = false;
			this->Text = L"frmPrincipal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCarrera_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCarrera^ frm = gcnew frmCarrera();
		frm->ShowDialog();
	}
	private: System::Void btnCaritas_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCaritas^ frm = gcnew frmCaritas();
		frm->ShowDialog();
	}
	};
}
