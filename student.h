#ifndef STUDENT_H
#define STUDENT_H


#include "Person.h"
#include <string>
using namespace std;
#pragma once

class student : public person
{
public:
    student();
    ~student();
    void setGrade(unsigned int);
    unsigned int getGrade();
    /*friend bool operator==(const student& lhs, const student& rhs)
    {
        student l = lhs;
        student r = rhs;
        if (l.getNationalId() == r.getNationalId())
        {
            return true;
        }
        return false;
    }*/

    //bool operator == (const person &rhs) override;
private:
    unsigned int studentGrade;
};


#endif // STUDENT_H
