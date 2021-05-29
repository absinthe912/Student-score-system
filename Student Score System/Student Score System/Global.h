#pragma once
#include "Account.h"
#include "Major.h"
#include "Course.h"
#include "Class.h"
#include "List.h"
#include "Grade.h"

ref class Global
{
public:
	Global() { }
	~Global() { }

	static Account^ CURRENT_USER;
	static LList<Admin>^ ADMIN_LIST = gcnew LList<Admin>();
	static LList<Teacher>^ TEACHER_LIST = gcnew LList<Teacher>();
	static LList<Student>^ STUDENT_LIST = gcnew LList<Student>();
	static LList<Major>^ MAJOR_LIST = gcnew LList<Major>();
	static LList<Course>^ COURSE_LIST = gcnew LList<Course>();
	static LList<Class>^ CLASS_LIST = gcnew LList<Class>();
	static LList<Grade>^ GRADE_LIST = gcnew LList<Grade>();
	
	// Check if data has existed or not
	// Type :
	// 0 = Data in ADMIN_LIST
	// 1 = Data in TEACHER_LIST
	// 2 = Data in STUDENT_LIST
	// 3 = Data in MAJOR_LIST
	// 4 = Data in COURSE_LIST
	// 5 = Data in CLASS_LIST
	// 6 = Data in GRADE_LIST
	static bool DataExist(int type, String^ name) {
		int lastPos; // Save last position of fence in the linked list

		if (type == 0) { // Check from ADMIN_LIST
			// Check all Admin account's data file 1-by-1
			lastPos = ADMIN_LIST->leftLength();
			ADMIN_LIST->setStart();
			for (int i = 0; i < ADMIN_LIST->length(); i++) {
				Admin^ temp = gcnew Admin();
				ADMIN_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				ADMIN_LIST->next();
			}
			ADMIN_LIST->setPos(lastPos);
		}
		else if (type == 1) { // Check from TEACHER_LIST
			// Check all Teacher account's data file 1-by-1
			lastPos = TEACHER_LIST->leftLength();
			TEACHER_LIST->setStart();
			for (int i = 0; i < TEACHER_LIST->length(); i++) {
				Teacher^ temp = gcnew Teacher();
				TEACHER_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				TEACHER_LIST->next();
			}
			TEACHER_LIST->setPos(lastPos);
		}
		else if (type == 2) { // Check from STUDENT_LIST
			// Check all Student account's data file 1-by-1
			lastPos = STUDENT_LIST->leftLength();
			STUDENT_LIST->setStart();
			for (int i = 0; i < STUDENT_LIST->length(); i++) {
				Student^ temp = gcnew Student();
				STUDENT_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				STUDENT_LIST->next();
			}
			STUDENT_LIST->setPos(lastPos);
		}
		else if (type == 3) { // Check from MAJOR_LIST
			// Check all Major's data file 1-by-1
			lastPos = MAJOR_LIST->leftLength();
			MAJOR_LIST->setStart();
			for (int i = 0; i < MAJOR_LIST->length(); i++) {
				Major^ temp = gcnew Major();
				MAJOR_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				MAJOR_LIST->next();
			}
			MAJOR_LIST->setPos(lastPos);
		}
		else if (type == 4) { // Check from COURSE_LIST
			// Check all Course's data file 1-by-1
			lastPos = COURSE_LIST->leftLength();
			COURSE_LIST->setStart();
			for (int i = 0; i < COURSE_LIST->length(); i++) {
				Course^ temp = gcnew Course();
				COURSE_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				COURSE_LIST->next();
			}
			COURSE_LIST->setPos(lastPos);
		}
		else if (type == 5) { // Check from CLASS_LIST
			// Check all Class's data file 1-by-1
			lastPos = CLASS_LIST->leftLength();
			CLASS_LIST->setStart();
			for (int i = 0; i < CLASS_LIST->length(); i++) {
				Class^ temp = gcnew Class();
				CLASS_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				CLASS_LIST->next();
			}
			CLASS_LIST->setPos(lastPos);
		}

		else if (type == 6) { // Check from GRADE_LIST
		// Check all grade's data file 1-by-1
			lastPos = COURSE_LIST->leftLength();
			COURSE_LIST->setStart();
			for (int i = 0; i < COURSE_LIST->length(); i++) {
				Grade^ temp = gcnew Grade();
				GRADE_LIST->getValue(temp);
				if (temp->getName()->Trim() == name->Trim()) return true;
				GRADE_LIST->next();
			}
			COURSE_LIST->setPos(lastPos);
		}
		return false;
	}

	//Check if data exists or not by checking both course and student name
	static bool GradeDataExist(String^ name, String^ course) {
		// Check all Score's data file 1-by-1
		int lastPos = GRADE_LIST->leftLength();
		GRADE_LIST->setStart();
		for (int i = 0; i < GRADE_LIST->length(); i++) {
			Grade^ temp = gcnew Grade();
			GRADE_LIST->getValue(temp);
			if (temp->getName() == name && temp->getCourse() == course) return true;
			GRADE_LIST->next();
		}
		GRADE_LIST->setPos(lastPos);
		return false;
	}
};
