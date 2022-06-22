#pragma once
#include "SchemaCheckForm.h"
#include "CustomQueryForm.h"
#include "SelectQueryForm.h"
#include "InsertQueryForm.h"
#include "DeleteQueryForm.h"
#include "UpdateQueryForm.h"

namespace PCFranchise {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm에 대한 요약입니다.
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ PC_Franchise_label;
	protected:
	private: System::Windows::Forms::Button^ Schema_button;
	private: System::Windows::Forms::Button^ Custom_button;
	private: System::Windows::Forms::Button^ Select_button;
	private: System::Windows::Forms::Button^ Insert_button;
	private: System::Windows::Forms::Button^ Delete_button;
	private: System::Windows::Forms::Button^ Update_button;


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
			this->PC_Franchise_label = (gcnew System::Windows::Forms::Label());
			this->Schema_button = (gcnew System::Windows::Forms::Button());
			this->Custom_button = (gcnew System::Windows::Forms::Button());
			this->Select_button = (gcnew System::Windows::Forms::Button());
			this->Insert_button = (gcnew System::Windows::Forms::Button());
			this->Delete_button = (gcnew System::Windows::Forms::Button());
			this->Update_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PC_Franchise_label
			// 
			this->PC_Franchise_label->AutoSize = true;
			this->PC_Franchise_label->Location = System::Drawing::Point(100, 40);
			this->PC_Franchise_label->Name = L"PC_Franchise_label";
			this->PC_Franchise_label->Size = System::Drawing::Size(98, 12);
			this->PC_Franchise_label->TabIndex = 0;
			this->PC_Franchise_label->Text = L"PC방 프랜차이즈";
			// 
			// Schema_button
			// 
			this->Schema_button->Location = System::Drawing::Point(20, 100);
			this->Schema_button->Name = L"Schema_button";
			this->Schema_button->Size = System::Drawing::Size(100, 23);
			this->Schema_button->TabIndex = 1;
			this->Schema_button->Text = L"Schema Check";
			this->Schema_button->UseVisualStyleBackColor = true;
			this->Schema_button->Click += gcnew System::EventHandler(this, &MainForm::Schema_button_Click);
			// 
			// Custom_button
			// 
			this->Custom_button->Location = System::Drawing::Point(165, 100);
			this->Custom_button->Name = L"Custom_button";
			this->Custom_button->Size = System::Drawing::Size(100, 23);
			this->Custom_button->TabIndex = 2;
			this->Custom_button->Text = L"Custom Query";
			this->Custom_button->UseVisualStyleBackColor = true;
			this->Custom_button->Click += gcnew System::EventHandler(this, &MainForm::Custom_button_Click);
			// 
			// Select_button
			// 
			this->Select_button->Location = System::Drawing::Point(20, 150);
			this->Select_button->Name = L"Select_button";
			this->Select_button->Size = System::Drawing::Size(100, 23);
			this->Select_button->TabIndex = 3;
			this->Select_button->Text = L"Select Query";
			this->Select_button->UseVisualStyleBackColor = true;
			this->Select_button->Click += gcnew System::EventHandler(this, &MainForm::Select_button_Click);
			// 
			// Insert_button
			// 
			this->Insert_button->Location = System::Drawing::Point(165, 150);
			this->Insert_button->Name = L"Insert_button";
			this->Insert_button->Size = System::Drawing::Size(100, 23);
			this->Insert_button->TabIndex = 4;
			this->Insert_button->Text = L"Insert Query";
			this->Insert_button->UseVisualStyleBackColor = true;
			this->Insert_button->Click += gcnew System::EventHandler(this, &MainForm::Insert_button_Click);
			// 
			// Delete_button
			// 
			this->Delete_button->Location = System::Drawing::Point(20, 200);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->Size = System::Drawing::Size(100, 23);
			this->Delete_button->TabIndex = 5;
			this->Delete_button->Text = L"Delete Query";
			this->Delete_button->UseVisualStyleBackColor = true;
			this->Delete_button->Click += gcnew System::EventHandler(this, &MainForm::Delete_button_Click);
			// 
			// Update_button
			// 
			this->Update_button->Location = System::Drawing::Point(165, 200);
			this->Update_button->Name = L"Update_button";
			this->Update_button->Size = System::Drawing::Size(100, 23);
			this->Update_button->TabIndex = 6;
			this->Update_button->Text = L"Update Query";
			this->Update_button->UseVisualStyleBackColor = true;
			this->Update_button->Click += gcnew System::EventHandler(this, &MainForm::Update_button_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Update_button);
			this->Controls->Add(this->Delete_button);
			this->Controls->Add(this->Insert_button);
			this->Controls->Add(this->Select_button);
			this->Controls->Add(this->Custom_button);
			this->Controls->Add(this->Schema_button);
			this->Controls->Add(this->PC_Franchise_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->Text = L"PC방 프랜차이즈";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void Schema_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PCFranchise::SchemaCheckForm SchemaCheckForm;
			SchemaCheckForm.ShowDialog();
		}
		private: System::Void Custom_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PCFranchise::CustomQueryForm CustomQueryForm;
			CustomQueryForm.ShowDialog();
		}
		private: System::Void Select_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PCFranchise::SelectQueryForm SelectQueryForm;
			SelectQueryForm.ShowDialog();
		}
		private: System::Void Insert_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PCFranchise::InsertQueryForm InsertQueryForm;
			InsertQueryForm.ShowDialog();
		}
		private: System::Void Delete_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PCFranchise::DeleteQueryForm DeleteQueryForm;
			DeleteQueryForm.ShowDialog();
		}
		private: System::Void Update_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			PCFranchise::UpdateQueryForm UpdateQueryForm;
			UpdateQueryForm.ShowDialog();
		}
	};
}
