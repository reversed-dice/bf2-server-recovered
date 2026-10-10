// FUNCTION: BF2 0xac41f0
#include <string>

namespace dice { namespace hfe { namespace world {
extern void* objectManager;
} } }
class ObjectManager {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual void d35();
    virtual void* getActive();
};
namespace dice { namespace hfe { namespace tool {
struct ConsoleClass174 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[7];
    void* m_result;
    void* pad0();
    void* pad1();
    void* executeObjectMethod();
};
void* ConsoleClass174::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    ObjectManager* p = (ObjectManager*)dice::hfe::world::objectManager;
    m_result = p->getActive();
    return &m_result;
}
void* ConsoleClass174::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    ObjectManager* p = (ObjectManager*)dice::hfe::world::objectManager;
    m_result = p->getActive();
    return &m_result;
}
void* ConsoleClass174::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    ObjectManager* p = (ObjectManager*)dice::hfe::world::objectManager;
    m_result = p->getActive();
    return &m_result;
}

}
}
}
