import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.4
import QtQuick 2.15
Window {
    property string login: "nie"
    property string haslo: "nie1"
    width: 640
    height: 480
    visible: true
    title: qsTr("loading screen")

Column
{
        spacing: 20
anchors.centerIn:parent
TextField
{
id:password
text: "password"
width: 100

z:100000
x:-0
y: 0
}
TextField {
    id:login
    text: qsTr("login")
    width:100
    z:1000
    x:-0
    y: 500
}
Text {
    text:"udalo ci sie zalogowac"
    visible:false
    id:wiad
}


Row {
      spacing: 5
      anchors.horizontalCenter: parent.horizontalCenter
      Button {
          text: "Login";
          onClicked:{
              if(password.text===haslo && login.text===login){
             wiad.visible=true
              }



      }
      Button { text: "Guest"; onClicked: console.log("guest")  } }

}



    Rectangle  {color: "black"; width: 150; height: 400; anchors.centerIn:parent;z:-10}






}

