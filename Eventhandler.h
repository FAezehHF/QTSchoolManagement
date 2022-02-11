#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

#include <QObject>
#include <iostream>
#include <string>
#include <ctime>
#include <io.h>
#include <chrono>
#include <thread>
#include "Student.h"
#include "Employee.h"
#include "Teacher.h"
#include "Person.h"
#include "ClassRoom.h"


using namespace std;
class EventHandler : public QObject
{
    Q_OBJECT
public:
public slots:
    bool login(QString,QString);//for loginpage.qml
    //void showManagePage();
    void addStudent(QString,QString,QString,QString,QString);

};

#endif // EVENTHANDLER_H
