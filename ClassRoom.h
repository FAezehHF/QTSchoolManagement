#ifndef CLASSROOM_H
#define CLASSROOM_H


#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"
using namespace std;
class classroom
{
public:
    classroom();
    ~classroom();
    void setClassName(string);
    string getClassName();
    void setCapacity(unsigned int);
    unsigned int getCapacity();
    void setClassGrade(unsigned int);
    unsigned int getClassGrade();
    void addStudentToClassList(student);
    void removeStudentFromClassList(student);
    void setClassTeacher(teacher, unsigned int);
    teacher getClassTeacher();
    void printClassInfo();

private:
    string className;
    unsigned int capacity;
    vector<student> classList;
    unsigned int classGrade;
    teacher classTeacher;
};
#endif
