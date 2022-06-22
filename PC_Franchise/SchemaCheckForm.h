#pragma once
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
	/// SchemaCheckForm에 대한 요약입니다.
	/// </summary>
	public ref class SchemaCheckForm : public System::Windows::Forms::Form
	{
	public:
		SchemaCheckForm(void)
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
		~SchemaCheckForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Schema_dataGridView;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::ComboBox^ Table_comboBox;
	private: System::Windows::Forms::Label^ Table_label;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_Name_Len;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SQL_Data_Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Data_Size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Data_Nullable;






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
			this->Schema_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Name_Len = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SQL_Data_Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Data_Size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Data_Nullable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Table_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Table_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Schema_dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// Schema_dataGridView
			// 
			this->Schema_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Schema_dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column_Name,
					this->Column_Name_Len, this->SQL_Data_Type, this->Data_Size, this->Data_Nullable
			});
			this->Schema_dataGridView->Location = System::Drawing::Point(12, 119);
			this->Schema_dataGridView->Name = L"Schema_dataGridView";
			this->Schema_dataGridView->RowTemplate->Height = 23;
			this->Schema_dataGridView->Size = System::Drawing::Size(600, 310);
			this->Schema_dataGridView->TabIndex = 0;
			// 
			// Column_Name
			// 
			this->Column_Name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column_Name->HeaderText = L"Column Name";
			this->Column_Name->Name = L"Column_Name";
			// 
			// Column_Name_Len
			// 
			this->Column_Name_Len->HeaderText = L"Column Name Len";
			this->Column_Name_Len->Name = L"Column_Name_Len";
			this->Column_Name_Len->Width = 112;
			// 
			// SQL_Data_Type
			// 
			this->SQL_Data_Type->HeaderText = L"SQL Data Type";
			this->SQL_Data_Type->Name = L"SQL_Data_Type";
			this->SQL_Data_Type->Width = 111;
			// 
			// Data_Size
			// 
			this->Data_Size->HeaderText = L"Data Size";
			this->Data_Size->Name = L"Data_Size";
			this->Data_Size->Width = 112;
			// 
			// Data_Nullable
			// 
			this->Data_Nullable->HeaderText = L"Data Nullable";
			this->Data_Nullable->Name = L"Data_Nullable";
			this->Data_Nullable->Width = 111;
			// 
			// Table_comboBox
			// 
			this->Table_comboBox->FormattingEnabled = true;
			this->Table_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"STOREKEEPER", L"FRANCHISE", L"MEMBER", L"COMPUTER",
					L"FOOD", L"PART", L"SERVE"
			});
			this->Table_comboBox->Location = System::Drawing::Point(271, 47);
			this->Table_comboBox->Name = L"Table_comboBox";
			this->Table_comboBox->Size = System::Drawing::Size(121, 20);
			this->Table_comboBox->TabIndex = 1;
			this->Table_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SchemaCheckForm::Table_comboBox_SelectedIndexChanged);
			// 
			// Table_label
			// 
			this->Table_label->AutoSize = true;
			this->Table_label->Location = System::Drawing::Point(220, 50);
			this->Table_label->Name = L"Table_label";
			this->Table_label->Size = System::Drawing::Size(45, 12);
			this->Table_label->TabIndex = 2;
			this->Table_label->Text = L"Table :";
			// 
			// SchemaCheckForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->Table_label);
			this->Controls->Add(this->Table_comboBox);
			this->Controls->Add(this->Schema_dataGridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"SchemaCheckForm";
			this->Text = L"Schema Check";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Schema_dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void Table_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			this->Schema_dataGridView->Rows->Clear();
			this->Schema_dataGridView->Refresh();

			char table[30];
			string name[30];
			short len[30];
			short type[30];
			unsigned int size[30];
			short isNullable[30];
			int numCols;

			string str_name;
			String ^Str_name, ^Str_null;

			ProcessQuery ProcessQuery;

			string str_table = msclr::interop::marshal_as<string>(this->Table_comboBox->Text);
			strcpy(table, str_table.c_str());
			numCols = ProcessQuery.SchemaCheck(table, name, len, type, size, isNullable);

			for (int i = 0; i < numCols; i++)
			{
				str_name = name[i];
				if (isNullable[i])
					Str_null = gcnew String("NULL");
				else
					Str_null = gcnew String("NOT NULL");
				// std::string 과 System::String 이 다르고,
				// .NET Framework 에서 제공하는 System::String, dataGridView 컨트롤.
				// dataGridView->Rows[i]->Cells[0]->Value 는 System::String 을 인자로 받을 수 있기 때문에
				// String - > string
				// std::string 변수명 = msclr::interop::marshal_as<std::string>(String 변수);
				// string - > String
				Str_name = gcnew String(str_name.c_str());

				this->Schema_dataGridView->Rows->Add(Str_name, len[i], type[i], size[i], Str_null);
				/*this->Schema_dataGridView->Rows[i]->Cells[0]->Value = Str_name;
				this->Schema_dataGridView->Rows[i]->Cells[1]->Value = len[i];
				this->Schema_dataGridView->Rows[i]->Cells[2]->Value = type[i];
				this->Schema_dataGridView->Rows[i]->Cells[3]->Value = size[i];
				this->Schema_dataGridView->Rows[i]->Cells[4]->Value = isNullable[i];*/
			}
		}
	};
}