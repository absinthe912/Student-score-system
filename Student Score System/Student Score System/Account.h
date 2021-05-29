#pragma once
using namespace System;

// Account
ref class Account
{
protected:
	String^ name;
	String^ username;
	String^ password;

public:
	Account() {
		name = "";
		username = "";
		password = "";
	}
	Account(String^ Name, String^ Username, String^ Password) {
		name = Name;
		username = Username;
		password = Password;
	}
	Account(const Account^ copy) {
		name = copy->name;
		username = copy->username;
		password = copy->password;
	}
	Account^ operator= (Account^% obj) {
		Account^ temp = gcnew Account(obj->name, obj->username, obj->password);
		return temp;
	}
	~Account() { }

	String^ getName() { return name; }
	String^ getUsername() { return username; }
	String^ getPassword() { return password; }
	String^ getData() { return name + "\n" + username + "\n" + password; }
	void setName(String^ Name) { name = Name; }
	void setUsername(String^ Username) { username = Username; }
	void setPassword(String^ Password) { password = Password; }
	bool verifyLogin(String^ Username, String^ Password) {
		if (Username == username && Password == password) return true;
		return false;
	}
};


// Admin
ref class Admin : public Account
{
public:
	Admin() {

	}
	Admin(String^ Name, String^ Username, String^ Password) : Account(Name, Username, Password) {
		name = Name;
		username = Username;
		password = Password;
	}
	Admin^ operator= (Admin^% obj) {
		Admin^ temp = gcnew Admin(obj->name, obj->username, obj->password);
		return temp;
	}
	~Admin() { }

	String^ getData() { return name + "\n" + username + "\n" + password; }
	void setData(String^ Name, String^ Username, String^ Password) {
		name = Name;
		username = Username;
		password = Password;
	}
};


// Teacher
ref class Teacher : public Account
{
private:
	String^ teacherID;
	String^ subjectTaught;
	int semester;
public:
	Teacher() {
		teacherID = "";
		subjectTaught = "";
	}
	Teacher(String^ Name, String^ Username, String^ Password, String^ TeacherID, String^ SubjectTaught, String^ Semester) : Account(Name, Username, Password) {
		teacherID = TeacherID;
		subjectTaught = SubjectTaught;
	    semester = Convert::ToInt16(Semester);
	}
	Teacher^ operator= (Teacher^% obj) {
		Teacher^ temp = gcnew Teacher(obj->name, obj->username, obj->password, obj->teacherID, obj->subjectTaught, obj->semester.ToString());
		return temp;
	}


	Teacher^ operator++ () {
		Teacher^ temp = gcnew Teacher(name,username, password, teacherID, subjectTaught, (semester++).ToString());
		return temp;
	}

	~Teacher() { }

	String^ getTeacherID() { return teacherID; }
	String^ getSubjectTaught() { return subjectTaught; }
	int getSemester() { return semester; }
	String^ getData() { return name + "\n" + username + "\n" + password + "\n" + teacherID + "\n" + subjectTaught + "\n" + semester; }
	void setSemester(String^ Semester) { semester = Convert::ToInt16(Semester); }
	void setTeacherID(String^ TeacherID) { teacherID = TeacherID; }
	void setSubjectTaught(String^ SubjectTaught) { subjectTaught = SubjectTaught; }
	void setData(String^ Name, String^ Username, String^ Password, String^ TeacherID, String^ SubjectTaught , String^ Semester ) {
		name = Name;
		username = Username;
		password = Password;
		teacherID = TeacherID;
		subjectTaught = SubjectTaught;
		semester = Convert::ToInt16(Semester);
	}
};


// Student
ref class Student : public Account
{
private:
	String^ studentID;
	String^ major;
	String^ className;
	int semester;
	array<String^>^ courseTaken;

public:
	Student() {
		studentID = "";
		major = "";
		className = "";
		semester = -1;
	}
	Student(String^ Name, String^ Username, String^ Password, String^ StudentID, String^ Major, String^ Semester, String^ ClassName, array<String^>^ CourseTaken) : Account(Name, Username, Password) {
		studentID = StudentID;
		major = Major;
		semester = Convert::ToInt16(Semester);
		className = ClassName;
		courseTaken = CourseTaken;
	}
	Student^ operator= (Student^% obj) {
		Student^ temp = gcnew Student(obj->name, obj->username, obj->password, obj->studentID, obj->major, obj->semester.ToString(), obj->className, obj->courseTaken);
		return temp;
	}
	Student^ operator++ () {
		Student^ temp = gcnew Student(name, username, password, studentID, major, (semester++).ToString(), className, courseTaken);
		return temp;
	}
	~Student() { }

	String^ getStudentID() { return studentID; }
	String^ getMajor() { return major; }
	int getSemester() { return semester; }
	String^ getClassName() { return className; }
	array<String^>^ getCourseTaken() { return courseTaken; }
	String^ getData() { 
		String^ temp = name + "\n" + username + "\n" + password + "\n" + studentID + "\n" + major + "\n" + semester + "\n" + className + "\n"; 
		for each (String ^ s in courseTaken) {
			if (s == courseTaken[courseTaken->Length - 1]) temp += s;
			else temp += s + ";";
		}
		return temp;
	}
	void setStudentID(String^ StudentID) { studentID = StudentID; }
	void setMajor(String^ Major) { major = Major; }
	void setSemester(String^ Semester) { semester = Convert::ToInt16(Semester); }
	void setClassName(String^ ClassName) { className = ClassName; }
	void setCourseTaken(array<String^>^ CourseTaken) { courseTaken = CourseTaken; }
	void setData(String^ Name, String^ Username, String^ Password, String^ StudentID, String^ Major, String^ Semester, String^ ClassName, array<String^>^ CourseTaken) {
		name = Name;
		username = Username;
		password = Password;
		studentID = StudentID;
		major = Major;
		semester = Convert::ToInt16(Semester);
		className = ClassName;
		courseTaken = CourseTaken;
	}
	bool courseExist(String^ courseName) {
		for each (String ^ s in courseTaken)
			if (s == courseName)
				return true;
		return false;
	}
};