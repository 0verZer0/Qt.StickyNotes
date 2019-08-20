#ifndef NOTE_H
#define NOTE_H

#include <QObject>

namespace Core {
    class Note : public QObject
    {
        Q_OBJECT

        Q_PROPERTY(QString title READ getTitle WRITE setTitle NOTIFY titleChanged)
        Q_PROPERTY(QString content READ getContent WRITE setContent NOTIFY contentChanged)

    private:
        QString m_title;
        QString m_content;

    public:
        explicit Note();
        QString getTitle() const;
        void setTitle(const QString &newValue);
        QString getContent() const;
        void setContent(const QString &newValue);

    signals:
        void titleChanged();
        void contentChanged();
    };
}

#endif // NOTE_H
