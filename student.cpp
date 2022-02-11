#include "Student.h"

//bool student::operator==(const student& lhs, const student& rhs)
//{
//	student l = lhs;
//	student r = rhs;
//	if (l.getNationalId() == r.getNationalId())
//	{
//		return true;
//	}
//	return false;
//}
/*bool student::operator==(const person &rhs)
{
    return this->getNationalId() == rhs.nationalId;
}*/
student::student()
{
    this->studentGrade = 0;
}
student::~student()
{

}
void student::setGrade(unsigned int value)
{
    this->studentGrade = value;
}
unsigned int student::getGrade()
{
    return this->studentGrade;
}

