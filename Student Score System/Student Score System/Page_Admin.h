#pragma once
#include "MainForm.h"
#include "Global.h"
#include "Major.h"
#include "Course.h"
#include "Class.h"

namespace Student_Score_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// Summary for Page_Admin
	/// </summary>
	public ref class Page_Admin : public System::Windows::Forms::Form
	{
	public:
		Page_Admin(void)
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
		~Page_Admin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label_Configure_Account;
	private: System::Windows::Forms::Panel^ panel_Configure_Account;










	private: System::Windows::Forms::RadioButton^ radioButton_Student;
	private: System::Windows::Forms::RadioButton^ radioButton_Teacher;
	private: System::Windows::Forms::RadioButton^ radioButton_Administrator;
	private: System::Windows::Forms::Label^ label_Account_Type;
	private: System::Windows::Forms::Button^ button_Delete;
	private: System::Windows::Forms::Button^ button_Modify_Save_Update;

	private: System::Windows::Forms::Button^ button_Add_Cancel;
	private: System::Windows::Forms::TextBox^ textBox_Name;

	private: System::Windows::Forms::Label^ label_Password;
	private: System::Windows::Forms::Label^ label_Username;
	private: System::Windows::Forms::CheckBox^ checkBox_Show_Password;
	private: System::Windows::Forms::Label^ label_Name;
	private: System::Windows::Forms::TextBox^ textBox_Password;
	private: System::Windows::Forms::TextBox^ textBox_Username;
	private: System::Windows::Forms::ComboBox^ comboBox_Major_Subject;

	private: System::Windows::Forms::Label^ label_Major_Subject;
	private: System::Windows::Forms::TextBox^ textBox_StudentID_TeacherID;


	private: System::Windows::Forms::Label^ label_StudentID_TeacherID;

	private: System::Windows::Forms::Label^ label_Class;





	private: System::Windows::Forms::DataGridView^ dataGridView_Account;
	private: System::Windows::Forms::Label^ label_Semester;
	private: System::Windows::Forms::ComboBox^ comboBox_Semester;
	private: System::Windows::Forms::Panel^ panel_Configure_Major;
	private: System::Windows::Forms::DataGridView^ dataGridView_Major;
	private: System::Windows::Forms::Label^ label_Major_Name;
	private: System::Windows::Forms::Button^ button_Major_Delete;

















	private: System::Windows::Forms::Button^ button_Major_Modify_Save_Update;

	private: System::Windows::Forms::Button^ button_Major_Add_Cancel;

	private: System::Windows::Forms::TextBox^ textBox_Major_Name;





	private: System::Windows::Forms::Label^ label_Configure_Major;
	private: System::Windows::Forms::Panel^ panel_Configure_Course;
	private: System::Windows::Forms::Label^ label_Course_Semester;
	private: System::Windows::Forms::ComboBox^ comboBox_Course_Semester;




	private: System::Windows::Forms::DataGridView^ dataGridView_Course;
private: System::Windows::Forms::TextBox^ textBox_Course_Name;




private: System::Windows::Forms::Label^ label_Course_Name;

private: System::Windows::Forms::Label^ label_Course_Major;
private: System::Windows::Forms::ComboBox^ comboBox_Course_Major;
private: System::Windows::Forms::Button^ button_Course_Delete;
private: System::Windows::Forms::TextBox^ textBox_Course_Credit;










private: System::Windows::Forms::Button^ button_Course_Modify_Save_Update;

private: System::Windows::Forms::Button^ button_Course_Add_Cancel;






private: System::Windows::Forms::Label^ label_Configure_Course;
private: System::Windows::Forms::Panel^ panel_Configure_Class;




private: System::Windows::Forms::DataGridView^ dataGridView_Class;
private: System::Windows::Forms::TextBox^ textBox_Class_Name;
private: System::Windows::Forms::Label^ label_Class_Name;










private: System::Windows::Forms::Label^ label_Class_Major;
private: System::Windows::Forms::ComboBox^ comboBox_Class_Major;


private: System::Windows::Forms::Button^ button_Class_Delete;







private: System::Windows::Forms::Button^ button_Class_Modify_Save_Update;

private: System::Windows::Forms::Button^ button_Class_Add_Cancel;






private: System::Windows::Forms::Label^ label_Configure_Class;
private: System::Windows::Forms::ComboBox^ comboBox_Class;




private: System::Windows::Forms::Label^ label_Course_Credit ;




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label_Configure_Account = (gcnew System::Windows::Forms::Label());
			this->panel_Configure_Account = (gcnew System::Windows::Forms::Panel());
			this->comboBox_Class = (gcnew System::Windows::Forms::ComboBox());
			this->label_Semester = (gcnew System::Windows::Forms::Label());
			this->comboBox_Semester = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView_Account = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_StudentID_TeacherID = (gcnew System::Windows::Forms::TextBox());
			this->label_StudentID_TeacherID = (gcnew System::Windows::Forms::Label());
			this->label_Class = (gcnew System::Windows::Forms::Label());
			this->label_Major_Subject = (gcnew System::Windows::Forms::Label());
			this->comboBox_Major_Subject = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->label_Password = (gcnew System::Windows::Forms::Label());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->checkBox_Show_Password = (gcnew System::Windows::Forms::CheckBox());
			this->label_Name = (gcnew System::Windows::Forms::Label());
			this->button_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Modify_Save_Update = (gcnew System::Windows::Forms::Button());
			this->button_Add_Cancel = (gcnew System::Windows::Forms::Button());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->radioButton_Student = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Teacher = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_Administrator = (gcnew System::Windows::Forms::RadioButton());
			this->label_Account_Type = (gcnew System::Windows::Forms::Label());
			this->panel_Configure_Major = (gcnew System::Windows::Forms::Panel());
			this->dataGridView_Major = (gcnew System::Windows::Forms::DataGridView());
			this->label_Major_Name = (gcnew System::Windows::Forms::Label());
			this->button_Major_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Major_Modify_Save_Update = (gcnew System::Windows::Forms::Button());
			this->button_Major_Add_Cancel = (gcnew System::Windows::Forms::Button());
			this->textBox_Major_Name = (gcnew System::Windows::Forms::TextBox());
			this->label_Configure_Major = (gcnew System::Windows::Forms::Label());
			this->panel_Configure_Course = (gcnew System::Windows::Forms::Panel());
			this->textBox_Course_Credit = (gcnew System::Windows::Forms::TextBox());
			this->label_Course_Credit = (gcnew System::Windows::Forms::Label());
			this->label_Course_Semester = (gcnew System::Windows::Forms::Label());
			this->comboBox_Course_Semester = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView_Course = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_Course_Name = (gcnew System::Windows::Forms::TextBox());
			this->label_Course_Name = (gcnew System::Windows::Forms::Label());
			this->label_Course_Major = (gcnew System::Windows::Forms::Label());
			this->comboBox_Course_Major = (gcnew System::Windows::Forms::ComboBox());
			this->button_Course_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Course_Modify_Save_Update = (gcnew System::Windows::Forms::Button());
			this->button_Course_Add_Cancel = (gcnew System::Windows::Forms::Button());
			this->label_Configure_Course = (gcnew System::Windows::Forms::Label());
			this->panel_Configure_Class = (gcnew System::Windows::Forms::Panel());
			this->dataGridView_Class = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_Class_Name = (gcnew System::Windows::Forms::TextBox());
			this->label_Class_Name = (gcnew System::Windows::Forms::Label());
			this->label_Class_Major = (gcnew System::Windows::Forms::Label());
			this->comboBox_Class_Major = (gcnew System::Windows::Forms::ComboBox());
			this->button_Class_Delete = (gcnew System::Windows::Forms::Button());
			this->button_Class_Modify_Save_Update = (gcnew System::Windows::Forms::Button());
			this->button_Class_Add_Cancel = (gcnew System::Windows::Forms::Button());
			this->label_Configure_Class = (gcnew System::Windows::Forms::Label());
			this->panel_Configure_Account->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Account))->BeginInit();
			this->panel_Configure_Major->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Major))->BeginInit();
			this->panel_Configure_Course->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Course))->BeginInit();
			this->panel_Configure_Class->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Class))->BeginInit();
			this->SuspendLayout();
			// 
			// label_Configure_Account
			// 
			this->label_Configure_Account->AutoSize = true;
			this->label_Configure_Account->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Configure_Account->Location = System::Drawing::Point(17, 13);
			this->label_Configure_Account->Name = L"label_Configure_Account";
			this->label_Configure_Account->Size = System::Drawing::Size(149, 20);
			this->label_Configure_Account->TabIndex = 2;
			this->label_Configure_Account->Text = L"Configure Account :";
			// 
			// panel_Configure_Account
			// 
			this->panel_Configure_Account->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Configure_Account->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Configure_Account->Controls->Add(this->comboBox_Class);
			this->panel_Configure_Account->Controls->Add(this->label_Semester);
			this->panel_Configure_Account->Controls->Add(this->comboBox_Semester);
			this->panel_Configure_Account->Controls->Add(this->dataGridView_Account);
			this->panel_Configure_Account->Controls->Add(this->textBox_StudentID_TeacherID);
			this->panel_Configure_Account->Controls->Add(this->label_StudentID_TeacherID);
			this->panel_Configure_Account->Controls->Add(this->label_Class);
			this->panel_Configure_Account->Controls->Add(this->label_Major_Subject);
			this->panel_Configure_Account->Controls->Add(this->comboBox_Major_Subject);
			this->panel_Configure_Account->Controls->Add(this->textBox_Password);
			this->panel_Configure_Account->Controls->Add(this->textBox_Username);
			this->panel_Configure_Account->Controls->Add(this->label_Password);
			this->panel_Configure_Account->Controls->Add(this->label_Username);
			this->panel_Configure_Account->Controls->Add(this->checkBox_Show_Password);
			this->panel_Configure_Account->Controls->Add(this->label_Name);
			this->panel_Configure_Account->Controls->Add(this->button_Delete);
			this->panel_Configure_Account->Controls->Add(this->button_Modify_Save_Update);
			this->panel_Configure_Account->Controls->Add(this->button_Add_Cancel);
			this->panel_Configure_Account->Controls->Add(this->textBox_Name);
			this->panel_Configure_Account->Controls->Add(this->radioButton_Student);
			this->panel_Configure_Account->Controls->Add(this->radioButton_Teacher);
			this->panel_Configure_Account->Controls->Add(this->radioButton_Administrator);
			this->panel_Configure_Account->Controls->Add(this->label_Account_Type);
			this->panel_Configure_Account->Location = System::Drawing::Point(18, 39);
			this->panel_Configure_Account->Margin = System::Windows::Forms::Padding(4);
			this->panel_Configure_Account->Name = L"panel_Configure_Account";
			this->panel_Configure_Account->Size = System::Drawing::Size(2022, 351);
			this->panel_Configure_Account->TabIndex = 6;
			// 
			// comboBox_Class
			// 
			this->comboBox_Class->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Class->FormattingEnabled = true;
			this->comboBox_Class->Location = System::Drawing::Point(597, 179);
			this->comboBox_Class->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_Class->Name = L"comboBox_Class";
			this->comboBox_Class->Size = System::Drawing::Size(289, 28);
			this->comboBox_Class->TabIndex = 7;
			// 
			// label_Semester
			// 
			this->label_Semester->AutoSize = true;
			this->label_Semester->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Semester->Location = System::Drawing::Point(504, 104);
			this->label_Semester->Name = L"label_Semester";
			this->label_Semester->Size = System::Drawing::Size(86, 20);
			this->label_Semester->TabIndex = 28;
			this->label_Semester->Text = L"Semester :";
			// 
			// comboBox_Semester
			// 
			this->comboBox_Semester->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Semester->FormattingEnabled = true;
			this->comboBox_Semester->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7",
					L"8"
			});
			this->comboBox_Semester->Location = System::Drawing::Point(597, 98);
			this->comboBox_Semester->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_Semester->Name = L"comboBox_Semester";
			this->comboBox_Semester->Size = System::Drawing::Size(48, 28);
			this->comboBox_Semester->TabIndex = 6;
			this->comboBox_Semester->SelectedIndexChanged += gcnew System::EventHandler(this, &Page_Admin::comboBox_Semester_SelectedIndexChanged);
			// 
			// dataGridView_Account
			// 
			this->dataGridView_Account->AllowUserToAddRows = false;
			this->dataGridView_Account->AllowUserToDeleteRows = false;
			this->dataGridView_Account->AllowUserToResizeRows = false;
			this->dataGridView_Account->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView_Account->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Account->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Account->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Account->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_Account->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Account->Location = System::Drawing::Point(1147, 10);
			this->dataGridView_Account->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView_Account->MultiSelect = false;
			this->dataGridView_Account->Name = L"dataGridView_Account";
			this->dataGridView_Account->ReadOnly = true;
			this->dataGridView_Account->RowHeadersVisible = false;
			this->dataGridView_Account->RowHeadersWidth = 51;
			this->dataGridView_Account->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Account->Size = System::Drawing::Size(862, 327);
			this->dataGridView_Account->TabIndex = 26;
			this->dataGridView_Account->TabStop = false;
			this->dataGridView_Account->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Admin::dataGridView_Account_CellClick);
			// 
			// textBox_StudentID_TeacherID
			// 
			this->textBox_StudentID_TeacherID->Location = System::Drawing::Point(597, 61);
			this->textBox_StudentID_TeacherID->Margin = System::Windows::Forms::Padding(4);
			this->textBox_StudentID_TeacherID->Name = L"textBox_StudentID_TeacherID";
			this->textBox_StudentID_TeacherID->Size = System::Drawing::Size(289, 26);
			this->textBox_StudentID_TeacherID->TabIndex = 4;
			// 
			// label_StudentID_TeacherID
			// 
			this->label_StudentID_TeacherID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_StudentID_TeacherID->Location = System::Drawing::Point(486, 67);
			this->label_StudentID_TeacherID->Name = L"label_StudentID_TeacherID";
			this->label_StudentID_TeacherID->Size = System::Drawing::Size(104, 20);
			this->label_StudentID_TeacherID->TabIndex = 24;
			this->label_StudentID_TeacherID->Text = L"Student ID :";
			this->label_StudentID_TeacherID->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_Class
			// 
			this->label_Class->AutoSize = true;
			this->label_Class->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Class->Location = System::Drawing::Point(486, 183);
			this->label_Class->Name = L"label_Class";
			this->label_Class->Size = System::Drawing::Size(102, 20);
			this->label_Class->TabIndex = 22;
			this->label_Class->Text = L"Class Name :";
			// 
			// label_Major_Subject
			// 
			this->label_Major_Subject->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Major_Subject->Location = System::Drawing::Point(491, 144);
			this->label_Major_Subject->Name = L"label_Major_Subject";
			this->label_Major_Subject->Size = System::Drawing::Size(99, 20);
			this->label_Major_Subject->TabIndex = 21;
			this->label_Major_Subject->Text = L"Major :";
			this->label_Major_Subject->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox_Major_Subject
			// 
			this->comboBox_Major_Subject->DropDownHeight = 306;
			this->comboBox_Major_Subject->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Major_Subject->FormattingEnabled = true;
			this->comboBox_Major_Subject->IntegralHeight = false;
			this->comboBox_Major_Subject->Location = System::Drawing::Point(598, 138);
			this->comboBox_Major_Subject->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_Major_Subject->Name = L"comboBox_Major_Subject";
			this->comboBox_Major_Subject->Size = System::Drawing::Size(504, 28);
			this->comboBox_Major_Subject->TabIndex = 5;
			// 
			// textBox_Password
			// 
			this->textBox_Password->Location = System::Drawing::Point(102, 141);
			this->textBox_Password->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->Size = System::Drawing::Size(289, 26);
			this->textBox_Password->TabIndex = 2;
			// 
			// textBox_Username
			// 
			this->textBox_Username->Location = System::Drawing::Point(102, 101);
			this->textBox_Username->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Username->Name = L"textBox_Username";
			this->textBox_Username->Size = System::Drawing::Size(289, 26);
			this->textBox_Username->TabIndex = 1;
			// 
			// label_Password
			// 
			this->label_Password->AutoSize = true;
			this->label_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Password->Location = System::Drawing::Point(6, 147);
			this->label_Password->Name = L"label_Password";
			this->label_Password->Size = System::Drawing::Size(86, 20);
			this->label_Password->TabIndex = 17;
			this->label_Password->Text = L"Password :";
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Username->Location = System::Drawing::Point(3, 107);
			this->label_Username->Name = L"label_Username";
			this->label_Username->Size = System::Drawing::Size(91, 20);
			this->label_Username->TabIndex = 16;
			this->label_Username->Text = L"Username :";
			// 
			// checkBox_Show_Password
			// 
			this->checkBox_Show_Password->AutoSize = true;
			this->checkBox_Show_Password->Location = System::Drawing::Point(102, 181);
			this->checkBox_Show_Password->Margin = System::Windows::Forms::Padding(4);
			this->checkBox_Show_Password->Name = L"checkBox_Show_Password";
			this->checkBox_Show_Password->Size = System::Drawing::Size(148, 24);
			this->checkBox_Show_Password->TabIndex = 3;
			this->checkBox_Show_Password->Text = L"Show Password";
			this->checkBox_Show_Password->UseVisualStyleBackColor = true;
			this->checkBox_Show_Password->CheckedChanged += gcnew System::EventHandler(this, &Page_Admin::checkBox_Show_Password_CheckedChanged);
			// 
			// label_Name
			// 
			this->label_Name->AutoSize = true;
			this->label_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Name->Location = System::Drawing::Point(33, 67);
			this->label_Name->Name = L"label_Name";
			this->label_Name->Size = System::Drawing::Size(59, 20);
			this->label_Name->TabIndex = 14;
			this->label_Name->Text = L"Name :";
			// 
			// button_Delete
			// 
			this->button_Delete->Location = System::Drawing::Point(253, 267);
			this->button_Delete->Margin = System::Windows::Forms::Padding(4);
			this->button_Delete->Name = L"button_Delete";
			this->button_Delete->Size = System::Drawing::Size(112, 36);
			this->button_Delete->TabIndex = 10;
			this->button_Delete->Text = L"Delete";
			this->button_Delete->UseVisualStyleBackColor = true;
			this->button_Delete->Click += gcnew System::EventHandler(this, &Page_Admin::button_Delete_Click);
			// 
			// button_Modify_Save_Update
			// 
			this->button_Modify_Save_Update->Location = System::Drawing::Point(132, 267);
			this->button_Modify_Save_Update->Margin = System::Windows::Forms::Padding(4);
			this->button_Modify_Save_Update->Name = L"button_Modify_Save_Update";
			this->button_Modify_Save_Update->Size = System::Drawing::Size(112, 36);
			this->button_Modify_Save_Update->TabIndex = 9;
			this->button_Modify_Save_Update->Text = L"Modify";
			this->button_Modify_Save_Update->UseVisualStyleBackColor = true;
			this->button_Modify_Save_Update->Click += gcnew System::EventHandler(this, &Page_Admin::button_Modify_Save_Update_Click);
			// 
			// button_Add_Cancel
			// 
			this->button_Add_Cancel->Location = System::Drawing::Point(10, 267);
			this->button_Add_Cancel->Margin = System::Windows::Forms::Padding(4);
			this->button_Add_Cancel->Name = L"button_Add_Cancel";
			this->button_Add_Cancel->Size = System::Drawing::Size(112, 36);
			this->button_Add_Cancel->TabIndex = 8;
			this->button_Add_Cancel->Text = L"Add";
			this->button_Add_Cancel->UseVisualStyleBackColor = true;
			this->button_Add_Cancel->Click += gcnew System::EventHandler(this, &Page_Admin::button_Add_Cancel_Click);
			// 
			// textBox_Name
			// 
			this->textBox_Name->Location = System::Drawing::Point(102, 61);
			this->textBox_Name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(289, 26);
			this->textBox_Name->TabIndex = 0;
			// 
			// radioButton_Student
			// 
			this->radioButton_Student->AutoSize = true;
			this->radioButton_Student->Location = System::Drawing::Point(374, 4);
			this->radioButton_Student->Margin = System::Windows::Forms::Padding(4);
			this->radioButton_Student->Name = L"radioButton_Student";
			this->radioButton_Student->Size = System::Drawing::Size(91, 24);
			this->radioButton_Student->TabIndex = 10;
			this->radioButton_Student->Text = L"Student";
			this->radioButton_Student->UseVisualStyleBackColor = true;
			this->radioButton_Student->CheckedChanged += gcnew System::EventHandler(this, &Page_Admin::radioButton_CheckedChanged);
			// 
			// radioButton_Teacher
			// 
			this->radioButton_Teacher->AutoSize = true;
			this->radioButton_Teacher->Location = System::Drawing::Point(267, 4);
			this->radioButton_Teacher->Margin = System::Windows::Forms::Padding(4);
			this->radioButton_Teacher->Name = L"radioButton_Teacher";
			this->radioButton_Teacher->Size = System::Drawing::Size(92, 24);
			this->radioButton_Teacher->TabIndex = 9;
			this->radioButton_Teacher->Text = L"Teacher";
			this->radioButton_Teacher->UseVisualStyleBackColor = true;
			this->radioButton_Teacher->CheckedChanged += gcnew System::EventHandler(this, &Page_Admin::radioButton_CheckedChanged);
			// 
			// radioButton_Administrator
			// 
			this->radioButton_Administrator->AutoSize = true;
			this->radioButton_Administrator->Location = System::Drawing::Point(130, 4);
			this->radioButton_Administrator->Margin = System::Windows::Forms::Padding(4);
			this->radioButton_Administrator->Name = L"radioButton_Administrator";
			this->radioButton_Administrator->Size = System::Drawing::Size(128, 24);
			this->radioButton_Administrator->TabIndex = 8;
			this->radioButton_Administrator->Text = L"Administrator";
			this->radioButton_Administrator->UseVisualStyleBackColor = true;
			this->radioButton_Administrator->CheckedChanged += gcnew System::EventHandler(this, &Page_Admin::radioButton_CheckedChanged);
			// 
			// label_Account_Type
			// 
			this->label_Account_Type->AutoSize = true;
			this->label_Account_Type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Account_Type->Location = System::Drawing::Point(3, 8);
			this->label_Account_Type->Name = L"label_Account_Type";
			this->label_Account_Type->Size = System::Drawing::Size(114, 20);
			this->label_Account_Type->TabIndex = 7;
			this->label_Account_Type->Text = L"Account Type :";
			// 
			// panel_Configure_Major
			// 
			this->panel_Configure_Major->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Configure_Major->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Configure_Major->Controls->Add(this->dataGridView_Major);
			this->panel_Configure_Major->Controls->Add(this->label_Major_Name);
			this->panel_Configure_Major->Controls->Add(this->button_Major_Delete);
			this->panel_Configure_Major->Controls->Add(this->button_Major_Modify_Save_Update);
			this->panel_Configure_Major->Controls->Add(this->button_Major_Add_Cancel);
			this->panel_Configure_Major->Controls->Add(this->textBox_Major_Name);
			this->panel_Configure_Major->Location = System::Drawing::Point(18, 460);
			this->panel_Configure_Major->Margin = System::Windows::Forms::Padding(4);
			this->panel_Configure_Major->Name = L"panel_Configure_Major";
			this->panel_Configure_Major->Size = System::Drawing::Size(960, 393);
			this->panel_Configure_Major->TabIndex = 30;
			// 
			// dataGridView_Major
			// 
			this->dataGridView_Major->AllowUserToAddRows = false;
			this->dataGridView_Major->AllowUserToDeleteRows = false;
			this->dataGridView_Major->AllowUserToResizeRows = false;
			this->dataGridView_Major->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Major->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Major->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Major->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_Major->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Major->Location = System::Drawing::Point(21, 60);
			this->dataGridView_Major->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView_Major->MultiSelect = false;
			this->dataGridView_Major->Name = L"dataGridView_Major";
			this->dataGridView_Major->ReadOnly = true;
			this->dataGridView_Major->RowHeadersVisible = false;
			this->dataGridView_Major->RowHeadersWidth = 51;
			this->dataGridView_Major->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Major->Size = System::Drawing::Size(918, 311);
			this->dataGridView_Major->TabIndex = 26;
			this->dataGridView_Major->TabStop = false;
			this->dataGridView_Major->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Admin::dataGridView_Major_CellClick);
			// 
			// label_Major_Name
			// 
			this->label_Major_Name->AutoSize = true;
			this->label_Major_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Major_Name->Location = System::Drawing::Point(22, 23);
			this->label_Major_Name->Name = L"label_Major_Name";
			this->label_Major_Name->Size = System::Drawing::Size(102, 20);
			this->label_Major_Name->TabIndex = 14;
			this->label_Major_Name->Text = L"Major Name :";
			// 
			// button_Major_Delete
			// 
			this->button_Major_Delete->Location = System::Drawing::Point(827, 16);
			this->button_Major_Delete->Margin = System::Windows::Forms::Padding(4);
			this->button_Major_Delete->Name = L"button_Major_Delete";
			this->button_Major_Delete->Size = System::Drawing::Size(112, 36);
			this->button_Major_Delete->TabIndex = 14;
			this->button_Major_Delete->Text = L"Delete";
			this->button_Major_Delete->UseVisualStyleBackColor = true;
			this->button_Major_Delete->Click += gcnew System::EventHandler(this, &Page_Admin::button_Major_Delete_Click);
			// 
			// button_Major_Modify_Save_Update
			// 
			this->button_Major_Modify_Save_Update->Location = System::Drawing::Point(705, 16);
			this->button_Major_Modify_Save_Update->Margin = System::Windows::Forms::Padding(4);
			this->button_Major_Modify_Save_Update->Name = L"button_Major_Modify_Save_Update";
			this->button_Major_Modify_Save_Update->Size = System::Drawing::Size(112, 36);
			this->button_Major_Modify_Save_Update->TabIndex = 13;
			this->button_Major_Modify_Save_Update->Text = L"Modify";
			this->button_Major_Modify_Save_Update->UseVisualStyleBackColor = true;
			this->button_Major_Modify_Save_Update->Click += gcnew System::EventHandler(this, &Page_Admin::button_Major_Modify_Save_Update_Click);
			// 
			// button_Major_Add_Cancel
			// 
			this->button_Major_Add_Cancel->Location = System::Drawing::Point(584, 16);
			this->button_Major_Add_Cancel->Margin = System::Windows::Forms::Padding(4);
			this->button_Major_Add_Cancel->Name = L"button_Major_Add_Cancel";
			this->button_Major_Add_Cancel->Size = System::Drawing::Size(112, 36);
			this->button_Major_Add_Cancel->TabIndex = 12;
			this->button_Major_Add_Cancel->Text = L"Add";
			this->button_Major_Add_Cancel->UseVisualStyleBackColor = true;
			this->button_Major_Add_Cancel->Click += gcnew System::EventHandler(this, &Page_Admin::button_Major_Add_Cancel_Click);
			// 
			// textBox_Major_Name
			// 
			this->textBox_Major_Name->Location = System::Drawing::Point(135, 19);
			this->textBox_Major_Name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Major_Name->Name = L"textBox_Major_Name";
			this->textBox_Major_Name->Size = System::Drawing::Size(437, 26);
			this->textBox_Major_Name->TabIndex = 11;
			// 
			// label_Configure_Major
			// 
			this->label_Configure_Major->AutoSize = true;
			this->label_Configure_Major->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Configure_Major->Location = System::Drawing::Point(17, 436);
			this->label_Configure_Major->Name = L"label_Configure_Major";
			this->label_Configure_Major->Size = System::Drawing::Size(129, 20);
			this->label_Configure_Major->TabIndex = 29;
			this->label_Configure_Major->Text = L"Configure Major :";
			// 
			// panel_Configure_Course
			// 
			this->panel_Configure_Course->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Configure_Course->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Configure_Course->Controls->Add(this->textBox_Course_Credit);
			this->panel_Configure_Course->Controls->Add(this->label_Course_Credit);
			this->panel_Configure_Course->Controls->Add(this->label_Course_Semester);
			this->panel_Configure_Course->Controls->Add(this->comboBox_Course_Semester);
			this->panel_Configure_Course->Controls->Add(this->dataGridView_Course);
			this->panel_Configure_Course->Controls->Add(this->textBox_Course_Name);
			this->panel_Configure_Course->Controls->Add(this->label_Course_Name);
			this->panel_Configure_Course->Controls->Add(this->label_Course_Major);
			this->panel_Configure_Course->Controls->Add(this->comboBox_Course_Major);
			this->panel_Configure_Course->Controls->Add(this->button_Course_Delete);
			this->panel_Configure_Course->Controls->Add(this->button_Course_Modify_Save_Update);
			this->panel_Configure_Course->Controls->Add(this->button_Course_Add_Cancel);
			this->panel_Configure_Course->Location = System::Drawing::Point(18, 913);
			this->panel_Configure_Course->Margin = System::Windows::Forms::Padding(4);
			this->panel_Configure_Course->Name = L"panel_Configure_Course";
			this->panel_Configure_Course->Size = System::Drawing::Size(2022, 365);
			this->panel_Configure_Course->TabIndex = 32;
			// 
			// textBox_Course_Credit
			// 
			this->textBox_Course_Credit->Location = System::Drawing::Point(179, 165);
			this->textBox_Course_Credit->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox_Course_Credit->Name = L"textBox_Course_Credit";
			this->textBox_Course_Credit->Size = System::Drawing::Size(616, 26);
			this->textBox_Course_Credit->TabIndex = 23;
			// 
			// label_Course_Credit
			// 
			this->label_Course_Credit->AutoSize = true;
			this->label_Course_Credit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->label_Course_Credit->Location = System::Drawing::Point(111, 168);
			this->label_Course_Credit->Name = L"label_Course_Credit";
			this->label_Course_Credit->Size = System::Drawing::Size(59, 20);
			this->label_Course_Credit->TabIndex = 29;
			this->label_Course_Credit->Text = L"Credit :";
			// 
			// label_Course_Semester
			// 
			this->label_Course_Semester->AutoSize = true;
			this->label_Course_Semester->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Course_Semester->Location = System::Drawing::Point(86, 98);
			this->label_Course_Semester->Name = L"label_Course_Semester";
			this->label_Course_Semester->Size = System::Drawing::Size(86, 20);
			this->label_Course_Semester->TabIndex = 28;
			this->label_Course_Semester->Text = L"Semester :";
			// 
			// comboBox_Course_Semester
			// 
			this->comboBox_Course_Semester->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Course_Semester->FormattingEnabled = true;
			this->comboBox_Course_Semester->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8"
			});
			this->comboBox_Course_Semester->Location = System::Drawing::Point(179, 95);
			this->comboBox_Course_Semester->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_Course_Semester->Name = L"comboBox_Course_Semester";
			this->comboBox_Course_Semester->Size = System::Drawing::Size(48, 28);
			this->comboBox_Course_Semester->TabIndex = 21;
			// 
			// dataGridView_Course
			// 
			this->dataGridView_Course->AllowUserToAddRows = false;
			this->dataGridView_Course->AllowUserToDeleteRows = false;
			this->dataGridView_Course->AllowUserToResizeRows = false;
			this->dataGridView_Course->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView_Course->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Course->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Course->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Course->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView_Course->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Course->Location = System::Drawing::Point(854, 8);
			this->dataGridView_Course->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView_Course->MultiSelect = false;
			this->dataGridView_Course->Name = L"dataGridView_Course";
			this->dataGridView_Course->ReadOnly = true;
			this->dataGridView_Course->RowHeadersVisible = false;
			this->dataGridView_Course->RowHeadersWidth = 51;
			this->dataGridView_Course->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Course->Size = System::Drawing::Size(1161, 351);
			this->dataGridView_Course->TabIndex = 26;
			this->dataGridView_Course->TabStop = false;
			this->dataGridView_Course->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Admin::dataGridView_Course_CellClick);
			// 
			// textBox_Course_Name
			// 
			this->textBox_Course_Name->Location = System::Drawing::Point(179, 131);
			this->textBox_Course_Name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Course_Name->Name = L"textBox_Course_Name";
			this->textBox_Course_Name->Size = System::Drawing::Size(616, 26);
			this->textBox_Course_Name->TabIndex = 22;
			// 
			// label_Course_Name
			// 
			this->label_Course_Name->AutoSize = true;
			this->label_Course_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Course_Name->Location = System::Drawing::Point(104, 134);
			this->label_Course_Name->Name = L"label_Course_Name";
			this->label_Course_Name->Size = System::Drawing::Size(68, 20);
			this->label_Course_Name->TabIndex = 22;
			this->label_Course_Name->Text = L"Course :";
			// 
			// label_Course_Major
			// 
			this->label_Course_Major->AutoSize = true;
			this->label_Course_Major->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Course_Major->Location = System::Drawing::Point(114, 59);
			this->label_Course_Major->Name = L"label_Course_Major";
			this->label_Course_Major->Size = System::Drawing::Size(56, 20);
			this->label_Course_Major->TabIndex = 21;
			this->label_Course_Major->Text = L"Major :";
			this->label_Course_Major->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox_Course_Major
			// 
			this->comboBox_Course_Major->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Course_Major->FormattingEnabled = true;
			this->comboBox_Course_Major->Location = System::Drawing::Point(179, 56);
			this->comboBox_Course_Major->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_Course_Major->Name = L"comboBox_Course_Major";
			this->comboBox_Course_Major->Size = System::Drawing::Size(504, 28);
			this->comboBox_Course_Major->TabIndex = 20;
			// 
			// button_Course_Delete
			// 
			this->button_Course_Delete->Location = System::Drawing::Point(477, 249);
			this->button_Course_Delete->Margin = System::Windows::Forms::Padding(4);
			this->button_Course_Delete->Name = L"button_Course_Delete";
			this->button_Course_Delete->Size = System::Drawing::Size(112, 36);
			this->button_Course_Delete->TabIndex = 26;
			this->button_Course_Delete->Text = L"Delete";
			this->button_Course_Delete->UseVisualStyleBackColor = true;
			this->button_Course_Delete->Click += gcnew System::EventHandler(this, &Page_Admin::button_Course_Delete_Click);
			// 
			// button_Course_Modify_Save_Update
			// 
			this->button_Course_Modify_Save_Update->Location = System::Drawing::Point(356, 249);
			this->button_Course_Modify_Save_Update->Margin = System::Windows::Forms::Padding(4);
			this->button_Course_Modify_Save_Update->Name = L"button_Course_Modify_Save_Update";
			this->button_Course_Modify_Save_Update->Size = System::Drawing::Size(112, 36);
			this->button_Course_Modify_Save_Update->TabIndex = 25;
			this->button_Course_Modify_Save_Update->Text = L"Modify";
			this->button_Course_Modify_Save_Update->UseVisualStyleBackColor = true;
			this->button_Course_Modify_Save_Update->Click += gcnew System::EventHandler(this, &Page_Admin::button_Course_Modify_Save_Update_Click);
			// 
			// button_Course_Add_Cancel
			// 
			this->button_Course_Add_Cancel->Location = System::Drawing::Point(234, 249);
			this->button_Course_Add_Cancel->Margin = System::Windows::Forms::Padding(4);
			this->button_Course_Add_Cancel->Name = L"button_Course_Add_Cancel";
			this->button_Course_Add_Cancel->Size = System::Drawing::Size(112, 36);
			this->button_Course_Add_Cancel->TabIndex = 24;
			this->button_Course_Add_Cancel->Text = L"Add";
			this->button_Course_Add_Cancel->UseVisualStyleBackColor = true;
			this->button_Course_Add_Cancel->Click += gcnew System::EventHandler(this, &Page_Admin::button_Course_Add_Cancel_Click);
			// 
			// label_Configure_Course
			// 
			this->label_Configure_Course->AutoSize = true;
			this->label_Configure_Course->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Configure_Course->Location = System::Drawing::Point(17, 889);
			this->label_Configure_Course->Name = L"label_Configure_Course";
			this->label_Configure_Course->Size = System::Drawing::Size(141, 20);
			this->label_Configure_Course->TabIndex = 31;
			this->label_Configure_Course->Text = L"Configure Course :";
			// 
			// panel_Configure_Class
			// 
			this->panel_Configure_Class->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Configure_Class->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Configure_Class->Controls->Add(this->dataGridView_Class);
			this->panel_Configure_Class->Controls->Add(this->textBox_Class_Name);
			this->panel_Configure_Class->Controls->Add(this->label_Class_Name);
			this->panel_Configure_Class->Controls->Add(this->label_Class_Major);
			this->panel_Configure_Class->Controls->Add(this->comboBox_Class_Major);
			this->panel_Configure_Class->Controls->Add(this->button_Class_Delete);
			this->panel_Configure_Class->Controls->Add(this->button_Class_Modify_Save_Update);
			this->panel_Configure_Class->Controls->Add(this->button_Class_Add_Cancel);
			this->panel_Configure_Class->Location = System::Drawing::Point(1026, 460);
			this->panel_Configure_Class->Margin = System::Windows::Forms::Padding(4);
			this->panel_Configure_Class->Name = L"panel_Configure_Class";
			this->panel_Configure_Class->Size = System::Drawing::Size(1014, 393);
			this->panel_Configure_Class->TabIndex = 34;
			// 
			// dataGridView_Class
			// 
			this->dataGridView_Class->AllowUserToAddRows = false;
			this->dataGridView_Class->AllowUserToDeleteRows = false;
			this->dataGridView_Class->AllowUserToResizeRows = false;
			this->dataGridView_Class->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Class->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Class->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Class->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView_Class->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Class->Location = System::Drawing::Point(18, 103);
			this->dataGridView_Class->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView_Class->MultiSelect = false;
			this->dataGridView_Class->Name = L"dataGridView_Class";
			this->dataGridView_Class->ReadOnly = true;
			this->dataGridView_Class->RowHeadersVisible = false;
			this->dataGridView_Class->RowHeadersWidth = 51;
			this->dataGridView_Class->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Class->Size = System::Drawing::Size(976, 268);
			this->dataGridView_Class->TabIndex = 26;
			this->dataGridView_Class->TabStop = false;
			this->dataGridView_Class->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Admin::dataGridView_Class_CellClick);
			// 
			// textBox_Class_Name
			// 
			this->textBox_Class_Name->Location = System::Drawing::Point(120, 59);
			this->textBox_Class_Name->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Class_Name->Name = L"textBox_Class_Name";
			this->textBox_Class_Name->Size = System::Drawing::Size(289, 26);
			this->textBox_Class_Name->TabIndex = 16;
			// 
			// label_Class_Name
			// 
			this->label_Class_Name->AutoSize = true;
			this->label_Class_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Class_Name->Location = System::Drawing::Point(9, 63);
			this->label_Class_Name->Name = L"label_Class_Name";
			this->label_Class_Name->Size = System::Drawing::Size(102, 20);
			this->label_Class_Name->TabIndex = 22;
			this->label_Class_Name->Text = L"Class Name :";
			// 
			// label_Class_Major
			// 
			this->label_Class_Major->AutoSize = true;
			this->label_Class_Major->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Class_Major->Location = System::Drawing::Point(54, 21);
			this->label_Class_Major->Name = L"label_Class_Major";
			this->label_Class_Major->Size = System::Drawing::Size(56, 20);
			this->label_Class_Major->TabIndex = 21;
			this->label_Class_Major->Text = L"Major :";
			this->label_Class_Major->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox_Class_Major
			// 
			this->comboBox_Class_Major->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_Class_Major->FormattingEnabled = true;
			this->comboBox_Class_Major->Location = System::Drawing::Point(120, 17);
			this->comboBox_Class_Major->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_Class_Major->Name = L"comboBox_Class_Major";
			this->comboBox_Class_Major->Size = System::Drawing::Size(504, 28);
			this->comboBox_Class_Major->TabIndex = 15;
			// 
			// button_Class_Delete
			// 
			this->button_Class_Delete->Location = System::Drawing::Point(878, 56);
			this->button_Class_Delete->Margin = System::Windows::Forms::Padding(4);
			this->button_Class_Delete->Name = L"button_Class_Delete";
			this->button_Class_Delete->Size = System::Drawing::Size(112, 36);
			this->button_Class_Delete->TabIndex = 19;
			this->button_Class_Delete->Text = L"Delete";
			this->button_Class_Delete->UseVisualStyleBackColor = true;
			this->button_Class_Delete->Click += gcnew System::EventHandler(this, &Page_Admin::button_Class_Delete_Click);
			// 
			// button_Class_Modify_Save_Update
			// 
			this->button_Class_Modify_Save_Update->Location = System::Drawing::Point(756, 56);
			this->button_Class_Modify_Save_Update->Margin = System::Windows::Forms::Padding(4);
			this->button_Class_Modify_Save_Update->Name = L"button_Class_Modify_Save_Update";
			this->button_Class_Modify_Save_Update->Size = System::Drawing::Size(112, 36);
			this->button_Class_Modify_Save_Update->TabIndex = 18;
			this->button_Class_Modify_Save_Update->Text = L"Modify";
			this->button_Class_Modify_Save_Update->UseVisualStyleBackColor = true;
			this->button_Class_Modify_Save_Update->Click += gcnew System::EventHandler(this, &Page_Admin::button_Class_Modify_Save_Update_Click);
			// 
			// button_Class_Add_Cancel
			// 
			this->button_Class_Add_Cancel->Location = System::Drawing::Point(634, 56);
			this->button_Class_Add_Cancel->Margin = System::Windows::Forms::Padding(4);
			this->button_Class_Add_Cancel->Name = L"button_Class_Add_Cancel";
			this->button_Class_Add_Cancel->Size = System::Drawing::Size(112, 36);
			this->button_Class_Add_Cancel->TabIndex = 17;
			this->button_Class_Add_Cancel->Text = L"Add";
			this->button_Class_Add_Cancel->UseVisualStyleBackColor = true;
			this->button_Class_Add_Cancel->Click += gcnew System::EventHandler(this, &Page_Admin::button_Class_Add_Cancel_Click);
			// 
			// label_Configure_Class
			// 
			this->label_Configure_Class->AutoSize = true;
			this->label_Configure_Class->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_Configure_Class->Location = System::Drawing::Point(1025, 436);
			this->label_Configure_Class->Name = L"label_Configure_Class";
			this->label_Configure_Class->Size = System::Drawing::Size(129, 20);
			this->label_Configure_Class->TabIndex = 33;
			this->label_Configure_Class->Text = L"Configure Class :";
			// 
			// Page_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(2060, 1299);
			this->Controls->Add(this->panel_Configure_Class);
			this->Controls->Add(this->label_Configure_Class);
			this->Controls->Add(this->panel_Configure_Course);
			this->Controls->Add(this->label_Configure_Course);
			this->Controls->Add(this->panel_Configure_Major);
			this->Controls->Add(this->label_Configure_Major);
			this->Controls->Add(this->panel_Configure_Account);
			this->Controls->Add(this->label_Configure_Account);
			this->Name = L"Page_Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Page_Admin::Page_Admin_Load);
			this->panel_Configure_Account->ResumeLayout(false);
			this->panel_Configure_Account->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Account))->EndInit();
			this->panel_Configure_Major->ResumeLayout(false);
			this->panel_Configure_Major->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Major))->EndInit();
			this->panel_Configure_Course->ResumeLayout(false);
			this->panel_Configure_Course->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Course))->EndInit();
			this->panel_Configure_Class->ResumeLayout(false);
			this->panel_Configure_Class->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Class))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		array<String^>^ oldAccountConfigData = gcnew array<String^>(7);		// The String array will store : name, username, password, studentID_teacherID, major_subject, semester, class_name
		array<String^>^ oldMajorConfigData = gcnew array<String^>(1);		// The String array will store : major name
		array<String^>^ oldCourseConfigData = gcnew array<String^>(4);		// The String array will store : major, semester, course_name, credit
		array<String^>^ oldClassConfigData = gcnew array<String^>(2);		// The String array will store : major, class_name

