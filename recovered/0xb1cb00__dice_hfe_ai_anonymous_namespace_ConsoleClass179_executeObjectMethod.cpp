// FUNCTION: BF2 0xb1cb00
#include <string>
namespace dice { namespace hfe { namespace ai {
class PlugIn_b1cb00 { public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual int getType();
    virtual void d4(); virtual void d5();
    virtual void* run6();
    virtual void* run7();
    virtual void* run8();
};
class AITemplatePlugInManager { public:
    static AITemplatePlugInManager* m_instance;
    PlugIn_b1cb00* getActiveTemplatePlugIn() const;
};
} } }
namespace dice { namespace hfe { namespace ai { 
class ConsoleClass179 {
public:
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[0x110 - 0x109];
    void* m_result;
    void* pad0();
    void* pad1();
    void* pad2();
    void* executeObjectMethod();
};
void* ConsoleClass179::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    PlugIn_b1cb00* r = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn_b1cb00* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 1)
                r = t;
        }
    }
    m_result = r->run8();
    return &m_result;
}
void* ConsoleClass179::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    PlugIn_b1cb00* r = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn_b1cb00* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 1)
                r = t;
        }
    }
    m_result = r->run8();
    return &m_result;
}
void* ConsoleClass179::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    PlugIn_b1cb00* r = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn_b1cb00* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 1)
                r = t;
        }
    }
    m_result = r->run8();
    return &m_result;
}
void* ConsoleClass179::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    PlugIn_b1cb00* r = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn_b1cb00* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 1)
                r = t;
        }
    }
    m_result = r->run8();
    return &m_result;
}
 } } } 
