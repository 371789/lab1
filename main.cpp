#include "StudentGroup.h"
#include "Student.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	Student* Charles = new Student("Charles Sullivan");
	Student* Dorcas = new Student("Dorcas Jackson");
	Student* Francis = new Student("Francis Cook");
	Student* Betty = new Student("Betty Henderson");
	Student* Letitia = new Student("Letitia Jefferson");
	Student* Wilfred = new Student("Wilfred Morris");

	StudentGroup* g7000 = new StudentGroup("g7000");
	StudentGroup* g6666 = new StudentGroup("g6666");
	StudentGroup* g1111 = new StudentGroup("g1111");

	Francis->joinGroup(*g7000);
	Wilfred->joinGroup(*g7000);
	Charles->joinGroup(*g7000);
	Betty->joinGroup(*g7000);
	Letitia->joinGroup(*g7000);
	Dorcas->joinGroup(*g7000);
	Betty->joinGroup(*g6666);
	Dorcas->joinGroup(*g1111);

	g7000->kickStudent(Betty);

	Dorcas->joinGroup(*g7000);

	Dorcas->StudentInfo();
	Betty->StudentInfo();

	

	g7000->sortStudent();


	return 0;
}