#pragma region Functions
		// Initialize the Initial State for Controls in Account Configuration Panel
		void Initialization() {
			this->Text = "Admin Page | Welcome, " + Global::CURRENT_USER->getName(); // Initialize Form Name
			radioButton_Administrator->Checked = true; // Initialize Account Type
			textBox_Password->PasswordChar = '*'; // Initialize Hide Password

			// Initialize DataGridView
			dataGridView_Account->DataSource = GetDataTable(0);
			dataGridView_Major->DataSource = GetDataTable(1);
			dataGridView_Course->DataSource = GetDataTable(2);
			dataGridView_Class->DataSource = GetDataTable(3);


			// Initialize Enabled - Account Configuration Panel
			textBox_Name->Enabled = false;
			textBox_Username->Enabled = false;
			textBox_Password->Enabled = false;
			checkBox_Show_Password->Enabled = false;
			textBox_StudentID_TeacherID->Enabled = false;
			comboBox_Major_Subject->Enabled = false;
			comboBox_Semester->Enabled = false;
			comboBox_Class->Enabled = false;
			button_Modify_Save_Update->Enabled = false;
			button_Delete->Enabled = false;

			// Initialize Enabled - Major Configuration Panel
			textBox_Major_Name->Enabled = false;
			button_Major_Modify_Save_Update->Enabled = false;
			button_Major_Delete->Enabled = false;

			// Initialize Enabled - Course Configuration Panel
			comboBox_Course_Major->Enabled = false;
			comboBox_Course_Semester->Enabled = false;
			textBox_Course_Credit->Enabled = false;
			textBox_Course_Name->Enabled = false;
			button_Course_Modify_Save_Update->Enabled = false;
			button_Course_Delete->Enabled = false;

			// Initialize Enabled - Class Configuration Panel
			comboBox_Class_Major->Enabled = false;
			textBox_Class_Name->Enabled = false;
			button_Class_Modify_Save_Update->Enabled = false;
			button_Class_Delete->Enabled = false;

			// Initialize Visibility - Account Configuration Panel
			label_StudentID_TeacherID->Visible = false;
			label_Major_Subject->Visible = false;
			label_Class->Visible = false;
			textBox_StudentID_TeacherID->Visible = false;
			comboBox_Major_Subject->Visible = false;
			comboBox_Semester->Visible = false;
			comboBox_Class->Visible = false;

			// Initialize ComboBox Initial Items
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::MAJOR_LIST->leftLength();
			Global::MAJOR_LIST->setStart();
			comboBox_Course_Major->Items->Clear();
			comboBox_Class_Major->Items->Clear();
			for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
				Major^ temp = gcnew Major();
				Global::MAJOR_LIST->getValue(temp);
				comboBox_Course_Major->Items->Add(temp->getName());
				comboBox_Class_Major->Items->Add(temp->getName());
				Global::MAJOR_LIST->next();
			}
			Global::MAJOR_LIST->setPos(lastPos);
		}

		// Clear text for each box in Panel.
		// 0 = Account Configuration Panel
		// 1 = Major Configuration Panel
		// 2 = Course Configuration Panel
		// 3 = Class Configuration Panel
		void ClearConfigBox(int type) {
			if (type == 0) {
				textBox_Name->Text = "";
				textBox_Username->Text = "";
				textBox_Password->Text = "";
				checkBox_Show_Password->Checked = false;
				textBox_StudentID_TeacherID->Text = "";
				comboBox_Major_Subject->SelectedIndex = -1;
				comboBox_Semester->SelectedIndex = -1;
				comboBox_Class->SelectedIndex = -1;
			}
			else if (type == 1) {
				textBox_Major_Name->Text = "";
			}
			else if (type == 2) {
				comboBox_Course_Major->SelectedIndex = -1;
				comboBox_Course_Semester->SelectedIndex = -1;
				textBox_Course_Credit->Text = "";
				textBox_Course_Name->Text = "";
			}
			else if (type == 3) {
				comboBox_Class_Major->SelectedIndex = -1;
				textBox_Class_Name->Text = "";
			}
		}

		// Set the Enabled properties for each box in Panel.
		// Type:
		// 0 = Account Configuration Panel
		// 1 = Major Configuration Panel
		// 2 = Course Configuration Panel
		// 3 = Class Configuration Panel
		void EnableConfigBox(int type, bool isEnabled) {
			if (type == 0) {
				checkBox_Show_Password->Checked = false;

				radioButton_Administrator->Enabled = !isEnabled;
				radioButton_Teacher->Enabled = !isEnabled;
				radioButton_Student->Enabled = !isEnabled;
				dataGridView_Account->Enabled = !isEnabled;
				textBox_Name->Enabled = isEnabled;
				textBox_Username->Enabled = isEnabled;
				textBox_Password->Enabled = isEnabled;
				checkBox_Show_Password->Enabled = isEnabled;
				textBox_StudentID_TeacherID->Enabled = isEnabled;
				comboBox_Major_Subject->Enabled = isEnabled;
				comboBox_Semester->Enabled = isEnabled;
				comboBox_Class->Enabled = isEnabled;
			}
			else if (type == 1) {
				dataGridView_Major->Enabled = !isEnabled;
				textBox_Major_Name->Enabled = isEnabled;
			}
			else if (type == 2) {
				dataGridView_Course->Enabled = !isEnabled;
				comboBox_Course_Major->Enabled = isEnabled;
				comboBox_Course_Semester->Enabled = isEnabled;

				textBox_Course_Credit->Enabled = isEnabled;
				textBox_Course_Name->Enabled = isEnabled;
			}
			else if (type == 3) {
				dataGridView_Class->Enabled = !isEnabled;
				comboBox_Class_Major->Enabled = isEnabled;
				textBox_Class_Name->Enabled = isEnabled;
			}
		}

		// Load Data saved in list of classes into dataTable.
		// 0 = Account Configuration Panel
		// 1 = Major Configuration Panel
		// 2 = Course Configuration Panel
		// 3 = Class Configuration Panel
		DataTable^ GetDataTable(int type) {
			DataTable^ tempTable = gcnew DataTable;
			
			int lastPos; // Save last position of fence in the linked list

			if (type == 0) {
				switch (AccountTypeToInt()) {
				case 0: // Get Admin Class data
					tempTable->Columns->Add("Name");
					tempTable->Columns->Add("Username");

					lastPos = Global::ADMIN_LIST->leftLength();
					Global::ADMIN_LIST->setStart();
					for (int i = 0; i < Global::ADMIN_LIST->length(); i++) {
						Admin^ temp = gcnew Admin();
						Global::ADMIN_LIST->getValue(temp);
						tempTable->Rows->Add(temp->getName(), temp->getUsername());
						Global::ADMIN_LIST->next();
					}
					Global::ADMIN_LIST->setPos(lastPos);
					break;

				case 1: // Get Teacher Class data
					tempTable->Columns->Add("Name");
					tempTable->Columns->Add("Username");
					tempTable->Columns->Add("Teacher ID");
					tempTable->Columns->Add("Subject Taught");
					tempTable->Columns->Add("Semester");


					lastPos = Global::TEACHER_LIST->leftLength();
					Global::TEACHER_LIST->setStart();
					for (int i = 0; i < Global::TEACHER_LIST->length(); i++) {
						Teacher^ temp = gcnew Teacher();
						Global::TEACHER_LIST->getValue(temp);
						tempTable->Rows->Add(temp->getName(), temp->getUsername(), temp->getTeacherID(), temp->getSubjectTaught(), temp->getSemester());
						Global::TEACHER_LIST->next();
					}
					Global::TEACHER_LIST->setPos(lastPos);
					break;

				case 2: // Get Student Class data
					tempTable->Columns->Add("Name");
					tempTable->Columns->Add("Username");
					tempTable->Columns->Add("Student ID");
					tempTable->Columns->Add("Major");
					tempTable->Columns->Add("Semester");
					tempTable->Columns->Add("Class Name");

					lastPos = Global::STUDENT_LIST->leftLength();
					Global::STUDENT_LIST->setStart();
					for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
						Student^ temp = gcnew Student();
						Global::STUDENT_LIST->getValue(temp);
						tempTable->Rows->Add(temp->getName(), temp->getUsername(), temp->getStudentID(), temp->getMajor(), temp->getSemester(), temp->getClassName());
						Global::STUDENT_LIST->next();
					}
					Global::STUDENT_LIST->setPos(lastPos);
					break;

				default:
					break;
				}
			}
			else if (type == 1) {
				tempTable->Columns->Add("Major");
				lastPos = Global::MAJOR_LIST->leftLength();
				Global::MAJOR_LIST->setStart();
				for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
					Major^ temp = gcnew Major();
					Global::MAJOR_LIST->getValue(temp);
					tempTable->Rows->Add(temp->getName());
					Global::MAJOR_LIST->next();
				}
				Global::MAJOR_LIST->setPos(lastPos);
			}
			else if (type == 2) {
				tempTable->Columns->Add("Course");
				tempTable->Columns->Add("Major");
				tempTable->Columns->Add("Semester");
				tempTable->Columns->Add("Credit");
				lastPos = Global::COURSE_LIST->leftLength();
				Global::COURSE_LIST->setStart();
				for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
					Course^ temp = gcnew Course();
					Global::COURSE_LIST->getValue(temp);
					tempTable->Rows->Add(temp->getName(), temp->getMajor(), temp->getSemester(), temp->getCredit());
					Global::COURSE_LIST->next();
				}
				Global::COURSE_LIST->setPos(lastPos);
			}
			else if (type == 3) {
				tempTable->Columns->Add("Class");
				tempTable->Columns->Add("Major");
				lastPos = Global::CLASS_LIST->leftLength();
				Global::CLASS_LIST->setStart();
				for (int i = 0; i < Global::CLASS_LIST->length(); i++) {
					Class^ temp = gcnew Class();
					Global::CLASS_LIST->getValue(temp);
					tempTable->Rows->Add(temp->getName(), temp->getMajor());
					Global::CLASS_LIST->next();
				}
				Global::CLASS_LIST->setPos(lastPos);
			}

			return tempTable;
		}

		// Load the selected Data from DataGridView into the Boxes and Controls in Panel.
		// Type:
		// 0 = Account Configuration Panel
		// 1 = Major Configuration Panel
		// 2 = Course Configuration Panel
		// 3 = Class Configuration Panel
		bool LoadData(int type, String^ name) {
			int lastPos; // Save last position of fence in the linked list

			if (type == 0) {
				switch (AccountTypeToInt()) {
				case 0: // Get Admin Class data
					lastPos = Global::ADMIN_LIST->leftLength();
					Global::ADMIN_LIST->setStart();
					for (int i = 0; i < Global::ADMIN_LIST->length(); i++) {
						Admin^ temp = gcnew Admin();
						Global::ADMIN_LIST->getValue(temp);
						if (temp->getName() == name) {
							textBox_Name->Text = temp->getName();
							textBox_Username->Text = temp->getUsername();
							textBox_Password->Text = temp->getPassword();
							return true;
						}
						Global::ADMIN_LIST->next();
					}
					Global::ADMIN_LIST->setPos(lastPos);
					break;

				case 1: // Get Teacher Class data
					lastPos = Global::TEACHER_LIST->leftLength();
					Global::TEACHER_LIST->setStart();
					for (int i = 0; i < Global::TEACHER_LIST->length(); i++) {
						Teacher^ temp = gcnew Teacher();
						Global::TEACHER_LIST->getValue(temp);
						if (temp->getName() == name) {
							textBox_Name->Text = temp->getName();
							textBox_Username->Text = temp->getUsername();
							textBox_Password->Text = temp->getPassword();
							textBox_StudentID_TeacherID->Text = temp->getTeacherID();
							comboBox_Major_Subject->Text = temp->getSubjectTaught();
							return true;
						}
						Global::TEACHER_LIST->next();
					}
					Global::TEACHER_LIST->setPos(lastPos);
					break;

				case 2: // Get Student Class data
					lastPos = Global::STUDENT_LIST->leftLength();
					Global::STUDENT_LIST->setStart();
					for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
						Student^ temp = gcnew Student();
						Global::STUDENT_LIST->getValue(temp);
						if (temp->getName() == name) {
							textBox_Name->Text = temp->getName();
							textBox_Username->Text = temp->getUsername();
							textBox_Password->Text = temp->getPassword();
							textBox_StudentID_TeacherID->Text = temp->getStudentID();
							comboBox_Major_Subject->Text = temp->getMajor();
							comboBox_Semester->Text = temp->getSemester().ToString();
							comboBox_Class->Text = temp->getClassName();
							return true;
						}
						Global::STUDENT_LIST->next();
					}
					Global::STUDENT_LIST->setPos(lastPos);
					break;

				default:
					break;
				}
			}
			else if (type == 1) {
				lastPos = Global::MAJOR_LIST->leftLength();
				Global::MAJOR_LIST->setStart();
				for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
					Major^ temp = gcnew Major();
					Global::MAJOR_LIST->getValue(temp);
					if (temp->getName() == name) {
						textBox_Major_Name->Text = temp->getName();
						return true;
					}
					Global::MAJOR_LIST->next();
				}
				Global::MAJOR_LIST->setPos(lastPos);
			}
			else if (type == 2) {
				lastPos = Global::COURSE_LIST->leftLength();
				Global::COURSE_LIST->setStart();
				for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
					Course^ temp = gcnew Course();
					Global::COURSE_LIST->getValue(temp);
					if (temp->getName() == name) {
						comboBox_Course_Major->Text = temp->getMajor();
						comboBox_Course_Semester->Text = temp->getSemester().ToString();
						textBox_Course_Credit->Text = temp->getCredit();
						textBox_Course_Name->Text = temp->getName();
						return true;
					}
					Global::COURSE_LIST->next();
				}
				Global::COURSE_LIST->setPos(lastPos);
			}
			else if (type == 3) {
				lastPos = Global::CLASS_LIST->leftLength();
				Global::CLASS_LIST->setStart();
				for (int i = 0; i < Global::CLASS_LIST->length(); i++) {
					Class^ temp = gcnew Class();
					Global::CLASS_LIST->getValue(temp);
					if (temp->getName() == name) {
						comboBox_Class_Major->Text = temp->getMajor();
						textBox_Class_Name->Text = temp->getName();
						return true;
					}
					Global::CLASS_LIST->next();
				}
				Global::CLASS_LIST->setPos(lastPos);
			}

			return false;
		}

		// Check if there is any box that is empty in a panel
		// 0 = Account Configuration Panel
		// 1 = Major Configuration Panel
		// 2 = Course Configuration Panel
		// 3 = Class Configuration Panel
		bool isAnyBoxEmpty(int type) {
			if (type == 0) {
				if (AccountTypeToInt() == 0) { // Check as Admin Class
					if (textBox_Name->Text->Trim() == "" || textBox_Username->Text->Trim() == "" || textBox_Password->Text->Trim() == "")
						return true;
				}
				else if (AccountTypeToInt() == 1) { // Check as Teacher Class
					if (textBox_Name->Text->Trim() == "" || textBox_Username->Text->Trim() == "" || textBox_Password->Text->Trim() == "" || textBox_StudentID_TeacherID->Text->Trim() == "" || comboBox_Major_Subject->Text->Trim() == "")
						return true;
				}
				else if (AccountTypeToInt() == 2) { // Check as Student Class
					if (textBox_Name->Text->Trim() == "" || textBox_Username->Text->Trim() == "" || textBox_Password->Text->Trim() == "" || textBox_StudentID_TeacherID->Text->Trim() == "" || comboBox_Major_Subject->Text->Trim() == "" || comboBox_Semester->Text->Trim() == "" || comboBox_Class->Text->Trim() == "")
						return true;
				}
			}
			else if (type == 1) {
				if (textBox_Major_Name->Text->Trim() == "")
					return true;
			}
			else if (type == 2) {
				if (comboBox_Course_Major->Text->Trim() == "" || comboBox_Course_Semester->Text->Trim() == "" || textBox_Course_Credit->Text->Trim() == "" ||textBox_Course_Name->Text->Trim() == "")
					return true;
			}
			else if (type == 3) {
				if (comboBox_Class_Major->Text->Trim() == "" || textBox_Class_Name->Text->Trim() == "")
					return true;
			}
			return false;
		}

