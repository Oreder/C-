#pragma once
#include <stdio.h>


namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addForm
	/// </summary>
	public ref class addForm : public System::Windows::Forms::Form
	{
	public:
		addForm(void)
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
		~addForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  productBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  costBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  amountBox;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  yearBox;
	private: System::Windows::Forms::Button^  Addbtn;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->productBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->costBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->amountBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->yearBox = (gcnew System::Windows::Forms::TextBox());
			this->Addbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Product";
			// 
			// productBox
			// 
			this->productBox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->productBox->Location = System::Drawing::Point(71, 12);
			this->productBox->Name = L"productBox";
			this->productBox->Size = System::Drawing::Size(198, 25);
			this->productBox->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cost";
			// 
			// costBox
			// 
			this->costBox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->costBox->Location = System::Drawing::Point(71, 56);
			this->costBox->Name = L"costBox";
			this->costBox->Size = System::Drawing::Size(198, 25);
			this->costBox->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Amount";
			// 
			// amountBox
			// 
			this->amountBox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->amountBox->Location = System::Drawing::Point(71, 108);
			this->amountBox->Name = L"amountBox";
			this->amountBox->Size = System::Drawing::Size(198, 25);
			this->amountBox->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Year";
			// 
			// yearBox
			// 
			this->yearBox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->yearBox->Location = System::Drawing::Point(71, 158);
			this->yearBox->Name = L"yearBox";
			this->yearBox->Size = System::Drawing::Size(198, 25);
			this->yearBox->TabIndex = 7;
			// 
			// Addbtn
			// 
			this->Addbtn->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Addbtn->Location = System::Drawing::Point(15, 206);
			this->Addbtn->Name = L"Addbtn";
			this->Addbtn->Size = System::Drawing::Size(254, 45);
			this->Addbtn->TabIndex = 8;
			this->Addbtn->Text = L"Add";
			this->Addbtn->UseVisualStyleBackColor = true;
			this->Addbtn->Click += gcnew System::EventHandler(this, &addForm::Addbtn_Click);
			// 
			// addForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(281, 264);
			this->Controls->Add(this->Addbtn);
			this->Controls->Add(this->yearBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->amountBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->costBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->productBox);
			this->Controls->Add(this->label1);
			this->Name = L"addForm";
			this->Text = L"addForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Addbtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->productBox->Text != "" && this->costBox->Text != "" && 
					 this->amountBox->Text != "" && this->yearBox->Text != "")
				 {
					 FILE *f = fopen("data.csv", "a"); //appendfile
					 if (f)
					 {/*
						 rewind(f);
						 fseek(f, 0, SEEK_END);*/
						 fprintf(f, "%s\t%s\t%s\t%s\n", this->productBox->Text, this->costBox->Text,
													 this->amountBox->Text, this->yearBox->Text);
						 fclose(f);
						 MessageBox::Show("Product was added successfully", "Information");
					 }
				 }
				 else
				 {
					 System::Windows::Forms::MessageBox::Show("Some elements are not filled! Try again!", "Error");
				 }
			 }
};
}
