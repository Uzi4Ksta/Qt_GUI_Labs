#include "HeadOfDepartment.h"

HeadOfDepartment::HeadOfDepartment(std::string firstName, std::string lastName, std::string dateOfBirthday, int workExoerience, std::string academicDegree, std::string departmentName): Lecturer(firstName,lastName,dateOfBirthday,workExoerience,academicDegree)
{
	this->departmentName = departmentName;
}

HeadOfDepartment::~HeadOfDepartment()
{
}

void HeadOfDepartment::setDepartmentName(std::string name)
{
	this->departmentName = departmentName;
}

std::string HeadOfDepartment::getDepartmentName()
{
	return departmentName;
}

std::string HeadOfDepartment::getInfo()
{
	return "Head of the " + departmentName + " " + firstName + " " + lastName + ". Birthday: " + dateOfBirthday + ". Work experiens: " + std::to_string(workExperience);
}

