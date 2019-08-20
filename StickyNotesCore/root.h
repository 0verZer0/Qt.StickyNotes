#ifndef ROOT_H
#define ROOT_H

#include <QObject>

namespace Core {
    class Root : public QObject
    {
        Q_OBJECT

    public:
        explicit Root();
    };
}

#endif // ROOT_H
