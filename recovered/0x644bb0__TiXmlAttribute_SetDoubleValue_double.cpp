// FUNCTION: BF2 0x644bb0
#include <string>

namespace dice { namespace hfe {

class TiXmlAttribute {
public:
    unsigned char __pad[0x30];
    char* m_30;
    int m_38;
    void SetDoubleValue(double v);
};

extern "C" int sprintf(char*, const char*, ...);
extern void fn_6445f0(void* self, const char* s);

void TiXmlAttribute::SetDoubleValue(double v)
{
    char buf[0x40];
    sprintf(buf, (const char*)0xb88752, v);
    fn_6445f0((char*)this + 0x30, buf);
}

} }
