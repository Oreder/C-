#pragma once
#include "TProduct.h"
#include <vector>
#include <algorithm>

namespace praktika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for graphicForm
	/// </summary>
	public ref class graphicForm : public System::Windows::Forms::Form
	{
	public:
		graphicForm(void)
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
		~graphicForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::CustomLabel^  customLabel1 = (gcnew System::Windows::Forms::DataVisualization::Charting::CustomLabel());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart))->BeginInit();
			this->SuspendLayout();
			// 
			// chart
			// 
			customLabel1->Text = L"amount";
			chartArea1->AxisY2->CustomLabels->Add(customLabel1);
			chartArea1->AxisY2->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			this->chart->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(0, 0);
			this->chart->Name = L"chart";
			this->chart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cost";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"Amount";
			series2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Chocolate;
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Size = System::Drawing::Size(471, 320);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			title1->Name = L"Title1";
			title1->Text = L"Product costs and amount per years";
			this->chart->Titles->Add(title1);
			// 
			// graphicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 320);
			this->Controls->Add(this->chart);
			this->Name = L"graphicForm";
			this->Text = L"graphicForm";
			this->Load += gcnew System::EventHandler(this, &graphicForm::graphicForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void graphicForm_Load(System::Object^  sender, System::EventArgs^  e) {
				/* Read data to struct */
				FILE *fs = fopen("data.csv", "r");       
	
				if (fs) 
				{	
					std::vector<int> _year;
					
					rewind(fs);
					char word[128];
					int cost, amount, year, n = 0;
					TProduct p[100];

					while(!feof(fs))
					{
						fscanf(fs, "%s%d%d%d", word, &cost, &amount, &year);
						
						// fill out data
						memcpy(p[n].Product, word, 128);
						p[n].cost = cost;
						p[n].amount = amount;
						p[n].year = year;
						n++;

						// push back vector
						if (_year.empty())
						{
							_year.push_back(year);
						}
						else
						{
							if (std::find(_year.begin(), _year.end(), year) == _year.end())
								_year.push_back(year);
						}
					}

					n--;
					fclose(fs);

					// sort ASC our vector
					std::sort(_year.begin(), _year.end());

					// fill out chart
					for (std::vector<int>::iterator it = _year.begin(); it != _year.end(); it++)
					{
						cost = 0;
						amount = 0;
						for (int j = 0; j < n; j++)
						{
							if (p[j].year == *it)
							{
								cost += p[j].cost;
								amount += p[j].amount;
							}
						}

						// fill the chart
						this->chart->Series["Cost"]->Points->AddXY((*it).ToString(), cost);
						this->chart->Series["Amount"]->Points->AddXY((*it).ToString(), amount);
					}
				}
				else
					MessageBox::Show("No data!", "Warning");
			 }
	};
}
