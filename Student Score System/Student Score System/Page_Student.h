#pragma once
#include "Global.h"

namespace Student_Score_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Student
	/// </summary>
	public ref class Page_Student : public System::Windows::Forms::Form
	{
	public:
		Page_Student(void)
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
		~Page_Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_CalGPA;
	protected:

	private: System::Windows::Forms::Panel^ panel_Enquiry_Result;
	private: System::Windows::Forms::Button^ button_EnquiryResult_CalGPA;
	protected:













	private: System::Windows::Forms::Label^ label_Enquiry_Result;
	private: System::Windows::Forms::DataGridView^ dataGridView_Enquiry_Result;







	private: System::Windows::Forms::Label^ label_EnquiryResult_SearchKey;
	private: System::Windows::Forms::Button^ button_EnquiryResult_Search;
	private: System::Windows::Forms::Panel^ panel_Select_Next_Sem_Course;
	private: System::Windows::Forms::Label^ label_Select_Next_Sem_Course;








	private: System::Windows::Forms::Button^ button_Confirm;



	private: System::Windows::Forms::DataGridView^ dataGridView_Select_Next_Sem_Course;





	private: System::Windows::Forms::Label^ label_EnquiryResult_displayGPA;





	private: System::Windows::Forms::TextBox^ textBox_EnquiryResult_Search;









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
			this->panel_CalGPA = (gcnew System::Windows::Forms::Panel());
			this->label_EnquiryResult_displayGPA = (gcnew System::Windows::Forms::Label());
			this->button_EnquiryResult_CalGPA = (gcnew System::Windows::Forms::Button());
			this->panel_Enquiry_Result = (gcnew System::Windows::Forms::Panel());
			this->textBox_EnquiryResult_Search = (gcnew System::Windows::Forms::TextBox());
			this->label_EnquiryResult_SearchKey = (gcnew System::Windows::Forms::Label());
			this->button_EnquiryResult_Search = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Enquiry_Result = (gcnew System::Windows::Forms::DataGridView());
			this->label_Enquiry_Result = (gcnew System::Windows::Forms::Label());
			this->panel_Select_Next_Sem_Course = (gcnew System::Windows::Forms::Panel());
			this->button_Confirm = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Select_Next_Sem_Course = (gcnew System::Windows::Forms::DataGridView());
			this->label_Select_Next_Sem_Course = (gcnew System::Windows::Forms::Label());
			this->panel_CalGPA->SuspendLayout();
			this->panel_Enquiry_Result->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Enquiry_Result))->BeginInit();
			this->panel_Select_Next_Sem_Course->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Select_Next_Sem_Course))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_CalGPA
			// 
			this->panel_CalGPA->BackColor = System::Drawing::SystemColors::Control;
			this->panel_CalGPA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_CalGPA->Controls->Add(this->label_EnquiryResult_displayGPA);
			this->panel_CalGPA->Controls->Add(this->button_EnquiryResult_CalGPA);
			this->panel_CalGPA->Location = System::Drawing::Point(102, 372);
			this->panel_CalGPA->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel_CalGPA->Name = L"panel_CalGPA";
			this->panel_CalGPA->Size = System::Drawing::Size(611, 71);
			this->panel_CalGPA->TabIndex = 0;
			// 
			// label_EnquiryResult_displayGPA
			// 
			this->label_EnquiryResult_displayGPA->AutoSize = true;
			this->label_EnquiryResult_displayGPA->Location = System::Drawing::Point(179, 29);
			this->label_EnquiryResult_displayGPA->Name = L"label_EnquiryResult_displayGPA";
			this->label_EnquiryResult_displayGPA->Size = System::Drawing::Size(0, 20);
			this->label_EnquiryResult_displayGPA->TabIndex = 8;
			// 
			// button_EnquiryResult_CalGPA
			// 
			this->button_EnquiryResult_CalGPA->Location = System::Drawing::Point(341, 23);
			this->button_EnquiryResult_CalGPA->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_EnquiryResult_CalGPA->Name = L"button_EnquiryResult_CalGPA";
			this->button_EnquiryResult_CalGPA->Size = System::Drawing::Size(134, 33);
			this->button_EnquiryResult_CalGPA->TabIndex = 7;
			this->button_EnquiryResult_CalGPA->Text = L"Calculate GPA";
			this->button_EnquiryResult_CalGPA->UseVisualStyleBackColor = true;
			this->button_EnquiryResult_CalGPA->Click += gcnew System::EventHandler(this, &Page_Student::button_EnquiryResult_CalGPA_Click);
			// 
			// panel_Enquiry_Result
			// 
			this->panel_Enquiry_Result->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Enquiry_Result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Enquiry_Result->Controls->Add(this->textBox_EnquiryResult_Search);
			this->panel_Enquiry_Result->Controls->Add(this->label_EnquiryResult_SearchKey);
			this->panel_Enquiry_Result->Controls->Add(this->panel_CalGPA);
			this->panel_Enquiry_Result->Controls->Add(this->button_EnquiryResult_Search);
			this->panel_Enquiry_Result->Controls->Add(this->dataGridView_Enquiry_Result);
			this->panel_Enquiry_Result->Location = System::Drawing::Point(14, 36);
			this->panel_Enquiry_Result->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel_Enquiry_Result->Name = L"panel_Enquiry_Result";
			this->panel_Enquiry_Result->Size = System::Drawing::Size(926, 475);
			this->panel_Enquiry_Result->TabIndex = 1;
			// 
			// textBox_EnquiryResult_Search
			// 
			this->textBox_EnquiryResult_Search->Location = System::Drawing::Point(267, 27);
			this->textBox_EnquiryResult_Search->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox_EnquiryResult_Search->Name = L"textBox_EnquiryResult_Search";
			this->textBox_EnquiryResult_Search->Size = System::Drawing::Size(338, 26);
			this->textBox_EnquiryResult_Search->TabIndex = 6;
			// 
			// label_EnquiryResult_SearchKey
			// 
			this->label_EnquiryResult_SearchKey->AutoSize = true;
			this->label_EnquiryResult_SearchKey->Location = System::Drawing::Point(99, 31);
			this->label_EnquiryResult_SearchKey->Name = L"label_EnquiryResult_SearchKey";
			this->label_EnquiryResult_SearchKey->Size = System::Drawing::Size(135, 20);
			this->label_EnquiryResult_SearchKey->TabIndex = 5;
			this->label_EnquiryResult_SearchKey->Text = L"Enter Search key ";
			// 
			// button_EnquiryResult_Search
			// 
			this->button_EnquiryResult_Search->Location = System::Drawing::Point(731, 17);
			this->button_EnquiryResult_Search->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_EnquiryResult_Search->Name = L"button_EnquiryResult_Search";
			this->button_EnquiryResult_Search->Size = System::Drawing::Size(170, 47);
			this->button_EnquiryResult_Search->TabIndex = 1;
			this->button_EnquiryResult_Search->Text = L"Search";
			this->button_EnquiryResult_Search->UseVisualStyleBackColor = true;
			this->button_EnquiryResult_Search->Click += gcnew System::EventHandler(this, &Page_Student::button_EnquiryResult_Search_Click);
			// 
			// dataGridView_Enquiry_Result
			// 
			this->dataGridView_Enquiry_Result->AllowUserToAddRows = false;
			this->dataGridView_Enquiry_Result->AllowUserToDeleteRows = false;
			this->dataGridView_Enquiry_Result->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Enquiry_Result->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Enquiry_Result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_Enquiry_Result->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_Enquiry_Result->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Enquiry_Result->Location = System::Drawing::Point(89, 85);
			this->dataGridView_Enquiry_Result->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView_Enquiry_Result->Name = L"dataGridView_Enquiry_Result";
			this->dataGridView_Enquiry_Result->ReadOnly = true;
			this->dataGridView_Enquiry_Result->RowHeadersVisible = false;
			this->dataGridView_Enquiry_Result->RowHeadersWidth = 51;
			this->dataGridView_Enquiry_Result->RowTemplate->Height = 27;
			this->dataGridView_Enquiry_Result->Size = System::Drawing::Size(624, 239);
			this->dataGridView_Enquiry_Result->TabIndex = 0;
			// 
			// label_Enquiry_Result
			// 
			this->label_Enquiry_Result->AutoSize = true;
			this->label_Enquiry_Result->Location = System::Drawing::Point(10, 12);
			this->label_Enquiry_Result->Name = L"label_Enquiry_Result";
			this->label_Enquiry_Result->Size = System::Drawing::Size(120, 20);
			this->label_Enquiry_Result->TabIndex = 0;
			this->label_Enquiry_Result->Text = L"Enquiry Result: ";
			// 
			// panel_Select_Next_Sem_Course
			// 
			this->panel_Select_Next_Sem_Course->BackColor = System::Drawing::SystemColors::Control;
			this->panel_Select_Next_Sem_Course->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_Select_Next_Sem_Course->Controls->Add(this->button_Confirm);
			this->panel_Select_Next_Sem_Course->Controls->Add(this->dataGridView_Select_Next_Sem_Course);
			this->panel_Select_Next_Sem_Course->Location = System::Drawing::Point(14, 577);
			this->panel_Select_Next_Sem_Course->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel_Select_Next_Sem_Course->Name = L"panel_Select_Next_Sem_Course";
			this->panel_Select_Next_Sem_Course->Size = System::Drawing::Size(723, 471);
			this->panel_Select_Next_Sem_Course->TabIndex = 3;
			// 
			// button_Confirm
			// 
			this->button_Confirm->Location = System::Drawing::Point(202, 404);
			this->button_Confirm->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button_Confirm->Name = L"button_Confirm";
			this->button_Confirm->Size = System::Drawing::Size(310, 44);
			this->button_Confirm->TabIndex = 8;
			this->button_Confirm->Text = L"Confirm";
			this->button_Confirm->UseVisualStyleBackColor = true;
			this->button_Confirm->Click += gcnew System::EventHandler(this, &Page_Student::button_Confirm_Click);
			// 
			// dataGridView_Select_Next_Sem_Course
			// 
			this->dataGridView_Select_Next_Sem_Course->AllowUserToAddRows = false;
			this->dataGridView_Select_Next_Sem_Course->AllowUserToDeleteRows = false;
			this->dataGridView_Select_Next_Sem_Course->AllowUserToResizeColumns = false;
			this->dataGridView_Select_Next_Sem_Course->AllowUserToResizeRows = false;
			this->dataGridView_Select_Next_Sem_Course->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_Select_Next_Sem_Course->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_Select_Next_Sem_Course->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Select_Next_Sem_Course->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView_Select_Next_Sem_Course->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView_Select_Next_Sem_Course->Location = System::Drawing::Point(102, 24);
			this->dataGridView_Select_Next_Sem_Course->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dataGridView_Select_Next_Sem_Course->MultiSelect = false;
			this->dataGridView_Select_Next_Sem_Course->Name = L"dataGridView_Select_Next_Sem_Course";
			this->dataGridView_Select_Next_Sem_Course->RowHeadersVisible = false;
			this->dataGridView_Select_Next_Sem_Course->RowHeadersWidth = 51;
			this->dataGridView_Select_Next_Sem_Course->RowTemplate->Height = 27;
			this->dataGridView_Select_Next_Sem_Course->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_Select_Next_Sem_Course->Size = System::Drawing::Size(538, 360);
			this->dataGridView_Select_Next_Sem_Course->TabIndex = 3;
			this->dataGridView_Select_Next_Sem_Course->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Page_Student::dataGridView_Select_Next_Sem_Course_CellClick);
			// 
			// label_Select_Next_Sem_Course
			// 
			this->label_Select_Next_Sem_Course->AutoSize = true;
			this->label_Select_Next_Sem_Course->Location = System::Drawing::Point(14, 536);
			this->label_Select_Next_Sem_Course->Name = L"label_Select_Next_Sem_Course";
			this->label_Select_Next_Sem_Course->Size = System::Drawing::Size(250, 20);
			this->label_Select_Next_Sem_Course->TabIndex = 4;
			this->label_Select_Next_Sem_Course->Text = L"Choose subject for next semester ";
			// 
			// Page_Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(953, 1050);
			this->Controls->Add(this->label_Select_Next_Sem_Course);
			this->Controls->Add(this->panel_Select_Next_Sem_Course);
			this->Controls->Add(this->label_Enquiry_Result);
			this->Controls->Add(this->panel_Enquiry_Result);
			this->Name = L"Page_Student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Page";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Page_Student::Page_Student_Load);
			this->panel_CalGPA->ResumeLayout(false);
			this->panel_CalGPA->PerformLayout();
			this->panel_Enquiry_Result->ResumeLayout(false);
			this->panel_Enquiry_Result->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Enquiry_Result))->EndInit();
			this->panel_Select_Next_Sem_Course->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Select_Next_Sem_Course))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		array<String^>^ oldGradeConfigData = gcnew array<String^>(1);	// The String array will store : student name, grade, gradePoint, course, credit
		int semester;
		String^ course_credit;

