// FUNCTION: BF2 0x647760
#include <string>

namespace dice { namespace hfe {

class TiXmlAttributeSet {
public:
    void* vptr;        // 0x0
    int m_8;           // 0x8
    int m_c;           // 0xc
    void* m_10;        // 0x10
    void* m_18;        // 0x18
    void* m_20;        // 0x20
    int m_28;          // 0x28
    int m_2c;          // 0x2c
    void* m_30;        // 0x30
    int m_38;          // 0x38
    int m_3c;          // 0x3c
    void* m_40;        // 0x40
    void* m_48;        // 0x48
    TiXmlAttributeSet();
};

TiXmlAttributeSet::TiXmlAttributeSet()
{
    char* s = (char*)this + 0x20;
    m_c = -1;
    m_8 = -1;
    m_10 = 0;
    vptr = (void*)0xb88ad0;
    *(int*)(s + 8) = 0;
    *(int*)(s + 0xc) = 0;
    s = (char*)this + 0x30;
    m_20 = 0;
    m_30 = 0;
    *(int*)(s + 8) = 0;
    *(int*)(s + 0xc) = 0;
    m_18 = 0;
    m_48 = this;
    m_40 = this;
}

} }
