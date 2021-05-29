#pragma once
#include "Global.h"
#include "Account.h"

namespace Student_Score_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page_Login
	/// </summary>
	public ref class Page_Login : public System::Windows::Forms::Form
	{
	public:
		Page_Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Page_Login(int type)
		{
			InitializeComponent();

			// 0 = Login as Student
			// 1 = Login as Teacher
			// 2 = Login as Administrator
			LOGIN_MODE = type;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_Confirm;
	protected:
	private: System::Windows::Forms::Button^ button_Cancel;
	private: System::Windows::Forms::TextBox^ textBox_Username;
	private: System::Windows::Forms::Label^ label_Username;
	private: System::Windows::Forms::Label^ label_Password;
	private: System::Windows::Forms::TextBox^ textBox_Password;

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
			this->button_Confirm = (gcnew System::Windows::Forms::Button());
			this->button_Cancel = (gcnew System::Windows::Forms::Button());
			this->textBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_Password = (gcnew System::Windows::Forms::Label());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_Confirm
			// 
			this->button_Confirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Confirm->Location = System::Drawing::Point(194, 117);
			this->button_Confirm->Name = L"button_Confirm";
			this->button_Confirm->Size = System::Drawing::Size(112, 40);
			this->button_Confirm->TabIndex = 2;
			this->button_Confirm->Text = L"Confirm";
			this->button_Confirm->UseVisualStyleBackColor = true;
			this->button_Confirm->Click += gcnew System::EventHandler(this, &Page_Login::button_Confirm_Click);
			// 
			// button_Cancel
			// 
			this->button_Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button_Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Cancel->Location = System::Drawing::Point(43, 117);
			this->button_Cancel->Name = L"button_Cancel";
			this->button_Cancel->Size = System::Drawing::Size(112, 40);
			this->button_Cancel->TabIndex = 3;
			this->button_Cancel->Text = L"Back";
			this->button_Cancel->UseVisualStyleBackColor = true;
			// 
			// textBox_Username
			// 
			this->textBox_Username->Location = System::Drawing::Point(134, 26);
			this->textBox_Username->Name = L"textBox_Username";
			this->textBox_Username->Size = System::Drawing::Size(172, 26);
			this->textBox_Username->TabIndex = 0;
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->Location = System::Drawing::Point(39, 32);
			this->label_Username->Name = L"label_Username";
			this->label_Username->Size = System::Drawing::Size(83, 20);
			this->label_Username->TabIndex = 3;
			this->label_Username->Text = L"Username";
			// 
			// label_Password
			// 
			this->label_Password->AutoSize = true;
			this->label_Password->Location = System::Drawing::Point(39, 71);
			this->label_Password->Name = L"label_Password";
			this->label_Password->Size = System::Drawing::Size(78, 20);
			this->label_Password->TabIndex = 4;
			this->label_Password->Text = L"Password";
			// 
			// textBox_Password
			// 
			this->textBox_Password->Location = System::Drawing::Point(134, 68);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->PasswordChar = '*';
			this->textBox_Password->Size = System::Drawing::Size(172, 26);
			this->textBox_Password->TabIndex = 1;
			// 
			// Page_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 180);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->label_Password);
			this->Controls->Add(this->label_Username);
			this->Controls->Add(this->textBox_Username);
			this->Controls->Add(this->button_Cancel);
			this->Controls->Add(this->button_Confirm);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Page_Login";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: 
		int LOGIN_MODE;

	/// <summary>
	/// Funtions
	/// </summary>
	private:
		bool verifyLogin() {
			try {
				int lastPos; // Save last position of fence in the linked list
				bool isVerified = false;

				switch (LOGIN_MODE)
				{
				case 0: // Login as Administrator
					lastPos = Global::ADMIN_LIST->leftLength();
					Global::ADMIN_LIST->setStart();
					for (int i = 0; i < Global::ADMIN_LIST->length(); i++) {
						Admin^ temp = gcnew Admin();
						Global::ADMIN_LIST->getValue(temp);
						if (temp->getUsername() == textBox_Username->Text->Trim() && temp->getPassword() == textBox_Password->Text->Trim()) {
							Global::CURRENT_USER = temp;
							isVerified = true;
							break;
						}
						else 
							Global::ADMIN_LIST->next();
					}
					Global::ADMIN_LIST->setPos(lastPos);
					return isVerified;
					break;

				case 1: // Login as Teacher
					lastPos = Global::TEACHER_LIST->leftLength();
					Global::TEACHER_LIST->setStart();
					for (int i = 0; i < Global::TEACHER_LIST->length(); i++) {
						Teacher^ temp = gcnew Teacher();
						Global::TEACHER_LIST->getValue(temp);
						if (temp->getUsername() == textBox_Username->Text->Trim() && temp->getPassword() == textBox_Password->Text->Trim()) {
							Global::CURRENT_USER = temp;
							isVerified = true;
							break;
						}
						else
							Global::TEACHER_LIST->next();
					}
					Global::TEACHER_LIST->setPos(lastPos);
					return isVerified;
					break;

				case 2: // Login as Student
					lastPos = Global::STUDENT_LIST->leftLength();
					Global::STUDENT_LIST->setStart();
					for (int i = 0; i < Global::STUDENT_LIST->length(); i++) {
						Student^ temp = gcnew Student();
						Global::STUDENT_LIST->getValue(temp);
						if (temp->getUsername() == textBox_Username->Text->Trim() && temp->getPassword() == textBox_Password->Text->Trim()) {
							Global::CURRENT_USER = temp;
							isVerified = true;
							break;
						}
						else
							Global::STUDENT_LIST->next();
					}
					Global::STUDENT_LIST->setPos(lastPos);
					return isVerified;
					break;

				default:
					break;
				}
			}
			catch (Exception^ ex) { return false; }
		}

	/// <summary>
	/// Events
	/// </summary>
	private: System::Void button_Confirm_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_Username->Text->Trim() == "") { // Check if Username is Empty
			MessageBox::Show("Username cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		} 
		else if (textBox_Password->Text->Trim() == "") { // Check if Password is Empty
			MessageBox::Show("Password cannot be empty. Please check again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		else if (!verifyLogin()) { // Check if Username and Password is incorrect
			MessageBox::Show("Username or Password is incorrect. Please try again.", "Attention!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
	}
	};
}
