#ifndef NOTESMANAGER_H
#define NOTESMANAGER_H

#include <QObject>
#include <QFile>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include "note.h"

namespace Core {
    class NotesManager : public QObject
    {
        Q_OBJECT

        Q_PROPERTY(QList<Note *> notes READ getNotes WRITE setNotes NOTIFY notesChanged)

    private:
        QList<Note *> m_notes;

    public:
        explicit NotesManager();
        QList<Note *> getNotes() const;
        void setNotes(const QList<Note *> &newValue);

    private:
        QJsonArray getNotesFromJson() const;

    signals:
        void notesChanged();
    };
}
#endif // NOTESMANAGER_H
