// FUNCTION: BF2 0xabfe50
namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    void updateAllTemplates();
};

extern ObjectTemplateAdm objectTemplateAdm;

class ConsoleClass155 {
public:
    bool executeObjectMethod();
    bool pad0();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_active;
};

bool ConsoleClass155::pad0()
{
    if (m_argc == 0) {
        m_active = 0;
        objectTemplateAdm.updateAllTemplates();
    }
    return false;
}

bool ConsoleClass155::executeObjectMethod()
{
    if (m_argc == 0) {
        m_active = 0;
        objectTemplateAdm.updateAllTemplates();
    }
    return false;
}

} } }
