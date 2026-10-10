// FUNCTION: BF2 0x88f2e0
#include <string>

namespace dice { namespace hfe {

struct Settings {
    virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
    virtual void slot4(); virtual void slot5(); virtual void slot6(); virtual void slot7();
    virtual void slot8(); virtual void slot9(); virtual void slot10(); virtual void slot11();
    virtual void slot12(); virtual void slot13(); virtual void slot14(); virtual void slot15();
    virtual void slot16(); virtual void slot17(); virtual void slot18(); virtual void slot19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

class ServerGameLogic {
public:
    unsigned int getNumberOfTickets(unsigned int team) const;
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {

class ConsoleClass210 {
public:
    virtual ~ConsoleClass210();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    unsigned int* m_argv;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3[3];
    unsigned int m_val;
};

void* ConsoleClass210::executeObjectMethod() {
    if (m_argc != 1) return 0;
    unsigned int team = *m_argv;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getNumberOfTickets(team);
    return &m_val;
}

} // anon
} }
