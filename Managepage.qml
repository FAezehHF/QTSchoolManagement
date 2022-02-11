import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "مدیریت مدرسه"

    Page
    {
        Button
        {
            id: btnInsertStudent
            x: 197
            y: 247
            text: "اضافه کردن دانش‌آموز"
            font.pointSize: 12
            onPressed: {

            }
            width: 200
            height: 56


        }
        Button
        {
            id: btnInsertTeacher
            x: 197
            y: 174
            text: "اضافه کردن معلم"
            font.pointSize: 12
            onPressed: {

            }
            width: 200
            height: 56


        }
        Button {
            id: btnInsertClassRoom
            x: 196
            y: 101
            width: 200
            height: 56
            text: "ایجاد کلاس درس"
            font.family: "Verdana"
            font.pointSize: 12
        }
    }


}


