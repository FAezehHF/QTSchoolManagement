#ifndef PERSON_H
#define PERSON_H


#include <string>
#include <iostream>
using namespace std;
#pragma once

class person
{
public:
    person();
    ~person();
    void setFullName(string);
    void setNationalId(string);
    void setPhoneNo(string);
    void setBirthdayDate(string);
    virtual void setGrade(unsigned int) = 0;
    string getFullName();
    string getNationalId();
    string getPhoneNo();
    string getBirthdayDate();
    virtual unsigned int getGrade() = 0;
    //virtual bool operator == (const person &rhs) = 0;


private:
    string nationalId;
    string fullName;
    string phoneNo;
    string birthdayDate;
    void checkString(string);
};

#endif // PERSON_H
