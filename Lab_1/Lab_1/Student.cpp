#include "Student.h"

Student::Student(std::string firstName, std::string lastName, std::string dateOfBirthday, unsigned long groupId): Person(firstName, lastName, dateOfBirthday)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->dateOfBirthday = dateOfBirthday;
	this->groupId = groupId;
}

void Student::setGroupId(unsigned long groupId)
{
	this->groupId = groupId;
}

unsigned long Student::getGroupId()
{
	return this->groupId;
}

std::string Student::getInfo()
{
	return "Student name: " + this->firstName + " " + this->lastName + ". Birthday: " + this->dateOfBirthday + ". Group id: " + std::to_string(this->groupId);
}
