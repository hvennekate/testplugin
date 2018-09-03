#pragma once

#include <QtGlobal>

#if defined(TESTPLUGIN_LIBRARY)
#  define TESTPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TESTPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif
