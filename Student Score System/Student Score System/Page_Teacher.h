#pragma once
#include "Global.h"
#include "Grade.h"
#include "Page_Admin.h"
#include "Page_Admin.h"

namespace Student_Score_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Teacher
	/// </summary>
	public ref class Page_Teacher : public System::Windows::Forms::Form {
	public:
		Page_Teacher(void)
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
		~Page_Teacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_Student_Score;
	private: System::Windows::Forms::Panel^ panel_Student_Score;

	private: System::Windows::Forms::DataGridView^ dataGridView_Student_Score;



	private: System::Windows::Forms::Button^ button_StudentScore_Delete;


	private: System::Windows::Forms::Button^ button_StudentScore_Modify_Save_Update;
	private: System::Windows::Forms::Button^ button_StudentScore_Add_Cancel;
	private: System::Windows::Forms::ComboBox^ comboBox_StudentScore_Grade;



	private: System::Windows::Forms::Label^ label_StudentScore_Grade;
	private: System::Windows::Forms::ComboBox^ comboBox_StudentScore_StudentName;



	private: System::Windows::Forms::Label^ label_StudentScore_StudentName;


	private: System::Windows::Forms::Label^ label_Student_Result;
	private: System::Windows::Forms::Panel^ panel_Student_Result;
	private: System::Windows::Forms::Label^ label_StudentResult_SearchKey;














	private: System::Windows::Forms::Button^ button_StudentResult_Search;

	private: System::Windows::Forms::DataGridView^ dataGridView_Student_Result;
	private: System::Windows::Forms::TextBox^ textBox_StudentResult_Search;




























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label_Student_Score = (gcnew System::Windows::Forms::Label());
			this->panel_Student_Score = (gcnew System::Windows::Forms::Panel());
			this->dataGridView_Student_Score = (gcnew System::Windows::Forms::DataGridView());
			this->button_StudentScore_Delete = (gcnew System::Windows::Forms::Button());
			this->button_StudentScore_Modify_Save_Update = (gcnew System::Windows::Forms::Button());
			this->button_StudentScore_Add_Cancel = (gcnew System::Windows::Forms::Button());
			this->comboBox_StudentScore_Grade = (gcnew System::Windows::Forms::ComboBox());
			this->label_StudentScore_Grade = (gcnew System::Windows::Forms::Label());
			this->comboBox_StudentScore_StudentName = (gcnew System::Windows::Forms::ComboBox());
			this->label_StudentScore_StudentName = (gcnew System::Windows::Forms::Label());
			this->label_Student_Result = (gcnew System::Windows::Forms::Label());
			this->panel_Student_Result = (gcnew System::Windows::Forms::Panel());
			this->textBox_StudentResult_Search = (gcnew System::Windows::Forms::TextBox());
			this->label_StudentResult_SearchKey = (gcnew System::Windows::Forms::Label());
			this->button_StudentResult_Search = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Student_Result = (gcnew System::Windows::Forms::DataGridView());
			this->panel_Student_Score->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Student_Score))->BeginInit();
			this->panel_Student_Result->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Student_Result))->BeginInit();
			this->SuspendLayout();
			// 
			// label_Student_Score
			// 
			this->label_Student_Score->AutoSize = true;
			this->label_Student_Score->Font = (gcnew System::Drawing::Font(L"SimSun", 9));
			this->label_Student_Score->Location = System::Drawing::Point(37, 32);
			this->label_Student_Score->Name = L"label_Student_Score";
			this->label_Student_Score->Size = System::Drawing::Size(134, 18);
			this->label_Student_Score->TabIndex = 4;
			this->label_Student_Score->Text = L"Student Score:";
			// 
			// panel_Student_Score
			// 
			this->panel_Student_Score->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Student_Score->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Student_Score->Controls->Add(this->dataGridView_Student_Score);
			this->panel_Student_Score->Controls->Add(this->button_StudentScore_Delete);
			this->panel_Student_Score->Controls->Add(this->button_StudentScore_Modify_Save_Update);
			this->panel_Student_Score->Controls->Add(this->button_StudentScore_Add_Cancel);
			this->panel_Student_Score->Controls->Add(this->comboBox_StudentScore_Grade);
			this->panel_Student_Score->Controls->Add(this->label_StudentScore_Grade);
			this->panel_Student_Score->Controls->Add(this->comboBox_StudentScore_StudentName);
			this->panel_Student_Score->Controls->Add(this->label_StudentScore_StudentName);
			this->panel_Student_Score->Location = System::Drawing::Point(51, 71);
			this->panel_Student_Score->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel_Student_Score->Name = L"panel_Student_Score";
			this->panel_Student_Score->Size = System::Drawing::Size(682, 541);
			this->panel_Student_Score->TabIndex = 3;
			// 
			// dataGridView_Student_Score
			// 
			this->dataGridView_Student_Score->AllowUserToAddRows = false;
			this->dataGridView_Student_Score->AllowUserToDeleteRows = false;
			this->dataGridView_Student_Score->AllowUserToResizeRows = false;
			this->dataGridView_Student_Score->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Student_Score->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Student_Score->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Student_Score->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_Student_Score->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Student_Score->Location = System::Drawing::Point(27, 224);
			this->dataGridView_Student_Score->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView_Student_Score->MultiSelect = false;
			this->dataGridView_Student_Score->Name = L"dataGridView_Student_Score";
			this->dataGridView_Student_Score->ReadOnly = true;
			this->dataGridView_Student_Score->RowHeadersVisible = false;
			this->dataGridView_Student_Score->RowHeadersWidth = 51;
			this->dataGridView_Student_Score->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Student_Score->Size = System::Drawing::Size(623, 293);
			this->dataGridView_Student_Score->TabIndex = 11;
			this->dataGridView_Student_Score->TabStop = false;
			this->dataGridView_Student_Score->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Teacher::dataGridView_Student_Score_CellClick);
			// 
			// button_StudentScore_Delete
			// 
			this->button_StudentScore_Delete->Enabled = false;
			this->button_StudentScore_Delete->Location = System::Drawing::Point(377, 173);
			this->button_StudentScore_Delete->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_StudentScore_Delete->Name = L"button_StudentScore_Delete";
			this->button_StudentScore_Delete->Size = System::Drawing::Size(84, 31);
			this->button_StudentScore_Delete->TabIndex = 9;
			this->button_StudentScore_Delete->Text = L"Delete";
			this->button_StudentScore_Delete->UseVisualStyleBackColor = true;
			this->button_StudentScore_Delete->Click += gcnew System::EventHandler(this, &Page_Teacher::button_StudentScore_Delete_Click);
			// 
			// button_StudentScore_Modify_Save_Update
			// 
			this->button_StudentScore_Modify_Save_Update->Enabled = false;
			this->button_StudentScore_Modify_Save_Update->Location = System::Drawing::Point(238, 173);
			this->button_StudentScore_Modify_Save_Update->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_StudentScore_Modify_Save_Update->Name = L"button_StudentScore_Modify_Save_Update";
			this->button_StudentScore_Modify_Save_Update->Size = System::Drawing::Size(84, 31);
			this->button_StudentScore_Modify_Save_Update->TabIndex = 8;
			this->button_StudentScore_Modify_Save_Update->Text = L"Modify";
			this->button_StudentScore_Modify_Save_Update->UseVisualStyleBackColor = true;
			this->button_StudentScore_Modify_Save_Update->Click += gcnew System::EventHandler(this, &Page_Teacher::button_StudentScore_Modify_Save_Update_Click);
			// 
			// button_StudentScore_Add_Cancel
			// 
			this->button_StudentScore_Add_Cancel->Location = System::Drawing::Point(108, 173);
			this->button_StudentScore_Add_Cancel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_StudentScore_Add_Cancel->Name = L"button_StudentScore_Add_Cancel";
			this->button_StudentScore_Add_Cancel->Size = System::Drawing::Size(84, 31);
			this->button_StudentScore_Add_Cancel->TabIndex = 7;
			this->button_StudentScore_Add_Cancel->Text = L"Add";
			this->button_StudentScore_Add_Cancel->UseVisualStyleBackColor = true;
			this->button_StudentScore_Add_Cancel->Click += gcnew System::EventHandler(this, &Page_Teacher::button_StudentScore_Add_Cancel_Click);
			// 
			// comboBox_StudentScore_Grade
			// 
			this->comboBox_StudentScore_Grade->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_StudentScore_Grade->FormattingEnabled = true;
			this->comboBox_StudentScore_Grade->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"A", L"A-", L"B+", L"B", L"B-",
					L"C+", L"C", L"C-", L"D+", L"D", L"D-", L"F"
			});
			this->comboBox_StudentScore_Grade->Location = System::Drawing::Point(222, 104);
			this->comboBox_StudentScore_Grade->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox_StudentScore_Grade->Name = L"comboBox_StudentScore_Grade";
			this->comboBox_StudentScore_Grade->Size = System::Drawing::Size(67, 28);
			this->comboBox_StudentScore_Grade->TabIndex = 6;
			// 
			// label_StudentScore_Grade
			// 
			this->label_StudentScore_Grade->AutoSize = true;
			this->label_StudentScore_Grade->Location = System::Drawing::Point(105, 115);
			this->label_StudentScore_Grade->Name = L"label_StudentScore_Grade";
			this->label_StudentScore_Grade->Size = System::Drawing::Size(54, 20);
			this->label_StudentScore_Grade->TabIndex = 5;
			this->label_StudentScore_Grade->Text = L"Grade";
			// 
			// comboBox_StudentScore_StudentName
			// 
			this->comboBox_StudentScore_StudentName->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox_StudentScore_StudentName->FormattingEnabled = true;
			this->comboBox_StudentScore_StudentName->Location = System::Drawing::Point(222, 27);
			this->comboBox_StudentScore_StudentName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->comboBox_StudentScore_StudentName->Name = L"comboBox_StudentScore_StudentName";
			this->comboBox_StudentScore_StudentName->Size = System::Drawing::Size(373, 28);
			this->comboBox_StudentScore_StudentName->TabIndex = 3;
			// 
			// label_StudentScore_StudentName
			// 
			this->label_StudentScore_StudentName->AutoSize = true;
			this->label_StudentScore_StudentName->Location = System::Drawing::Point(99, 31);
			this->label_StudentScore_StudentName->Name = L"label_StudentScore_StudentName";
			this->label_StudentScore_StudentName->Size = System::Drawing::Size(112, 20);
			this->label_StudentScore_StudentName->TabIndex = 0;
			this->label_StudentScore_StudentName->Text = L"Student Name";
			// 
			// label_Student_Result
			// 
			this->label_Student_Result->AutoSize = true;
			this->label_Student_Result->Location = System::Drawing::Point(26, 628);
			this->label_Student_Result->Name = L"label_Student_Result";
			this->label_Student_Result->Size = System::Drawing::Size(181, 20);
			this->label_Student_Result->TabIndex = 5;
			this->label_Student_Result->Text = L"Enquiry Student Result: ";
			// 
			// panel_Student_Result
			// 
			this->panel_Student_Result->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Student_Result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Student_Result->Controls->Add(this->textBox_StudentResult_Search);
			this->panel_Student_Result->Controls->Add(this->label_StudentResult_SearchKey);
			this->panel_Student_Result->Controls->Add(this->button_StudentResult_Search);
			this->panel_Student_Result->Controls->Add(this->dataGridView_Student_Result);
			this->panel_Student_Result->Location = System::Drawing::Point(29, 652);
			this->panel_Student_Result->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel_Student_Result->Name = L"panel_Student_Result";
			this->panel_Student_Result->Size = System::Drawing::Size(793, 378);
			this->panel_Student_Result->TabIndex = 6;
			// 
			// textBox_StudentResult_Search
			// 
			this->textBox_StudentResult_Search->Location = System::Drawing::Point(214, 25);
			this->textBox_StudentResult_Search->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox_StudentResult_Search->Name = L"textBox_StudentResult_Search";
			this->textBox_StudentResult_Search->Size = System::Drawing::Size(388, 26);
			this->textBox_StudentResult_Search->TabIndex = 4;
			// 
			// label_StudentResult_SearchKey
			// 
			this->label_StudentResult_SearchKey->AutoSize = true;
			this->label_StudentResult_SearchKey->Location = System::Drawing::Point(46, 29);
			this->label_StudentResult_SearchKey->Name = L"label_StudentResult_SearchKey";
			this->label_StudentResult_SearchKey->Size = System::Drawing::Size(137, 20);
			this->label_StudentResult_SearchKey->TabIndex = 3;
			this->label_StudentResult_SearchKey->Text = L"Enter Search Key ";
			// 
			// button_StudentResult_Search
			// 
			this->button_StudentResult_Search->Location = System::Drawing::Point(619, 29);
			this->button_StudentResult_Search->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_StudentResult_Search->Name = L"button_StudentResult_Search";
			this->button_StudentResult_Search->Size = System::Drawing::Size(84, 31);
			this->button_StudentResult_Search->TabIndex = 1;
			this->button_StudentResult_Search->Text = L"Search";
			this->button_StudentResult_Search->UseVisualStyleBackColor = true;
			this->button_StudentResult_Search->Click += gcnew System::EventHandler(this, &Page_Teacher::button_StudentResult_Search_Click);
			// 
			// dataGridView_Student_Result
			// 
			this->dataGridView_Student_Result->AllowUserToAddRows = false;
			this->dataGridView_Student_Result->AllowUserToDeleteRows = false;
			this->dataGridView_Student_Result->AllowUserToOrderColumns = true;
			this->dataGridView_Student_Result->AllowUserToResizeColumns = false;
			this->dataGridView_Student_Result->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Student_Result->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Student_Result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Student_Result->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_Student_Result->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Student_Result->Location = System::Drawing::Point(21, 97);
			this->dataGridView_Student_Result->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView_Student_Result->MultiSelect = false;
			this->dataGridView_Student_Result->Name = L"dataGridView_Student_Result";
			this->dataGridView_Student_Result->RowHeadersVisible = false;
			this->dataGridView_Student_Result->RowHeadersWidth = 51;
			this->dataGridView_Student_Result->RowTemplate->Height = 27;
			this->dataGridView_Student_Result->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Student_Result->Size = System::Drawing::Size(752, 259);
			this->dataGridView_Student_Result->TabIndex = 0;
			this->dataGridView_Student_Result->TabStop = false;
			// 
			// Page_Teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(882, 1085);
			this->Controls->Add(this->label_Student_Result);
			this->Controls->Add(this->panel_Student_Result);
			this->Controls->Add(this->label_Student_Score);
			this->Controls->Add(this->panel_Student_Score);
			this->Name = L"Page_Teacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teacher Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Page_Teacher::Page_Teacher_Load);
			this->panel_Student_Score->ResumeLayout(false);
			this->panel_Student_Score->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Student_Score))->EndInit();
			this->panel_Student_Result->ResumeLayout(false);
			this->panel_Student_Result->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Student_Result))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		array<String^>^ oldStudentScore = gcnew array<String^>(4); // The String array will store : studentName, course, grade, gradePoint
		String^ current_user_course; // subject taught by the current_user type teacher 
		String^ current_user_course_credit;
		String^ student_gradepoint;
		String^ ID, ^ class_name, ^ major; // info from student list to display on table
		int search_type;
		int semester;

