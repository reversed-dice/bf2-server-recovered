// FUNCTION: BF2 0xac2290
#include <string>

namespace dice { namespace hfe { namespace world {
extern void* objectTemplateManager;
} } }
class ObjTm {
public:
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void* m20();
};
namespace dice { namespace hfe { namespace tool {
struct ConsoleClass173 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[7];
    void* m_result;
    void* pad0();
    void* executeObjectMethod();
};
void* ConsoleClass173::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    ObjTm* p = (ObjTm*)dice::hfe::world::objectTemplateManager;
    m_result = p->m20();
    return &m_result;
}
void* ConsoleClass173::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    ObjTm* p = (ObjTm*)dice::hfe::world::objectTemplateManager;
    m_result = p->m20();
    return &m_result;
}

}
}
}