#pragma region Functions
	private:
		// Initialize the Initial Value
		void Initialization() {
			this->Text = "Student Page | Welcome, " + Global::CURRENT_USER->getName(); // Initialize Form Name

		    // Initialize DataGridView
			dataGridView_Enquiry_Result->DataSource = GetDataTable(0);
			dataGridView_Select_Next_Sem_Course->DataSource = GetDataTable(1);

			// Initialize Visibility
			label_EnquiryResult_displayGPA->Visible = false;

			// To find what semester CURRENT_USER is
			Student^ temp = (Student^)Global::CURRENT_USER;
			semester = temp->getSemester();

			// Mark which Next Semester's Courses are currently chosen
			String^ s = "";
			for each (String ^ course in temp->getCourseTaken())
				s += course + ";";
			s = s->Substring(0, s->Length - 1); // Remove the extra lines from current Course Taken
			for each (DataGridViewRow ^ row in dataGridView_Select_Next_Sem_Course->Rows) {
				if (s->Contains(row->Cells[1]->Value->ToString()))
					row->Cells[0]->Value = true;
				else
					row->Cells[0]->Value = false;
			}
		}

		// Load Data saved in list of classes into dataTable.
		// 0 = Score Panel
		// 1 = Course picking Panel
		DataTable^ GetDataTable(int type) {
			DataTable^ tempTable = gcnew DataTable;
			int lastPos; // Save last position of fence in the linked list

			if (type == 0) {	//the score details
				tempTable->Columns->Add("Course");
				tempTable->Columns->Add("Grade");
				tempTable->Columns->Add("Credit");
				tempTable->Columns->Add("Gradepoint");
				lastPos = Global::GRADE_LIST->leftLength();
				Global::GRADE_LIST->setStart();
				Student^ temp_s = (Student^)Global::CURRENT_USER;

				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					if (temp->getName() == temp_s->getName())
						tempTable->Rows->Add(temp->getCourse(), temp->getGrade(), get_Credit_of_Course(temp->getCourse()), temp->getGradePoint());
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
			}
			else if (type == 1) {	//next sem course
				tempTable->Columns->Add("COURSE");
											
				//add checkbox column to dgv dynamically 
				DataGridViewCheckBoxColumn^ c = gcnew DataGridViewCheckBoxColumn();
				//set properties
				c->Name = "select";
				c->HeaderText = "SELECT";
				c->FillWeight = 20;
				dataGridView_Select_Next_Sem_Course->Columns->Add(c);

				//create check box column in datagridvew 
				//CheckBox^ chkbox = gcnew CheckBox();
				//Rectangle rect = this->dataGridView_Select_Next_Sem_Course->GetCellDisplayRectangle(0, -1, true);
				//set position of header checkbox where to places
				//rect.Offset(40, 2);
				//chkbox->Location = rect.Location;
				
				lastPos = Global::COURSE_LIST->leftLength();
				Global::COURSE_LIST->setStart();
				Student^ temp_current = (Student^)Global::CURRENT_USER;

				for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
					if (semester == 8) break; // If this is their last semester in the University
					Course^ temp = gcnew Course();
					Global::COURSE_LIST->getValue(temp);
					if (temp_current->getSemester() + 1 == temp->getSemester() && temp_current->getMajor() == temp->getMajor()) {
						tempTable->Rows->Add(temp->getName());
					}
					Global::COURSE_LIST->next();
				}
				Global::COURSE_LIST->setPos(lastPos);
			}
			return tempTable;
		}

		// To find what semester CURRENT_USER is
		void getCurrentSem() {
			int lastPos = Global::STUDENT_LIST->leftLength();
			for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
				Student^ temp = gcnew Student();
				Global::STUDENT_LIST->getValue(temp);
				if (Global::CURRENT_USER->getName() == temp->getName()) { semester = temp->getSemester(); }
				Global::STUDENT_LIST->next();
			}
			Global::STUDENT_LIST->setPos(lastPos);
		}

		String^ get_Credit_of_Course(String^ Tcourse) {
			// To find the credit of the course  
			int lastPos = Global::COURSE_LIST->leftLength();
			for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
				Course^ temp = gcnew Course();
				Global::COURSE_LIST->getValue(temp);
				//If the teacher.h the subjectname= the name of course in the course list , return the course credit  
				if (Tcourse == temp->getName()) { course_credit = temp->getCredit(); }
				Global::COURSE_LIST->next();
			}
			Global::COURSE_LIST->setPos(lastPos);
			return course_credit;
		}

