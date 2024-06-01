#pragma once

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
	public:
		frmCaritas(void)
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
		~frmCaritas()
		{
			if (components)
			{
				delete components;
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
			// 
			// btnCara2
			// 
			this->btnCara2->Location = System::Drawing::Point(284, 52);
			this->btnCara2->Name = L"btnCara2";
			this->btnCara2->Size = System::Drawing::Size(130, 60);
			this->btnCara2->TabIndex = 1;
			this->btnCara2->Text = L"Cara 2";
			this->btnCara2->UseVisualStyleBackColor = true;
			// 
			// btnCara3
			// 
			this->btnCara3->Location = System::Drawing::Point(420, 52);
			this->btnCara3->Name = L"btnCara3";
			this->btnCara3->Size = System::Drawing::Size(130, 60);
			this->btnCara3->TabIndex = 1;
			this->btnCara3->Text = L"Cara 3";
			this->btnCara3->UseVisualStyleBackColor = true;
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
			this->Name = L"frmCaritas";
			this->Text = L"frmCaritas";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
