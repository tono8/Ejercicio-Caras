#pragma once
#include "Carrera.h"

namespace pryTareaAcademica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCarrera
	/// </summary>
	public ref class frmCarrera : public System::Windows::Forms::Form
	{
	private:
		Timer^ cronometro;
		Label^ lblTiempo;
		int counter;
	public:
		frmCarrera(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			carrera = new Carrera();
			g = this->CreateGraphics();

			cronometro = gcnew Timer();
			cronometro->Interval = 100;//1000::Mil es un segunto
			cronometro->Tick += gcnew System::EventHandler(this, &frmCarrera::timer2_Tick); 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmCarrera()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Carrera* carrera;
	private: System::Windows::Forms::Label^ lblCronometroTitulo;
	//private: System::Windows::Forms::Label^ lblTiempo;

	private: System::Windows::Forms::Timer^ timer2;

		   Graphics^ g;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblCronometroTitulo = (gcnew System::Windows::Forms::Label());
			this->lblTiempo = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &frmCarrera::timer1_Tick);
			// 
			// lblCronometroTitulo
			// 
			this->lblCronometroTitulo->AutoSize = true;
			this->lblCronometroTitulo->Location = System::Drawing::Point(13, 13);
			this->lblCronometroTitulo->Name = L"lblCronometroTitulo";
			this->lblCronometroTitulo->Size = System::Drawing::Size(36, 13);
			this->lblCronometroTitulo->TabIndex = 0;
			this->lblCronometroTitulo->Text = L"Timer:";
			// 
			// lblTiempo
			// 
			this->lblTiempo->AutoSize = true;
			this->lblTiempo->Location = System::Drawing::Point(56, 13);
			this->lblTiempo->Name = L"lblTiempo";
			this->lblTiempo->Size = System::Drawing::Size(21, 13);
			this->lblTiempo->TabIndex = 1;
			this->lblTiempo->Text = L"##";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &frmCarrera::timer2_Tick);
			// 
			// frmCarrera
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 601);
			this->Controls->Add(this->lblTiempo);
			this->Controls->Add(this->lblCronometroTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmCarrera";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UPC-TA1-Caritas - Carrera";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		carrera->mover();
		carrera->mostrar(g);
		if (carrera->getRound() == 2)
		{
			this->timer1->Enabled = false;
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		counter++;
		this->lblTiempo->Text = counter + " ";
		if (carrera->getRound() == 2)
		{
			this->timer2->Enabled = false;
			cronometro->Stop();
		}
	}
};
}
