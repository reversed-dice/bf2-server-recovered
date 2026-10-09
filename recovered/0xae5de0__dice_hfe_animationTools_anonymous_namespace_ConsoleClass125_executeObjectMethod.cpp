// FUNCTION: BF2 0xae5de0
#include <string>

namespace dice { namespace hfe {

class AnimSysTemplateManager {
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
    virtual std::string name();
};

extern AnimSysTemplateManager* animationSystemTemplateManager;

class ConsoleClassX {
public:
    void* executeObjectMethod();
    void* pad0();
    void* pad1();
    void* pad2();
private:
    char _pad0[0x30];
    int m_argc;                 // 0x30
    char _pad1[0x108 - 0x34];
    unsigned char m_hasResult;  // 0x108
    char _pad2[0x110 - 0x109];
    std::string m_result;       // 0x110
};

void* ConsoleClassX::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(animationSystemTemplateManager->name());
    return &m_result;
}

void* ConsoleClassX::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(animationSystemTemplateManager->name());
    return &m_result;
}

void* ConsoleClassX::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(animationSystemTemplateManager->name());
    return &m_result;
}

void* ConsoleClassX::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result.assign(animationSystemTemplateManager->name());
    return &m_result;
}

} }
