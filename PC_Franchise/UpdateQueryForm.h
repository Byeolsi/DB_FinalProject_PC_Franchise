#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <msclr\marshal_cppstd.h>
#include "ProcessQuery.h"

using namespace std;

namespace PCFranchise {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// UpdateQueryForm에 대한 요약입니다.
	/// </summary>
	public ref class UpdateQueryForm : public System::Windows::Forms::Form
	{
	public:
		UpdateQueryForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~UpdateQueryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Update_dataGridView;
	protected:
	private: System::Windows::Forms::TabPage^ Scenario1_tabPage;
	private: System::Windows::Forms::DataGridView^ Scenario1_dataGridView;
	private: System::Windows::Forms::TabPage^ Scenario2_tabPage;
	private: System::Windows::Forms::DataGridView^ Scenario2_dataGridView;
	private: System::Windows::Forms::TabPage^ Scenario3_tabPage;
	private: System::Windows::Forms::DataGridView^ Scenario3_dataGridView;
	private: System::Windows::Forms::TabPage^ Scenario4_tabPage;
	private: System::Windows::Forms::DataGridView^ Scenario4_dataGridView;
	private: System::Windows::Forms::Label^ Scenario1_02_label;
	private: System::Windows::Forms::Label^ Scenario1_01_label;
	private: System::Windows::Forms::Label^ Scenario2_01_label;
	private: System::Windows::Forms::Label^ Scenario3_01_label;
	private: System::Windows::Forms::Button^ Scenario3_button;
	private: System::Windows::Forms::TextBox^ SALES_textBox;
	private: System::Windows::Forms::Label^ Scenario3_04_label;
	private: System::Windows::Forms::Label^ Scenarion3_03_label;
	private: System::Windows::Forms::Label^ Scenario3_02_label;
	private: System::Windows::Forms::TextBox^ PRICE_textBox;

	private: System::Windows::Forms::Button^ Scenario4_button;
	private: System::Windows::Forms::Label^ Scenario4_03_label;

	private: System::Windows::Forms::Label^ Scenario4_01_label;
	private: System::Windows::Forms::Label^ Scenario4_02_label;
	private: System::Windows::Forms::Label^ Scenario4_04_label;
	private: System::Windows::Forms::ComboBox^ UpOrDown_comboBox;



	protected:



	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Update_dataGridView = (gcnew System::Windows::Forms::TabControl());
			this->Scenario1_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario1_02_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario2_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario2_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario2_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario3_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario3_button = (gcnew System::Windows::Forms::Button());
			this->SALES_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario3_04_label = (gcnew System::Windows::Forms::Label());
			this->Scenarion3_03_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_02_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario4_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario4_04_label = (gcnew System::Windows::Forms::Label());
			this->UpOrDown_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Scenario4_02_label = (gcnew System::Windows::Forms::Label());
			this->PRICE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario4_button = (gcnew System::Windows::Forms::Button());
			this->Scenario4_03_label = (gcnew System::Windows::Forms::Label());
			this->Scenario4_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario4_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Update_dataGridView->SuspendLayout();
			this->Scenario1_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario1_dataGridView))->BeginInit();
			this->Scenario2_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario2_dataGridView))->BeginInit();
			this->Scenario3_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario3_dataGridView))->BeginInit();
			this->Scenario4_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario4_dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// Update_dataGridView
			// 
			this->Update_dataGridView->Controls->Add(this->Scenario1_tabPage);
			this->Update_dataGridView->Controls->Add(this->Scenario2_tabPage);
			this->Update_dataGridView->Controls->Add(this->Scenario3_tabPage);
			this->Update_dataGridView->Controls->Add(this->Scenario4_tabPage);
			this->Update_dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Update_dataGridView->Location = System::Drawing::Point(0, 0);
			this->Update_dataGridView->Name = L"Update_dataGridView";
			this->Update_dataGridView->SelectedIndex = 0;
			this->Update_dataGridView->Size = System::Drawing::Size(624, 441);
			this->Update_dataGridView->TabIndex = 0;
			// 
			// Scenario1_tabPage
			// 
			this->Scenario1_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario1_tabPage->Controls->Add(this->Scenario1_02_label);
			this->Scenario1_tabPage->Controls->Add(this->Scenario1_01_label);
			this->Scenario1_tabPage->Controls->Add(this->Scenario1_dataGridView);
			this->Scenario1_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario1_tabPage->Name = L"Scenario1_tabPage";
			this->Scenario1_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario1_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario1_tabPage->TabIndex = 0;
			this->Scenario1_tabPage->Text = L"Scenario 1";
			// 
			// Scenario1_02_label
			// 
			this->Scenario1_02_label->AutoSize = true;
			this->Scenario1_02_label->Location = System::Drawing::Point(30, 50);
			this->Scenario1_02_label->Name = L"Scenario1_02_label";
			this->Scenario1_02_label->Size = System::Drawing::Size(165, 12);
			this->Scenario1_02_label->TabIndex = 2;
			this->Scenario1_02_label->Text = L"부품의 부품 가격을 수정해라.";
			// 
			// Scenario1_01_label
			// 
			this->Scenario1_01_label->AutoSize = true;
			this->Scenario1_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario1_01_label->Name = L"Scenario1_01_label";
			this->Scenario1_01_label->Size = System::Drawing::Size(273, 12);
			this->Scenario1_01_label->TabIndex = 1;
			this->Scenario1_01_label->Text = L"부품의 시세가 변동이 되어 이를 반영하고자 한다.";
			// 
			// Scenario1_dataGridView
			// 
			this->Scenario1_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario1_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario1_dataGridView->Name = L"Scenario1_dataGridView";
			this->Scenario1_dataGridView->RowTemplate->Height = 23;
			this->Scenario1_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario1_dataGridView->TabIndex = 0;
			this->Scenario1_dataGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateQueryForm::Scenario1_dataGridView_CellClick);
			this->Scenario1_dataGridView->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateQueryForm::Scenario1_dataGridView_CellValueChanged);
			// 
			// Scenario2_tabPage
			// 
			this->Scenario2_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_01_label);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_dataGridView);
			this->Scenario2_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario2_tabPage->Name = L"Scenario2_tabPage";
			this->Scenario2_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario2_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario2_tabPage->TabIndex = 1;
			this->Scenario2_tabPage->Text = L"Scenario 2";
			// 
			// Scenario2_01_label
			// 
			this->Scenario2_01_label->AutoSize = true;
			this->Scenario2_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario2_01_label->Name = L"Scenario2_01_label";
			this->Scenario2_01_label->Size = System::Drawing::Size(177, 12);
			this->Scenario2_01_label->TabIndex = 2;
			this->Scenario2_01_label->Text = L"회원의 잘못된 정보를 수정하라.";
			// 
			// Scenario2_dataGridView
			// 
			this->Scenario2_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario2_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario2_dataGridView->Name = L"Scenario2_dataGridView";
			this->Scenario2_dataGridView->RowTemplate->Height = 23;
			this->Scenario2_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario2_dataGridView->TabIndex = 1;
			this->Scenario2_dataGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateQueryForm::Scenario2_dataGridView_CellClick);
			this->Scenario2_dataGridView->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateQueryForm::Scenario2_dataGridView_CellValueChanged);
			// 
			// Scenario3_tabPage
			// 
			this->Scenario3_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_button);
			this->Scenario3_tabPage->Controls->Add(this->SALES_textBox);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_04_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenarion3_03_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_02_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_01_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_dataGridView);
			this->Scenario3_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario3_tabPage->Name = L"Scenario3_tabPage";
			this->Scenario3_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario3_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario3_tabPage->TabIndex = 2;
			this->Scenario3_tabPage->Text = L"Scenario 3";
			// 
			// Scenario3_button
			// 
			this->Scenario3_button->Location = System::Drawing::Point(533, 78);
			this->Scenario3_button->Name = L"Scenario3_button";
			this->Scenario3_button->Size = System::Drawing::Size(75, 23);
			this->Scenario3_button->TabIndex = 7;
			this->Scenario3_button->Text = L"Query";
			this->Scenario3_button->UseVisualStyleBackColor = true;
			this->Scenario3_button->Click += gcnew System::EventHandler(this, &UpdateQueryForm::Scenario3_button_Click);
			// 
			// SALES_textBox
			// 
			this->SALES_textBox->Location = System::Drawing::Point(77, 27);
			this->SALES_textBox->Name = L"SALES_textBox";
			this->SALES_textBox->Size = System::Drawing::Size(100, 21);
			this->SALES_textBox->TabIndex = 6;
			// 
			// Scenario3_04_label
			// 
			this->Scenario3_04_label->AutoSize = true;
			this->Scenario3_04_label->Location = System::Drawing::Point(30, 70);
			this->Scenario3_04_label->Name = L"Scenario3_04_label";
			this->Scenario3_04_label->Size = System::Drawing::Size(278, 12);
			this->Scenario3_04_label->TabIndex = 5;
			this->Scenario3_04_label->Text = L"매출에 따라 영업 점수를 수정하라. (ex. 0.1 ~ 5.0)";
			// 
			// Scenarion3_03_label
			// 
			this->Scenarion3_03_label->AutoSize = true;
			this->Scenarion3_03_label->Location = System::Drawing::Point(30, 50);
			this->Scenarion3_03_label->Name = L"Scenarion3_03_label";
			this->Scenarion3_03_label->Size = System::Drawing::Size(365, 12);
			this->Scenarion3_03_label->TabIndex = 4;
			this->Scenarion3_03_label->Text = L"그 가맹점의 가맹점 번호와 가맹점 점주, 매출, 영업 점수를 보이고,";
			// 
			// Scenario3_02_label
			// 
			this->Scenario3_02_label->AutoSize = true;
			this->Scenario3_02_label->Location = System::Drawing::Point(183, 30);
			this->Scenario3_02_label->Name = L"Scenario3_02_label";
			this->Scenario3_02_label->Size = System::Drawing::Size(121, 12);
			this->Scenario3_02_label->TabIndex = 3;
			this->Scenario3_02_label->Text = L"이상인 가맹점 중에서";
			// 
			// Scenario3_01_label
			// 
			this->Scenario3_01_label->AutoSize = true;
			this->Scenario3_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario3_01_label->Name = L"Scenario3_01_label";
			this->Scenario3_01_label->Size = System::Drawing::Size(41, 12);
			this->Scenario3_01_label->TabIndex = 2;
			this->Scenario3_01_label->Text = L"매출이";
			// 
			// Scenario3_dataGridView
			// 
			this->Scenario3_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario3_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario3_dataGridView->Name = L"Scenario3_dataGridView";
			this->Scenario3_dataGridView->RowTemplate->Height = 23;
			this->Scenario3_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario3_dataGridView->TabIndex = 1;
			this->Scenario3_dataGridView->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateQueryForm::Scenario3_dataGridView_CellClick);
			this->Scenario3_dataGridView->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateQueryForm::Scenario3_dataGridView_CellValueChanged);
			// 
			// Scenario4_tabPage
			// 
			this->Scenario4_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_04_label);
			this->Scenario4_tabPage->Controls->Add(this->UpOrDown_comboBox);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_02_label);
			this->Scenario4_tabPage->Controls->Add(this->PRICE_textBox);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_button);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_03_label);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_01_label);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_dataGridView);
			this->Scenario4_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario4_tabPage->Name = L"Scenario4_tabPage";
			this->Scenario4_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario4_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario4_tabPage->TabIndex = 3;
			this->Scenario4_tabPage->Text = L"Scenario 4";
			// 
			// Scenario4_04_label
			// 
			this->Scenario4_04_label->AutoSize = true;
			this->Scenario4_04_label->Location = System::Drawing::Point(238, 70);
			this->Scenario4_04_label->Name = L"Scenario4_04_label";
			this->Scenario4_04_label->Size = System::Drawing::Size(103, 12);
			this->Scenario4_04_label->TabIndex = 8;
			this->Scenario4_04_label->Text = L"인상 / 인하 가격 :";
			// 
			// UpOrDown_comboBox
			// 
			this->UpOrDown_comboBox->FormattingEnabled = true;
			this->UpOrDown_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"인상", L"인하" });
			this->UpOrDown_comboBox->Location = System::Drawing::Point(111, 67);
			this->UpOrDown_comboBox->Name = L"UpOrDown_comboBox";
			this->UpOrDown_comboBox->Size = System::Drawing::Size(121, 20);
			this->UpOrDown_comboBox->TabIndex = 7;
			this->UpOrDown_comboBox->Text = L"인상";
			// 
			// Scenario4_02_label
			// 
			this->Scenario4_02_label->AutoSize = true;
			this->Scenario4_02_label->Location = System::Drawing::Point(30, 50);
			this->Scenario4_02_label->Name = L"Scenario4_02_label";
			this->Scenario4_02_label->Size = System::Drawing::Size(361, 12);
			this->Scenario4_02_label->TabIndex = 6;
			this->Scenario4_02_label->Text = L"또는 물가가 안정되어 전체적으로 메뉴의 가격을 인하하고자 한다.";
			// 
			// PRICE_textBox
			// 
			this->PRICE_textBox->Location = System::Drawing::Point(347, 67);
			this->PRICE_textBox->Name = L"PRICE_textBox";
			this->PRICE_textBox->Size = System::Drawing::Size(100, 21);
			this->PRICE_textBox->TabIndex = 5;
			// 
			// Scenario4_button
			// 
			this->Scenario4_button->Location = System::Drawing::Point(533, 78);
			this->Scenario4_button->Name = L"Scenario4_button";
			this->Scenario4_button->Size = System::Drawing::Size(75, 23);
			this->Scenario4_button->TabIndex = 4;
			this->Scenario4_button->Text = L"Query";
			this->Scenario4_button->UseVisualStyleBackColor = true;
			this->Scenario4_button->Click += gcnew System::EventHandler(this, &UpdateQueryForm::Scenario4_button_Click);
			// 
			// Scenario4_03_label
			// 
			this->Scenario4_03_label->AutoSize = true;
			this->Scenario4_03_label->Location = System::Drawing::Point(30, 70);
			this->Scenario4_03_label->Name = L"Scenario4_03_label";
			this->Scenario4_03_label->Size = System::Drawing::Size(75, 12);
			this->Scenario4_03_label->TabIndex = 3;
			this->Scenario4_03_label->Text = L"인상 / 인하 :";
			// 
			// Scenario4_01_label
			// 
			this->Scenario4_01_label->AutoSize = true;
			this->Scenario4_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario4_01_label->Name = L"Scenario4_01_label";
			this->Scenario4_01_label->Size = System::Drawing::Size(333, 12);
			this->Scenario4_01_label->TabIndex = 2;
			this->Scenario4_01_label->Text = L"물가가 인상되어 전체적으로 메뉴의 가격을 인상하고자 한다.";
			// 
			// Scenario4_dataGridView
			// 
			this->Scenario4_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario4_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario4_dataGridView->Name = L"Scenario4_dataGridView";
			this->Scenario4_dataGridView->RowTemplate->Height = 23;
			this->Scenario4_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario4_dataGridView->TabIndex = 1;
			// 
			// UpdateQueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->Update_dataGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"UpdateQueryForm";
			this->Text = L"Update Query";
			this->Activated += gcnew System::EventHandler(this, &UpdateQueryForm::UpdateQueryForm_Activated);
			this->Update_dataGridView->ResumeLayout(false);
			this->Scenario1_tabPage->ResumeLayout(false);
			this->Scenario1_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario1_dataGridView))->EndInit();
			this->Scenario2_tabPage->ResumeLayout(false);
			this->Scenario2_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario2_dataGridView))->EndInit();
			this->Scenario3_tabPage->ResumeLayout(false);
			this->Scenario3_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario3_dataGridView))->EndInit();
			this->Scenario4_tabPage->ResumeLayout(false);
			this->Scenario4_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario4_dataGridView))->EndInit();
			this->ResumeLayout(false);

		}
		private:
			int currentColumn, currentRow;
			bool currentAdd = false;
