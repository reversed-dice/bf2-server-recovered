// FUNCTION: BF2 0x647050
#include <string>

namespace dice { namespace hfe {

class TiXmlElement {
public:
    unsigned char __pad[0x30];
    char* m_30;
    int m_38;
    void SetDoubleAttribute(const char* name, double v);
};

extern "C" int sprintf(char*, const char*, ...);
extern void fn_646e60(void* self, const char* name, const char* value);

void TiXmlElement::SetDoubleAttribute(const char* name, double v)
{
    char buf[0x80];
    sprintf(buf, (const char*)0xb349c7, v);
    fn_646e60(this, name, buf);
}

} }
