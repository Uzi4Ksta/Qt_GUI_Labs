#include "Person.h"

Person::Person(std::string firstName, std::string lastName, std::string dateOfBirthday)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->dateOfBirthday = dateOfBirthday;
}

Person::~Person()
{
}

void Person::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Person::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Person::setDateOfBirthday(std::string dateOfBirthday)
{
	this->dateOfBirthday = dateOfBirthday;
}

std::string Person::getFirstName()
{
	return this->firstName;
}

std::string Person::getLastName()
{
	return this->lastName;
}

std::string Person::getDateOfBirthday()
{
	return this->dateOfBirthday;
}

std::string Person::getInfo()
{
	return "Person name: " + this->firstName + " " + this->lastName + ". Birthday: " + this->dateOfBirthday;
}
