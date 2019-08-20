#include "root.h"

using namespace Core;

Root::Root(){
    m_manager = new NotesManager ();
}

NotesManager* Root::getManager() const{
    return m_manager;
}
