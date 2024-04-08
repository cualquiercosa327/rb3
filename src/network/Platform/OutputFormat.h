#ifndef PLATFORM_OUTPUTFORMAT_H
#define PLATFORM_OUTPUTFORMAT_H
#include "Platform/RootObject.h"

namespace Quazal {
    class OutputFormat : public RootObject {
    public:
        OutputFormat();
        virtual ~OutputFormat(){}
        virtual void StartString(char*, unsigned int);
        virtual void StartPrefixes(char*, unsigned int);
        virtual void AddPrefixes(char*, unsigned int);
        virtual void EndPrefixes(char*, unsigned int);
        virtual void AddIndent(char*, unsigned int);
        virtual int AddMessage(char*, unsigned int, const char*, ...); // that last input param should be a __va_list_struct*
        virtual void EndString(char*, unsigned int);

        unsigned int m_uiIndent;
        unsigned int m_uiNumberTrace;
        bool m_bShowThreadID;
        bool m_bShowProcessID;
        bool m_bShowLocalTime;
        bool m_bShowDateTime;
        bool m_bShowSessionTime;
        bool m_bShowSystemThreadName;
        bool m_bShowLocalStationHandle;
        bool m_bShowCurrentContext;
        bool m_bShowCID;
        bool m_bShowPID;
        const char* m_szPrefix;
        unsigned int m_uiInitTime;
    };
}

#endif
