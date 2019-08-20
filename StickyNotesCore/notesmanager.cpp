#include "notesmanager.h"

using namespace Core;

NotesManager::NotesManager(){
    QJsonArray array = getNotesFromJson();
    m_notes.clear();

    foreach (const QJsonValue &item, array)
    {
        Note *note = new Note();
        note->setTitle(item.toObject().value("title").toString());
        note->setContent(item.toObject().value("content").toString());
        m_notes.append(note);
    }
}

QList<Note *> NotesManager::getNotes() const{
    return m_notes;
}

void NotesManager::setNotes(const QList<Note *> &newValue){
    m_notes = newValue;
    emit notesChanged();
}

QJsonArray NotesManager::getNotesFromJson(){
    QFile file("notes.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(jsonData);
    QJsonObject object = document.object();

    QJsonValue value = object.value("notes");
    return value.toArray();
}
