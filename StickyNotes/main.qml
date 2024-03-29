import QtQml 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls.Material 2.12
import Core 1.0

ApplicationWindow {
    Root { id: root }

    Material.theme: Material.Dark
    Material.accent: Material.Purple

    visible: true
    width: 250
    height: 250
    minimumWidth: 250
    minimumHeight: 250
    title: root.manager.notes[0].title

    GridLayout {
        anchors.fill: parent
        rows: 3

        TextField {
            id: titleTextField
            Layout.fillWidth: true
            Layout.row: 0
            leftPadding: 10
            height: 40
            maximumLength: 25
            text: root.manager.notes[0].title
        }

        TextArea {
            id: contentTextArea
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.row: 1
            leftPadding: 10
            text: root.manager.notes[0].content
        }

        Button {
            Layout.alignment: Qt.AlignHCenter
            Layout.row: 2
            text: "save"
            implicitWidth: 200
            implicitHeight: 50
        }
    }

    Binding {
        target: root
        property: "manager.notes[0].title"
        value: titleTextField.text
    }

    Binding {
        target: root
        property: "manager.notes[0].content"
        value: contentTextArea.text
    }
}