#pragma region AccountConfigurationPanel
		// Return int value of the account type from radio button
		// Return :
		// 0 = Administrator
		// 1 = Teacher
		// 2 = Student
		// -1 = Error
		int AccountTypeToInt() {
			if (radioButton_Administrator->Checked) return 0;
			else if (radioButton_Teacher->Checked) return 1;
			else if (radioButton_Student->Checked) return 2;
			else return -1; // -1 = Error
		}

		// Load Default Properties for each type of account
		void LoadAccountConfig(int type) {
			bool isAdmin = (type == 0);

			// Hide the control, if it is Administrator type
			label_StudentID_TeacherID->Visible = !isAdmin;
			label_Major_Subject->Visible = !isAdmin;
			label_Semester->Visible = !isAdmin;
			label_Class->Visible = !isAdmin;
			textBox_StudentID_TeacherID->Visible = !isAdmin;
			comboBox_Major_Subject->Visible = !isAdmin;
			comboBox_Semester->Visible = !isAdmin;
			comboBox_Class->Visible = !isAdmin;

			if (type == 0) { // Load the config for Administrator account
				comboBox_Major_Subject->Enabled = true;
			}
			else if (type == 1) { // Load the config for Teacher account
				label_StudentID_TeacherID->Text = "Teacher ID :";
				label_Major_Subject->Text = "Subject :";
				comboBox_Major_Subject->Enabled = false;
				label_Class->Visible = false;
				comboBox_Class->Visible = false;
			}
			else if (type == 2) { // Load the config for Student account
				label_StudentID_TeacherID->Text = "Student ID :";
				label_Major_Subject->Text = "Major :";
				comboBox_Major_Subject->Enabled = true;

				int lastPos; // Save last position of fence in the linked list
				// Load Majors into the ComboBox
				lastPos = Global::MAJOR_LIST->leftLength();
				Global::MAJOR_LIST->setStart();
				comboBox_Major_Subject->Items->Clear();
				for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
					Major^ temp = gcnew Major();
					Global::MAJOR_LIST->getValue(temp);
					comboBox_Major_Subject->Items->Add(temp->getName());
					Global::MAJOR_LIST->next();
				}
				Global::MAJOR_LIST->setPos(lastPos);

				// Load Classes into the ComboBox
				lastPos = Global::CLASS_LIST->leftLength();
				Global::CLASS_LIST->setStart();
				comboBox_Class->Items->Clear();
				for (int i = 0; i < Global::CLASS_LIST->length(); i++) {
					Class^ temp = gcnew Class();
					Global::CLASS_LIST->getValue(temp);
					comboBox_Class->Items->Add(temp->getName());
					Global::CLASS_LIST->next();
				}
				Global::CLASS_LIST->setPos(lastPos);
			}
		}

		// Get initial Courses for the Student
		array<String^>^ getAllCourse(String^ MajorName, String^ Semester) {
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::COURSE_LIST->leftLength();
			Global::COURSE_LIST->setStart();
			String^ s = "";

			for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
				Course^ temp = gcnew Course();
				Global::COURSE_LIST->getValue(temp);
				if (temp->getMajor() == MajorName && temp->getSemester() == Convert::ToInt32(Semester))
					s += temp->getName() + ";";
				Global::COURSE_LIST->next();
			}
			Global::COURSE_LIST->setPos(lastPos);

			array<String^>^ temp = s->Split(';');
			return temp;
		}
