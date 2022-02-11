#include "Teacher.h"
teacher::teacher()
{
    this->teacherGrade = 0;
}
teacher::~teacher()
{

}
void teacher::setGrade(unsigned int value)
{
    this->teacherGrade = value;
}
unsigned int teacher::getGrade()
{
    return this->teacherGrade;
}
