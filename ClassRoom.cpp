#include <iostream>
#include "ClassRoom.h"
#include <chrono>
#include <thread>
using namespace std;
classroom::classroom()
{
    this->className = "";
    this->capacity = 0;
    this->classGrade = 0;
}
void classroom::setClassName(string value)
{
    this->className = value;
}
string classroom::getClassName()
{
    return this->className;
}
void classroom::setCapacity(unsigned int value)
{
    this->capacity = value;
}
unsigned int classroom::getCapacity()
{
    return this->capacity;
}
void classroom::setClassGrade(unsigned int value)
{
    this->classGrade = value;
}
unsigned int classroom::getClassGrade()
{
    return this->classGrade;
}
void classroom::addStudentToClassList(student s)
{
    //This is a function that adds students to the class
  //If the student's national ID is available in the StudentList, do not add it
    if (this->capacity > classList.size())
    {
        for (size_t i = 0; i < classList.size(); i++)
        {
            if (classList.at(i).getNationalId() == s.getNationalId())
            {
                cout << "Student NationalID alredy exsit on calss list..." << endl;
                return;
            }
        }
        classList.push_back(s);
        cout << "Student information successfuly added to list calss..." << endl;
    }
    else
    {
        cout << "Class List is Full..." << endl;
    }

}
void classroom::removeStudentFromClassList(student s)
{
    //This is a function that removes students from the class
    //If the student's national ID is available in the StudentList, do remove it

    /*if (find(classList.begin(), classList.end(), s) != classList.end())
    {
        vector<student>::auto it = std::find(classList.begin(), classList.end(), s);

        classList.erase(it);
        cout << "Student information successfuly deleted from list calss..." << endl;
        return;
    }
    cout << "Student information not exsit on calss list..." << endl;*/
    int index = 0;
    for(auto i:classList)
    {
        if(i.getNationalId() == s.getNationalId())
        {
            classList.erase(classList.begin() + index);
            cout << "Student information successfuly deleted from list calss..." << endl;
            return;
        }
        else
        {
            index++;
        }
    }
    cout << "Student information not exsit on calss list..." << endl;
}
classroom::~classroom()
{

}
void classroom::setClassTeacher(teacher value, unsigned int teacherGrade)
{

    if (this->classGrade == teacherGrade)
    {
        this->classTeacher = value;
    }
    else
    {
        cout << "cannot add teacher for this classroom..." << endl;
    }
}
teacher classroom::getClassTeacher()
{
    return this->classTeacher;
}
void classroom::printClassInfo()
{
    cout << "Class Name: " << this->className << endl;
    cout << "Class Grade: " << this->classGrade << endl;
    cout << "Teacher Name: " << this->getClassTeacher().getFullName() << endl;
    cout << "Class Capacity: " << this->classList.size() << endl;
    cout << "---------------------------" << endl;
    for (size_t i = 0; i < this->classList.size(); i++)
    {
        cout << (int)i << ")" << endl;
        cout << "Student Name: " << classList.at(i).getFullName() << endl;
        cout << "Student NID: " << classList.at(i).getNationalId() << endl;
        cout << "Student Phone Number: " << classList.at(i).getPhoneNo() << endl;
        cout << "Student Birthday Date: " << classList.at(i).getBirthdayDate() << endl;
        cout << "Student Grade: " << classList.at(i).getGrade() << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}
