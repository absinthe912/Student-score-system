#pragma once
using namespace System;
#include "Course.h"
#include "Global.h"


ref class Grade
{
protected:
	String^ course;
	String^ studentName;
	String^ studentGrade;
	String^ gradePoint;

public:
	Grade() {
		course = "";
		studentGrade = "";
		studentName = "";
		gradePoint = "";
	}
	Grade(String^ Name, String^ Grade) {
		studentName = Name;
		studentGrade = Grade;
	}
	Grade(String^ Name, String^ Course, String^ Grade) {
		course = Course;
		studentName = Name;
		studentGrade = Grade;
	}
	Grade(String^ Name, String^ Course, String^ Grade, String^ GradePoint) {
		course = Course;
		studentName = Name;
		studentGrade = Grade;
		gradePoint = GradePoint;
	}
	~Grade() { }

	String^ getCourse() { return course; }
	String^ getName() { return studentName; }
	String^ getGrade() { return studentGrade; }
	String^ getGradePoint() { return gradePoint; }
	String^ getData() { return  studentName + "\n" + course + "\n" + studentGrade + "\n" + gradePoint; }

	void setCourse(String^ Course) { course = Course; }
	void setName(String^ Name) { studentName = Name; }
	void setGrade(String^ Grade) { studentGrade = Grade; }
	void setData(String^ Name, String^ Course, String^ Grade, String^ GradePoint) {
		course = Course;
		studentName = Name;
		studentGrade = Grade;
		gradePoint = GradePoint;
	}

	void setGradePoint(String^ gp) {
		gradePoint = gp;
	}
};







