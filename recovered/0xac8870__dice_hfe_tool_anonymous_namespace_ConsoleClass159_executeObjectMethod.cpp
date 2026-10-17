// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xac8870
#include <string>

namespace dice { namespace hfe { namespace world {
class IObjectTemplate;
class ObjectTemplateManager;
extern ObjectTemplateManager* objectTemplateManager;
} } }

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    char saveTemplate(const world::IObjectTemplate* t, const std::string& name);
};

extern ObjectTemplateAdm objectTemplateAdm;

namespace {

typedef world::IObjectTemplate* (*getfn_159)(void*);

class ConsoleClass159 {
public:
    virtual ~ConsoleClass159();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    world::IObjectTemplate** m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3[1];
    char m_result;
};

void* ConsoleClass159::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = objectTemplateAdm.saveTemplate((*(getfn_159*)(*(char**)world::objectTemplateManager + 0xa0))(world::objectTemplateManager), std::string("object/"));
    } else {
        if (m_argc != 1)
            return 0;
        world::IObjectTemplate* t = *m_arg0;
        m_hasResult = true;
        m_result = objectTemplateAdm.saveTemplate(t, std::string("object/"));
    }
    return &m_result;
}

}
} } }