#pragma region Functions
	private:
		// Initialize the Initial Value
		void Initialization() {
			this->Text = "Teacher Page | Welcome, " + Global::CURRENT_USER->getName(); // Initialize Form Name

			// Initialize DataGridView
			dataGridView_Student_Score->DataSource = GetDataTable(0);
			dataGridView_Student_Result->DataSource = GetDataTable(1);

			// Initialize Enabled - Student Score Panel
			comboBox_StudentScore_Grade->Enabled = false;
			comboBox_StudentScore_StudentName->Enabled = false;

			button_StudentScore_Delete->Enabled = false;
			button_StudentScore_Modify_Save_Update->Enabled = false;

			// Store SubjectTaught of the CURRENT_USER is
			current_user_course = ((Teacher^)Global::CURRENT_USER)->getSubjectTaught();

			Load_Studentname_combobox();
		}

		String^ get_Credit_of_Course(String^ Tcourse) {
			// To find the credit of the course taught by CURRENT_USER
			int lastPos = Global::COURSE_LIST->leftLength();
			for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
				Course^ temp = gcnew Course();
				Global::COURSE_LIST->getValue(temp);
				//If the teacher.h the subjectname= the name of course in the course list, return the course credit  
				if (Tcourse == temp->getName()) { current_user_course_credit = temp->getCredit(); }
				Global::COURSE_LIST->next();
			}
			Global::COURSE_LIST->setPos(lastPos);
			return current_user_course_credit;
		}

		String^ CalGradePoint() {
			String^ check = comboBox_StudentScore_Grade->Text->Trim();
			double gp;

			if (check == "A") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 4;;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "A-") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 3.7;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "B+") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 3.3;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "B") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 3;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "B-") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 2.7;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "C+") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 2.3;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "C") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 2;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "C-") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 1.7;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == " D+") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 1.3;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == " D") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 1;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == " D-") {
				get_Credit_of_Course(current_user_course);
				gp = Convert::ToDouble(current_user_course_credit) * 0.7;
				student_gradepoint = Convert::ToString(gp);
			}
			else if (check == "F") {
				get_Credit_of_Course(current_user_course);
				gp = 0;
				student_gradepoint = Convert::ToString(gp);
			}

			return student_gradepoint;
		}

		// Get the Data from Student list such as : ID, Class Name and Major
		void getStudentinfo(String^ name) {
			int lastPos = Global::STUDENT_LIST->leftLength();
			for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
				Student^ temp = gcnew Student();
				Global::STUDENT_LIST->getValue(temp);
				if (name == temp->getName()) {
					ID = temp->getStudentID();
					class_name = temp->getClassName();
					major = temp->getMajor();
					break;
				}
				Global::STUDENT_LIST->next();
			}
			Global::STUDENT_LIST->setPos(lastPos);
		}

		bool Matching(String^ Search) {	//to see if there is a match
			DataTable^ tempTable = gcnew DataTable;
			int lastPos = Global::GRADE_LIST->leftLength();
			bool enq = false;
			for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
				Grade^ temp = gcnew Grade();
				Global::GRADE_LIST->getValue(temp);

				getStudentinfo(temp->getName());
				if (temp->getName()->Trim() == Search->Trim()) {
					search_type = 0;
					return true;
				}
				else if (ID->Trim() == Search->Trim()) {
					search_type = 1;
					return true;
				}
				else if (class_name->Trim() == Search->Trim()) {
					search_type = 2;
					return true;
				}
				else if (major->Trim() == Search->Trim()) {
					search_type = 3;
					return true;
				}
				Global::GRADE_LIST->next();
			}
			Global::GRADE_LIST->setPos(lastPos);
			return search_type;
		}

		
		DataTable^ GetMatchingTable(String^ Search, int type) {	//print matching
			DataTable^ tempTable = gcnew DataTable;
			Teacher^ temp_current = (Teacher^)Global::CURRENT_USER;
			int lastPos = Global::GRADE_LIST->leftLength(); // Save last position of fence in the linked list

			tempTable->Columns->Add("Student Name");
			tempTable->Columns->Add("ID");
			tempTable->Columns->Add("Class");
			tempTable->Columns->Add("Major");
			tempTable->Columns->Add("Grade");
			switch (type) {
			case 0:
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					if (temp->getName()->Trim() == Search->Trim() && temp_current->getSubjectTaught() == temp->getCourse()) {
						getStudentinfo(temp->getName());
						tempTable->Rows->Add(temp->getName(), ID, class_name, major, temp->getGrade());
					}
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
				break;
			case 1:
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					getStudentinfo(temp->getName());
					if (ID->Trim() == Search->Trim() && temp_current->getSubjectTaught() == temp->getCourse()) {
						tempTable->Rows->Add(temp->getName(), ID, class_name, major, temp->getGrade());
					}
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
				break;
			case 2:
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					getStudentinfo(temp->getName());
					if (class_name->Trim() == Search->Trim() && temp_current->getSubjectTaught() == temp->getCourse()) {
						tempTable->Rows->Add(temp->getName(), ID, class_name, major, temp->getGrade());
					}
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
				break;
			case 3:
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					getStudentinfo(temp->getName());
					if (major->Trim() == Search->Trim() && temp_current->getSubjectTaught() == temp->getCourse()) {
						tempTable->Rows->Add(temp->getName(), ID, class_name, major, temp->getGrade());
					}
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
				break;
			}
			return tempTable;
		}

		// Clear text for each box in Panel.
		// Type:
		// 0 = Student Score Panel
		// 1 = Enquiry Result Panel
		void ClearConfigBox(int type)
		{
			if (type == 0)
			{
				comboBox_StudentScore_Grade->SelectedIndex = -1;
				comboBox_StudentScore_StudentName->SelectedIndex = -1;
			}
			else if (type == 1)
			{

			}
		}

		// Set the Enabled properties for each box in Panel.
		// Type:
		// 0 = Student Score Panel
		// 1 = Enquiry Result Panel 
		void EnableConfigBox(int type, bool isEnabled)
		{
			if (type == 0)
			{
				comboBox_StudentScore_Grade->Enabled = isEnabled;
				comboBox_StudentScore_StudentName->Enabled = isEnabled;
				dataGridView_Student_Score->Enabled = !isEnabled;
			}
			else if (type == 1)
			{
				dataGridView_Student_Result->Enabled = !isEnabled;
			}
		}

		// Load Data saved in list of classes into dataTable.
		// Type:
		// 0 = Student Score Panel
		// 1 = Enquiry Result Panel
		DataTable^ GetDataTable(int type)
		{
			DataTable^ tempTable = gcnew DataTable;
			int lastPos; // Save last position of fence in the linked list

			if (type == 0) {
				tempTable->Columns->Add("Student Name");
				tempTable->Columns->Add("Course");
				tempTable->Columns->Add("Grade");
				tempTable->Columns->Add("Grade Point");

				lastPos = Global::STUDENT_LIST->leftLength();
				Global::STUDENT_LIST->setStart();
				Teacher^ temp_current = (Teacher^)Global::CURRENT_USER;

				for (int i = 0; i < Global::STUDENT_LIST->length(); i++)
				{
					Student^ temp_STUDENT = gcnew Student();
					Global::STUDENT_LIST->getValue(temp_STUDENT);

					if (temp_STUDENT->getSemester() == temp_current->getSemester() && temp_STUDENT->courseExist(temp_current->getSubjectTaught())) {
						int lastPos_GRADE = Global::GRADE_LIST->leftLength();
						Global::GRADE_LIST->setStart();

						for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
							Grade^ temp_GRADE = gcnew Grade();
							Global::GRADE_LIST->getValue(temp_GRADE);

							if (temp_GRADE->getName() == temp_STUDENT->getName() && temp_current->getSubjectTaught() == temp_GRADE->getCourse()) {
								tempTable->Rows->Add(temp_GRADE->getName(), temp_GRADE->getCourse(), temp_GRADE->getGrade(), temp_GRADE->getGradePoint());
							}
							Global::GRADE_LIST->next();
						}
						Global::GRADE_LIST->setPos(lastPos_GRADE);
					}
					Global::STUDENT_LIST->next();
				}
				Global::STUDENT_LIST->setPos(lastPos);
			}
			return tempTable;
		}

		// Load the selected Data from DataGridView into the Boxes and Controls in Panel.
		// Type:
		// 0 = Student Score Panel
		// 1 = Enquiry Result Panel
		bool LoadData(int type, String^ name) {
			int lastPos; // Save last position of fence in the linked list

			if (type == 0)
			{
				lastPos = Global::GRADE_LIST->leftLength();
				Global::GRADE_LIST->setStart();
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					if (temp->getName() == name) {
						comboBox_StudentScore_StudentName->Text = temp->getName();
						comboBox_StudentScore_Grade->Text = temp->getGrade();
						return true;
					}
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
			}
			return false;
		}

		// Initialize ComboBox Initial Items
		void Load_Studentname_combobox() {
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::STUDENT_LIST->leftLength();
			Global::STUDENT_LIST->setStart();
			comboBox_StudentScore_StudentName->Items->Clear();
			Teacher^ temp_current = (Teacher^)Global::CURRENT_USER;

			for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
				Student^ temp = gcnew Student();
				Global::STUDENT_LIST->getValue(temp);
				if (temp->getSemester() == temp_current->getSemester() && temp->courseExist(temp_current->getSubjectTaught()))
					comboBox_StudentScore_StudentName->Items->Add(temp->getName());
				Global::STUDENT_LIST->next();
			}
			Global::STUDENT_LIST->setPos(lastPos);
		}
