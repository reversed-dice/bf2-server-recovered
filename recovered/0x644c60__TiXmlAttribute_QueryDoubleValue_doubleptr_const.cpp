// FUNCTION: BF2 0x644c60
#include <string>

namespace dice { namespace hfe {

class TiXmlAttribute {
public:
    unsigned char __pad[0x30];
    char* m_30;          // string data
    int m_38;            // string length
    int QueryIntValue(int* out) const;
    int QueryDoubleValue(double* out) const;
};

extern "C" int sscanf(const char*, const char*, ...);

int TiXmlAttribute::QueryIntValue(int* out) const
{
    const char* s = m_38 ? m_30 : (const char*)0xbb25f1;
    return (sscanf(s, (const char*)0xb97f28, out) != 1) ? 2 : 0;
}

int TiXmlAttribute::QueryDoubleValue(double* out) const
{
    if (sscanf(m_38 ? m_30 : (const char*)0xbb25f1, (const char*)0xb88752, out) == 1)
        return 0;
    return 2;
}

} }
