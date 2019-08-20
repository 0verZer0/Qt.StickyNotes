#include "notesmanager.h"

using namespace Core;

NotesManager::NotesManager()
{
    QFile file("notes.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonObject object = document.object();

    QJsonValue value = object.value("notes");
    QJsonArray array = value.toArray();
    foreach (const QJsonValue &item, array)
        qDebug() << v.toObject().value("ID").toInt();
}
