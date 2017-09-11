#pragma once
#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;
#include <string>

namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for showForm
	/// </summary>
	public ref class showForm : public System::Windows::Forms::Form
	{
	public:
		showForm(void)
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
		~showForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  data;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Product;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cost;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Amount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Year;

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
			this->data = (gcnew System::Windows::Forms::DataGridView());
			this->Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Amount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data))->BeginInit();
			this->SuspendLayout();
			// 
			// data
			// 
			this->data->AllowUserToAddRows = false;
			this->data->AllowUserToDeleteRows = false;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Product, this->Cost, 
				this->Amount, this->Year});
			this->data->Dock = System::Windows::Forms::DockStyle::Fill;
			this->data->Location = System::Drawing::Point(0, 0);
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->Size = System::Drawing::Size(479, 261);
			this->data->TabIndex = 0;
			// 
			// Product
			// 
			this->Product->HeaderText = L"Product";
			this->Product->Name = L"Product";
			this->Product->ReadOnly = true;
			// 
			// Cost
			// 
			this->Cost->HeaderText = L"Cost";
			this->Cost->Name = L"Cost";
			this->Cost->ReadOnly = true;
			// 
			// Amount
			// 
			this->Amount->HeaderText = L"Amount";
			this->Amount->Name = L"Amount";
			this->Amount->ReadOnly = true;
			// 
			// Year
			// 
			this->Year->HeaderText = L"Year";
			this->Year->Name = L"Year";
			this->Year->ReadOnly = true;
			// 
			// showForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 261);
			this->Controls->Add(this->data);
			this->Name = L"showForm";
			this->Text = L"showForm";
			this->Load += gcnew System::EventHandler(this, &showForm::showForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void showForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->data->RowCount = 50;
				 ifstream fs("data.csv");       
				 
				 if (fs.is_open()) 
				 {
					char word[20];
					int i = 0, j = 0;

					fs>>word;
					while(fs.good())
					{
						String^ tmp = gcnew String(word);
                        this->data->Rows[i]->Cells[j]->Value = (Object^)tmp;
						
						j++;
						if (j % 4 == 0)
						{
							j = 0;
							i++;
						}

						fs>>word;
                    }

					fs.close();
					this->data->RowCount = i;
				 }
				 else
					 MessageBox::Show("No data", "Error");
			 }
};
}
