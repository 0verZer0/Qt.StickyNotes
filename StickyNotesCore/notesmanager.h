#ifndef NOTESMANAGER_H
#define NOTESMANAGER_H

#include <QObject>
#include <QFile>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

namespace Core {
    class NotesManager : public QObject
    {
        Q_OBJECT

    public:
        explicit NotesManager();

    };
}
#endif // NOTESMANAGER_H
