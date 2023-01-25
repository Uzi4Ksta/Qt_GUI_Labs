#pragma once
#include "Person.h"
class Student :
    public Person
{
    unsigned long groupId = 0;
public:
    Student(std::string firstName, std::string lastName, std::string dateOfBirthday, unsigned long groupId);
    ~Student() {};
    void setGroupId(unsigned long groupId);
    unsigned long getGroupId();
    virtual std::string getInfo();
};

