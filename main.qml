import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Connections {
        target: parent
        onClicked: print("clicked")
    }

    MaGrille {
        id: maGrille
        x: 96
        y: 61
    }

}
