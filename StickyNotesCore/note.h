#ifndef NOTE_H
#define NOTE_H

#include <QObject>

class Note : public QObject
{
    Q_OBJECT
public:
    explicit Note(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NOTE_H