#pragma region GPApanel
		double CalculateGPA() {
			int num=0, lastPos = Global::GRADE_LIST->leftLength();
			Global::GRADE_LIST->setStart();
			Student^ temp_s = (Student^)Global::CURRENT_USER;
			double gp, score = 0;
			for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
				Grade^ temp = gcnew Grade();
				Global::GRADE_LIST->getValue(temp);
				if (temp_s->getName() == temp->getName()) {
					gp = Convert::ToDouble(temp->getGradePoint());
					score += gp;
					num++;
				}
				Global::GRADE_LIST->next();
			}
			Global::GRADE_LIST->setPos(lastPos);
			score /= num;
			return score;
		}
#pragma endregion

#pragma region Scorepanel
		bool Matching(String^ Search) {	//to see if there is a match
			DataTable^ tempTable = gcnew DataTable;
			int lastPos = Global::GRADE_LIST->leftLength();
			bool enq = false;
			for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
				Grade^ temp = gcnew Grade();
				Global::GRADE_LIST->getValue(temp);
				if (temp->getCourse()->Trim() == Search->Trim()) {
					return true;
				}
				Global::GRADE_LIST->next();
			}
			Global::GRADE_LIST->setPos(lastPos);
			return false;
		}

		DataTable^ GetMatchingTable(String^ Search) {	//print matching
			DataTable^ tempTable = gcnew DataTable;
			int lastPos = Global::GRADE_LIST->leftLength(); // Save last position of fence in the linked list

			tempTable->Columns->Add("Course");
			tempTable->Columns->Add("Grade");
			tempTable->Columns->Add("Credit");
			tempTable->Columns->Add("Gradepoint");
			Student^ temp_s = (Student^)Global::CURRENT_USER;

			for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
				Grade^ temp = gcnew Grade();
				Global::GRADE_LIST->getValue(temp);
				if (temp->getCourse()->Trim() == Search->Trim() && temp->getName() == temp_s->getName()) {
					tempTable->Rows->Add(temp->getCourse(), temp->getGrade(), temp->getGradePoint());
				}
				Global::GRADE_LIST->next();
			}
			Global::GRADE_LIST->setPos(lastPos);

			return tempTable;
		}
