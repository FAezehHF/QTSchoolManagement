#ifndef TEACHER_H
#define TEACHER_H


#include "Person.h"
#include <string>
using namespace std;
#pragma once

class teacher : public person
{
public:
    teacher();
    ~teacher();
    void setGrade(unsigned int);
    unsigned int getGrade();

private:
    unsigned int teacherGrade;
};

#endif // TEACHER_H
