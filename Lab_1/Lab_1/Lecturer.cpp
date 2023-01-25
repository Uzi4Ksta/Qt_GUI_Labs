#include "Lecturer.h"


Lecturer::Lecturer(std::string firstName, std::string lastName, std::string dateOfBirthday, int workExoerience, std::string academicDegree): Person(firstName, lastName, dateOfBirthday)
{
	this->workExperience = workExoerience;
	this->academicDegree = academicDegree;
}

Lecturer::~Lecturer()
{
}

void Lecturer::setWorkExperience(int years)
{
	this->workExperience = years;
}

void Lecturer::setAcademicDegree(std::string degree)
{
	this->academicDegree = degree;
}

int Lecturer::getWorkExperience()
{
	return workExperience;
}

std::string Lecturer::getAcademicDegree()
{
	return academicDegree;
}

std::string Lecturer::getInfo()
{
	return academicDegree + " name: " + this->firstName + " " + this->lastName + ". Birthday: " 
		+ this->dateOfBirthday + ". Work experiens: " + std::to_string(this->workExperience);
}
