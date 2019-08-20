#include "root.h"

using namespace Core;

Root::Root(){
    m_manager = new NotesManager();
}

Root::~Root(){
    delete m_manager;
}

NotesManager* Root::getManager() const{
    return m_manager;
}
