#pragma once
#include <iostream>
#include <vector>
#include <string>
class StudentGroup;

using namespace std;

class Student
{
private:
	string Name;
	vector<string> Groups;

public:
	Student(const string& Name);

	void joinGroup(StudentGroup& group);

	const string& getName();

	void StudentInfo();

	void leaveGroup(const string& GroupName);


};