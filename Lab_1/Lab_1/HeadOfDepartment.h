#pragma once
#include "Lecturer.h"
class HeadOfDepartment :
    public Lecturer
{
    std::string departmentName = "N/A";
public:
    HeadOfDepartment(std::string firstName, std::string lastName, std::string dateOfBirthday, int workExoerience, std::string academicDegree, std::string departmentName);
    ~HeadOfDepartment();
    void setDepartmentName(std::string name);
    std::string getDepartmentName();
    virtual std::string getInfo();
};

