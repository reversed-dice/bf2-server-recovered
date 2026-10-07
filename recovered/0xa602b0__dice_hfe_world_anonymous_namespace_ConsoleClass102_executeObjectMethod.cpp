// FUNCTION: BF2 0xa602b0
namespace dice { namespace hfe { namespace world {

class EngineSoundTemplate {
public:
    void reset();
};

extern unsigned int CID_EngineTemplate;

void* getActiveTemplate(unsigned int);

struct EngineTemplate {
    char m_pad[0x6f0];
    EngineSoundTemplate m_sound;
};

class ConsoleClass102 {
public:
    bool executeObjectMethod();
    bool pad0();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x108 - 0x34];
    char m_active;
};

bool ConsoleClass102::pad0()
{
    if (m_argc == 0) {
        m_active = 0;
        ((EngineTemplate*)getActiveTemplate(CID_EngineTemplate))->m_sound.reset();
    }
    return false;
}

bool ConsoleClass102::executeObjectMethod()
{
    if (m_argc == 0) {
        m_active = 0;
        ((EngineTemplate*)getActiveTemplate(CID_EngineTemplate))->m_sound.reset();
    }
    return false;
}

} } }
