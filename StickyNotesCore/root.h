#ifndef ROOT_H
#define ROOT_H

#include <QObject>

namespace Core {
    class Root : public QObject
    {
        Q_OBJECT
        Q_PROPERTY(QString title READ getTitle WRITE setTitle NOTIFY titleChanged)
        Q_PROPERTY(QString content READ getContent WRITE setContent NOTIFY contentChanged)

    private:
        QString m_title;
        QString m_content;

    public:
        explicit Root();
        QString getTitle() const;
        void setTitle(const QString &newValue);
        QString getContent() const;
        void setContent(const QString &newValue);

    signals:
        void titleChanged();
        void contentChanged();
    };
}

#endif // ROOT_H
