// FUNCTION: BF2 0xb083b0
#include <string>

namespace dice { namespace hfe { namespace ai {
extern void* fn_0x00afedf0();
} } }
class KitTemplate {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual void d3(); virtual void d4(); virtual void d5();
    virtual int m6();
};
namespace dice { namespace hfe { namespace ai {
struct ConsoleClass257 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[3];
    int m_result;
    void* pad0();
    void* pad1();
    void* executeObjectMethod();
};
void* ConsoleClass257::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    KitTemplate* p = (KitTemplate*)dice::hfe::ai::fn_0x00afedf0();
    m_result = p->m6();
    return &m_result;
}
void* ConsoleClass257::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    KitTemplate* p = (KitTemplate*)dice::hfe::ai::fn_0x00afedf0();
    m_result = p->m6();
    return &m_result;
}
void* ConsoleClass257::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    KitTemplate* p = (KitTemplate*)dice::hfe::ai::fn_0x00afedf0();
    m_result = p->m6();
    return &m_result;
}

}
}
}
