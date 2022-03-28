import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Column
{
        spacing: 20
anchors.centerIn:parent
Text
{
color: "blue"
text: "password"
width: 100
anchors.centerIn:parent
z: 10
}

        Rectangle  {color: "black"; width: 100; height: 100; anchors.centerIn:parent}
        Rectangle { color: "white"; width: 80; height: 30; anchors.centerIn:parent}



}
}
