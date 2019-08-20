#ifndef NOTESMANAGER_H
#define NOTESMANAGER_H

#include <QObject>

class NotesManager : public QObject
{
    Q_OBJECT
public:
    explicit NotesManager(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NOTESMANAGER_H
