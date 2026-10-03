// FUNCTION: BF2 0x645590
#include <string>

namespace dice { namespace hfe {

class TiXmlAttribute {
public:
    unsigned char __pad[0x30];
    char* m_30;
    int m_38;
    void SetIntValue(int v);
};

extern "C" int sprintf(char*, const char*, ...);
extern void fn_6445f0(void* self, const char* s);

void TiXmlAttribute::SetIntValue(int v)
{
    char buf[0x40];
    sprintf(buf, (const char*)0xb97f28, v);
    fn_6445f0((char*)this + 0x30, buf);
}

} }