#pragma endregion
		private: System::Void UpdateQueryForm_Activated(System::Object^ sender, System::EventArgs^ e)
		{
			currentAdd = true;

			string strQuery;
			ProcessQuery PQ;

			strQuery = "SELECT * FROM PART";
			PQ.CustomQuery(this->Scenario1_dataGridView, strQuery);

			this->Scenario1_dataGridView->Columns[0]->ReadOnly = true;
			this->Scenario1_dataGridView->Columns[1]->ReadOnly = true;
			this->Scenario1_dataGridView->Columns[2]->ReadOnly = false;
			this->Scenario1_dataGridView->Columns[3]->ReadOnly = true;
			this->Scenario1_dataGridView->Columns[4]->ReadOnly = true;
			this->Scenario1_dataGridView->Columns[5]->ReadOnly = true;

			strQuery = "SELECT * FROM MEMBER";
			PQ.CustomQuery(this->Scenario2_dataGridView, strQuery);

			this->Scenario2_dataGridView->Columns[0]->ReadOnly = true;
			this->Scenario2_dataGridView->Columns[1]->ReadOnly = false;
			this->Scenario2_dataGridView->Columns[2]->ReadOnly = false;
			this->Scenario2_dataGridView->Columns[3]->ReadOnly = false;

			strQuery = "SELECT * FROM FOOD";
			PQ.CustomQuery(this->Scenario4_dataGridView, strQuery);

			currentAdd = false;
		}
		private: System::Void Scenario1_dataGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			int row, column;

			row = this->Scenario1_dataGridView->CurrentCell->RowIndex;
			column = this->Scenario1_dataGridView->CurrentCell->ColumnIndex;
			printf("%d %d\n", row, column);
				
			this->currentColumn = column;
			this->currentRow = row;
		}
		private: System::Void Scenario1_dataGridView_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (!this->currentAdd)
			{
				currentAdd = true;

				string strQuery, partNo, newPrice;
				String^ Tmp;
				ProcessQuery PQ;

				Tmp = (String^)(this->Scenario1_dataGridView->Rows[currentRow]->Cells["PARTNO"]->Value);
				partNo = msclr::interop::marshal_as<string>(Tmp);
				Tmp = (String^)(this->Scenario1_dataGridView->Rows[currentRow]->Cells[currentColumn]->Value);
				newPrice = msclr::interop::marshal_as<string>(Tmp);

				strQuery = "UPDATE PART SET PRICE = " + newPrice + " WHERE PARTNO = " + partNo;
				PQ.UpdateQuery(strQuery);

				currentAdd = false;
			}
		}
		private: System::Void Scenario2_dataGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			int row, column;

			row = this->Scenario2_dataGridView->CurrentCell->RowIndex;
			column = this->Scenario2_dataGridView->CurrentCell->ColumnIndex;
			printf("%d %d\n", row, column);

			this->currentColumn = column;
			this->currentRow = row;
		}
		private: System::Void Scenario2_dataGridView_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (!this->currentAdd)
			{
				currentAdd = true;

				string strQuery, memNo, attName, newValue;
				String^ Tmp;
				ProcessQuery PQ;

				Tmp = (String^)(this->Scenario2_dataGridView->Rows[currentRow]->Cells["MEMNO"]->Value);
				memNo = msclr::interop::marshal_as<string>(Tmp);
				Tmp = (String^)(this->Scenario2_dataGridView->Columns[currentColumn]->Name);
				attName = msclr::interop::marshal_as<string>(Tmp);
				Tmp = (String^)(this->Scenario2_dataGridView->Rows[currentRow]->Cells[currentColumn]->Value);
				newValue = msclr::interop::marshal_as<string>(Tmp);

				strQuery = "UPDATE MEMBER SET " + attName + " = '" + newValue + "' WHERE MEMNO = " + memNo;
				PQ.UpdateQuery(strQuery);

				currentAdd = false;
			}
		}
		private: System::Void Scenario3_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!this->currentAdd)
			{
				currentAdd = true;

				string strQuery, sales;
				ProcessQuery PQ;

				sales = msclr::interop::marshal_as<string>(this->SALES_textBox->Text);
				strQuery = "SELECT S.STOKNO, FRACNO, SALES, SCORE FROM FRANCHISE AS F, STOREKEEPER AS S WHERE F.STOKNO = S.STOKNO AND SALES >= " + sales;
				PQ.CustomQuery(this->Scenario3_dataGridView, strQuery);

				this->Scenario3_dataGridView->Columns[0]->ReadOnly = true;
				this->Scenario3_dataGridView->Columns[1]->ReadOnly = true;
				this->Scenario3_dataGridView->Columns[2]->ReadOnly = true;
				this->Scenario3_dataGridView->Columns[3]->ReadOnly = false;

				currentAdd = false;
			}
		}
		private: System::Void Scenario3_dataGridView_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			int row, column;

			row = this->Scenario3_dataGridView->CurrentCell->RowIndex;
			column = this->Scenario3_dataGridView->CurrentCell->ColumnIndex;
			printf("%d %d\n", row, column);

			this->currentColumn = column;
			this->currentRow = row;
		}
		private: System::Void Scenario3_dataGridView_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (!this->currentAdd)
			{
				currentAdd = true;

				string strQuery, stokNo, newScore;
				String^ Tmp;
				ProcessQuery PQ;

				Tmp = (String^)(this->Scenario3_dataGridView->Rows[currentRow]->Cells["STOKNO"]->Value);
				stokNo = msclr::interop::marshal_as<string>(Tmp);
				Tmp = (String^)(this->Scenario3_dataGridView->Rows[currentRow]->Cells[currentColumn]->Value);
				newScore = msclr::interop::marshal_as<string>(Tmp);

				strQuery = "UPDATE STOREKEEPER SET SCORE = " + newScore + " WHERE STOKNO = " + stokNo;
				PQ.UpdateQuery(strQuery);

				currentAdd = false;
			}
		}
		private: System::Void Scenario4_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!this->currentAdd)
			{
				currentAdd = true;

				this->Scenario4_dataGridView->Rows->Clear();
				this->Scenario4_dataGridView->Columns->Clear();
				this->Scenario4_dataGridView->Refresh();

				string strQuery, upOrDown, price;
				ProcessQuery PQ;

				upOrDown = msclr::interop::marshal_as<string>(this->UpOrDown_comboBox->Text);
				price = msclr::interop::marshal_as<string>(this->PRICE_textBox->Text);
				if (upOrDown == "인상")
				{
					strQuery = "UPDATE FOOD SET PRICE = PRICE + " + price;
				}
				else if (upOrDown == "인하")
				{
					strQuery = "UPDATE FOOD SET PRICE = PRICE - " + price;
				}
				PQ.UpdateQuery(strQuery);

				strQuery = "SELECT * FROM FOOD";
				PQ.CustomQuery(this->Scenario4_dataGridView, strQuery);

				currentAdd = false;
			}
		}
	};
}