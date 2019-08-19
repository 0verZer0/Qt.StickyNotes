#include "root.h"

using namespace Core;

Root::Root(){
    m_title = "none";
    m_content = "";
}

QString Root::getTitle() const{
    return  m_title;
}

void Root::setTitle(const QString &newValue){
    m_title = newValue;
    emit titleChanged();
}

QString Root::getContent() const{
    return m_content;
}

void Root::setContent(const QString &newValue){
    m_content = newValue;
    emit contentChanged();
}