#pragma endregion

		/// <summary>
		/// Events
		/// </summary>
		private: System::Void Page_Teacher_Load(System::Object^ sender, System::EventArgs^ e) {
			Initialization();
		}

		private: System::Void button_StudentScore_Add_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ buttonText1 = button_StudentScore_Add_Cancel->Text;

			if (buttonText1 == "Add") { // If the menu is in Initial State
				ClearConfigBox(0);
				EnableConfigBox(0, true);

				button_StudentScore_Add_Cancel->Text = "Cancel";
				button_StudentScore_Modify_Save_Update->Text = "Save";

				button_StudentScore_Add_Cancel->Enabled = true;
				button_StudentScore_Modify_Save_Update->Enabled = true;

				button_StudentScore_Delete->Visible = false;

				// Save the old data in case the User press Cancel
				oldStudentScore[0] = "";
				oldStudentScore[1] = "";
				oldStudentScore[2] = "";
				oldStudentScore[3] = "";
			}
			else if (buttonText1 == "Cancel") { // If the menu is in Add or Modify State
				EnableConfigBox(0, false);

				button_StudentScore_Add_Cancel->Text = "Add";
				button_StudentScore_Modify_Save_Update->Text = "Modify";

				button_StudentScore_Modify_Save_Update->Enabled = false;

				button_StudentScore_Delete->Enabled = false;
				button_StudentScore_Delete->Visible = true;

				// Load the old data
				comboBox_StudentScore_StudentName->Text = oldStudentScore[0];
				comboBox_StudentScore_Grade->Text = oldStudentScore[2];
			}
		}

		private: System::Void button_StudentScore_Modify_Save_Update_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ buttonText2 = button_StudentScore_Modify_Save_Update->Text;

			if (buttonText2 == "Modify") { // If the menu is in Initial State
				EnableConfigBox(0, true);

				button_StudentScore_Add_Cancel->Text = "Cancel";
				button_StudentScore_Modify_Save_Update->Text = "Update";

				button_StudentScore_Add_Cancel->Enabled = true;
				button_StudentScore_Modify_Save_Update->Enabled = true;

				button_StudentScore_Delete->Visible = false;

				// Save the old data in case the User press Cancel
				oldStudentScore[0] = comboBox_StudentScore_StudentName->Text;
				oldStudentScore[2] = comboBox_StudentScore_Grade->Text;
			}
			else if (buttonText2 == "Save") { // If the menu is in Add State
				if (comboBox_StudentScore_Grade->Text->Trim() == "" || comboBox_StudentScore_StudentName->Text->Trim() == "") {
					MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}

				// Check if the name already exist or not
				if (Global::GradeDataExist(comboBox_StudentScore_StudentName->Text, current_user_course)) { // Check if data existed already
					MessageBox::Show("Duplicate Name. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}

				// Save the data into list
				Grade^ temp = gcnew Grade(comboBox_StudentScore_StudentName->Text->Trim(), current_user_course, comboBox_StudentScore_Grade->Text->Trim(), CalGradePoint());
				Global::GRADE_LIST->append(temp);

				EnableConfigBox(0, false);
				//Load_Studentname_combobox();
				dataGridView_Student_Score->DataSource = GetDataTable(0);

				button_StudentScore_Add_Cancel->Text = "Add";
				button_StudentScore_Modify_Save_Update->Text = "Modify";

				button_StudentScore_Modify_Save_Update->Enabled = false;
				button_StudentScore_Add_Cancel->Enabled = true;

				button_StudentScore_Delete->Enabled = false;
				button_StudentScore_Delete->Visible = true;
			}
			else if (buttonText2 == "Update") { // If the menu is in Modify State
				if (comboBox_StudentScore_Grade->Text->Trim() == "" || comboBox_StudentScore_StudentName->Text->Trim() == "") {
					MessageBox::Show("Box cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}

				// Update the data in the list
				int lastPos; // Save last position of fence in the linked list
				lastPos = Global::GRADE_LIST->leftLength();
				Global::GRADE_LIST->setStart();
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					if (temp->getName() == oldStudentScore[0]) {
						temp->setData(comboBox_StudentScore_StudentName->Text->Trim(), current_user_course, comboBox_StudentScore_Grade->Text->Trim(), CalGradePoint());
						break;
					}
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);

				EnableConfigBox(0, false);
				//Load_Studentname_combobox();
				dataGridView_Student_Score->DataSource = GetDataTable(0);

				button_StudentScore_Add_Cancel->Text = "Add";
				button_StudentScore_Modify_Save_Update->Text = "Modify";

				button_StudentScore_Modify_Save_Update->Enabled = false;
				button_StudentScore_Delete->Enabled = false;
				button_StudentScore_Delete->Visible = true;
			}
		}

		private: System::Void button_StudentScore_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
			// Check to make sure if the user really want to delete the data or just misspressed
			if (MessageBox::Show("Are you sure you want to delete the grade for '" + comboBox_StudentScore_StudentName->Text + "'?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::No) {
				return;
			}

			// Delete the course from list of grade
			int lastPos; // Save last position of fence in the linked list
			lastPos = Global::GRADE_LIST->leftLength();
			Global::GRADE_LIST->setStart();
			for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
				Grade^ temp = gcnew Grade();
				Global::GRADE_LIST->getValue(temp);
				if (temp->getName() == comboBox_StudentScore_StudentName->Text->Trim()) {
					Global::GRADE_LIST->remove(temp);
					break;
				}
				Global::GRADE_LIST->next();
			}
			Global::GRADE_LIST->setPos(lastPos);

			ClearConfigBox(0);
			EnableConfigBox(0, false);
			/* LoadAccountConfig(AccountTypeToInt());*/
			dataGridView_Student_Score->DataSource = GetDataTable(0);

			button_StudentScore_Modify_Save_Update->Enabled = false;
			button_StudentScore_Delete->Enabled = false;
		}

		private: System::Void dataGridView_Student_Score_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (LoadData(0, dataGridView_Student_Score->SelectedRows[0]->Cells[0]->Value->ToString())) {
				button_StudentScore_Modify_Save_Update->Enabled = true;
				button_StudentScore_Delete->Enabled = true;
			}
		}

		private: System::Void button_StudentResult_Search_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox_StudentResult_Search->Text->Trim() == "") { GetDataTable(0); }
			else if (!Matching(textBox_StudentResult_Search->Text)) {
				MessageBox::Show("Search Not Found. Please try again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
			else if (Matching(textBox_StudentResult_Search->Text)) {
				dataGridView_Student_Result->DataSource = GetMatchingTable(textBox_StudentResult_Search->Text, search_type);
			}
		}
	};
};