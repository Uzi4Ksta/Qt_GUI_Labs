#pragma once

#include <string>

class Person
{
private:
protected:
	std::string firstName = "N/A", lastName = "N/A";
	std::string dateOfBirthday = "N/A";
public:
	Person(std::string firstName, std::string lastName, std::string dateOfBirthday);
	~Person();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setDateOfBirthday(std::string dateOfBirthday);
	std::string getFirstName();
	std::string getLastName();
	std::string getDateOfBirthday();
	virtual std::string getInfo();
};
