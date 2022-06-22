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
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class SelectQueryForm : public System::Windows::Forms::Form
	{
	public:
		SelectQueryForm(void)
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
		~SelectQueryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Select_tabControl;
	protected:
	private: System::Windows::Forms::TabPage^ Scenario1_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario2_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario3_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario4_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario5_tabPage;
	private: System::Windows::Forms::TabPage^ Scenario6_tabPage;
	private: System::Windows::Forms::DataGridView^ Scenario1_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario2_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario3_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario4_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario5_dataGridView;
	private: System::Windows::Forms::DataGridView^ Scenario6_dataGridView;
	private: System::Windows::Forms::Label^ Scenario1_03_label;
	private: System::Windows::Forms::Button^ Scenario1_button;
	private: System::Windows::Forms::TextBox^ SCORE_textBox;
	private: System::Windows::Forms::Label^ Scenario1_02_label;
	private: System::Windows::Forms::Label^ Scenario1_01_label;
	private: System::Windows::Forms::Label^ Scenario2_01_label;
	private: System::Windows::Forms::Label^ Scenario2_02_label;
	private: System::Windows::Forms::TextBox^ PTYPE_textBox;

	private: System::Windows::Forms::Button^ Scenario2_button;
	private: System::Windows::Forms::Label^ Scenario2_03_label;
	private: System::Windows::Forms::Label^ Scenario3_02_label;
	private: System::Windows::Forms::TextBox^ COMPN_textBox;

	private: System::Windows::Forms::Button^ Scenario3_button;
	private: System::Windows::Forms::Label^ Scenario3_03_label;
	private: System::Windows::Forms::Label^ Scenario3_01_label;
	private: System::Windows::Forms::Label^ Scenario3_04_label;
	private: System::Windows::Forms::Button^ Scenario4_button;
	private: System::Windows::Forms::Label^ Scenario4_02_label;
	private: System::Windows::Forms::Label^ Scenario4_01_label;
	private: System::Windows::Forms::Label^ Scenario5_01_label;
	private: System::Windows::Forms::Button^ Scenario5_button;
	private: System::Windows::Forms::Button^ Scenario6_button;
	private: System::Windows::Forms::Label^ Scenario6_01_label;











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
			this->Select_tabControl = (gcnew System::Windows::Forms::TabControl());
			this->Scenario1_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario1_03_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_button = (gcnew System::Windows::Forms::Button());
			this->SCORE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario1_02_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario1_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario2_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario2_03_label = (gcnew System::Windows::Forms::Label());
			this->Scenario2_button = (gcnew System::Windows::Forms::Button());
			this->Scenario2_02_label = (gcnew System::Windows::Forms::Label());
			this->PTYPE_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario2_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario2_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario3_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario3_04_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_02_label = (gcnew System::Windows::Forms::Label());
			this->COMPN_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Scenario3_button = (gcnew System::Windows::Forms::Button());
			this->Scenario3_03_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario3_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario4_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario4_button = (gcnew System::Windows::Forms::Button());
			this->Scenario4_02_label = (gcnew System::Windows::Forms::Label());
			this->Scenario4_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario4_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario5_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario5_button = (gcnew System::Windows::Forms::Button());
			this->Scenario5_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario5_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Scenario6_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->Scenario6_button = (gcnew System::Windows::Forms::Button());
			this->Scenario6_01_label = (gcnew System::Windows::Forms::Label());
			this->Scenario6_dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Select_tabControl->SuspendLayout();
			this->Scenario1_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario1_dataGridView))->BeginInit();
			this->Scenario2_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario2_dataGridView))->BeginInit();
			this->Scenario3_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario3_dataGridView))->BeginInit();
			this->Scenario4_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario4_dataGridView))->BeginInit();
			this->Scenario5_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario5_dataGridView))->BeginInit();
			this->Scenario6_tabPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario6_dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// Select_tabControl
			// 
			this->Select_tabControl->Controls->Add(this->Scenario1_tabPage);
			this->Select_tabControl->Controls->Add(this->Scenario2_tabPage);
			this->Select_tabControl->Controls->Add(this->Scenario3_tabPage);
			this->Select_tabControl->Controls->Add(this->Scenario4_tabPage);
			this->Select_tabControl->Controls->Add(this->Scenario5_tabPage);
			this->Select_tabControl->Controls->Add(this->Scenario6_tabPage);
			this->Select_tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Select_tabControl->Location = System::Drawing::Point(0, 0);
			this->Select_tabControl->Name = L"Select_tabControl";
			this->Select_tabControl->SelectedIndex = 0;
			this->Select_tabControl->Size = System::Drawing::Size(624, 441);
			this->Select_tabControl->TabIndex = 0;
			// 
			// Scenario1_tabPage
			// 
			this->Scenario1_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario1_tabPage->Controls->Add(this->Scenario1_03_label);
			this->Scenario1_tabPage->Controls->Add(this->Scenario1_button);
			this->Scenario1_tabPage->Controls->Add(this->SCORE_textBox);
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
			// Scenario1_03_label
			// 
			this->Scenario1_03_label->AutoSize = true;
			this->Scenario1_03_label->Location = System::Drawing::Point(30, 51);
			this->Scenario1_03_label->Name = L"Scenario1_03_label";
			this->Scenario1_03_label->Size = System::Drawing::Size(203, 12);
			this->Scenario1_03_label->TabIndex = 5;
			this->Scenario1_03_label->Text = L"(영업 점수가 높은 순서대로 보여라.)";
			// 
			// Scenario1_button
			// 
			this->Scenario1_button->Location = System::Drawing::Point(533, 78);
			this->Scenario1_button->Name = L"Scenario1_button";
			this->Scenario1_button->Size = System::Drawing::Size(75, 23);
			this->Scenario1_button->TabIndex = 4;
			this->Scenario1_button->Text = L"Query";
			this->Scenario1_button->UseVisualStyleBackColor = true;
			this->Scenario1_button->Click += gcnew System::EventHandler(this, &SelectQueryForm::Scenario1_button_Click);
			// 
			// SCORE_textBox
			// 
			this->SCORE_textBox->Location = System::Drawing::Point(105, 27);
			this->SCORE_textBox->Name = L"SCORE_textBox";
			this->SCORE_textBox->Size = System::Drawing::Size(100, 21);
			this->SCORE_textBox->TabIndex = 3;
			this->SCORE_textBox->Text = L"0.1 ~ 5.0";
			this->SCORE_textBox->Click += gcnew System::EventHandler(this, &SelectQueryForm::SCORE_textBox_Click);
			// 
			// Scenario1_02_label
			// 
			this->Scenario1_02_label->AutoSize = true;
			this->Scenario1_02_label->Location = System::Drawing::Point(211, 30);
			this->Scenario1_02_label->Name = L"Scenario1_02_label";
			this->Scenario1_02_label->Size = System::Drawing::Size(277, 12);
			this->Scenario1_02_label->TabIndex = 2;
			this->Scenario1_02_label->Text = L"점 이상인 점주의 점주 번호와 영업 점수를 보여라.";
			// 
			// Scenario1_01_label
			// 
			this->Scenario1_01_label->AutoSize = true;
			this->Scenario1_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario1_01_label->Name = L"Scenario1_01_label";
			this->Scenario1_01_label->Size = System::Drawing::Size(69, 12);
			this->Scenario1_01_label->TabIndex = 1;
			this->Scenario1_01_label->Text = L"영업 점수가";
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
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_03_label);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_button);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_02_label);
			this->Scenario2_tabPage->Controls->Add(this->PTYPE_textBox);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_01_label);
			this->Scenario2_tabPage->Controls->Add(this->Scenario2_dataGridView);
			this->Scenario2_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario2_tabPage->Name = L"Scenario2_tabPage";
			this->Scenario2_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario2_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario2_tabPage->TabIndex = 1;
			this->Scenario2_tabPage->Text = L"Scenario 2";
			// 
			// Scenario2_03_label
			// 
			this->Scenario2_03_label->AutoSize = true;
			this->Scenario2_03_label->Location = System::Drawing::Point(30, 70);
			this->Scenario2_03_label->Name = L"Scenario2_03_label";
			this->Scenario2_03_label->Size = System::Drawing::Size(204, 12);
			this->Scenario2_03_label->TabIndex = 6;
			this->Scenario2_03_label->Text = L"(ex. MODEL, CPU, GPU, DISPLAY)";
			// 
			// Scenario2_button
			// 
			this->Scenario2_button->Location = System::Drawing::Point(533, 78);
			this->Scenario2_button->Name = L"Scenario2_button";
			this->Scenario2_button->Size = System::Drawing::Size(75, 23);
			this->Scenario2_button->TabIndex = 5;
			this->Scenario2_button->Text = L"Query";
			this->Scenario2_button->UseVisualStyleBackColor = true;
			this->Scenario2_button->Click += gcnew System::EventHandler(this, &SelectQueryForm::Scenario2_button_Click);
			// 
			// Scenario2_02_label
			// 
			this->Scenario2_02_label->AutoSize = true;
			this->Scenario2_02_label->Location = System::Drawing::Point(30, 50);
			this->Scenario2_02_label->Name = L"Scenario2_02_label";
			this->Scenario2_02_label->Size = System::Drawing::Size(273, 12);
			this->Scenario2_02_label->TabIndex = 4;
			this->Scenario2_02_label->Text = L"부품의 부품 번호, 부품 이름, 부품 타입을 보여라.";
			// 
			// PTYPE_textBox
			// 
			this->PTYPE_textBox->Location = System::Drawing::Point(32, 27);
			this->PTYPE_textBox->Name = L"PTYPE_textBox";
			this->PTYPE_textBox->Size = System::Drawing::Size(100, 21);
			this->PTYPE_textBox->TabIndex = 3;
			// 
			// Scenario2_01_label
			// 
			this->Scenario2_01_label->AutoSize = true;
			this->Scenario2_01_label->Location = System::Drawing::Point(138, 30);
			this->Scenario2_01_label->Name = L"Scenario2_01_label";
			this->Scenario2_01_label->Size = System::Drawing::Size(191, 12);
			this->Scenario2_01_label->TabIndex = 2;
			this->Scenario2_01_label->Text = L"와(과) 같은 부품 타입을 갖고 있는";
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
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_04_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_02_label);
			this->Scenario3_tabPage->Controls->Add(this->COMPN_textBox);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_button);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_03_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_01_label);
			this->Scenario3_tabPage->Controls->Add(this->Scenario3_dataGridView);
			this->Scenario3_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario3_tabPage->Name = L"Scenario3_tabPage";
			this->Scenario3_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario3_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario3_tabPage->TabIndex = 2;
			this->Scenario3_tabPage->Text = L"Scenario 3";
			// 
			// Scenario3_04_label
			// 
			this->Scenario3_04_label->AutoSize = true;
			this->Scenario3_04_label->Location = System::Drawing::Point(30, 70);
			this->Scenario3_04_label->Name = L"Scenario3_04_label";
			this->Scenario3_04_label->Size = System::Drawing::Size(271, 12);
			this->Scenario3_04_label->TabIndex = 8;
			this->Scenario3_04_label->Text = L"( 매출 비율 = 매출 / (컴퓨터 수 * 시간 당 가격) )";
			// 
			// Scenario3_02_label
			// 
			this->Scenario3_02_label->AutoSize = true;
			this->Scenario3_02_label->Location = System::Drawing::Point(195, 30);
			this->Scenario3_02_label->Name = L"Scenario3_02_label";
			this->Scenario3_02_label->Size = System::Drawing::Size(198, 12);
			this->Scenario3_02_label->TabIndex = 7;
			this->Scenario3_02_label->Text = L"대 이상 설치된 PC방 가맹점 중에서";
			// 
			// COMPN_textBox
			// 
			this->COMPN_textBox->Location = System::Drawing::Point(89, 27);
			this->COMPN_textBox->Name = L"COMPN_textBox";
			this->COMPN_textBox->Size = System::Drawing::Size(100, 21);
			this->COMPN_textBox->TabIndex = 6;
			// 
			// Scenario3_button
			// 
			this->Scenario3_button->Location = System::Drawing::Point(533, 78);
			this->Scenario3_button->Name = L"Scenario3_button";
			this->Scenario3_button->Size = System::Drawing::Size(75, 23);
			this->Scenario3_button->TabIndex = 5;
			this->Scenario3_button->Text = L"Query";
			this->Scenario3_button->UseVisualStyleBackColor = true;
			this->Scenario3_button->Click += gcnew System::EventHandler(this, &SelectQueryForm::Scenario3_button_Click);
			// 
			// Scenario3_03_label
			// 
			this->Scenario3_03_label->AutoSize = true;
			this->Scenario3_03_label->Location = System::Drawing::Point(30, 50);
			this->Scenario3_03_label->Name = L"Scenario3_03_label";
			this->Scenario3_03_label->Size = System::Drawing::Size(413, 12);
			this->Scenario3_03_label->TabIndex = 4;
			this->Scenario3_03_label->Text = L"컴퓨터 수와 시간 당 가격에 따른 매출 비율이 높은 순으로 정렬하여 보여라.";
			// 
			// Scenario3_01_label
			// 
			this->Scenario3_01_label->AutoSize = true;
			this->Scenario3_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario3_01_label->Name = L"Scenario3_01_label";
			this->Scenario3_01_label->Size = System::Drawing::Size(53, 12);
			this->Scenario3_01_label->TabIndex = 3;
			this->Scenario3_01_label->Text = L"컴퓨터가";
			// 
			// Scenario3_dataGridView
			// 
			this->Scenario3_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario3_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario3_dataGridView->Name = L"Scenario3_dataGridView";
			this->Scenario3_dataGridView->RowTemplate->Height = 23;
			this->Scenario3_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario3_dataGridView->TabIndex = 2;
			// 
			// Scenario4_tabPage
			// 
			this->Scenario4_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_button);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_02_label);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_01_label);
			this->Scenario4_tabPage->Controls->Add(this->Scenario4_dataGridView);
			this->Scenario4_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario4_tabPage->Name = L"Scenario4_tabPage";
			this->Scenario4_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario4_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario4_tabPage->TabIndex = 3;
			this->Scenario4_tabPage->Text = L"Scenario 4";
			// 
			// Scenario4_button
			// 
			this->Scenario4_button->Location = System::Drawing::Point(533, 78);
			this->Scenario4_button->Name = L"Scenario4_button";
			this->Scenario4_button->Size = System::Drawing::Size(75, 23);
			this->Scenario4_button->TabIndex = 5;
			this->Scenario4_button->Text = L"Query";
			this->Scenario4_button->UseVisualStyleBackColor = true;
			this->Scenario4_button->Click += gcnew System::EventHandler(this, &SelectQueryForm::Scenario4_button_Click);
			// 
			// Scenario4_02_label
			// 
			this->Scenario4_02_label->AutoSize = true;
			this->Scenario4_02_label->Location = System::Drawing::Point(30, 50);
			this->Scenario4_02_label->Name = L"Scenario4_02_label";
			this->Scenario4_02_label->Size = System::Drawing::Size(405, 12);
			this->Scenario4_02_label->TabIndex = 4;
			this->Scenario4_02_label->Text = L"가맹점 번호, 그 가맹점을 운영하고 있는 점주에 대한 정보, 매출을 보여라.";
			// 
			// Scenario4_01_label
			// 
			this->Scenario4_01_label->AutoSize = true;
			this->Scenario4_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario4_01_label->Name = L"Scenario4_01_label";
			this->Scenario4_01_label->Size = System::Drawing::Size(165, 12);
			this->Scenario4_01_label->TabIndex = 3;
			this->Scenario4_01_label->Text = L"가맹점의 매출이 높은 순서로,";
			// 
			// Scenario4_dataGridView
			// 
			this->Scenario4_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario4_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario4_dataGridView->Name = L"Scenario4_dataGridView";
			this->Scenario4_dataGridView->RowTemplate->Height = 23;
			this->Scenario4_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario4_dataGridView->TabIndex = 2;
			// 
			// Scenario5_tabPage
			// 
			this->Scenario5_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario5_tabPage->Controls->Add(this->Scenario5_button);
			this->Scenario5_tabPage->Controls->Add(this->Scenario5_01_label);
			this->Scenario5_tabPage->Controls->Add(this->Scenario5_dataGridView);
			this->Scenario5_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario5_tabPage->Name = L"Scenario5_tabPage";
			this->Scenario5_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario5_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario5_tabPage->TabIndex = 4;
			this->Scenario5_tabPage->Text = L"Scenario 5";
			// 
			// Scenario5_button
			// 
			this->Scenario5_button->Location = System::Drawing::Point(533, 78);
			this->Scenario5_button->Name = L"Scenario5_button";
			this->Scenario5_button->Size = System::Drawing::Size(75, 23);
			this->Scenario5_button->TabIndex = 4;
			this->Scenario5_button->Text = L"Query";
			this->Scenario5_button->UseVisualStyleBackColor = true;
			this->Scenario5_button->Click += gcnew System::EventHandler(this, &SelectQueryForm::Scenario5_button_Click);
			// 
			// Scenario5_01_label
			// 
			this->Scenario5_01_label->AutoSize = true;
			this->Scenario5_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario5_01_label->Name = L"Scenario5_01_label";
			this->Scenario5_01_label->Size = System::Drawing::Size(249, 12);
			this->Scenario5_01_label->TabIndex = 3;
			this->Scenario5_01_label->Text = L"현재까지 판매된 각 메뉴의 총 개수를 보여라.";
			// 
			// Scenario5_dataGridView
			// 
			this->Scenario5_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario5_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario5_dataGridView->Name = L"Scenario5_dataGridView";
			this->Scenario5_dataGridView->RowTemplate->Height = 23;
			this->Scenario5_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario5_dataGridView->TabIndex = 2;
			// 
			// Scenario6_tabPage
			// 
			this->Scenario6_tabPage->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Scenario6_tabPage->Controls->Add(this->Scenario6_button);
			this->Scenario6_tabPage->Controls->Add(this->Scenario6_01_label);
			this->Scenario6_tabPage->Controls->Add(this->Scenario6_dataGridView);
			this->Scenario6_tabPage->Location = System::Drawing::Point(4, 22);
			this->Scenario6_tabPage->Name = L"Scenario6_tabPage";
			this->Scenario6_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->Scenario6_tabPage->Size = System::Drawing::Size(616, 415);
			this->Scenario6_tabPage->TabIndex = 5;
			this->Scenario6_tabPage->Text = L"Scenario 6";
			// 
			// Scenario6_button
			// 
			this->Scenario6_button->Location = System::Drawing::Point(533, 78);
			this->Scenario6_button->Name = L"Scenario6_button";
			this->Scenario6_button->Size = System::Drawing::Size(75, 23);
			this->Scenario6_button->TabIndex = 4;
			this->Scenario6_button->Text = L"Query";
			this->Scenario6_button->UseVisualStyleBackColor = true;
			this->Scenario6_button->Click += gcnew System::EventHandler(this, &SelectQueryForm::Scenario6_button_Click);
			// 
			// Scenario6_01_label
			// 
			this->Scenario6_01_label->AutoSize = true;
			this->Scenario6_01_label->Location = System::Drawing::Point(30, 30);
			this->Scenario6_01_label->Name = L"Scenario6_01_label";
			this->Scenario6_01_label->Size = System::Drawing::Size(453, 12);
			this->Scenario6_01_label->TabIndex = 3;
			this->Scenario6_01_label->Text = L"모든 컴퓨터 모델에 들어가는 부품들의 부품 이름과 부품 가격, 부품 타입을 보여라.";
			// 
			// Scenario6_dataGridView
			// 
			this->Scenario6_dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Scenario6_dataGridView->Location = System::Drawing::Point(8, 107);
			this->Scenario6_dataGridView->Name = L"Scenario6_dataGridView";
			this->Scenario6_dataGridView->RowTemplate->Height = 23;
			this->Scenario6_dataGridView->Size = System::Drawing::Size(600, 300);
			this->Scenario6_dataGridView->TabIndex = 2;
			// 
			// SelectQueryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 441);
			this->Controls->Add(this->Select_tabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"SelectQueryForm";
			this->Text = L"Select Query";
			this->Select_tabControl->ResumeLayout(false);
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
			this->Scenario5_tabPage->ResumeLayout(false);
			this->Scenario5_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario5_dataGridView))->EndInit();
			this->Scenario6_tabPage->ResumeLayout(false);
			this->Scenario6_tabPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Scenario6_dataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void SCORE_textBox_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (this->SCORE_textBox->Text == "0.1 ~ 5.0")
				this->SCORE_textBox->Clear();
		}
		private: System::Void Scenario1_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, score;
			ProcessQuery PQ;
			
			score = msclr::interop::marshal_as<string>(this->SCORE_textBox->Text);
			strQuery = "SELECT STOKNO, SCORE FROM STOREKEEPER WHERE SCORE >= " + score + " ORDER BY SCORE DESC, STOKNO";
			PQ.CustomQuery(this->Scenario1_dataGridView, strQuery);
		}
		private: System::Void Scenario2_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, type;
			ProcessQuery PQ;

			type = msclr::interop::marshal_as<string>(this->PTYPE_textBox->Text);
			strQuery = "SELECT PARTNO, PARTNAME, PTYPE FROM PART WHERE PTYPE = '" + type + "'";
			PQ.CustomQuery(this->Scenario2_dataGridView, strQuery);
		}
		private: System::Void Scenario3_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery, compn;
			ProcessQuery PQ;

			compn = msclr::interop::marshal_as<string>(this->COMPN_textBox->Text);
			strQuery = "SELECT FRACNO, SALES, SALES / (COMPN * PRICE) AS SALESRATIO FROM FRANCHISE WHERE COMPN >= " + compn + " ORDER BY SALESRATIO DESC, FRACNO";
			PQ.CustomQuery(this->Scenario3_dataGridView, strQuery);
		}
		private: System::Void Scenario4_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery;
			ProcessQuery PQ;

			strQuery = "SELECT FRACNO, S.STOKNO, STOKNAME, SALES FROM FRANCHISE AS F, STOREKEEPER AS S WHERE F.STOKNO = S.STOKNO ORDER BY SALES DESC, FRACNO";
			PQ.CustomQuery(this->Scenario4_dataGridView, strQuery);
		}
		private: System::Void Scenario5_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery;
			ProcessQuery PQ;

			strQuery = "SELECT F.FOODNO, F.FOODNAME, NS.SUM_QUANTITY FROM FOOD AS F, (SELECT S.FOODNO, SUM(S.QUANTITY) AS SUM_QUANTITY FROM SERVE AS S GROUP BY S.FOODNO) AS NS WHERE F.FOODNO = NS.FOODNO";
			PQ.CustomQuery(this->Scenario5_dataGridView, strQuery);
		}
		private: System::Void Scenario6_button_Click(System::Object^ sender, System::EventArgs^ e)
		{
			string strQuery;
			ProcessQuery PQ;

			strQuery = "SELECT P1.PARTNO, P2.PARTNO AS HIGHER_PART, P1.PARTNAME, P1.PRICE, P1.PTYPE FROM PART AS P1, PART AS P2 WHERE P1.HIGHER_PART = P2.PARTNO ORDER BY P1.PTYPE";
			PQ.CustomQuery(this->Scenario6_dataGridView, strQuery);
		}
	};
}
