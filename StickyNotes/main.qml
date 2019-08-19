import QtQml 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls.Material 2.12

ApplicationWindow {
    Material.theme: Material.Dark
    Material.accent: Material.Purple

    visible: true
    width: 300
    height: 300
    title: context.title

    GridLayout {
        anchors.fill: parent
        rows: 2

        TextArea {
            id: textBox
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.row: 0
            text: context.content;
        }

        Button {
            Layout.leftMargin: 10
            Layout.rightMargin: 10
            Layout.fillWidth: true
            Layout.row: 1
            text: context.content
            height: 40
        }
    }

    Binding {
        target: context
        property: "content"
        value: textBox.text
    }
}