#pragma endregion

#pragma endregion


	/// <summary>
	/// Events
	/// </summary>
	private: System::Void Page_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
		Initialization();
	}

#pragma region AccountConfigurationPanelEvents
	private: System::Void checkBox_Show_Password_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_Show_Password->Checked)
			textBox_Password->PasswordChar = '\0'; // Show Password
		else
			textBox_Password->PasswordChar = '*'; // Hide Password
	}

	private: System::Void radioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton_Administrator->Checked) { // Add, Modify, or Delete a Administrator Account
			LoadAccountConfig(0);
		}
		else if (radioButton_Teacher->Checked) { // Add, Modify, or Delete a Teacher Account
			LoadAccountConfig(1);
		}
		else { // Add, Modify, or Delete a Student Account
			LoadAccountConfig(2);
		}
		dataGridView_Account->DataSource = GetDataTable(0);
		ClearConfigBox(0);
	}

	private: System::Void button_Add_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Add_Cancel->Text;
		
		if (buttonText == "Add") { // If the menu is in Initial State
			ClearConfigBox(0);
			EnableConfigBox(0, true);

			button_Add_Cancel->Text = "Cancel";
			button_Modify_Save_Update->Text = "Save";

			button_Modify_Save_Update->Enabled = true;
			button_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldAccountConfigData[0] = "";
			oldAccountConfigData[1] = "";
			oldAccountConfigData[2] = "";
			oldAccountConfigData[3] = "";
			oldAccountConfigData[4] = "";
			oldAccountConfigData[5] = "";
			oldAccountConfigData[6] = "";
		}
		else if (buttonText == "Cancel") { // If the menu is in Add or Modify State
			EnableConfigBox(0, false);

			button_Add_Cancel->Text = "Add";
			button_Modify_Save_Update->Text = "Modify";

			button_Modify_Save_Update->Enabled = false;
			button_Delete->Enabled = false;
			button_Delete->Visible = true;

			// Load the old data
			textBox_Name->Text = oldAccountConfigData[0];
			textBox_Username->Text = oldAccountConfigData[1];
			textBox_Password->Text = oldAccountConfigData[2];
			textBox_StudentID_TeacherID->Text = oldAccountConfigData[3];
			comboBox_Major_Subject->Text = oldAccountConfigData[4];
			comboBox_Semester->Text = oldAccountConfigData[5];
			comboBox_Class->Text = oldAccountConfigData[6];
		}
	}

	private: System::Void button_Modify_Save_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Modify_Save_Update->Text;

		if (buttonText == "Modify") { // If the menu is in Initial State
			EnableConfigBox(0, true);

			button_Add_Cancel->Text = "Cancel";
			button_Modify_Save_Update->Text = "Update";

			button_Modify_Save_Update->Enabled = true;
			button_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldAccountConfigData[0] = textBox_Name->Text;
			oldAccountConfigData[1] = textBox_Username->Text;
			oldAccountConfigData[2] = textBox_Password->Text;
			oldAccountConfigData[3] = textBox_StudentID_TeacherID->Text;
			oldAccountConfigData[4] = comboBox_Major_Subject->Text;
			oldAccountConfigData[5] = comboBox_Semester->Text;
			oldAccountConfigData[6] = comboBox_Class->Text;
		}
		else if (buttonText == "Save") { // If the menu is in Add State
			if (isAnyBoxEmpty(0)) { 
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(AccountTypeToInt(), textBox_Name->Text)) { // Check if data existed already
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Save the data into list
			if (AccountTypeToInt() == 0) { // Save as Admin Class
				Admin^ temp = gcnew Admin(textBox_Name->Text->Trim(), textBox_Username->Text->Trim(), textBox_Password->Text->Trim());
				Global::ADMIN_LIST->append(temp);
			}
			else if (AccountTypeToInt() == 1) { // Save as Teacher Class
				Teacher^ temp = gcnew Teacher(textBox_Name->Text->Trim(), textBox_Username->Text->Trim(), textBox_Password->Text->Trim(), textBox_StudentID_TeacherID->Text->Trim(), comboBox_Major_Subject->Text->Trim(), comboBox_Semester->Text->Trim());
				Global::TEACHER_LIST->append(temp);
			}
			else if (AccountTypeToInt() == 2) { // Save as Student Class
				array<String^>^ courseTaken = getAllCourse(comboBox_Major_Subject->Text->Trim(), comboBox_Semester->Text->Trim());
				Student^ temp = gcnew Student(textBox_Name->Text->Trim(), textBox_Username->Text->Trim(), textBox_Password->Text->Trim(), textBox_StudentID_TeacherID->Text->Trim(), comboBox_Major_Subject->Text->Trim(), comboBox_Semester->Text->Trim(), comboBox_Class->Text->Trim(), courseTaken);
				Global::STUDENT_LIST->append(temp);
			}

			EnableConfigBox(0, false);
			dataGridView_Account->DataSource = GetDataTable(0);

			button_Add_Cancel->Text = "Add";
			button_Modify_Save_Update->Text = "Modify";

			button_Modify_Save_Update->Enabled = false;
			button_Delete->Enabled = false;
			button_Delete->Visible = true;
		}
		else if (buttonText == "Update") { // If the menu is in Modify State
			if (isAnyBoxEmpty(0)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(AccountTypeToInt(), textBox_Name->Text) && textBox_Name->Text != oldAccountConfigData[0]) {
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Update the data in the list
			int lastPos; // Save last position of fence in the linked list
			if (AccountTypeToInt() == 0) { // Update as Admin Class
				lastPos = Global::ADMIN_LIST->leftLength();
				Global::ADMIN_LIST->setStart();
				for (int i = 0; i < Global::ADMIN_LIST->length(); i++) {
					Admin^ temp = gcnew Admin();
					Global::ADMIN_LIST->getValue(temp);
					if (temp->getName() == oldAccountConfigData[0]) {
						temp->setData(textBox_Name->Text->Trim(), textBox_Username->Text->Trim(), textBox_Password->Text->Trim());
						break;
					}
					Global::ADMIN_LIST->next();
				}
				Global::ADMIN_LIST->setPos(lastPos);
			}
			else if (AccountTypeToInt() == 1) { // Update as Teacher Class
				lastPos = Global::TEACHER_LIST->leftLength();
				Global::TEACHER_LIST->setStart();
				for (int i = 0; i < Global::TEACHER_LIST->length(); i++) {
					Teacher^ temp = gcnew Teacher();
					Global::TEACHER_LIST->getValue(temp);
					if (temp->getName() == oldAccountConfigData[0]) {
						temp->setData(textBox_Name->Text->Trim(), textBox_Username->Text->Trim(), textBox_Password->Text->Trim(), textBox_StudentID_TeacherID->Text->Trim(), comboBox_Major_Subject->Text->Trim(), comboBox_Semester->Text->Trim());
						break;
					}
					Global::TEACHER_LIST->next();
				}
				Global::TEACHER_LIST->setPos(lastPos);
			}
			else if (AccountTypeToInt() == 2) { // Update as Student Class
				lastPos = Global::STUDENT_LIST->leftLength();
				Global::STUDENT_LIST->setStart();
				for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
					Student^ temp = gcnew Student();
					Global::STUDENT_LIST->getValue(temp);
					if (temp->getName() == oldAccountConfigData[0]) {
						array<String^>^ courseTaken = getAllCourse(comboBox_Major_Subject->Text->Trim(), comboBox_Semester->Text->Trim());
						temp->setData(textBox_Name->Text->Trim(), textBox_Username->Text->Trim(), textBox_Password->Text->Trim(), textBox_StudentID_TeacherID->Text->Trim(), comboBox_Major_Subject->Text->Trim(), comboBox_Semester->Text->Trim(), comboBox_Class->Text->Trim(), courseTaken);
						break;
					}
					Global::STUDENT_LIST->next();
				}
				Global::STUDENT_LIST->setPos(lastPos);
			}

			EnableConfigBox(0, false);
			dataGridView_Account->DataSource = GetDataTable(0);

			button_Add_Cancel->Text = "Add";
			button_Modify_Save_Update->Text = "Modify";

			button_Modify_Save_Update->Enabled = false;
			button_Delete->Enabled = false;
			button_Delete->Visible = true;
		}
	}

	private: System::Void button_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_Name->Text->Trim() == Global::CURRENT_USER->getName()) { // Check if the account to be deleted is the one currently log on
			MessageBox::Show("Cannot delete your own account. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Check to make sure if the user really want to delete the data or just misspressed
		if (MessageBox::Show("Are you sure you want to delete User '" + textBox_Name->Text + "'?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No) { 
			return;
		}

		// Delete the account from list of class
		int lastPos; // Save last position of fence in the linked list
		if (AccountTypeToInt() == 0) { // Delete a Admin Class
			lastPos = Global::ADMIN_LIST->leftLength();
			Global::ADMIN_LIST->setStart();
			for (int i = 0; i < Global::ADMIN_LIST->length(); i++) {
				Admin^ temp = gcnew Admin();
				Global::ADMIN_LIST->getValue(temp);
				if (temp->getName() == textBox_Name->Text->Trim()) {
					Global::ADMIN_LIST->remove(temp);
					break;
				}
				Global::ADMIN_LIST->next();
			}
			Global::ADMIN_LIST->setPos(lastPos);
		}
		else if (AccountTypeToInt() == 1) { // Delete a Teacher Class
			lastPos = Global::TEACHER_LIST->leftLength();
			Global::TEACHER_LIST->setStart();
			for (int i = 0; i < Global::TEACHER_LIST->length(); i++) {
				Teacher^ temp = gcnew Teacher();
				Global::TEACHER_LIST->getValue(temp);
				if (temp->getName() == textBox_Name->Text->Trim()) {
					Global::TEACHER_LIST->remove(temp);
					break;
				}
				Global::TEACHER_LIST->next();
			}
			Global::TEACHER_LIST->setPos(lastPos);
		}
		else if (AccountTypeToInt() == 2) { // Delete a Student Class
			lastPos = Global::STUDENT_LIST->leftLength();
			Global::STUDENT_LIST->setStart();
			for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
				Student^ temp = gcnew Student();
				Global::STUDENT_LIST->getValue(temp);
				if (temp->getName() == textBox_Name->Text->Trim()) {
					Global::STUDENT_LIST->remove(temp);
					break;
				}
				Global::STUDENT_LIST->next();
			}
			Global::STUDENT_LIST->setPos(lastPos);
		}

		ClearConfigBox(0);
		EnableConfigBox(0,false);
		dataGridView_Account->DataSource = GetDataTable(0);

		button_Modify_Save_Update->Enabled = false;
		button_Delete->Enabled = false;
	}

	private: System::Void dataGridView_Account_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (LoadData(0, dataGridView_Account->SelectedRows[0]->Cells[0]->Value->ToString())) {
			button_Modify_Save_Update->Enabled = true;
			button_Delete->Enabled = true;
		}
	}
