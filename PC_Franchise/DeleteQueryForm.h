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
	/// DeleteQueryForm에 대한 요약입니다.
	/// </summary>
	public ref class DeleteQueryForm : public System::Windows::Forms::Form
	{
	public:
		DeleteQueryForm(void)
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
		~DeleteQueryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Delete_tabControl;
	private: System::Windows::Forms::TabPage^ Scenario1_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario2_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario3_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario4_tabPage;
	private: System::Windows::Forms::DataGridView^ Scenario1_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario2_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario3_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario4_dataGridView;
	private: System::Windows::Forms::Button^ Scenario1_button;
	private: System::Windows::Forms::TextBox^ SALES_textBox;

	private: System::Windows::Forms::Label^ Scenario1_02_label;
	private: System::Windows::Forms::Label^ Scenario1_01_label;
	private: System::Windows::Forms::TextBox^ STOKNO_textBox;

	private: System::Windows::Forms::Button^ Scenario2_button;
	private: System::Windows::Forms::Label^ Scenario2_01_label;
	private: System::Windows::Forms::Button^ Scenario3_button;
	private: System::Windows::Forms::TextBox^ FOODNO_textBox;
	private: System::Windows::Forms::Label^ Scenario3_01_label;
	private: System::Windows::Forms::TextBox^ MEMNO_textBox;
	private: System::Windows::Forms::Button^ Scenario4_button;
	private: System::Windows::Forms::Label^ Scenario4_01_label;

	protected:





	protected:



	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Delete_tabControl = (gcnew System::Windows::Forms::TabControl());
			this->Scenario1_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario1_button = (gcnew System::Windows::Forms::Button());
			this->SALES_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario1_02_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario2_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->STOKNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario2_button = (gcnew System::Windows::Forms::Button());
			this->Scenario2_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario2_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario3_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario3_button = (gcnew System::Windows::Forms::Button());
			this->FOODNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario3_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario4_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->MEMNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario4_button = (gcnew System::Windows::Forms::Button());
			this->Scenario4_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario4_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Delete_tabControl->SuspendLayout();
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
			// Delete_tabControl
			// 
			this->Delete_tabControl->Controls->Add(this->Scenario1_tabPage);
			this->Delete_tabControl->Controls->Add(this->Scenario2_tabPage);
			this->Delete_tabControl->Controls->Add(this->Scenario3_tabPage);
			this->Delete_tabControl->Controls->Add(this->Scenario4_tabPage);
			this->Delete_tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Delete_tabControl->Location = System::Drawing::Point(0, 0);
			this->Delete_tabControl->Name = L"Delete_tabControl";
			this->Delete_tabControl->SelectedIndex = 0;
			this->Delete_tabControl->Size = System::Drawing::Size(624, 441);
			this->Delete_tabControl->TabIndex = 0;
			// 
			// Scenario1_tabPage
			// 
			this->Scenario1_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario1_tabPage->Controls->Add(this->Scenario1_button);
			this->Scenario1_tabPage->Controls->Add(this->SALES_textBox);
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
			// Scenario1_button
			// 
			this->Scenario1_button->Location = System::Drawing::Point(533, 78);
			this->Scenario1_button->Name = L"Scenario1_button";
			this->Scenario1_button->Size = System::Drawing::Size(75, 23);
			this->Scenario1_button->TabIndex = 4;
			this->Scenario1_button->Text = L"Query";
			this->Scenario1_button->UseVisualStyleBackColor = true;
			this->Scenario1_button->Click += gcnew System::EventHandler(this, &DeleteQueryForm::Scenario1_button_Click);
			// 
			// SALES_textBox
			// 
			this->SALES_textBox->Location = System::Drawing::Point(117, 27);
			this->SALES_textBox->Name = L"SALES_textBox";
			this->SALES_textBox->Size = System::Drawing::Size(100, 21);
			this->SALES_textBox->TabIndex = 3;
			// 
			// Scenario1_02_label
			// 
			this->Scenario1_02_label->AutoSize = true;
			this->Scenario1_02_label->Location = System::Drawing::Point(223, 30);
			this->Scenario1_02_label->Name = L"Scenario1_02_label";
			this->Scenario1_02_label->Size = System::Drawing::Size(161, 12);
			this->Scenario1_02_label->TabIndex = 2;
			this->Scenario1_02_label->Text = L"이하인 가맹점을 폐점시켜라.";
			// 
			// Scenario1_01_label
			// 
			this->Scenario1_01_label->AutoSize = true;
			this->Scenario1_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario1_01_label->Name = L"Scenario1_01_label";
			this->Scenario1_01_label->Size = System::Drawing::Size(81, 12);
			this->Scenario1_01_label->TabIndex = 1;
			this->Scenario1_01_label->Text = L"가맹점 매출이";
			// 
			// Scenario1_dataGridView
			// 
			this->Scenario1_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario1_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario1_dataGridView->Name = L"Scenario1_dataGridView";
			this->Scenario1_dataGridView->RowTemplate->Height = 23;
			this->Scenario1_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario1_dataGridView->TabIndex = 0;
			// 
			// Scenario2_tabPage
			// 
			this->Scenario2_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario2_tabPage->Controls->Add(this->STOKNO_textBox);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_button);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_01_label);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_dataGridView);
			this->Scenario2_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario2_tabPage->Name = L"Scenario2_tabPage";
			this->Scenario2_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario2_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario2_tabPage->TabIndex = 1;
			this->Scenario2_tabPage->Text = L"Scenario 2";
			// 
			// STOKNO_textBox
			// 
			this->STOKNO_textBox->Location = System::Drawing::Point(32, 45);
			this->STOKNO_textBox->Name = L"STOKNO_textBox";
			this->STOKNO_textBox->Size = System::Drawing::Size(100, 21);
			this->STOKNO_textBox->TabIndex = 4;
			// 
			// Scenario2_button
			// 
			this->Scenario2_button->Location = System::Drawing::Point(533, 78);
			this->Scenario2_button->Name = L"Scenario2_button";
			this->Scenario2_button->Size = System::Drawing::Size(75, 23);
			this->Scenario2_button->TabIndex = 3;
			this->Scenario2_button->Text = L"Query";
			this->Scenario2_button->UseVisualStyleBackColor = true;
			this->Scenario2_button->Click += gcnew System::EventHandler(this, &DeleteQueryForm::Scenario2_button_Click);
			// 
			// Scenario2_01_label
			// 
			this->Scenario2_01_label->AutoSize = true;
			this->Scenario2_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario2_01_label->Name = L"Scenario2_01_label";
			this->Scenario2_01_label->Size = System::Drawing::Size(433, 12);
			this->Scenario2_01_label->TabIndex = 2;
			this->Scenario2_01_label->Text = L"가맹점을 운영하고 있지 않은 점주 중에서 제거할 점주의 점주 번호를 입력해라.";
			// 
			// Scenario2_dataGridView
			// 
			this->Scenario2_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario2_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario2_dataGridView->Name = L"Scenario2_dataGridView";
			this->Scenario2_dataGridView->RowTemplate->Height = 23;
			this->Scenario2_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario2_dataGridView->TabIndex = 1;
			// 
			// Scenario3_tabPage
			// 
			this->Scenario3_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_button);
			this->Scenario3_tabPage->Controls->Add(this->FOODNO_textBox);
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
			this->Scenario3_button->TabIndex = 4;
			this->Scenario3_button->Text = L"Query";
			this->Scenario3_button->UseVisualStyleBackColor = true;
			this->Scenario3_button->Click += gcnew System::EventHandler(this, &DeleteQueryForm::Scenario3_button_Click);
			// 
			// FOODNO_textBox
			// 
			this->FOODNO_textBox->Location = System::Drawing::Point(32, 45);
			this->FOODNO_textBox->Name = L"FOODNO_textBox";
			this->FOODNO_textBox->Size = System::Drawing::Size(100, 21);
			this->FOODNO_textBox->TabIndex = 3;
			// 
			// Scenario3_01_label
			// 
			this->Scenario3_01_label->AutoSize = true;
			this->Scenario3_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario3_01_label->Name = L"Scenario3_01_label";
			this->Scenario3_01_label->Size = System::Drawing::Size(165, 12);
			this->Scenario3_01_label->TabIndex = 2;
			this->Scenario3_01_label->Text = L"삭제할 음식 번호를 입력해라.";
			// 
			// Scenario3_dataGridView
			// 
			this->Scenario3_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario3_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario3_dataGridView->Name = L"Scenario3_dataGridView";
			this->Scenario3_dataGridView->RowTemplate->Height = 23;
			this->Scenario3_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario3_dataGridView->TabIndex = 1;
			// 
			// Scenario4_tabPage
			// 
			this->Scenario4_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario4_tabPage->Controls->Add(this->MEMNO_textBox);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_button);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_01_label);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_dataGridView);
			this->Scenario4_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario4_tabPage->Name = L"Scenario4_tabPage";
			this->Scenario4_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario4_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario4_tabPage->TabIndex = 3;
			this->Scenario4_tabPage->Text = L"Scenario 4";
			// 
			// MEMNO_textBox
			// 
			this->MEMNO_textBox->Location = System::Drawing::Point(32, 46);
			this->MEMNO_textBox->Name = L"MEMNO_textBox";
			this->MEMNO_textBox->Size = System::Drawing::Size(100, 21);
			this->MEMNO_textBox->TabIndex = 4;
			// 
			// Scenario4_button
			// 
			this->Scenario4_button->Location = System::Drawing::Point(533, 78);
			this->Scenario4_button->Name = L"Scenario4_button";
			this->Scenario4_button->Size = System::Drawing::Size(75, 23);
			this->Scenario4_button->TabIndex = 3;
			this->Scenario4_button->Text = L"Query";
			this->Scenario4_button->UseVisualStyleBackColor = true;
			this->Scenario4_button->Click += gcnew System::EventHandler(this, &DeleteQueryForm::Scenario4_button_Click);
			// 
			// Scenario4_01_label
			// 
			this->Scenario4_01_label->AutoSize = true;
			this->Scenario4_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario4_01_label->Name = L"Scenario4_01_label";
			this->Scenario4_01_label->Size = System::Drawing::Size(409, 12);
			this->Scenario4_01_label->TabIndex = 2;
			this->Scenario4_01_label->Text = L"회원이 계정을 탈퇴한 경우, 회원 번호를 입력하여 회원의 정보를 제거해라.";
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
			// DeleteQueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->Delete_tabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"DeleteQueryForm";
			this->Text = L"Delete Query";
			this->Activated += gcnew System::EventHandler(this, &DeleteQueryForm::DeleteQueryForm_Activated);
			this->Delete_tabControl->ResumeLayout(false);
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
#pragma endregion
		private: System::Void DeleteQueryForm_Activated(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery;
			ProcessQuery PQ;

			strQuery = "SELECT * FROM FRANCHISE";
			PQ.CustomQuery(this->Scenario1_dataGridView, strQuery);

			strQuery = "SELECT * FROM STOREKEEPER WHERE STOKNO NOT IN(SELECT STOKNO FROM FRANCHISE)";
			PQ.CustomQuery(this->Scenario2_dataGridView, strQuery);

			strQuery = "SELECT * FROM FOOD";
			PQ.CustomQuery(this->Scenario3_dataGridView, strQuery);

			strQuery = "SELECT * FROM MEMBER";
			PQ.CustomQuery(this->Scenario4_dataGridView, strQuery);
		}
		private: System::Void Scenario1_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, sales;
			ProcessQuery PQ;

			this->Scenario1_dataGridView->Rows->Clear();
			this->Scenario1_dataGridView->Columns->Clear();
			this->Scenario1_dataGridView->Refresh();

			sales = msclr::interop::marshal_as<string>(this->SALES_textBox->Text);
			strQuery = "DELETE FROM FRANCHISE WHERE SALES <= " + sales;
			PQ.UpdateQuery(strQuery);

			strQuery = "SELECT * FROM FRANCHISE";
			PQ.CustomQuery(this->Scenario1_dataGridView, strQuery);
		}
		private: System::Void Scenario2_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, stokNo;
			ProcessQuery PQ;

			this->Scenario2_dataGridView->Rows->Clear();
			this->Scenario2_dataGridView->Columns->Clear();
			this->Scenario2_dataGridView->Refresh();

			stokNo = msclr::interop::marshal_as<string>(this->STOKNO_textBox->Text);
			strQuery = "DELETE FROM STOREKEEPER WHERE STOKNO = " + stokNo + " AND STOKNO IN (SELECT STOKNO FROM STOREKEEPER WHERE STOKNO NOT IN(SELECT STOKNO FROM FRANCHISE))";
			PQ.UpdateQuery(strQuery);

			strQuery = "SELECT * FROM STOREKEEPER WHERE STOKNO NOT IN(SELECT STOKNO FROM FRANCHISE)";
			PQ.CustomQuery(this->Scenario2_dataGridView, strQuery);
		}
		private: System::Void Scenario3_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, foodNo;
			ProcessQuery PQ;

			this->Scenario3_dataGridView->Rows->Clear();
			this->Scenario3_dataGridView->Columns->Clear();
			this->Scenario3_dataGridView->Refresh();

			foodNo = msclr::interop::marshal_as<string>(this->FOODNO_textBox->Text);
			strQuery = "DELETE FROM FOOD WHERE FOODNO = " + foodNo;
			PQ.UpdateQuery(strQuery);

			strQuery = "SELECT * FROM FOOD";
			PQ.CustomQuery(this->Scenario3_dataGridView, strQuery);
		}
		private: System::Void Scenario4_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, memNo;
			ProcessQuery PQ;

			this->Scenario4_dataGridView->Rows->Clear();
			this->Scenario4_dataGridView->Columns->Clear();
			this->Scenario4_dataGridView->Refresh();

			memNo = msclr::interop::marshal_as<string>(this->MEMNO_textBox->Text);
			strQuery = "DELETE FROM MEMBER WHERE MEMNO = " + memNo;
			PQ.UpdateQuery(strQuery);

			strQuery = "SELECT * FROM MEMBER";
			PQ.CustomQuery(this->Scenario4_dataGridView, strQuery);
		}
	};
}