#pragma endregion

#pragma region PickingCoursepanel
		array<String^>^ getNextCourse() {
			Student^ temp_s = (Student^)Global::CURRENT_USER;
			String^ s = "";
			// Which checkbox is checked and to be saved
			for each (String ^ course in temp_s->getCourseTaken())
				s += course + ";";
			s = s->Substring(0, s->Length - 1); // Remove the extra lines from current Course Taken

			for each (DataGridViewRow ^ _row in dataGridView_Select_Next_Sem_Course->Rows)
			{
				if (Convert::ToBoolean(_row->Cells[0]->Value) == true) {
					if (!s->Contains(_row->Cells[1]->Value->ToString()))
						s += _row->Cells[1]->Value + ";";
				}
				else {
					s = s->Replace(_row->Cells[1]->Value + ";", "");
				}
			}

			array<String^>^ temp = s->Split(';');
			return temp;
		}

		void getDatabaseNextCourse() {
			dataGridView_Select_Next_Sem_Course->CommitEdit(DataGridViewDataErrorContexts::Commit);
			Student^ temp = (Student^)Global::CURRENT_USER;
			// Which checkbox is clicked?
			for each (DataGridViewRow ^ _row in dataGridView_Select_Next_Sem_Course->Rows)
			{
				if (temp->courseExist(_row->Cells[1]->Value->ToString())) {
					MessageBox::Show(Convert::ToString(_row->Index), Text);
				}
			}
		}

