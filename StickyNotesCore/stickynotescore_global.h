#ifndef STICKYNOTESCORE_GLOBAL_H
#define STICKYNOTESCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(STICKYNOTESCORE_LIBRARY)
#  define STICKYNOTESCORESHARED_EXPORT Q_DECL_EXPORT
#else
#  define STICKYNOTESCORESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // STICKYNOTESCORE_GLOBAL_H
