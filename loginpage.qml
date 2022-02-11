import QtQuick 2.9
import QtQuick.Controls 2.5
import QtQuick.Dialogs 1.2

Page
{
    Column
    {
        anchors.centerIn: parent
        TextField
        {
            id: username
            placeholderText: "نام کاربری"
           // placeholderTextColor: "green"
            onAccepted: password.focus = true

        }
        TextField
        {
            id: password
            placeholderText: "رمز عبور"
          //  placeholderTextColor: "green"
            onAccepted: password

        }
        Label{
            id: lblMessage
            text: ""
            visible: false
        }

        Button
        {
            id: login
            text: "Login"
            onPressed:{
                if(!eh.login(username.text , password.text))
                {
                    lblMessage.text = "نام کاربری یا رمز عبور اشتباه است."
                    lblMessage.visible = true;
                }
                else
                {
                    var component = Qt.createComponent("Managepage.qml")
                                    var window    = component.createObject()
                                    window.show()

                }
            }
        }
    }
}