#pragma endregion

	/// <summary>
	/// Events
	/// </summary>
	private: System::Void Page_Student_Load(System::Object^ sender, System::EventArgs^ e) {
		Initialization();
	}

	private: System::Void button_EnquiryResult_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_EnquiryResult_Search->Text->Trim() == "") { GetDataTable(0); return; }
		if (!Matching(textBox_EnquiryResult_Search->Text)) {
			MessageBox::Show("Search Not Found. Please try again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		else {
			dataGridView_Enquiry_Result->DataSource = GetMatchingTable(textBox_EnquiryResult_Search->Text);
		}
	}

	private: System::Void button_EnquiryResult_CalGPA_Click(System::Object^ sender, System::EventArgs^ e) {
		label_EnquiryResult_displayGPA->Visible = true;
		label_EnquiryResult_displayGPA->Text = CalculateGPA().ToString();
	}

	private: System::Void button_Confirm_Click(System::Object^ sender, System::EventArgs^ e) {
		Student^ temp = (Student^)Global::CURRENT_USER;
		temp->setCourseTaken(getNextCourse());
		MessageBox::Show("Next Semester's Course(s) has been successfully chosen.", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void dataGridView_Select_Next_Sem_Course_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Checked or Unchecked Select CheckBox when the Row is clicked
		if (e->RowIndex >= 0)
			dataGridView_Select_Next_Sem_Course->Rows[e->RowIndex]->Cells[0]->Value = !Convert::ToBoolean(dataGridView_Select_Next_Sem_Course->Rows[e->RowIndex]->Cells[0]->Value);
	}
};
}
