#pragma once
#include "Page_Login.h"
#include "Page_Admin.h"
#include "Page_Teacher.h"
#include "Page_Student.h"
#include "Global.h"
#include "Account.h"
#include "Major.h"
#include "Course.h"
#include "Class.h"
#include "Grade.h"

namespace Student_Score_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
  public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_Student;
	protected:
	private: System::Windows::Forms::Button^ button_Teacher;
	private: System::Windows::Forms::Button^ button_Administrator;
	private: System::Windows::Forms::Button^ button_Credits;


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
			this->button_Student = (gcnew System::Windows::Forms::Button());
			this->button_Teacher = (gcnew System::Windows::Forms::Button());
			this->button_Administrator = (gcnew System::Windows::Forms::Button());
			this->button_Credits = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Student
			// 
			this->button_Student->Location = System::Drawing::Point(50, 25);
			this->button_Student->Name = L"button_Student";
			this->button_Student->Size = System::Drawing::Size(160, 160);
			this->button_Student->TabIndex = 0;
			this->button_Student->Text = L"Student";
			this->button_Student->UseVisualStyleBackColor = true;
			this->button_Student->Click += gcnew System::EventHandler(this, &MainForm::button_Student_Click);
			// 
			// button_Teacher
			// 
			this->button_Teacher->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button_Teacher->Location = System::Drawing::Point(307, 25);
			this->button_Teacher->Name = L"button_Teacher";
			this->button_Teacher->Size = System::Drawing::Size(160, 160);
			this->button_Teacher->TabIndex = 1;
			this->button_Teacher->Text = L"Teacher";
			this->button_Teacher->UseVisualStyleBackColor = true;
			this->button_Teacher->Click += gcnew System::EventHandler(this, &MainForm::button_Teacher_Click);
			// 
			// button_Administrator
			// 
			this->button_Administrator->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_Administrator->Location = System::Drawing::Point(568, 25);
			this->button_Administrator->Name = L"button_Administrator";
			this->button_Administrator->Size = System::Drawing::Size(160, 160);
			this->button_Administrator->TabIndex = 2;
			this->button_Administrator->Text = L"Administrator";
			this->button_Administrator->UseVisualStyleBackColor = true;
			this->button_Administrator->Click += gcnew System::EventHandler(this, &MainForm::button_Administrator_Click);
			// 
			// button_Credits
			// 
			this->button_Credits->Location = System::Drawing::Point(662, 201);
			this->button_Credits->Name = L"button_Credits";
			this->button_Credits->Size = System::Drawing::Size(101, 37);
			this->button_Credits->TabIndex = 3;
			this->button_Credits->Text = L"Credits";
			this->button_Credits->UseVisualStyleBackColor = true;
			this->button_Credits->Click += gcnew System::EventHandler(this, &MainForm::button_Credits_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 243);
			this->Controls->Add(this->button_Credits);
			this->Controls->Add(this->button_Administrator);
			this->Controls->Add(this->button_Teacher);
			this->Controls->Add(this->button_Student);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(797, 299);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Student Score System";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		Page_Login^ pageLogin;
		Page_Student^ pageStudent;
		Page_Teacher^ pageTeacher;
		Page_Admin^ pageAdmin;

