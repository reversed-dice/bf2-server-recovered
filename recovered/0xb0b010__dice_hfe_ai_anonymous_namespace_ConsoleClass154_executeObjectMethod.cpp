// FUNCTION: BF2 0xb0b010
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
    bool getValue() const { return m_value; }
    unsigned char _pad[0x34 - 8];
    bool m_value;
};

class AITemplatePlugInManager {
public:
    AITemplatePlugIn* getActiveTemplatePlugIn() const;
    static AITemplatePlugInManager* m_instance;
};

namespace {

inline AITemplateTarget* activeTarget()
{
    AITemplatePlugIn* p = AITemplatePlugInManager::m_instance ? AITemplatePlugInManager::m_instance->getActiveTemplatePlugIn() : 0;
    return (p && p->getType() == 3) ? static_cast<AITemplateTarget*>(p) : 0;
}

class ConsoleClass154 {
public:
    virtual ~ConsoleClass154();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const bool* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3;
    bool m_result;
};

void* ConsoleClass154::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = activeTarget()->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        bool a = *m_arg0;
        m_hasResult = false;
        activeTarget()->setValue(a);
    }
    return 0;
}

}
} } }
