#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <msclr\marshal_cppstd.h>
#include "ProcessQuery.h"
#include <iostream>

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
	public ref class InsertQueryForm : public System::Windows::Forms::Form
	{
	public:
		InsertQueryForm(void)
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
		~InsertQueryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Insert_tabControl;
	protected:
	private: System::Windows::Forms::TabPage^ Storekeeper_tabPage;
	private: System::Windows::Forms::TabPage^ Franchise_tabPage;
	private: System::Windows::Forms::TabPage^ Member_tabPage;
	private: System::Windows::Forms::TabPage^ Computer_tabPage;
	private: System::Windows::Forms::TabPage^ Food_tabPage;
	private: System::Windows::Forms::TabPage^ Part_tabPage;
	private: System::Windows::Forms::TextBox^ SCORE_textBox;
	private: System::Windows::Forms::TextBox^ PHONENO_STOK_textBox;




	private: System::Windows::Forms::Label^ SCORE_label;
	private: System::Windows::Forms::Label^ PHONENO_STOK_label;





	private: System::Windows::Forms::TextBox^ STOKNAME_textBox;
	private: System::Windows::Forms::Label^ STOKNAME_label;
	private: System::Windows::Forms::TextBox^ STOKNO_textBox;
	private: System::Windows::Forms::Label^ STOKNO_label;
	private: System::Windows::Forms::Button^ Query1_button;


	private: System::Windows::Forms::Button^ Query2_button;
	private: System::Windows::Forms::TextBox^ STOKNO_FRAC_textBox;

	private: System::Windows::Forms::TextBox^ SALES_textBox;
	private: System::Windows::Forms::TextBox^ PRICE_FRAC_textBox;

	private: System::Windows::Forms::TextBox^ COMPN_textBox;
	private: System::Windows::Forms::TextBox^ FRACNO_textBox;
	private: System::Windows::Forms::Label^ STOKNO_FRAC_label;

	private: System::Windows::Forms::Label^ SALES_label;
	private: System::Windows::Forms::Label^ PRICE_label;
	private: System::Windows::Forms::Label^ COMPN_label;
	private: System::Windows::Forms::Label^ FRACNO_label;
	private: System::Windows::Forms::Button^ Query3_button;
	private: System::Windows::Forms::TextBox^ PHONENO_MEM_textBox;

	private: System::Windows::Forms::TextBox^ ID_textBox;
	private: System::Windows::Forms::TextBox^ PASSWORD_textBox;


	private: System::Windows::Forms::TextBox^ MEMNAME_textBox;

	private: System::Windows::Forms::TextBox^ MEMNO_textBox;

	private: System::Windows::Forms::Label^ PHONENO_MEM_label;
	private: System::Windows::Forms::Label^ PASSWORD_label;
	private: System::Windows::Forms::Label^ ID_label;
	private: System::Windows::Forms::Label^ MEMNAME_label;
	private: System::Windows::Forms::Label^ MEMNO_label;
	private: System::Windows::Forms::TabPage^ Serve_tabPage;
	private: System::Windows::Forms::TextBox^ MODELNO_textBox;

	private: System::Windows::Forms::TextBox^ RAM_textBox;
	private: System::Windows::Forms::TextBox^ FRACNO_COMP_textBox;



	private: System::Windows::Forms::TextBox^ COMPNO_textBox;

	private: System::Windows::Forms::Label^ MODELNO_label;
	private: System::Windows::Forms::Label^ RAM_label;
	private: System::Windows::Forms::Label^ FRACNO_COMP_label;

	private: System::Windows::Forms::Label^ COMPNO_label;
	private: System::Windows::Forms::Button^ Query4_button;
	private: System::Windows::Forms::Label^ PRICE_FOOD_label;
	private: System::Windows::Forms::Label^ FOODNAME_label;
	private: System::Windows::Forms::Label^ FOODNO_label;
	private: System::Windows::Forms::Button^ Query5_button;
	private: System::Windows::Forms::TextBox^ PRICE_FOOD_textBox;

	private: System::Windows::Forms::TextBox^ FOODNAME_textBox;

	private: System::Windows::Forms::TextBox^ FOODNO_textBox;
	private: System::Windows::Forms::Label^ HIGHER_PART_label;



private: System::Windows::Forms::Label^ ISMODEL_label;

private: System::Windows::Forms::Label^ PTYPE_label;

private: System::Windows::Forms::Label^ PRICE_PART_label;

	private: System::Windows::Forms::Label^ PARTNAME_label;
	private: System::Windows::Forms::Label^ PARTNO_label;
private: System::Windows::Forms::Button^ Query6_button;
private: System::Windows::Forms::TextBox^ HIGHER_PART_textBox;
private: System::Windows::Forms::TextBox^ ISMODEL_textBox;
private: System::Windows::Forms::TextBox^ PTYPE_textBox;
private: System::Windows::Forms::TextBox^ PRICE_PART_textBox;
private: System::Windows::Forms::TextBox^ PARTNAME_textBox;
private: System::Windows::Forms::TextBox^ PARTNO_textBox;
private: System::Windows::Forms::Label^ QUANTITY_label;


private: System::Windows::Forms::Label^ MEMNO_SERVE_label;


private: System::Windows::Forms::Label^ FOODNO_SERVE_label;

private: System::Windows::Forms::Label^ FRACNO_SERVE_label;
private: System::Windows::Forms::TextBox^ QUANTITY_textBox;
private: System::Windows::Forms::TextBox^ MEMNO_SERVE_textBox;
private: System::Windows::Forms::TextBox^ FOODNO_SERVE_textBox;
private: System::Windows::Forms::TextBox^ FRACNO_SERVE_textBox;
private: System::Windows::Forms::Label^ PART_02_label;
private: System::Windows::Forms::Label^ PART_01_label;
private: System::Windows::Forms::Button^ Query7_button;







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
			this->Insert_tabControl = (gcnew System::Windows::Forms::TabControl());
			this->Storekeeper_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Query1_button = (gcnew System::Windows::Forms::Button());
			this->SCORE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PHONENO_STOK_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SCORE_label = (gcnew System::Windows::Forms::Label());
			this->PHONENO_STOK_label = (gcnew System::Windows::Forms::Label());
			this->STOKNAME_textBox = (gcnew System::Windows::Forms::TextBox());
			this->STOKNAME_label = (gcnew System::Windows::Forms::Label());
			this->STOKNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->STOKNO_label = (gcnew System::Windows::Forms::Label());
			this->Franchise_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Query2_button = (gcnew System::Windows::Forms::Button());
			this->STOKNO_FRAC_textBox = (gcnew System::Windows::Forms::TextBox());
			this->SALES_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PRICE_FRAC_textBox = (gcnew System::Windows::Forms::TextBox());
			this->COMPN_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FRACNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->STOKNO_FRAC_label = (gcnew System::Windows::Forms::Label());
			this->SALES_label = (gcnew System::Windows::Forms::Label());
			this->PRICE_label = (gcnew System::Windows::Forms::Label());
			this->COMPN_label = (gcnew System::Windows::Forms::Label());
			this->FRACNO_label = (gcnew System::Windows::Forms::Label());
			this->Member_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Query3_button = (gcnew System::Windows::Forms::Button());
			this->PHONENO_MEM_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PASSWORD_textBox = (gcnew System::Windows::Forms::TextBox());
			this->MEMNAME_textBox = (gcnew System::Windows::Forms::TextBox());
			this->MEMNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PHONENO_MEM_label = (gcnew System::Windows::Forms::Label());
			this->PASSWORD_label = (gcnew System::Windows::Forms::Label());
			this->ID_label = (gcnew System::Windows::Forms::Label());
			this->MEMNAME_label = (gcnew System::Windows::Forms::Label());
			this->MEMNO_label = (gcnew System::Windows::Forms::Label());
			this->Computer_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Query4_button = (gcnew System::Windows::Forms::Button());
			this->MODELNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->RAM_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FRACNO_COMP_textBox = (gcnew System::Windows::Forms::TextBox());
			this->COMPNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->MODELNO_label = (gcnew System::Windows::Forms::Label());
			this->RAM_label = (gcnew System::Windows::Forms::Label());
			this->FRACNO_COMP_label = (gcnew System::Windows::Forms::Label());
			this->COMPNO_label = (gcnew System::Windows::Forms::Label());
			this->Food_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Query5_button = (gcnew System::Windows::Forms::Button());
			this->PRICE_FOOD_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FOODNAME_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FOODNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PRICE_FOOD_label = (gcnew System::Windows::Forms::Label());
			this->FOODNAME_label = (gcnew System::Windows::Forms::Label());
			this->FOODNO_label = (gcnew System::Windows::Forms::Label());
			this->Part_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->PART_02_label = (gcnew System::Windows::Forms::Label());
			this->PART_01_label = (gcnew System::Windows::Forms::Label());
			this->Query6_button = (gcnew System::Windows::Forms::Button());
			this->HIGHER_PART_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ISMODEL_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PTYPE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PRICE_PART_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PARTNAME_textBox = (gcnew System::Windows::Forms::TextBox());
			this->PARTNO_textBox = (gcnew System::Windows::Forms::TextBox());
			this->HIGHER_PART_label = (gcnew System::Windows::Forms::Label());
			this->ISMODEL_label = (gcnew System::Windows::Forms::Label());
			this->PTYPE_label = (gcnew System::Windows::Forms::Label());
			this->PRICE_PART_label = (gcnew System::Windows::Forms::Label());
			this->PARTNAME_label = (gcnew System::Windows::Forms::Label());
			this->PARTNO_label = (gcnew System::Windows::Forms::Label());
			this->Serve_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Query7_button = (gcnew System::Windows::Forms::Button());
			this->QUANTITY_textBox = (gcnew System::Windows::Forms::TextBox());
			this->MEMNO_SERVE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FOODNO_SERVE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->FRACNO_SERVE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->QUANTITY_label = (gcnew System::Windows::Forms::Label());
			this->MEMNO_SERVE_label = (gcnew System::Windows::Forms::Label());
			this->FOODNO_SERVE_label = (gcnew System::Windows::Forms::Label());
			this->FRACNO_SERVE_label = (gcnew System::Windows::Forms::Label());
			this->Insert_tabControl->SuspendLayout();
			this->Storekeeper_tabPage->SuspendLayout();
			this->Franchise_tabPage->SuspendLayout();
			this->Member_tabPage->SuspendLayout();
			this->Computer_tabPage->SuspendLayout();
			this->Food_tabPage->SuspendLayout();
			this->Part_tabPage->SuspendLayout();
			this->Serve_tabPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// Insert_tabControl
			// 
			this->Insert_tabControl->Controls->Add(this->Storekeeper_tabPage);
			this->Insert_tabControl->Controls->Add(this->Franchise_tabPage);
			this->Insert_tabControl->Controls->Add(this->Member_tabPage);
			this->Insert_tabControl->Controls->Add(this->Computer_tabPage);
			this->Insert_tabControl->Controls->Add(this->Food_tabPage);
			this->Insert_tabControl->Controls->Add(this->Part_tabPage);
			this->Insert_tabControl->Controls->Add(this->Serve_tabPage);
			this->Insert_tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Insert_tabControl->Location = System::Drawing::Point(0, 0);
			this->Insert_tabControl->Name = L"Insert_tabControl";
			this->Insert_tabControl->SelectedIndex = 0;
			this->Insert_tabControl->Size = System::Drawing::Size(464, 321);
			this->Insert_tabControl->TabIndex = 0;
			// 
			// Storekeeper_tabPage
			// 
			this->Storekeeper_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Storekeeper_tabPage->Controls->Add(this->Query1_button);
			this->Storekeeper_tabPage->Controls->Add(this->SCORE_textBox);
			this->Storekeeper_tabPage->Controls->Add(this->PHONENO_STOK_textBox);
			this->Storekeeper_tabPage->Controls->Add(this->SCORE_label);
			this->Storekeeper_tabPage->Controls->Add(this->PHONENO_STOK_label);
			this->Storekeeper_tabPage->Controls->Add(this->STOKNAME_textBox);
			this->Storekeeper_tabPage->Controls->Add(this->STOKNAME_label);
			this->Storekeeper_tabPage->Controls->Add(this->STOKNO_textBox);
			this->Storekeeper_tabPage->Controls->Add(this->STOKNO_label);
			this->Storekeeper_tabPage->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Storekeeper_tabPage->Location = System::Drawing::Point(4, 22);
			this->Storekeeper_tabPage->Name = L"Storekeeper_tabPage";
			this->Storekeeper_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Storekeeper_tabPage->Size = System::Drawing::Size(456, 295);
			this->Storekeeper_tabPage->TabIndex = 0;
			this->Storekeeper_tabPage->Text = L"점주 등록";
			// 
			// Query1_button
			// 
			this->Query1_button->Location = System::Drawing::Point(190, 250);
			this->Query1_button->Name = L"Query1_button";
			this->Query1_button->Size = System::Drawing::Size(75, 23);
			this->Query1_button->TabIndex = 8;
			this->Query1_button->Text = L"Query";
			this->Query1_button->UseVisualStyleBackColor = true;
			this->Query1_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query1_button_Click);
			// 
			// SCORE_textBox
			// 
			this->SCORE_textBox->Location = System::Drawing::Point(321, 97);
			this->SCORE_textBox->Name = L"SCORE_textBox";
			this->SCORE_textBox->Size = System::Drawing::Size(100, 21);
			this->SCORE_textBox->TabIndex = 7;
			// 
			// PHONENO_STOK_textBox
			// 
			this->PHONENO_STOK_textBox->Location = System::Drawing::Point(101, 97);
			this->PHONENO_STOK_textBox->Name = L"PHONENO_STOK_textBox";
			this->PHONENO_STOK_textBox->Size = System::Drawing::Size(100, 21);
			this->PHONENO_STOK_textBox->TabIndex = 6;
			// 
			// SCORE_label
			// 
			this->SCORE_label->AutoSize = true;
			this->SCORE_label->Location = System::Drawing::Point(250, 100);
			this->SCORE_label->Name = L"SCORE_label";
			this->SCORE_label->Size = System::Drawing::Size(65, 12);
			this->SCORE_label->TabIndex = 5;
			this->SCORE_label->Text = L"영업 점수 :";
			// 
			// PHONENO_STOK_label
			// 
			this->PHONENO_STOK_label->AutoSize = true;
			this->PHONENO_STOK_label->Location = System::Drawing::Point(34, 100);
			this->PHONENO_STOK_label->Name = L"PHONENO_STOK_label";
			this->PHONENO_STOK_label->Size = System::Drawing::Size(61, 12);
			this->PHONENO_STOK_label->TabIndex = 4;
			this->PHONENO_STOK_label->Text = L"전화번호 :";
			// 
			// STOKNAME_textBox
			// 
			this->STOKNAME_textBox->Location = System::Drawing::Point(321, 47);
			this->STOKNAME_textBox->Name = L"STOKNAME_textBox";
			this->STOKNAME_textBox->Size = System::Drawing::Size(100, 21);
			this->STOKNAME_textBox->TabIndex = 3;
			// 
			// STOKNAME_label
			// 
			this->STOKNAME_label->AutoSize = true;
			this->STOKNAME_label->Location = System::Drawing::Point(250, 50);
			this->STOKNAME_label->Name = L"STOKNAME_label";
			this->STOKNAME_label->Size = System::Drawing::Size(65, 12);
			this->STOKNAME_label->TabIndex = 2;
			this->STOKNAME_label->Text = L"점주 이름 :";
			// 
			// STOKNO_textBox
			// 
			this->STOKNO_textBox->Location = System::Drawing::Point(101, 47);
			this->STOKNO_textBox->Name = L"STOKNO_textBox";
			this->STOKNO_textBox->Size = System::Drawing::Size(100, 21);
			this->STOKNO_textBox->TabIndex = 1;
			// 
			// STOKNO_label
			// 
			this->STOKNO_label->AutoSize = true;
			this->STOKNO_label->Location = System::Drawing::Point(30, 50);
			this->STOKNO_label->Name = L"STOKNO_label";
			this->STOKNO_label->Size = System::Drawing::Size(65, 12);
			this->STOKNO_label->TabIndex = 0;
			this->STOKNO_label->Text = L"점주 번호 :";
			// 
			// Franchise_tabPage
			// 
			this->Franchise_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Franchise_tabPage->Controls->Add(this->Query2_button);
			this->Franchise_tabPage->Controls->Add(this->STOKNO_FRAC_textBox);
			this->Franchise_tabPage->Controls->Add(this->SALES_textBox);
			this->Franchise_tabPage->Controls->Add(this->PRICE_FRAC_textBox);
			this->Franchise_tabPage->Controls->Add(this->COMPN_textBox);
			this->Franchise_tabPage->Controls->Add(this->FRACNO_textBox);
			this->Franchise_tabPage->Controls->Add(this->STOKNO_FRAC_label);
			this->Franchise_tabPage->Controls->Add(this->SALES_label);
			this->Franchise_tabPage->Controls->Add(this->PRICE_label);
			this->Franchise_tabPage->Controls->Add(this->COMPN_label);
			this->Franchise_tabPage->Controls->Add(this->FRACNO_label);
			this->Franchise_tabPage->Location = System::Drawing::Point(4, 22);
			this->Franchise_tabPage->Name = L"Franchise_tabPage";
			this->Franchise_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Franchise_tabPage->Size = System::Drawing::Size(456, 295);
			this->Franchise_tabPage->TabIndex = 1;
			this->Franchise_tabPage->Text = L"가맹점 오픈";
			// 
			// Query2_button
			// 
			this->Query2_button->Location = System::Drawing::Point(190, 250);
			this->Query2_button->Name = L"Query2_button";
			this->Query2_button->Size = System::Drawing::Size(75, 23);
			this->Query2_button->TabIndex = 10;
			this->Query2_button->Text = L"Query";
			this->Query2_button->UseVisualStyleBackColor = true;
			this->Query2_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query2_button_Click);
			// 
			// STOKNO_FRAC_textBox
			// 
			this->STOKNO_FRAC_textBox->Location = System::Drawing::Point(101, 147);
			this->STOKNO_FRAC_textBox->Name = L"STOKNO_FRAC_textBox";
			this->STOKNO_FRAC_textBox->Size = System::Drawing::Size(100, 21);
			this->STOKNO_FRAC_textBox->TabIndex = 9;
			// 
			// SALES_textBox
			// 
			this->SALES_textBox->Location = System::Drawing::Point(321, 97);
			this->SALES_textBox->Name = L"SALES_textBox";
			this->SALES_textBox->Size = System::Drawing::Size(100, 21);
			this->SALES_textBox->TabIndex = 8;
			// 
			// PRICE_FRAC_textBox
			// 
			this->PRICE_FRAC_textBox->Location = System::Drawing::Point(101, 97);
			this->PRICE_FRAC_textBox->Name = L"PRICE_FRAC_textBox";
			this->PRICE_FRAC_textBox->Size = System::Drawing::Size(100, 21);
			this->PRICE_FRAC_textBox->TabIndex = 7;
			// 
			// COMPN_textBox
			// 
			this->COMPN_textBox->Location = System::Drawing::Point(321, 47);
			this->COMPN_textBox->Name = L"COMPN_textBox";
			this->COMPN_textBox->Size = System::Drawing::Size(100, 21);
			this->COMPN_textBox->TabIndex = 6;
			// 
			// FRACNO_textBox
			// 
			this->FRACNO_textBox->Location = System::Drawing::Point(101, 47);
			this->FRACNO_textBox->Name = L"FRACNO_textBox";
			this->FRACNO_textBox->Size = System::Drawing::Size(100, 21);
			this->FRACNO_textBox->TabIndex = 5;
			// 
			// STOKNO_FRAC_label
			// 
			this->STOKNO_FRAC_label->AutoSize = true;
			this->STOKNO_FRAC_label->Location = System::Drawing::Point(30, 150);
			this->STOKNO_FRAC_label->Name = L"STOKNO_FRAC_label";
			this->STOKNO_FRAC_label->Size = System::Drawing::Size(65, 12);
			this->STOKNO_FRAC_label->TabIndex = 4;
			this->STOKNO_FRAC_label->Text = L"점주 번호 :";
			// 
			// SALES_label
			// 
			this->SALES_label->AutoSize = true;
			this->SALES_label->Location = System::Drawing::Point(278, 100);
			this->SALES_label->Name = L"SALES_label";
			this->SALES_label->Size = System::Drawing::Size(37, 12);
			this->SALES_label->TabIndex = 3;
			this->SALES_label->Text = L"매출 :";
			// 
			// PRICE_label
			// 
			this->PRICE_label->AutoSize = true;
			this->PRICE_label->Location = System::Drawing::Point(14, 100);
			this->PRICE_label->Name = L"PRICE_label";
			this->PRICE_label->Size = System::Drawing::Size(81, 12);
			this->PRICE_label->TabIndex = 2;
			this->PRICE_label->Text = L"시간 당 가격 :";
			// 
			// COMPN_label
			// 
			this->COMPN_label->AutoSize = true;
			this->COMPN_label->Location = System::Drawing::Point(250, 50);
			this->COMPN_label->Name = L"COMPN_label";
			this->COMPN_label->Size = System::Drawing::Size(65, 12);
			this->COMPN_label->TabIndex = 1;
			this->COMPN_label->Text = L"컴퓨터 수 :";
			// 
			// FRACNO_label
			// 
			this->FRACNO_label->AutoSize = true;
			this->FRACNO_label->Location = System::Drawing::Point(18, 50);
			this->FRACNO_label->Name = L"FRACNO_label";
			this->FRACNO_label->Size = System::Drawing::Size(77, 12);
			this->FRACNO_label->TabIndex = 0;
			this->FRACNO_label->Text = L"가맹점 번호 :";
			// 
			// Member_tabPage
			// 
			this->Member_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Member_tabPage->Controls->Add(this->Query3_button);
			this->Member_tabPage->Controls->Add(this->PHONENO_MEM_textBox);
			this->Member_tabPage->Controls->Add(this->ID_textBox);
			this->Member_tabPage->Controls->Add(this->PASSWORD_textBox);
			this->Member_tabPage->Controls->Add(this->MEMNAME_textBox);
			this->Member_tabPage->Controls->Add(this->MEMNO_textBox);
			this->Member_tabPage->Controls->Add(this->PHONENO_MEM_label);
			this->Member_tabPage->Controls->Add(this->PASSWORD_label);
			this->Member_tabPage->Controls->Add(this->ID_label);
			this->Member_tabPage->Controls->Add(this->MEMNAME_label);
			this->Member_tabPage->Controls->Add(this->MEMNO_label);
			this->Member_tabPage->Location = System::Drawing::Point(4, 22);
			this->Member_tabPage->Name = L"Member_tabPage";
			this->Member_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Member_tabPage->Size = System::Drawing::Size(456, 295);
			this->Member_tabPage->TabIndex = 2;
			this->Member_tabPage->Text = L"회원 가입";
			// 
			// Query3_button
			// 
			this->Query3_button->Location = System::Drawing::Point(190, 250);
			this->Query3_button->Name = L"Query3_button";
			this->Query3_button->Size = System::Drawing::Size(75, 23);
			this->Query3_button->TabIndex = 10;
			this->Query3_button->Text = L"Query";
			this->Query3_button->UseVisualStyleBackColor = true;
			this->Query3_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query3_button_Click);
			// 
			// PHONENO_MEM_textBox
			// 
			this->PHONENO_MEM_textBox->Location = System::Drawing::Point(101, 147);
			this->PHONENO_MEM_textBox->Name = L"PHONENO_MEM_textBox";
			this->PHONENO_MEM_textBox->Size = System::Drawing::Size(100, 21);
			this->PHONENO_MEM_textBox->TabIndex = 9;
			// 
			// ID_textBox
			// 
			this->ID_textBox->Location = System::Drawing::Point(321, 97);
			this->ID_textBox->Name = L"ID_textBox";
			this->ID_textBox->Size = System::Drawing::Size(100, 21);
			this->ID_textBox->TabIndex = 8;
			// 
			// PASSWORD_textBox
			// 
			this->PASSWORD_textBox->Location = System::Drawing::Point(101, 97);
			this->PASSWORD_textBox->Name = L"PASSWORD_textBox";
			this->PASSWORD_textBox->Size = System::Drawing::Size(100, 21);
			this->PASSWORD_textBox->TabIndex = 7;
			// 
			// MEMNAME_textBox
			// 
			this->MEMNAME_textBox->Location = System::Drawing::Point(321, 47);
			this->MEMNAME_textBox->Name = L"MEMNAME_textBox";
			this->MEMNAME_textBox->Size = System::Drawing::Size(100, 21);
			this->MEMNAME_textBox->TabIndex = 6;
			// 
			// MEMNO_textBox
			// 
			this->MEMNO_textBox->Location = System::Drawing::Point(101, 47);
			this->MEMNO_textBox->Name = L"MEMNO_textBox";
			this->MEMNO_textBox->Size = System::Drawing::Size(100, 21);
			this->MEMNO_textBox->TabIndex = 5;
			// 
			// PHONENO_MEM_label
			// 
			this->PHONENO_MEM_label->AutoSize = true;
			this->PHONENO_MEM_label->Location = System::Drawing::Point(34, 150);
			this->PHONENO_MEM_label->Name = L"PHONENO_MEM_label";
			this->PHONENO_MEM_label->Size = System::Drawing::Size(61, 12);
			this->PHONENO_MEM_label->TabIndex = 4;
			this->PHONENO_MEM_label->Text = L"전화번호 :";
			// 
			// PASSWORD_label
			// 
			this->PASSWORD_label->AutoSize = true;
			this->PASSWORD_label->Location = System::Drawing::Point(254, 100);
			this->PASSWORD_label->Name = L"PASSWORD_label";
			this->PASSWORD_label->Size = System::Drawing::Size(61, 12);
			this->PASSWORD_label->TabIndex = 3;
			this->PASSWORD_label->Text = L"비밀번호 :";
			// 
			// ID_label
			// 
			this->ID_label->AutoSize = true;
			this->ID_label->Location = System::Drawing::Point(71, 100);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(24, 12);
			this->ID_label->TabIndex = 2;
			this->ID_label->Text = L"ID :";
			// 
			// MEMNAME_label
			// 
			this->MEMNAME_label->AutoSize = true;
			this->MEMNAME_label->Location = System::Drawing::Point(250, 50);
			this->MEMNAME_label->Name = L"MEMNAME_label";
			this->MEMNAME_label->Size = System::Drawing::Size(65, 12);
			this->MEMNAME_label->TabIndex = 1;
			this->MEMNAME_label->Text = L"회원 이름 :";
			// 
			// MEMNO_label
			// 
			this->MEMNO_label->AutoSize = true;
			this->MEMNO_label->Location = System::Drawing::Point(30, 50);
			this->MEMNO_label->Name = L"MEMNO_label";
			this->MEMNO_label->Size = System::Drawing::Size(65, 12);
			this->MEMNO_label->TabIndex = 0;
			this->MEMNO_label->Text = L"회원 번호 :";
			// 
			// Computer_tabPage
			// 
			this->Computer_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Computer_tabPage->Controls->Add(this->Query4_button);
			this->Computer_tabPage->Controls->Add(this->MODELNO_textBox);
			this->Computer_tabPage->Controls->Add(this->RAM_textBox);
			this->Computer_tabPage->Controls->Add(this->FRACNO_COMP_textBox);
			this->Computer_tabPage->Controls->Add(this->COMPNO_textBox);
			this->Computer_tabPage->Controls->Add(this->MODELNO_label);
			this->Computer_tabPage->Controls->Add(this->RAM_label);
			this->Computer_tabPage->Controls->Add(this->FRACNO_COMP_label);
			this->Computer_tabPage->Controls->Add(this->COMPNO_label);
			this->Computer_tabPage->Location = System::Drawing::Point(4, 22);
			this->Computer_tabPage->Name = L"Computer_tabPage";
			this->Computer_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Computer_tabPage->Size = System::Drawing::Size(456, 295);
			this->Computer_tabPage->TabIndex = 3;
			this->Computer_tabPage->Text = L"컴퓨터 설치";
			// 
			// Query4_button
			// 
			this->Query4_button->Location = System::Drawing::Point(190, 250);
			this->Query4_button->Name = L"Query4_button";
			this->Query4_button->Size = System::Drawing::Size(75, 23);
			this->Query4_button->TabIndex = 8;
			this->Query4_button->Text = L"Query";
			this->Query4_button->UseVisualStyleBackColor = true;
			this->Query4_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query4_button_Click);
			// 
			// MODELNO_textBox
			// 
			this->MODELNO_textBox->Location = System::Drawing::Point(321, 97);
			this->MODELNO_textBox->Name = L"MODELNO_textBox";
			this->MODELNO_textBox->Size = System::Drawing::Size(100, 21);
			this->MODELNO_textBox->TabIndex = 7;
			// 
			// RAM_textBox
			// 
			this->RAM_textBox->Location = System::Drawing::Point(101, 97);
			this->RAM_textBox->Name = L"RAM_textBox";
			this->RAM_textBox->Size = System::Drawing::Size(100, 21);
			this->RAM_textBox->TabIndex = 6;
			// 
			// FRACNO_COMP_textBox
			// 
			this->FRACNO_COMP_textBox->Location = System::Drawing::Point(321, 47);
			this->FRACNO_COMP_textBox->Name = L"FRACNO_COMP_textBox";
			this->FRACNO_COMP_textBox->Size = System::Drawing::Size(100, 21);
			this->FRACNO_COMP_textBox->TabIndex = 5;
			// 
			// COMPNO_textBox
			// 
			this->COMPNO_textBox->Location = System::Drawing::Point(101, 47);
			this->COMPNO_textBox->Name = L"COMPNO_textBox";
			this->COMPNO_textBox->Size = System::Drawing::Size(100, 21);
			this->COMPNO_textBox->TabIndex = 4;
			// 
			// MODELNO_label
			// 
			this->MODELNO_label->AutoSize = true;
			this->MODELNO_label->Location = System::Drawing::Point(250, 100);
			this->MODELNO_label->Name = L"MODELNO_label";
			this->MODELNO_label->Size = System::Drawing::Size(65, 12);
			this->MODELNO_label->TabIndex = 3;
			this->MODELNO_label->Text = L"모델 번호 :";
			// 
			// RAM_label
			// 
			this->RAM_label->AutoSize = true;
			this->RAM_label->Location = System::Drawing::Point(55, 100);
			this->RAM_label->Name = L"RAM_label";
			this->RAM_label->Size = System::Drawing::Size(40, 12);
			this->RAM_label->TabIndex = 2;
			this->RAM_label->Text = L"RAM :";
			// 
			// FRACNO_COMP_label
			// 
			this->FRACNO_COMP_label->AutoSize = true;
			this->FRACNO_COMP_label->Location = System::Drawing::Point(238, 50);
			this->FRACNO_COMP_label->Name = L"FRACNO_COMP_label";
			this->FRACNO_COMP_label->Size = System::Drawing::Size(77, 12);
			this->FRACNO_COMP_label->TabIndex = 1;
			this->FRACNO_COMP_label->Text = L"가맹점 번호 :";
			// 
			// COMPNO_label
			// 
			this->COMPNO_label->AutoSize = true;
			this->COMPNO_label->Location = System::Drawing::Point(18, 50);
			this->COMPNO_label->Name = L"COMPNO_label";
			this->COMPNO_label->Size = System::Drawing::Size(77, 12);
			this->COMPNO_label->TabIndex = 0;
			this->COMPNO_label->Text = L"컴퓨터 번호 :";
			// 
			// Food_tabPage
			// 
			this->Food_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Food_tabPage->Controls->Add(this->Query5_button);
			this->Food_tabPage->Controls->Add(this->PRICE_FOOD_textBox);
			this->Food_tabPage->Controls->Add(this->FOODNAME_textBox);
			this->Food_tabPage->Controls->Add(this->FOODNO_textBox);
			this->Food_tabPage->Controls->Add(this->PRICE_FOOD_label);
			this->Food_tabPage->Controls->Add(this->FOODNAME_label);
			this->Food_tabPage->Controls->Add(this->FOODNO_label);
			this->Food_tabPage->Location = System::Drawing::Point(4, 22);
			this->Food_tabPage->Name = L"Food_tabPage";
			this->Food_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Food_tabPage->Size = System::Drawing::Size(456, 295);
			this->Food_tabPage->TabIndex = 4;
			this->Food_tabPage->Text = L"신메뉴 판매";
			// 
			// Query5_button
			// 
			this->Query5_button->Location = System::Drawing::Point(190, 250);
			this->Query5_button->Name = L"Query5_button";
			this->Query5_button->Size = System::Drawing::Size(75, 23);
			this->Query5_button->TabIndex = 6;
			this->Query5_button->Text = L"Query";
			this->Query5_button->UseVisualStyleBackColor = true;
			this->Query5_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query5_button_Click);
			// 
			// PRICE_FOOD_textBox
			// 
			this->PRICE_FOOD_textBox->Location = System::Drawing::Point(101, 97);
			this->PRICE_FOOD_textBox->Name = L"PRICE_FOOD_textBox";
			this->PRICE_FOOD_textBox->Size = System::Drawing::Size(100, 21);
			this->PRICE_FOOD_textBox->TabIndex = 5;
			// 
			// FOODNAME_textBox
			// 
			this->FOODNAME_textBox->Location = System::Drawing::Point(321, 47);
			this->FOODNAME_textBox->Name = L"FOODNAME_textBox";
			this->FOODNAME_textBox->Size = System::Drawing::Size(100, 21);
			this->FOODNAME_textBox->TabIndex = 4;
			// 
			// FOODNO_textBox
			// 
			this->FOODNO_textBox->Location = System::Drawing::Point(101, 47);
			this->FOODNO_textBox->Name = L"FOODNO_textBox";
			this->FOODNO_textBox->Size = System::Drawing::Size(100, 21);
			this->FOODNO_textBox->TabIndex = 3;
			// 
			// PRICE_FOOD_label
			// 
			this->PRICE_FOOD_label->AutoSize = true;
			this->PRICE_FOOD_label->Location = System::Drawing::Point(30, 100);
			this->PRICE_FOOD_label->Name = L"PRICE_FOOD_label";
			this->PRICE_FOOD_label->Size = System::Drawing::Size(65, 12);
			this->PRICE_FOOD_label->TabIndex = 2;
			this->PRICE_FOOD_label->Text = L"음식 가격 :";
			// 
			// FOODNAME_label
			// 
			this->FOODNAME_label->AutoSize = true;
			this->FOODNAME_label->Location = System::Drawing::Point(250, 50);
			this->FOODNAME_label->Name = L"FOODNAME_label";
			this->FOODNAME_label->Size = System::Drawing::Size(65, 12);
			this->FOODNAME_label->TabIndex = 1;
			this->FOODNAME_label->Text = L"음식 이름 :";
			// 
			// FOODNO_label
			// 
			this->FOODNO_label->AutoSize = true;
			this->FOODNO_label->Location = System::Drawing::Point(30, 50);
			this->FOODNO_label->Name = L"FOODNO_label";
			this->FOODNO_label->Size = System::Drawing::Size(65, 12);
			this->FOODNO_label->TabIndex = 0;
			this->FOODNO_label->Text = L"음식 번호 :";
			// 
			// Part_tabPage
			// 
			this->Part_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Part_tabPage->Controls->Add(this->PART_02_label);
			this->Part_tabPage->Controls->Add(this->PART_01_label);
			this->Part_tabPage->Controls->Add(this->Query6_button);
			this->Part_tabPage->Controls->Add(this->HIGHER_PART_textBox);
			this->Part_tabPage->Controls->Add(this->ISMODEL_textBox);
			this->Part_tabPage->Controls->Add(this->PTYPE_textBox);
			this->Part_tabPage->Controls->Add(this->PRICE_PART_textBox);
			this->Part_tabPage->Controls->Add(this->PARTNAME_textBox);
			this->Part_tabPage->Controls->Add(this->PARTNO_textBox);
			this->Part_tabPage->Controls->Add(this->HIGHER_PART_label);
			this->Part_tabPage->Controls->Add(this->ISMODEL_label);
			this->Part_tabPage->Controls->Add(this->PTYPE_label);
			this->Part_tabPage->Controls->Add(this->PRICE_PART_label);
			this->Part_tabPage->Controls->Add(this->PARTNAME_label);
			this->Part_tabPage->Controls->Add(this->PARTNO_label);
			this->Part_tabPage->Location = System::Drawing::Point(4, 22);
			this->Part_tabPage->Name = L"Part_tabPage";
			this->Part_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Part_tabPage->Size = System::Drawing::Size(456, 295);
			this->Part_tabPage->TabIndex = 5;
			this->Part_tabPage->Text = L"부품 등록";
			// 
			// PART_02_label
			// 
			this->PART_02_label->AutoSize = true;
			this->PART_02_label->Location = System::Drawing::Point(30, 171);
			this->PART_02_label->Name = L"PART_02_label";
			this->PART_02_label->Size = System::Drawing::Size(93, 12);
			this->PART_02_label->TabIndex = 14;
			this->PART_02_label->Text = L"(ex. true, false)";
			// 
			// PART_01_label
			// 
			this->PART_01_label->AutoSize = true;
			this->PART_01_label->Location = System::Drawing::Point(250, 121);
			this->PART_01_label->Name = L"PART_01_label";
			this->PART_01_label->Size = System::Drawing::Size(204, 12);
			this->PART_01_label->TabIndex = 13;
			this->PART_01_label->Text = L"(ex. CPU, DISPLAY, MODEL, GPU)";
			// 
			// Query6_button
			// 
			this->Query6_button->Location = System::Drawing::Point(190, 250);
			this->Query6_button->Name = L"Query6_button";
			this->Query6_button->Size = System::Drawing::Size(75, 23);
			this->Query6_button->TabIndex = 12;
			this->Query6_button->Text = L"Query";
			this->Query6_button->UseVisualStyleBackColor = true;
			this->Query6_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query6_button_Click);
			// 
			// HIGHER_PART_textBox
			// 
			this->HIGHER_PART_textBox->Location = System::Drawing::Point(321, 147);
			this->HIGHER_PART_textBox->Name = L"HIGHER_PART_textBox";
			this->HIGHER_PART_textBox->Size = System::Drawing::Size(100, 21);
			this->HIGHER_PART_textBox->TabIndex = 11;
			// 
			// ISMODEL_textBox
			// 
			this->ISMODEL_textBox->Location = System::Drawing::Point(101, 147);
			this->ISMODEL_textBox->Name = L"ISMODEL_textBox";
			this->ISMODEL_textBox->Size = System::Drawing::Size(100, 21);
			this->ISMODEL_textBox->TabIndex = 10;
			// 
			// PTYPE_textBox
			// 
			this->PTYPE_textBox->Location = System::Drawing::Point(321, 97);
			this->PTYPE_textBox->Name = L"PTYPE_textBox";
			this->PTYPE_textBox->Size = System::Drawing::Size(100, 21);
			this->PTYPE_textBox->TabIndex = 9;
			// 
			// PRICE_PART_textBox
			// 
			this->PRICE_PART_textBox->Location = System::Drawing::Point(101, 97);
			this->PRICE_PART_textBox->Name = L"PRICE_PART_textBox";
			this->PRICE_PART_textBox->Size = System::Drawing::Size(100, 21);
			this->PRICE_PART_textBox->TabIndex = 8;
			// 
			// PARTNAME_textBox
			// 
			this->PARTNAME_textBox->Location = System::Drawing::Point(321, 47);
			this->PARTNAME_textBox->Name = L"PARTNAME_textBox";
			this->PARTNAME_textBox->Size = System::Drawing::Size(100, 21);
			this->PARTNAME_textBox->TabIndex = 7;
			// 
			// PARTNO_textBox
			// 
			this->PARTNO_textBox->Location = System::Drawing::Point(101, 47);
			this->PARTNO_textBox->Name = L"PARTNO_textBox";
			this->PARTNO_textBox->Size = System::Drawing::Size(100, 21);
			this->PARTNO_textBox->TabIndex = 6;
			// 
			// HIGHER_PART_label
			// 
			this->HIGHER_PART_label->AutoSize = true;
			this->HIGHER_PART_label->Location = System::Drawing::Point(250, 150);
			this->HIGHER_PART_label->Name = L"HIGHER_PART_label";
			this->HIGHER_PART_label->Size = System::Drawing::Size(65, 12);
			this->HIGHER_PART_label->TabIndex = 5;
			this->HIGHER_PART_label->Text = L"상위 부품 :";
			// 
			// ISMODEL_label
			// 
			this->ISMODEL_label->AutoSize = true;
			this->ISMODEL_label->Location = System::Drawing::Point(30, 150);
			this->ISMODEL_label->Name = L"ISMODEL_label";
			this->ISMODEL_label->Size = System::Drawing::Size(65, 12);
			this->ISMODEL_label->TabIndex = 4;
			this->ISMODEL_label->Text = L"모델 여부 :";
			// 
			// PTYPE_label
			// 
			this->PTYPE_label->AutoSize = true;
			this->PTYPE_label->Location = System::Drawing::Point(250, 100);
			this->PTYPE_label->Name = L"PTYPE_label";
			this->PTYPE_label->Size = System::Drawing::Size(65, 12);
			this->PTYPE_label->TabIndex = 3;
			this->PTYPE_label->Text = L"부품 타입 :";
			// 
			// PRICE_PART_label
			// 
			this->PRICE_PART_label->AutoSize = true;
			this->PRICE_PART_label->Location = System::Drawing::Point(30, 100);
			this->PRICE_PART_label->Name = L"PRICE_PART_label";
			this->PRICE_PART_label->Size = System::Drawing::Size(65, 12);
			this->PRICE_PART_label->TabIndex = 2;
			this->PRICE_PART_label->Text = L"부품 가격 :";
			// 
			// PARTNAME_label
			// 
			this->PARTNAME_label->AutoSize = true;
			this->PARTNAME_label->Location = System::Drawing::Point(250, 50);
			this->PARTNAME_label->Name = L"PARTNAME_label";
			this->PARTNAME_label->Size = System::Drawing::Size(65, 12);
			this->PARTNAME_label->TabIndex = 1;
			this->PARTNAME_label->Text = L"부품 이름 :";
			// 
			// PARTNO_label
			// 
			this->PARTNO_label->AutoSize = true;
			this->PARTNO_label->Location = System::Drawing::Point(30, 50);
			this->PARTNO_label->Name = L"PARTNO_label";
			this->PARTNO_label->Size = System::Drawing::Size(65, 12);
			this->PARTNO_label->TabIndex = 0;
			this->PARTNO_label->Text = L"부품 번호 :";
			// 
			// Serve_tabPage
			// 
			this->Serve_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Serve_tabPage->Controls->Add(this->Query7_button);
			this->Serve_tabPage->Controls->Add(this->QUANTITY_textBox);
			this->Serve_tabPage->Controls->Add(this->MEMNO_SERVE_textBox);
			this->Serve_tabPage->Controls->Add(this->FOODNO_SERVE_textBox);
			this->Serve_tabPage->Controls->Add(this->FRACNO_SERVE_textBox);
			this->Serve_tabPage->Controls->Add(this->QUANTITY_label);
			this->Serve_tabPage->Controls->Add(this->MEMNO_SERVE_label);
			this->Serve_tabPage->Controls->Add(this->FOODNO_SERVE_label);
			this->Serve_tabPage->Controls->Add(this->FRACNO_SERVE_label);
			this->Serve_tabPage->Location = System::Drawing::Point(4, 22);
			this->Serve_tabPage->Name = L"Serve_tabPage";
			this->Serve_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Serve_tabPage->Size = System::Drawing::Size(456, 295);
			this->Serve_tabPage->TabIndex = 6;
			this->Serve_tabPage->Text = L"음식 제공";
			// 
			// Query7_button
			// 
			this->Query7_button->Location = System::Drawing::Point(190, 250);
			this->Query7_button->Name = L"Query7_button";
			this->Query7_button->Size = System::Drawing::Size(75, 23);
			this->Query7_button->TabIndex = 8;
			this->Query7_button->Text = L"Query";
			this->Query7_button->UseVisualStyleBackColor = true;
			this->Query7_button->Click += gcnew System::EventHandler(this, &InsertQueryForm::Query7_button_Click);
			// 
			// QUANTITY_textBox
			// 
			this->QUANTITY_textBox->Location = System::Drawing::Point(321, 97);
			this->QUANTITY_textBox->Name = L"QUANTITY_textBox";
			this->QUANTITY_textBox->Size = System::Drawing::Size(100, 21);
			this->QUANTITY_textBox->TabIndex = 7;
			// 
			// MEMNO_SERVE_textBox
			// 
			this->MEMNO_SERVE_textBox->Location = System::Drawing::Point(101, 97);
			this->MEMNO_SERVE_textBox->Name = L"MEMNO_SERVE_textBox";
			this->MEMNO_SERVE_textBox->Size = System::Drawing::Size(100, 21);
			this->MEMNO_SERVE_textBox->TabIndex = 6;
			// 
			// FOODNO_SERVE_textBox
			// 
			this->FOODNO_SERVE_textBox->Location = System::Drawing::Point(321, 47);
			this->FOODNO_SERVE_textBox->Name = L"FOODNO_SERVE_textBox";
			this->FOODNO_SERVE_textBox->Size = System::Drawing::Size(100, 21);
			this->FOODNO_SERVE_textBox->TabIndex = 5;
			// 
			// FRACNO_SERVE_textBox
			// 
			this->FRACNO_SERVE_textBox->Location = System::Drawing::Point(101, 47);
			this->FRACNO_SERVE_textBox->Name = L"FRACNO_SERVE_textBox";
			this->FRACNO_SERVE_textBox->Size = System::Drawing::Size(100, 21);
			this->FRACNO_SERVE_textBox->TabIndex = 4;
			// 
			// QUANTITY_label
			// 
			this->QUANTITY_label->AutoSize = true;
			this->QUANTITY_label->Location = System::Drawing::Point(278, 100);
			this->QUANTITY_label->Name = L"QUANTITY_label";
			this->QUANTITY_label->Size = System::Drawing::Size(37, 12);
			this->QUANTITY_label->TabIndex = 3;
			this->QUANTITY_label->Text = L"수량 :";
			// 
			// MEMNO_SERVE_label
			// 
			this->MEMNO_SERVE_label->AutoSize = true;
			this->MEMNO_SERVE_label->Location = System::Drawing::Point(30, 100);
			this->MEMNO_SERVE_label->Name = L"MEMNO_SERVE_label";
			this->MEMNO_SERVE_label->Size = System::Drawing::Size(65, 12);
			this->MEMNO_SERVE_label->TabIndex = 2;
			this->MEMNO_SERVE_label->Text = L"회원 번호 :";
			// 
			// FOODNO_SERVE_label
			// 
			this->FOODNO_SERVE_label->AutoSize = true;
			this->FOODNO_SERVE_label->Location = System::Drawing::Point(250, 50);
			this->FOODNO_SERVE_label->Name = L"FOODNO_SERVE_label";
			this->FOODNO_SERVE_label->Size = System::Drawing::Size(65, 12);
			this->FOODNO_SERVE_label->TabIndex = 1;
			this->FOODNO_SERVE_label->Text = L"음식 번호 :";
			// 
			// FRACNO_SERVE_label
			// 
			this->FRACNO_SERVE_label->AutoSize = true;
			this->FRACNO_SERVE_label->Location = System::Drawing::Point(18, 50);
			this->FRACNO_SERVE_label->Name = L"FRACNO_SERVE_label";
			this->FRACNO_SERVE_label->Size = System::Drawing::Size(77, 12);
			this->FRACNO_SERVE_label->TabIndex = 0;
			this->FRACNO_SERVE_label->Text = L"가맹점 번호 :";
			// 
			// InsertQueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 321);
			this->Controls->Add(this->Insert_tabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"InsertQueryForm";
			this->Text = L"Insert Query";
			this->Insert_tabControl->ResumeLayout(false);
			this->Storekeeper_tabPage->ResumeLayout(false);
			this->Storekeeper_tabPage->PerformLayout();
			this->Franchise_tabPage->ResumeLayout(false);
			this->Franchise_tabPage->PerformLayout();
			this->Member_tabPage->ResumeLayout(false);
			this->Member_tabPage->PerformLayout();
			this->Computer_tabPage->ResumeLayout(false);
			this->Computer_tabPage->PerformLayout();
			this->Food_tabPage->ResumeLayout(false);
			this->Food_tabPage->PerformLayout();
			this->Part_tabPage->ResumeLayout(false);
			this->Part_tabPage->PerformLayout();
			this->Serve_tabPage->ResumeLayout(false);
			this->Serve_tabPage->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



		private: System::Void Query1_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, stokNo, stokName, stokPhoneNo, stokScore;
			ProcessQuery PQ;

			stokNo = msclr::interop::marshal_as<string>(this->STOKNO_textBox->Text);
			stokName = msclr::interop::marshal_as<string>(this->STOKNAME_textBox->Text);
			stokPhoneNo = msclr::interop::marshal_as<string>(this->PHONENO_STOK_textBox->Text);
			stokScore = msclr::interop::marshal_as<string>(this->SCORE_textBox->Text);
			strQuery = "INSERT INTO STOREKEEPER VALUES (" + stokNo + ", '" + stokName + "', '" + stokPhoneNo + "', " + stokScore + ")";
			PQ.UpdateQuery(strQuery);
		}
		private: System::Void Query2_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, fracNo, compN, price, sales, stokNo;
			ProcessQuery PQ;

			fracNo = msclr::interop::marshal_as<string>(this->FRACNO_textBox->Text);
			compN = msclr::interop::marshal_as<string>(this->COMPN_textBox->Text);
			price = msclr::interop::marshal_as<string>(this->PRICE_FRAC_textBox->Text);
			sales = msclr::interop::marshal_as<string>(this->SALES_textBox->Text);
			stokNo = msclr::interop::marshal_as<string>(this->STOKNO_FRAC_textBox->Text);
			strQuery = "INSERT INTO FRANCHISE VALUES (" + fracNo + ", " + compN + ", " + price + ", " + sales + ", " + stokNo + ")";
			PQ.UpdateQuery(strQuery);
		}
		private: System::Void Query3_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, memNo, memName, ID, password, phoneNo;
			ProcessQuery PQ;

			memNo = msclr::interop::marshal_as<string>(this->MEMNO_textBox->Text);
			memName = msclr::interop::marshal_as<string>(this->MEMNAME_textBox->Text);
			ID = msclr::interop::marshal_as<string>(this->ID_textBox->Text);
			password = msclr::interop::marshal_as<string>(this->PASSWORD_textBox->Text);
			phoneNo = msclr::interop::marshal_as<string>(this->PHONENO_MEM_textBox->Text);
			strQuery = "INSERT INTO MEMBER VALUES (" + memNo + ", '" + memName + "', '" + ID + "', '" + password + "', '" + phoneNo + "')";
			PQ.UpdateQuery(strQuery);
		}
		private: System::Void Query4_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, compNo, fracNo, ram, modelNo;
			ProcessQuery PQ;

			compNo = msclr::interop::marshal_as<string>(this->COMPNO_textBox->Text);
			fracNo = msclr::interop::marshal_as<string>(this->FRACNO_COMP_textBox->Text);
			ram = msclr::interop::marshal_as<string>(this->RAM_textBox->Text);
			modelNo = msclr::interop::marshal_as<string>(this->MODELNO_textBox->Text);
			strQuery = "INSERT INTO COMPUTER VALUES (" + compNo + ", " + fracNo + ", " + ram + ", " + modelNo + ")";
			PQ.UpdateQuery(strQuery);
		}
		private: System::Void Query5_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, foodNo, foodName, price;
			ProcessQuery PQ;

			foodNo = msclr::interop::marshal_as<string>(this->FOODNO_textBox->Text);
			foodName = msclr::interop::marshal_as<string>(this->FOODNAME_textBox->Text);
			price = msclr::interop::marshal_as<string>(this->PRICE_FOOD_textBox->Text);
			strQuery = "INSERT INTO FOOD VALUES (" + foodNo + ", '" + foodName + "', " + price + ")";
			PQ.UpdateQuery(strQuery);
		}
		private: System::Void Query6_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, partNo, partName, price, pType, isModel, higherPart;
			ProcessQuery PQ;

			partNo = msclr::interop::marshal_as<string>(this->PARTNO_textBox->Text);
			partName = msclr::interop::marshal_as<string>(this->PARTNAME_textBox->Text);
			price = msclr::interop::marshal_as<string>(this->PRICE_PART_textBox->Text);
			pType = msclr::interop::marshal_as<string>(this->PTYPE_textBox->Text);
			isModel = msclr::interop::marshal_as<string>(this->ISMODEL_textBox->Text);
			higherPart = msclr::interop::marshal_as<string>(this->HIGHER_PART_textBox->Text);
			strQuery = "INSERT INTO PART VALUES (" + partNo + ", '" + partName + "', " + price + ", '" + pType + "', '" + isModel + "', " + higherPart + ")";
			PQ.UpdateQuery(strQuery);
		}
		private: System::Void Query7_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, fracNo, foodNo, memNo, quantity;
			ProcessQuery PQ;

			fracNo = msclr::interop::marshal_as<string>(this->FRACNO_SERVE_textBox->Text);
			foodNo = msclr::interop::marshal_as<string>(this->FOODNO_SERVE_textBox->Text);
			memNo = msclr::interop::marshal_as<string>(this->MEMNO_SERVE_textBox->Text);
			quantity = msclr::interop::marshal_as<string>(this->QUANTITY_textBox->Text);
			strQuery = "INSERT INTO SERVE VALUES (" + fracNo + ", " + foodNo + ", " + memNo + ", " + quantity + ")";
			PQ.UpdateQuery(strQuery);
		}
	};
}
