import QtQuick 2.3
import QtQuick.Window 2.2
import org.example 1.0

Window {
    visible: true
    height: 300
    width: 300
    color: "dimgray"

    Rectangle{
        height: 300
        width: 300
        GridView {
            id: view
            anchors.fill: parent
            cellWidth: 60
            cellHeight: 60
            model: DataModel{}
            delegate: Rectangle {
                width: 60
                height: 60
                color: model.display
                border.color: "black"
            }
        }
    }
}

