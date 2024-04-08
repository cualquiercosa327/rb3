#ifndef PLATFORM_STRING_H
#define PLATFORM_STRING_H
#include "Platform/RootObject.h"

namespace Quazal {
    class String : public RootObject {
    public:
        String();
        String(const char*);
        String(const String&);
        ~String();
        
        char* m_szContent;
    };
}

#endif
