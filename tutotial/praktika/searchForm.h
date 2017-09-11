#pragma once
#include <stdio.h>
#include <string.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "TProduct.h"

namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for searchForm
	/// </summary>
	public ref class searchForm : public System::Windows::Forms::Form
	{
	public:
		searchForm(void)
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
		~searchForm()
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
	private: System::Windows::Forms::Panel^  panel1;









	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::TextBox^  editBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  choiceBox;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->editBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->choiceBox = (gcnew System::Windows::Forms::ComboBox());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// data
			// 
			this->data->AllowUserToAddRows = false;
			this->data->AllowUserToDeleteRows = false;
			this->data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Product, this->Cost, 
				this->Amount, this->Year});
			this->data->Dock = System::Windows::Forms::DockStyle::Top;
			this->data->Location = System::Drawing::Point(0, 0);
			this->data->Name = L"data";
			this->data->ReadOnly = true;
			this->data->Size = System::Drawing::Size(476, 226);
			this->data->TabIndex = 1;
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
			// panel1
			// 
			this->panel1->Controls->Add(this->editBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->choiceBox);
			this->panel1->Controls->Add(this->searchBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 231);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(476, 50);
			this->panel1->TabIndex = 2;
			// 
			// editBox
			// 
			this->editBox->Location = System::Drawing::Point(188, 16);
			this->editBox->Name = L"editBox";
			this->editBox->Size = System::Drawing::Size(138, 20);
			this->editBox->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Type";
			// 
			// choiceBox
			// 
			this->choiceBox->FormattingEnabled = true;
			this->choiceBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Product", L"Cost (higher)", L"Amount (lower)", 
				L"Year"});
			this->choiceBox->Location = System::Drawing::Point(49, 16);
			this->choiceBox->Name = L"choiceBox";
			this->choiceBox->Size = System::Drawing::Size(121, 21);
			this->choiceBox->TabIndex = 1;
			this->choiceBox->SelectedIndex = 0;
			this->choiceBox->SelectedIndexChanged += gcnew System::EventHandler(this, &searchForm::choiceBox_SelectedIndexChanged);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(344, 9);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(120, 33);
			this->searchBtn->TabIndex = 0;
			this->searchBtn->Text = L"Search";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &searchForm::searchBtn_Click);
			// 
			// searchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(476, 281);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->data);
			this->Name = L"searchForm";
			this->Text = L"searchForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->editBox->Text == "")
				MessageBox::Show("Fill the searching box first!", "Error");
			else
			{
				FILE *fs = fopen("data.csv", "r");       
				if (fs) 
				{
					rewind(fs);
					char word[128];
					int cost, amount, year, n = 0;
					TProduct p[100];

					while(!feof(fs))
					{
						fscanf(fs, "%s%d%d%d", word, &cost, &amount, &year);
						//strncpy(p[n].Product, word, 128);
						memcpy(p[n].Product, word, 128);
						p[n].cost = cost;
						p[n].amount = amount;
						p[n].year = year;
						n++;
					}

					n--;
					fclose(fs);

					this->data->RowCount = n;
					int k = 0;	// total results found
					std::string *str;
					// convert String^ into std::string
					std::string searchString = marshal_as<std::string>(this->editBox->Text); 
				
					for (int i = 0; i < n; i++)
					{
						switch (this->choiceBox->SelectedIndex)
						{
						case 0: // Containing substring
							str = new std::string(p[i].Product);	// convert array chars into std::string
							if (str->find(searchString) != std::string::npos)
							{
								String^ tmp = gcnew String(p[i].Product);
								this->data->Rows[k]->Cells[0]->Value = (Object^)tmp;
								this->data->Rows[k]->Cells[1]->Value = p[i].cost;
								this->data->Rows[k]->Cells[2]->Value = p[i].amount;
								this->data->Rows[k]->Cells[3]->Value = p[i].year;
								k++;
							}
							delete str;
							break;
						case 1: // higher COST
							if (p[i].cost >= std::stoi(searchString))
							{
								String^ tmp = gcnew String(p[i].Product);
								this->data->Rows[k]->Cells[0]->Value = (Object^)tmp;
								this->data->Rows[k]->Cells[1]->Value = p[i].cost;
								this->data->Rows[k]->Cells[2]->Value = p[i].amount;
								this->data->Rows[k]->Cells[3]->Value = p[i].year;
								k++;
							}
							break;
						case 2: // lower AMOUNT
							if (p[i].amount <= std::stoi(searchString))
							{
								String^ tmp = gcnew String(p[i].Product);
								this->data->Rows[k]->Cells[0]->Value = (Object^)tmp;
								this->data->Rows[k]->Cells[1]->Value = p[i].cost;
								this->data->Rows[k]->Cells[2]->Value = p[i].amount;
								this->data->Rows[k]->Cells[3]->Value = p[i].year;
								k++;
							}
							break;
						case 3: // same YEAR
						default:
							if (p[i].year == std::stoi(searchString))
							{
								String^ tmp = gcnew String(p[i].Product);
								this->data->Rows[k]->Cells[0]->Value = (Object^)tmp;
								this->data->Rows[k]->Cells[1]->Value = p[i].cost;
								this->data->Rows[k]->Cells[2]->Value = p[i].amount;
								this->data->Rows[k]->Cells[3]->Value = p[i].year;
								k++;
							}
							break;
						}
					}

					this->data->RowCount = k;
					if (k == 0)
						MessageBox::Show("No products were found!", "Result");
				}
				else
					MessageBox::Show("No data", "Error");
			}
		 }
private: System::Void choiceBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->editBox->Clear();
		 }
};
}
