#include "note.h"

using namespace Core;

Note::Note()
{
    m_title = "none";
    m_content = "";
}

QString Note::getTitle() const{
    return  m_title;
}

void Note::setTitle(const QString &newValue){
    m_title = newValue;
    emit titleChanged();
}

QString Note::getContent() const{
    return m_content;
}

void Note::setContent(const QString &newValue){
    m_content = newValue;
    emit contentChanged();
}