#pragma endregion

#pragma region MajorConfigurationPanelEvents
	private: System::Void button_Major_Add_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Major_Add_Cancel->Text;

		if (buttonText == "Add") { // If the menu is in Initial State
			ClearConfigBox(1);
			EnableConfigBox(1, true);

			button_Major_Add_Cancel->Text = "Cancel";
			button_Major_Modify_Save_Update->Text = "Save";

			button_Major_Modify_Save_Update->Enabled = true;
			button_Major_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldMajorConfigData[0] = "";
		}
		else if (buttonText == "Cancel") { // If the menu is in Add or Modify State
			EnableConfigBox(1, false);

			button_Major_Add_Cancel->Text = "Add";
			button_Major_Modify_Save_Update->Text = "Modify";

			button_Major_Modify_Save_Update->Enabled = false;
			button_Major_Delete->Enabled = false;
			button_Major_Delete->Visible = true;

			// Load the old data
			textBox_Major_Name->Text = oldMajorConfigData[0];
		}
	}

	private: System::Void button_Major_Modify_Save_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Major_Modify_Save_Update->Text;

		if (buttonText == "Modify") { // If the menu is in Initial State
			EnableConfigBox(1, true);

			button_Major_Add_Cancel->Text = "Cancel";
			button_Major_Modify_Save_Update->Text = "Update";

			button_Major_Modify_Save_Update->Enabled = true;
			button_Major_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldMajorConfigData[0] = textBox_Major_Name->Text;
		}
		else if (buttonText == "Save") { // If the menu is in Add State
			if (isAnyBoxEmpty(1)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(3, textBox_Major_Name->Text)) { // Check if data existed already
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Save the data into list
			Major^ temp = gcnew Major(textBox_Major_Name->Text->Trim());
			Global::MAJOR_LIST->append(temp);

			// Reload the newest Major data to comboBox
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::MAJOR_LIST->leftLength();
			Global::MAJOR_LIST->setStart();
			comboBox_Course_Major->Items->Clear();
			comboBox_Class_Major->Items->Clear();
			for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
				Major^ temp = gcnew Major();
				Global::MAJOR_LIST->getValue(temp);
				comboBox_Course_Major->Items->Add(temp->getName());
				comboBox_Class_Major->Items->Add(temp->getName());
				Global::MAJOR_LIST->next();
			}
			Global::MAJOR_LIST->setPos(lastPos);
			
			EnableConfigBox(1, false);
			LoadAccountConfig(AccountTypeToInt());
			dataGridView_Major->DataSource = GetDataTable(1);

			button_Major_Add_Cancel->Text = "Add";
			button_Major_Modify_Save_Update->Text = "Modify";

			button_Major_Modify_Save_Update->Enabled = false;
			button_Major_Delete->Enabled = false;
			button_Major_Delete->Visible = true;
		}
		else if (buttonText == "Update") { // If the menu is in Modify State
			if (isAnyBoxEmpty(1)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(3, textBox_Major_Name->Text) && textBox_Major_Name->Text != oldMajorConfigData[0]) {
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Update the data in the list
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::MAJOR_LIST->leftLength();
			Global::MAJOR_LIST->setStart();
			for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
				Major^ temp = gcnew Major();
				Global::MAJOR_LIST->getValue(temp);
				if (temp->getName() == oldMajorConfigData[0]) {
					temp->setData(textBox_Major_Name->Text->Trim());
					break;
				}
				Global::MAJOR_LIST->next();
			}
			Global::MAJOR_LIST->setPos(lastPos);

			// Reload the newest Major data to comboBox
			lastPos = Global::MAJOR_LIST->leftLength();
			Global::MAJOR_LIST->setStart();
			comboBox_Course_Major->Items->Clear();
			comboBox_Class_Major->Items->Clear();
			for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
				Major^ temp = gcnew Major();
				Global::MAJOR_LIST->getValue(temp);
				comboBox_Course_Major->Items->Add(temp->getName());
				comboBox_Class_Major->Items->Add(temp->getName());
				Global::MAJOR_LIST->next();
			}
			Global::MAJOR_LIST->setPos(lastPos);

			EnableConfigBox(1, false);
			LoadAccountConfig(AccountTypeToInt());
			dataGridView_Major->DataSource = GetDataTable(1);

			button_Major_Add_Cancel->Text = "Add";
			button_Major_Modify_Save_Update->Text = "Modify";

			button_Major_Modify_Save_Update->Enabled = false;
			button_Major_Delete->Enabled = false;
			button_Major_Delete->Visible = true;
		}
	}

	private: System::Void button_Major_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check to make sure if the user really want to delete the data or just misspressed
		if (MessageBox::Show("Are you sure you want to delete Major '" + textBox_Major_Name->Text + "'?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No) {
			return;
		}

		// Delete the major from list of class
		int lastPos; // Save last position of fence in the linked list
		lastPos = Global::MAJOR_LIST->leftLength();
		Global::MAJOR_LIST->setStart();
		for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
			Major^ temp = gcnew Major();
			Global::MAJOR_LIST->getValue(temp);
			if (temp->getName() == textBox_Major_Name->Text->Trim()) {
				Global::MAJOR_LIST->remove(temp);
				break;
			}
			Global::MAJOR_LIST->next();
		}
		Global::MAJOR_LIST->setPos(lastPos);

		// Reload the newest Major data to comboBox
		lastPos = Global::MAJOR_LIST->leftLength();
		Global::MAJOR_LIST->setStart();
		comboBox_Course_Major->Items->Clear();
		comboBox_Class_Major->Items->Clear();
		for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
			Major^ temp = gcnew Major();
			Global::MAJOR_LIST->getValue(temp);
			comboBox_Course_Major->Items->Add(temp->getName());
			comboBox_Class_Major->Items->Add(temp->getName());
			Global::MAJOR_LIST->next();
		}
		Global::MAJOR_LIST->setPos(lastPos);

		ClearConfigBox(1);
		EnableConfigBox(1, false);
		LoadAccountConfig(AccountTypeToInt());
		dataGridView_Major->DataSource = GetDataTable(1);

		button_Major_Modify_Save_Update->Enabled = false;
		button_Major_Delete->Enabled = false;
	}

	private: System::Void dataGridView_Major_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (LoadData(1, dataGridView_Major->SelectedRows[0]->Cells[0]->Value->ToString())) {
			button_Major_Modify_Save_Update->Enabled = true;
			button_Major_Delete->Enabled = true;
		}
	}
