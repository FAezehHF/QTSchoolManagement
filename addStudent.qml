import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "اضافه کردن دانش آموز"

    Page
    {
        TextField{
            id: txtFullName
            x: 187
            y: 67
            width: 266
            height: 40
            font.pointSize: 10
            placeholderText: "نام و نام خانوادگی"
        }

        Button {
            id: btnInserStudent
            x: 220
            y: 342
            width: 200
            height: 56
            text: "ثبت دانش آموز"
            font.family: "Verdana"
            font.pointSize: 12
            onPressed: {
                eh.

            }
        }

        TextField {
            id: txtNID
            x: 187
            y: 120
            width: 266
            height: 40
            placeholderText: "شماره ملی"
            font.pointSize: 10
        }

        TextField {
            id: txtGrade
            x: 187
            y: 175
            width: 266
            height: 40
            placeholderText: "مقطع تحصیلی"
            font.pointSize: 10
        }



    }

    TextField {
        id: txtDate
        x: 187
        y: 230
        width: 266
        height: 40
        placeholderText: "تاریخ تولد"
        font.pointSize: 10
    }

    TextField {
        id: txtPNo
        x: 187
        y: 283
        width: 266
        height: 40
        placeholderText: "شماره تماس"
        font.pointSize: 10
    }


}


