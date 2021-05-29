#pragma once
using namespace System;

ref class Score
{
protected:
	String^ course;
	String^ student_name;
	int grade;
	double gradepoint;
	int credit;
	int semester;

public:
	Score() {
		course = "";
		student_name = "";
		semester = -1;
		grade= -1;
		gradepoint = -1;
		credit = -1;
	}
	Score(String^ Course, String^ Name, String^ Grade, String^ Credit, String^ GradePoint, String^ Semester) {
		course = Course;
		grade = Convert::ToInt16(Grade);
		credit = Convert::ToInt16(Credit);
		gradepoint = Convert::ToDouble(GradePoint);
		student_name = Name;
		semester = Convert::ToInt16(Semester);
	}
	~Score() { }

	String^ getCourse() { return course; }
	String^ getStudentName() { return student_name; }
	int getCredit() { return credit; }
	int getGrade() { return grade; }
	int getSemester() { return semester; }
	double getGradePoint() { return gradepoint; }
	String^ getData() { return course + "\n" + student_name; }

	void setCourse(String^ Course) { course = Course; }
	void setSemester(String^ Semester) { semester = Convert::ToInt16(Semester); }
	void setGrade(String^ Grade) { grade = Convert::ToInt16(Grade); }
	void setCredit(String^ Credit) { credit = Convert::ToInt16(Credit); }
	void setGradePoint(String^ GradePoint) { gradepoint = Convert::ToDouble(GradePoint); }
	void setStudentName(String^ Name) { student_name = Name; }
	void setData(String^ Course, String^ Name, String^ Grade, String^ Credit, String^ GradePoint, String^ Semester) {
		course = Course;
		grade = Convert::ToInt16(Grade);
		credit= Convert::ToInt16(Credit);
		gradepoint = Convert::ToDouble(GradePoint);
		student_name = Name;
	}
};