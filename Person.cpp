#include "Person.h"

person::person()
{
    this->fullName = "";
    this->nationalId = "";
    this->phoneNo = "";
    this->birthdayDate = "";
}
person::~person()
{

}
void person::checkString(string value)
{
    if (value == "")
    {
        throw "Value not Valid...";
    }
}
void person::setFullName(string value)
{
    try
    {
        checkString(value);
        this->fullName = value;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }

}
void person::setBirthdayDate(string value)
{
    try
    {
        checkString(value);
        this->birthdayDate = value;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }
}
void person::setNationalId(string value)
{
    try
    {
        checkString(value);
        this->nationalId = value;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }
}
void person::setPhoneNo(string value)
{
    try
    {
        checkString(value);
        this->phoneNo = value;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }
}
string person::getFullName()
{
    return this->fullName;
}
string person::getBirthdayDate()
{
    return this->birthdayDate;
}
string person::getNationalId()
{
    return this->nationalId;
}
string person::getPhoneNo()
{
    return this->phoneNo;
}


