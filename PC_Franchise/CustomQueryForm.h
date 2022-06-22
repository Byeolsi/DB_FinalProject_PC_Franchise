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
	/// InsertQueryForm에 대한 요약입니다.
	/// </summary>
	public ref class CustomQueryForm : public System::Windows::Forms::Form
	{
	public:
		CustomQueryForm(void)
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
		~CustomQueryForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::DataGridView^ Custom_dataGridView;
	private: System::Windows::Forms::TextBox^ Custom_textBox;
	private: System::Windows::Forms::GroupBox^ Custom_groupBox;
	private: System::Windows::Forms::Button^ Custom_button;
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
			this->Custom_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Custom_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Custom_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Custom_button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Custom_dataGridView))->BeginInit();
			this->Custom_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// Custom_dataGridView
			// 
			this->Custom_dataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Custom_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Custom_dataGridView->Location = System::Drawing::Point(12, 119);
			this->Custom_dataGridView->Name = L"Custom_dataGridView";
			this->Custom_dataGridView->RowTemplate->Height = 23;
			this->Custom_dataGridView->Size = System::Drawing::Size(600, 310);
			this->Custom_dataGridView->TabIndex = 1;
			// 
			// Custom_textBox
			// 
			this->Custom_textBox->Location = System::Drawing::Point(6, 20);
			this->Custom_textBox->Multiline = true;
			this->Custom_textBox->Name = L"Custom_textBox";
			this->Custom_textBox->Size = System::Drawing::Size(506, 74);
			this->Custom_textBox->TabIndex = 2;
			// 
			// Custom_groupBox
			// 
			this->Custom_groupBox->Controls->Add(this->Custom_button);
			this->Custom_groupBox->Controls->Add(this->Custom_textBox);
			this->Custom_groupBox->Location = System::Drawing::Point(13, 13);
			this->Custom_groupBox->Name = L"Custom_groupBox";
			this->Custom_groupBox->Size = System::Drawing::Size(599, 100);
			this->Custom_groupBox->TabIndex = 3;
			this->Custom_groupBox->TabStop = false;
			this->Custom_groupBox->Text = L"Custom Query";
			// 
			// Custom_button
			// 
			this->Custom_button->Location = System::Drawing::Point(518, 71);
			this->Custom_button->Name = L"Custom_button";
			this->Custom_button->Size = System::Drawing::Size(75, 23);
			this->Custom_button->TabIndex = 3;
			this->Custom_button->Text = L"Query";
			this->Custom_button->UseVisualStyleBackColor = true;
			this->Custom_button->Click += gcnew System::EventHandler(this, &CustomQueryForm::Custom_button_Click);
			// 
			// CustomQueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->Custom_groupBox);
			this->Controls->Add(this->Custom_dataGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"CustomQueryForm";
			this->Text = L"Custom Query";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Custom_dataGridView))->EndInit();
			this->Custom_groupBox->ResumeLayout(false);
			this->Custom_groupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


		private: System::Void Custom_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery;
			ProcessQuery PQ;

			strQuery = msclr::interop::marshal_as<string>(this->Custom_textBox->Text);
			PQ.CustomQuery(this->Custom_dataGridView, strQuery);
		}
	};
}
