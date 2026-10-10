// FUNCTION: BF2 0xb0aa00
// Compiler: gcc-4.0
// Flags: -O2

#include <string>
namespace dice { namespace hfe { namespace ai {

class AITemplatePlugIn {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual int getType() const;
};

class AITemplateTarget : public AITemplatePlugIn {
public:
    void setValue(bool v) { m_value = v; }
    unsigned char _pad[0x26 - 8];
    bool m_value;
};

class AITemplatePlugInManager {
public:
    AITemplatePlugIn* getActiveTemplatePlugIn() const;
};

extern AITemplatePlugInManager* g_aiTemplatePlugInManager;

namespace {

inline AITemplateTarget* activeTarget()
{
    AITemplatePlugIn* p = g_aiTemplatePlugInManager ? g_aiTemplatePlugInManager->getActiveTemplatePlugIn() : 0;
    return (p && p->getType() == 5) ? static_cast<AITemplateTarget*>(p) : 0;
}

class ConsoleClass173 {
public:
    virtual ~ConsoleClass173();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const bool* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
};

void* ConsoleClass173::executeObjectMethod()
{
    if (m_argc == 1) {
        bool a = *m_arg0;
        m_hasResult = false;
        activeTarget()->setValue(a);
    }
    return 0;
}

}
} } }
