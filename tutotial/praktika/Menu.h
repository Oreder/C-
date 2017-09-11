#pragma once
#include "addForm.h" 
#include "showForm.h"
#include "searchForm.h"
#include "graphicForm.h"
#include <string.h>

namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addBtn;
	protected: 
	private: System::Windows::Forms::Button^  showBtn;
	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::Button^  graphicBtn;
	private: System::Windows::Forms::Button^  exitBtn;

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
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->showBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->graphicBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// addBtn
			// 
			this->addBtn->Location = System::Drawing::Point(25, 27);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(231, 33);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"Add";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &Form1::addBtn_Click);
			// 
			// showBtn
			// 
			this->showBtn->Location = System::Drawing::Point(25, 66);
			this->showBtn->Name = L"showBtn";
			this->showBtn->Size = System::Drawing::Size(231, 33);
			this->showBtn->TabIndex = 0;
			this->showBtn->Text = L"Show";
			this->showBtn->UseVisualStyleBackColor = true;
			this->showBtn->Click += gcnew System::EventHandler(this, &Form1::showBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(25, 105);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(231, 33);
			this->searchBtn->TabIndex = 0;
			this->searchBtn->Text = L"Search";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &Form1::searchBtn_Click);
			// 
			// graphicBtn
			// 
			this->graphicBtn->Location = System::Drawing::Point(25, 144);
			this->graphicBtn->Name = L"graphicBtn";
			this->graphicBtn->Size = System::Drawing::Size(231, 33);
			this->graphicBtn->TabIndex = 0;
			this->graphicBtn->Text = L"Graphic";
			this->graphicBtn->UseVisualStyleBackColor = true;
			this->graphicBtn->Click += gcnew System::EventHandler(this, &Form1::graphicBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(25, 183);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(231, 33);
			this->exitBtn->TabIndex = 0;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &Form1::exitBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->graphicBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->showBtn);
			this->Controls->Add(this->addBtn);
			this->Name = L"Form1";
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void addBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 addForm^ f = gcnew addForm();
				 f->Show();
			 }
	private: System::Void showBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 showForm^ f = gcnew showForm();
				 f->Show();
		 }
   private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			     searchForm^ f = gcnew searchForm();
				 f->Show();
		 }
private: System::Void graphicBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			     graphicForm^ f = gcnew graphicForm();
				 f->Show();
		 }
private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this -> Close();
		 }
};
}

