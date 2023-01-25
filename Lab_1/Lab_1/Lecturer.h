#pragma once
#include "Person.h"
class Lecturer :
    public Person
{
protected:
    int workExperience = 0;
    std::string academicDegree = "N/A";
public:
    Lecturer(std::string firstName, std::string lastName, std::string dateOfBirthday, int workExoerience, std::string academicDegree);
    ~Lecturer();
    void setWorkExperience(int years);
    void setAcademicDegree(std::string degree);
    int getWorkExperience();
    std::string getAcademicDegree();
    virtual std::string getInfo();
};