#pragma region Functions
	private:
		// Show Login Page
		void Login(int type) {
			pageLogin = gcnew Page_Login(type);

			// Check if Log In Successful
			if (pageLogin->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Hide();
			
				switch (type)
				{
				case 0: // Login as Administrator
					pageAdmin = gcnew Page_Admin();

					// Check if the user pressed Log Out
					if (pageAdmin->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
						this->Show();
					}
					break;

				case 1: // Login as Teacher
					pageTeacher = gcnew Page_Teacher();

					// Check if the user pressed Log Out
					if (pageTeacher->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
						this->Show();
					}
					break;

				case 2: // Login as Student
					pageStudent = gcnew Page_Student();

					// Check if the user pressed Log Out
					if (pageStudent->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
						this->Show();
					}
					break;

				default:
					break;
				}
			}
		}

		// Create folder Databases and Textfiles if not created yet
		bool CreateDatabase() {
			try {
				String^ databaseDirectory = Application::StartupPath + "\\Databases";
				if (!Directory::Exists(databaseDirectory)) {
					Directory::CreateDirectory(databaseDirectory);
					StreamWriter^ sw;
					sw = gcnew StreamWriter(databaseDirectory + "\\Administrator.txt");
					sw->WriteLine("Administrator\nadmin\nadmin"); // Add a default Admin account
					sw->Close();
					sw = gcnew StreamWriter(databaseDirectory + "\\Teacher.txt");
					sw->Close();
					sw = gcnew StreamWriter(databaseDirectory + "\\Student.txt");
					sw->Close();
					sw = gcnew StreamWriter(databaseDirectory + "\\Major.txt");
					sw->Close();
					sw = gcnew StreamWriter(databaseDirectory + "\\Class.txt");
					sw->Close();
					sw = gcnew StreamWriter(databaseDirectory + "\\Course.txt");
					sw->Close();
					sw = gcnew StreamWriter(databaseDirectory + "\\Grade.txt");
					sw->Close();
				}
				return true;
			}
			catch (Exception^ ex) { return false; }
		}

		// Get all accounts' data and put it to Global Linked List for quick access later
		bool LoadData() {
			try {
				String^ databaseDirectory = Application::StartupPath + "\\Databases";
				StreamReader^ sr;
				String^ line;

				// Get All Admin Account 1-by-1 and put into Global Admin Linked List
				sr = File::OpenText(databaseDirectory + "\\Administrator.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ name = line;
					String^ username = sr->ReadLine();
					String^ password = sr->ReadLine();

					Admin^ temp = gcnew Admin(name, username, password);
					Global::ADMIN_LIST->append(temp);
				}
				sr->Close();

				// Get All Teacher Account 1-by-1 and put into Global Teacher Linked List
				sr = File::OpenText(databaseDirectory + "\\Teacher.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ name = line;
					String^ username = sr->ReadLine();
					String^ password = sr->ReadLine();
					String^ teacherID = sr->ReadLine();
					String^ subjectTaught = sr->ReadLine();
					String^ semester = sr->ReadLine();;

					Teacher^ temp = gcnew Teacher(name, username, password, teacherID, subjectTaught, semester);
					Global::TEACHER_LIST->append(temp);
				}
				sr->Close();

				// Get All Student Account 1-by-1 and put into Global Student Linked List
				sr = File::OpenText(databaseDirectory + "\\Student.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ name = line;
					String^ username = sr->ReadLine();
					String^ password = sr->ReadLine();
					String^ studentID = sr->ReadLine();
					String^ major = sr->ReadLine();
					String^ semester = sr->ReadLine();
					String^ className = sr->ReadLine();
					array<String^>^ courseTaken = sr->ReadLine()->Split(';');

					Student^ temp = gcnew Student(name, username, password, studentID, major, semester, className, courseTaken);
					Global::STUDENT_LIST->append(temp);
				}
				sr->Close();

				// Get All Major 1-by-1 and put into Global Major Linked List
				sr = File::OpenText(databaseDirectory + "\\Major.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ name = line;

					Major^ temp = gcnew Major(name);
					Global::MAJOR_LIST->append(temp);
				}
				sr->Close();

				// Get All Course 1-by-1 and put into Global Course Linked List
				sr = File::OpenText(databaseDirectory + "\\Course.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ major = line;
					String^ semester = sr->ReadLine();
					String^ credit = sr->ReadLine();
					String^ name = sr->ReadLine();

					Course^ temp = gcnew Course(major, semester, credit, name);
					Global::COURSE_LIST->append(temp);
				}
				sr->Close();

				// Get All Grade 1-by-1 and put into Global Course Linked List
				sr = File::OpenText(databaseDirectory + "\\Grade.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ studentName = line;
					String^ studentCourse = sr->ReadLine();
					String^ grade = sr->ReadLine();
					String^ gradePoint= sr->ReadLine();

					Grade^ temp = gcnew Grade(studentName, studentCourse, grade, gradePoint);
					Global::GRADE_LIST->append(temp);
				}
				sr->Close();

				// Get All Class 1-by-1 and put into Global Class Linked List
				sr = File::OpenText(databaseDirectory + "\\Class.txt");
				while ((line = sr->ReadLine()) != nullptr) {
					String^ major = line;
					String^ name = sr->ReadLine();

					Class^ temp = gcnew Class(major, name);
					Global::CLASS_LIST->append(temp);
				}
				sr->Close();
				return true;
			}
			catch (Exception^ ex) { return false; }
		}

		// Save all accounts' data to txt files
		bool SaveData() {
			try {
				String^ databaseDirectory = Application::StartupPath + "\\Databases";
				StreamWriter^ sw;
				int lastPos; // Save last position of fence in the linked list

				// Save all Admin account's data from Linked List of Admin account to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Administrator.txt");
				lastPos = Global::ADMIN_LIST->leftLength();
				Global::ADMIN_LIST->setStart();
				for (int i = 0; i < Global::ADMIN_LIST->length(); i++) { 
					Admin^ temp = gcnew Admin();
					Global::ADMIN_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::ADMIN_LIST->next();
				}
				Global::ADMIN_LIST->setPos(lastPos);
				sw->Close();

				// Save all Teacher account's data from Linked List of Teacher account to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Teacher.txt");
				lastPos = Global::TEACHER_LIST->leftLength();
				Global::TEACHER_LIST->setStart();
				for (int i = 0; i < Global::TEACHER_LIST->length(); i++) {
					Teacher^ temp = gcnew Teacher();
					Global::TEACHER_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::TEACHER_LIST->next();
				}
				Global::TEACHER_LIST->setPos(lastPos);
				sw->Close();

				// Save all Student account's data from Linked List of Student account to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Student.txt");
				lastPos = Global::STUDENT_LIST->leftLength();
				Global::STUDENT_LIST->setStart();
				for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
					Student^ temp = gcnew Student();
					Global::STUDENT_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::STUDENT_LIST->next();
				}
				Global::STUDENT_LIST->setPos(lastPos);
				sw->Close();

				// Save all Major from Linked List of Major to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Major.txt");
				lastPos = Global::MAJOR_LIST->leftLength();
				Global::MAJOR_LIST->setStart();
				for (int i = 0; i < Global::MAJOR_LIST->length(); i++) {
					Major^ temp = gcnew Major();
					Global::MAJOR_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::MAJOR_LIST->next();
				}
				Global::MAJOR_LIST->setPos(lastPos);
				sw->Close();

				// Save all Course from Linked List of Course to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Course.txt");
				lastPos = Global::COURSE_LIST->leftLength();
				Global::COURSE_LIST->setStart();
				for (int i = 0; i < Global::COURSE_LIST->length(); i++) {
					Course^ temp = gcnew Course();
					Global::COURSE_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::COURSE_LIST->next();
				}
				Global::COURSE_LIST->setPos(lastPos);
				sw->Close();

				// Save all Grade from Linked List of Grade to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Grade.txt");
				lastPos = Global::GRADE_LIST->leftLength();
				Global::GRADE_LIST->setStart();
				for (int i = 0; i < Global::GRADE_LIST->length(); i++) {
					Grade^ temp = gcnew Grade();
					Global::GRADE_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::GRADE_LIST->next();
				}
				Global::GRADE_LIST->setPos(lastPos);
				sw->Close();

				// Save all Class from Linked List of Class to the txt file 1-by-1
				sw = gcnew StreamWriter(databaseDirectory + "\\Class.txt");
				lastPos = Global::CLASS_LIST->leftLength();
				Global::CLASS_LIST->setStart();
				for (int i = 0; i < Global::CLASS_LIST->length(); i++) {
					Class^ temp = gcnew Class();
					Global::CLASS_LIST->getValue(temp);
					sw->WriteLine(temp->getData());
					Global::CLASS_LIST->next();
				}
				Global::CLASS_LIST->setPos(lastPos);
				sw->Close();
				return true;
			}
			catch (Exception^ ex) { return false; }
		}
#pragma endregion


	/// <summary>
	/// Events
	/// </summary>
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CreateDatabase();
		LoadData();
	}

	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (MessageBox::Show("Quit the program?", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) e->Cancel = true;
			SaveData();
	}

	private: System::Void button_Administrator_Click(System::Object^ sender, System::EventArgs^ e) {
		Login(0);
	}

	private: System::Void button_Teacher_Click(System::Object^ sender, System::EventArgs^ e) {
		Login(1);
	}

	private: System::Void button_Student_Click(System::Object^ sender, System::EventArgs^ e) {
		Login(2);
	}

	private: System::Void button_Credits_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ title = "Credits";
		String^ message = "This program is created by : \n" + 
			"1. 201969990084 - Vondrea Cassey Andoko\n" + 
			"2. 201969990298 - Sarah Sajid Undre\n" + 
			"3. 201969990099 - Ryan Lam Sung Foon\n" + 
			"4. 201969990102 - Reyvin Chanwelson";
		MessageBox::Show(message, title, MessageBoxButtons::OK);
	}
  };
  


}


