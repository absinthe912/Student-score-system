#pragma once
using namespace System;

ref class Major
{
protected:
	String^ name;

public:
	Major() {
		name = "";
	}
	Major(String^ Name) {
		name = Name;
	}
	~Major() { }

	String^ getName() { return name; }
	String^ getData() { return name; }
	void setName(String^ Name) { name = Name; }
	void setData(String^ Name) { name = Name; }
};