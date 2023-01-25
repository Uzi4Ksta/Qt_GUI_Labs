#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Lecturer.h"
#include "HeadOfDepartment.h"

Person* personsList[255];
int personsListCount = 0;

void showInfoFromList(); 
void completeList();
void addToList(Person& person);

Person p1("Stepan", "Kvitko", "18.12.2001"), p2("Evgen", "Stepanenko", "06.03.1996");
Student s1("Elizaveta", "Volkova", "14.05.2004", 54651), s2("Vladislav", "Volkov", "23.01.2002", 19168);
Lecturer l1("Maksym", "Korovin", "14.07.1984", 15, "Dc.Comuter science");
HeadOfDepartment hd1("Nikita", "Pererva", "01.04.2004", 0, "Dc.Coputer science", "Computer science department");


int main()
{
   std::cout << "Hello World!\n";
   completeList();
   showInfoFromList();
}

void showInfoFromList() {
	std::cout << "In list " << personsListCount << " humans\n";
	for (int i = 0; i < personsListCount; i++) {
		std::cout << personsList[i]->getInfo() << std::endl;
	}
}

void addToList(Person& person) {
	personsList[personsListCount] = &person;
	personsListCount++;
}

void completeList() {
	addToList(p1);
	addToList(s2);
	addToList(hd1);
	addToList(l1);
	addToList(p2);
	addToList(s1);
}