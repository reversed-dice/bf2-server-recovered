// FUNCTION: BF2 0xb19760
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe { namespace ai {

class AITemplatePlugIn {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual int getType() const;
};

class AITemplateMobile : public AITemplatePlugIn {
public:
    void setPathfindingMap(const std::string& name);
};

class AITemplatePlugInManager {
public:
    AITemplatePlugIn* getActiveTemplatePlugIn() const;
};

extern AITemplatePlugInManager* g_aiTemplatePlugInManager;

namespace {

inline AITemplateMobile* activeMobile()
{
    AITemplatePlugIn* p = g_aiTemplatePlugInManager ? g_aiTemplatePlugInManager->getActiveTemplatePlugIn() : 0;
    return (p && p->getType() == 3) ? static_cast<AITemplateMobile*>(p) : 0;
}

class ConsoleClass148 {
public:
    virtual ~ConsoleClass148();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
};

void* ConsoleClass148::executeObjectMethod()
{
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        activeMobile()->setPathfindingMap(a);
    }
    return 0;
}

}
} } }
