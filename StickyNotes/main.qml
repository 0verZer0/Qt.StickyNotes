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
        rows: 3

        TextField {
            id: titleTextField
            Layout.fillWidth: true
            Layout.row: 0
            leftPadding: 10
            height: 40
            text: context.manager.notes[0].title
        }

        TextArea {
            id: contentTextArea
            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.row: 1
            leftPadding: 10
            text: context.content
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
        target: context
        property: "title"
        value: titleTextField.text
    }

    Binding {
        target: context
        property: "content"
        value: contentTextArea.text
    }
}
