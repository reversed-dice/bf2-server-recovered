// FUNCTION: BF2 0xae13a0
#include <string>

namespace dice { namespace anim {
class Trigger {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual void d3(); virtual void d4(); virtual void d5();
    virtual std::string getS6();
};
}}

namespace dice { namespace hfe { namespace animationTools {
extern dice::anim::Trigger* getActiveTrigger(int);

struct ConsoleClass223 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[7];
    std::string m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();    void* executeObjectMethod();
};
void* ConsoleClass223::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    dice::anim::Trigger* t = getActiveTrigger(0);
    m_result = t->getS6();
    return &m_result;
}
void* ConsoleClass223::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    dice::anim::Trigger* t = getActiveTrigger(0);
    m_result = t->getS6();
    return &m_result;
}
void* ConsoleClass223::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    dice::anim::Trigger* t = getActiveTrigger(0);
    m_result = t->getS6();
    return &m_result;
}
void* ConsoleClass223::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    dice::anim::Trigger* t = getActiveTrigger(0);
    m_result = t->getS6();
    return &m_result;
}
void* ConsoleClass223::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    dice::anim::Trigger* t = getActiveTrigger(0);
    m_result = t->getS6();
    return &m_result;
}
}
}
}
