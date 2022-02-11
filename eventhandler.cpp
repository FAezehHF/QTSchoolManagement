#include "Eventhandler.h"


bool EventHandler::login(QString username, QString password)
{
    string usr = username.toStdString();
    string psw = password.toStdString();
    if(usr == "admin" && psw == "1106")
    {
        return true;
    }
    return false;
}

void EventHandler::addStudent(QString fullname, QString nid, QString garde, QString birthDayDate, QString pNo)
{
    student s;
    s.setFullName(fullname.toStdString());
    s.setNationalId(nid.toStdString());
    string g = garde.toStdString();

    s.setGrade((unsigned int)stoi(g));
    s.setBirthdayDate(birthDayDate.toStdString());
    s.setPhoneNo(pNo.toStdString());
}