#pragma endregion

#pragma region CourseConfigurationPanelEvents
	private: System::Void button_Course_Add_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Course_Add_Cancel->Text;

		if (buttonText == "Add") { // If the menu is in Initial State
			ClearConfigBox(2);
			EnableConfigBox(2, true);

			button_Course_Add_Cancel->Text = "Cancel";
			button_Course_Modify_Save_Update->Text = "Save";

			button_Course_Modify_Save_Update->Enabled = true;
			button_Course_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldCourseConfigData[0] = "";
			oldCourseConfigData[1] = "";
			oldCourseConfigData[2] = "";
			oldCourseConfigData[3] = "";

		}
		else if (buttonText == "Cancel") { // If the menu is in Add or Modify State
			EnableConfigBox(2, false);

			button_Course_Add_Cancel->Text = "Add";
			button_Course_Modify_Save_Update->Text = "Modify";

			button_Course_Modify_Save_Update->Enabled = false;
			button_Course_Delete->Enabled = false;
			button_Course_Delete->Visible = true;

			// Load the old data
			comboBox_Course_Major->Text = oldCourseConfigData[1];
			comboBox_Course_Semester->Text = oldCourseConfigData[2];
			textBox_Course_Name->Text = oldCourseConfigData[0];
			textBox_Course_Credit->Text = oldCourseConfigData[3];

		}
	}

	private: System::Void button_Course_Modify_Save_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Course_Modify_Save_Update->Text;

		if (buttonText == "Modify") { // If the menu is in Initial State
			EnableConfigBox(2, true);

			button_Course_Add_Cancel->Text = "Cancel";
			button_Course_Modify_Save_Update->Text = "Update";

			button_Course_Modify_Save_Update->Enabled = true;
			button_Course_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldCourseConfigData[0] = textBox_Course_Name->Text;
			oldCourseConfigData[1] = comboBox_Course_Major->Text;
			oldCourseConfigData[2] = comboBox_Course_Semester->Text;
			oldCourseConfigData[3] = textBox_Course_Credit-> Text;
		}
		else if (buttonText == "Save") { // If the menu is in Add State
			if (isAnyBoxEmpty(2)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(4, textBox_Course_Name->Text)) { // Check if data existed already
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Save the data into list
			Course^ temp = gcnew Course(comboBox_Course_Major->Text->Trim(), comboBox_Course_Semester->Text->Trim(), textBox_Course_Credit->Text->Trim(), textBox_Course_Name->Text->Trim());
			Global::COURSE_LIST->append(temp);

			EnableConfigBox(2, false);
			LoadAccountConfig(AccountTypeToInt());
			dataGridView_Course->DataSource = GetDataTable(2);

			button_Course_Add_Cancel->Text = "Add";
			button_Course_Modify_Save_Update->Text = "Modify";

			button_Course_Modify_Save_Update->Enabled = false;
			button_Course_Delete->Enabled = false;
			button_Course_Delete->Visible = true;
		}
		else if (buttonText == "Update") { // If the menu is in Modify State
			if (isAnyBoxEmpty(2)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(4, textBox_Course_Name->Text) && textBox_Course_Name->Text != oldCourseConfigData[0]) {
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Update the data in the list
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::COURSE_LIST->leftLength();
			Global::COURSE_LIST->setStart();
			for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
				Course^ temp = gcnew Course();
				Global::COURSE_LIST->getValue(temp);
				if (temp->getName() == oldCourseConfigData[0]) {
					temp->setData(comboBox_Course_Major->Text->Trim(), comboBox_Course_Semester->Text->Trim(), textBox_Course_Credit->Text->Trim(), textBox_Course_Name->Text->Trim());
					break;
				}
				Global::COURSE_LIST->next();
			}
			Global::COURSE_LIST->setPos(lastPos);

			EnableConfigBox(2, false);
			LoadAccountConfig(AccountTypeToInt());
			dataGridView_Course->DataSource = GetDataTable(2);

			button_Course_Add_Cancel->Text = "Add";
			button_Course_Modify_Save_Update->Text = "Modify";

			button_Course_Modify_Save_Update->Enabled = false;
			button_Course_Delete->Enabled = false;
			button_Course_Delete->Visible = true;
		}
	}

	private: System::Void button_Course_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check to make sure if the user really want to delete the data or just misspressed
		if (MessageBox::Show("Are you sure you want to delete Course '" + textBox_Course_Name->Text + "'?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No) {
			return;
		}

		// Delete the course from list of class
		int lastPos; // Save last position of fence in the linked list
		lastPos = Global::COURSE_LIST->leftLength();
		Global::COURSE_LIST->setStart();
		for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
			Course^ temp = gcnew Course();
			Global::COURSE_LIST->getValue(temp);
			if (temp->getName() == textBox_Course_Name->Text->Trim()) {
				Global::COURSE_LIST->remove(temp);
				break;
			}
			Global::COURSE_LIST->next();
		}
		Global::COURSE_LIST->setPos(lastPos);

		ClearConfigBox(2);
		EnableConfigBox(2, false);
		LoadAccountConfig(AccountTypeToInt());
		dataGridView_Course->DataSource = GetDataTable(2);

		button_Course_Modify_Save_Update->Enabled = false;
		button_Course_Delete->Enabled = false;
	}

	private: System::Void dataGridView_Course_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (LoadData(2, dataGridView_Course->SelectedRows[0]->Cells[0]->Value->ToString())) {
			button_Course_Modify_Save_Update->Enabled = true;
			button_Course_Delete->Enabled = true;
		}
	}
