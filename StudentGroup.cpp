#include "StudentGroup.h"
#include "Student.h"
#include <iostream>
#include <algorithm>

using namespace std;


const string& StudentGroup::GetGroupName() {
	return nameGroup;
}

StudentGroup::StudentGroup(const string& nameGroup) {
	this -> nameGroup = nameGroup;
}

bool StudentGroup::fillGroup(Student* student) {
	
	if (Students.size() < 5) {
	
		Students.push_back(student);
		cout << "Студент " << student->getName() << " добавлен в " << nameGroup << endl;
		return true;
	}
	else
	{
		cout <<"??? " <<student->getName() << " не может быть добавлен в " << nameGroup << " т.к. она заполнена\n";
		return false;
	}
}

	void StudentGroup::kickStudent(Student * student) {
		for (auto i = Students.begin(); i != Students.end(); i++) {
			if (student == *i) {
				cout << "!!! " << "Студент " << student->getName() << " исключен из " << nameGroup << endl;
				Students.erase(i);
				student->leaveGroup(this->nameGroup);
				break;
			}
		}
	}


	void StudentGroup::sortStudent() {
		cout << "\n_____________________\n";
		cout << "Студенты группы " << this->GetGroupName() <<":\n";
		sort(Students.begin(), Students.end());

		for (int i = 0; i < Students.size(); i++) {
			cout << Students[i]->getName()<< endl;
		}
	}