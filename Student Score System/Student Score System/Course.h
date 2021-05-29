#pragma once
using namespace System;

ref class Course
{
protected:
	String^ major;
	int semester;
	String^ name;
	String^ credit;

public:
	Course() {
		major = "";
		semester = -1;
		name = "";
	}
	Course(String^ Major, String^ Semester, String^ Credit ,  String^ Name) {
		major = Major;
		semester = Convert::ToInt16(Semester);
		credit = Credit;
		name = Name;
	    
	}
	~Course() { }

	String^ getMajor() { return major; }
	int getSemester() { return semester; }
	String^ getName() { return name; }
	String^ getCredit() { return credit; }
	String^ getData() { return major + "\n" + semester + "\n" + credit + "\n" + name; }
	void setMajor(String^ Major) { major = Major; }
	void setSemester(String^ Semester) { semester = Convert::ToInt16(Semester); }
	void setName(String^ Name) { name = Name; }
	void setCredit(String^ Credit) { credit = Credit; }
	void setData(String^ Major, String^ Semester, String^ Credit, String^ Name) {
		major = Major;
		semester = Convert::ToInt16(Semester);
		credit = Credit;
		name = Name;
	}
};