#pragma endregion

#pragma region ClassConfigurationPanelEvents
	private: System::Void button_Class_Add_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Class_Add_Cancel->Text;

		if (buttonText == "Add") { // If the menu is in Initial State
			ClearConfigBox(3);
			EnableConfigBox(3, true);

			button_Class_Add_Cancel->Text = "Cancel";
			button_Class_Modify_Save_Update->Text = "Save";

			button_Class_Modify_Save_Update->Enabled = true;
			button_Class_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldClassConfigData[0] = "";
			oldClassConfigData[1] = "";
		}
		else if (buttonText == "Cancel") { // If the menu is in Add or Modify State
			EnableConfigBox(3, false);

			button_Class_Add_Cancel->Text = "Add";
			button_Class_Modify_Save_Update->Text = "Modify";

			button_Class_Modify_Save_Update->Enabled = false;
			button_Class_Delete->Enabled = false;
			button_Class_Delete->Visible = true;

			// Load the old data
			comboBox_Class_Major->Text = oldCourseConfigData[1];
			textBox_Class_Name->Text = oldCourseConfigData[0];
		}
	}

	private: System::Void button_Class_Modify_Save_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buttonText = button_Class_Modify_Save_Update->Text;

		if (buttonText == "Modify") { // If the menu is in Initial State
			EnableConfigBox(3, true);

			button_Class_Add_Cancel->Text = "Cancel";
			button_Class_Modify_Save_Update->Text = "Update";

			button_Class_Modify_Save_Update->Enabled = true;
			button_Class_Delete->Visible = false;

			// Save the old data in case the User press Cancel
			oldClassConfigData[1] = comboBox_Class_Major->Text;
			oldClassConfigData[0] = textBox_Class_Name->Text;
		}
		else if (buttonText == "Save") { // If the menu is in Add State
			if (isAnyBoxEmpty(3)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(5, textBox_Class_Name->Text)) { // Check if data existed already
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Save the data into list
			Class^ temp = gcnew Class(comboBox_Class_Major->Text->Trim(), textBox_Class_Name->Text->Trim());
			Global::CLASS_LIST->append(temp);

			EnableConfigBox(3, false);
			LoadAccountConfig(AccountTypeToInt());
			dataGridView_Class->DataSource = GetDataTable(3);

			button_Class_Add_Cancel->Text = "Add";
			button_Class_Modify_Save_Update->Text = "Modify";

			button_Class_Modify_Save_Update->Enabled = false;
			button_Class_Delete->Enabled = false;
			button_Class_Delete->Visible = true;
		}
		else if (buttonText == "Update") { // If the menu is in Modify State
			if (isAnyBoxEmpty(3)) {
				MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Check if the name already exist or not
			if (Global::DataExist(5, textBox_Class_Name->Text) && textBox_Class_Name->Text != oldClassConfigData[0]) {
				MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}

			// Update the data in the list
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::CLASS_LIST->leftLength();
			Global::CLASS_LIST->setStart();
			for (int i = 0; i < Global::CLASS_LIST->length(); i++) {
				Class^ temp = gcnew Class();
				Global::CLASS_LIST->getValue(temp);
				if (temp->getName() == oldClassConfigData[0]) {
					temp->setData(comboBox_Class_Major->Text->Trim(), textBox_Class_Name->Text->Trim());
					break;
				}
				Global::CLASS_LIST->next();
			}
			Global::CLASS_LIST->setPos(lastPos);

			EnableConfigBox(3, false);
			LoadAccountConfig(AccountTypeToInt());
			dataGridView_Class->DataSource = GetDataTable(3);

			button_Class_Add_Cancel->Text = "Add";
			button_Class_Modify_Save_Update->Text = "Modify";

			button_Class_Modify_Save_Update->Enabled = false;
			button_Class_Delete->Enabled = false;
			button_Class_Delete->Visible = true;
		}
	}

	private: System::Void button_Class_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check to make sure if the user really want to delete the data or just misspressed
		if (MessageBox::Show("Are you sure you want to delete Class '" + textBox_Class_Name->Text + "'?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No) {
			return;
		}

		// Delete the course from list of class
		int lastPos; // Save last position of fence in the linked list
		lastPos = Global::CLASS_LIST->leftLength();
		Global::CLASS_LIST->setStart();
		for (int i = 0; i < Global::CLASS_LIST->length(); i++) {
			Class^ temp = gcnew Class();
			Global::CLASS_LIST->getValue(temp);
			if (temp->getName() == textBox_Class_Name->Text->Trim()) {
				Global::CLASS_LIST->remove(temp);
				break;
			}
			Global::CLASS_LIST->next();
		}
		Global::CLASS_LIST->setPos(lastPos);

		ClearConfigBox(3);
		EnableConfigBox(3, false);
		LoadAccountConfig(AccountTypeToInt());
		dataGridView_Class->DataSource = GetDataTable(3);

		button_Class_Modify_Save_Update->Enabled = false;
		button_Class_Delete->Enabled = false;
	}

	private: System::Void dataGridView_Class_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (LoadData(3, dataGridView_Class->SelectedRows[0]->Cells[0]->Value->ToString())) {
			button_Class_Modify_Save_Update->Enabled = true;
			button_Class_Delete->Enabled = true;
		}
	}

	private: System::Void comboBox_Semester_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!radioButton_Teacher->Checked) return;

		if (comboBox_Semester->Text != "") {
			comboBox_Major_Subject->Enabled = true;

			int lastPos; // Save last position of fence in the linked list
				// Load Courses into the ComboBox
			lastPos = Global::COURSE_LIST->leftLength();
			Global::COURSE_LIST->setStart();
			comboBox_Major_Subject->Items->Clear();
			for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
				Course^ temp = gcnew Course();
				Global::COURSE_LIST->getValue(temp);
				if (temp->getSemester().ToString() == comboBox_Semester->Text)
					comboBox_Major_Subject->Items->Add(temp->getName());
				Global::COURSE_LIST->next();
			}
			Global::COURSE_LIST->setPos(lastPos);
		}
		else {
			comboBox_Major_Subject->Enabled = false;
		}
	}

#pragma endregion

};
}




