// FUNCTION: BF2 0x987f60
namespace dice { namespace hfe { namespace world {

class BundleTemplate {
public:
    void clearTemplateList();
};

extern unsigned int CID_BundleTemplate;

void* getActiveTemplate(unsigned int);

class ConsoleClass185 {
public:
    bool executeObjectMethod();
    bool pad0();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_active;
};

bool ConsoleClass185::pad0()
{
    if (m_argc == 0) {
        m_active = 0;
        ((BundleTemplate*)getActiveTemplate(CID_BundleTemplate))->clearTemplateList();
    }
    return false;
}

bool ConsoleClass185::executeObjectMethod()
{
    if (m_argc == 0) {
        m_active = 0;
        ((BundleTemplate*)getActiveTemplate(CID_BundleTemplate))->clearTemplateList();
    }
    return false;
}

} } }
