// FUNCTION: BF2 0xb07230
#include <string>
namespace dice { namespace hfe { namespace ai {
class PlugIn_b07230 { public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual int getType();
    virtual void d4(); virtual void d5();
    virtual void* run6();
    virtual void* run7();
    virtual void* run8();
};
class AITemplatePlugInManager { public:
    static AITemplatePlugInManager* m_instance;
    PlugIn_b07230* getActiveTemplatePlugIn() const;
};
} } }
namespace dice { namespace hfe { namespace ai { 
class ConsoleClass159 {
public:
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[0x10c - 0x109];
    int m_result;
    void* pad0();
    void* executeObjectMethod();
};
void* ConsoleClass159::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    PlugIn_b07230* r = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn_b07230* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 4)
                r = t;
        }
    }
    m_result = *(int*)((char*)r + 0x1c);
    return &m_result;
}
void* ConsoleClass159::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    PlugIn_b07230* r = 0;
    if (AITemplatePlugInManager::m_instance != 0) {
        PlugIn_b07230* t = AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn();
        if (t != 0) {
            if (t->getType() == 4)
                r = t;
        }
    }
    m_result = *(int*)((char*)r + 0x1c);
    return &m_result;
}
 } } } 
