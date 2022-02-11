import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "صفحه ورود به برنامه"

    StackView
    {
        id: myStack
        initialItem: "loginpage.qml"
        anchors.fill: parent
        Item {
            id: addStudent

        }
    }
}
