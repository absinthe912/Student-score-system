#pragma once
using namespace System;

ref class Class
{
protected:
	String^ major;
	String^ name;

public:
	Class() {
		major = "";
		name = "";
	}
	Class(String^ Major, String^ Name) {
		major = Major;
		name = Name;
	}
	~Class() { }

	String^ getMajor() { return major; }
	String^ getName() { return name; }
	String^ getData() { return major + "\n" + name; }
	void setMajor(String^ Major) { major = Major; }
	void setName(String^ Name) { name = Name; }
	void setData(String^ Major, String^ Name) {
		major = Major;
		name = Name;
	}
};