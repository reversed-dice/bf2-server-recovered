// FUNCTION: BF2 0xaaa8f0
#include <string>
namespace dice { namespace hfe { namespace world {
class X_351 { public:
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
    virtual const std::string& getValue() const;
};
class ObjMgr_351 { public:
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
    virtual X_351* getObj();
};
extern ObjMgr_351* objectTemplateManager;
} } }
namespace dice { namespace hfe { namespace world { 
class ConsoleClass351 {
public:
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[0x110 - 0x109];
    std::string m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();
    void* pad4();
    void* executeObjectMethod();
};
void* ConsoleClass351::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateManager->getObj()->getValue();
    return &m_result;
}
void* ConsoleClass351::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateManager->getObj()->getValue();
    return &m_result;
}
void* ConsoleClass351::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateManager->getObj()->getValue();
    return &m_result;
}
void* ConsoleClass351::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateManager->getObj()->getValue();
    return &m_result;
}
void* ConsoleClass351::pad4() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateManager->getObj()->getValue();
    return &m_result;
}
void* ConsoleClass351::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    m_result = objectTemplateManager->getObj()->getValue();
    return &m_result;
}
 } } } 
