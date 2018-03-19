import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    GridView {
        id : grille2048
        x: 5
        y: 5
        width: 400
        height: 400

        model: TuileModel {}
        delegate: MaTuile2 {
            id: tuile
            text: value
        }

    }
    MouseArea{
        anchors.fill: parent
        onClicked: grille2048.model.move(0,1,1)
    }

}
