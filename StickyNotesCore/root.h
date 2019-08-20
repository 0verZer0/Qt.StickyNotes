#ifndef ROOT_H
#define ROOT_H

#include <QObject>

#include "notesmanager.h"

namespace Core {
    class Root : public QObject
    {
        Q_OBJECT

        Q_PROPERTY(NotesManager* manager READ getManager)

    private:
        NotesManager* m_manager;

    public:
        explicit Root();
        virtual ~Root();
        NotesManager* getManager() const;
    };
}

#endif // ROOT_H
