import QtQuick 2.0


Item {
    property alias texteAEditer: text1.text
    id: monTexte
    width: 30
    height: 60

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: rectangle.color= "#300001"
        onDoubleClicked: text1.rotation=90
    }

    Rectangle {
        id: rectangle
        color: "#d90f0f"
        border.color: "#936363"
        anchors.fill: parent

        Text {
            id: text1
            x: -15
            y: 15
            width: 60
            height: 30
            text: qsTr("Text")
            rotation: 90
            font.pixelSize: 12
        }
    }
}
