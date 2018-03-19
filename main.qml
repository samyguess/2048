import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 300
    height: 480
    color: "#e8d2d2"
    title: qsTr("2048")

    Rectangle {
        id: rectangle
        x: 49
        y: 120
        width: 202
        height: 62
        color: "#ffffff"

        Text {
            id: text1
            x: 70
            y: 8
            width: 62
            height: 33
            text: vueObjectCpt.cptQML
            elide: Text.ElideMiddle
            wrapMode: Text.WrapAnywhere
            font.pixelSize: 12
            focus:true
            Keys.onPressed:{
                switch(event.key){
                case Qt.Key_Up:
                    vueObjectCpt.increment();
                    break;
                case Qt.Key_Down:
                    vueObjectCpt.decrement();
                    break;
                }
            }
        }
    }

    MonTexte {
        id: monTexte
        x: 150
        y: 264
        focus:true
        Keys.onPressed:{
            switch(event.key){
            case Qt.Key_A:
                monTexte.texteAEditer=qsTr("Touche A");
                break;
            }
        }
    }
}
