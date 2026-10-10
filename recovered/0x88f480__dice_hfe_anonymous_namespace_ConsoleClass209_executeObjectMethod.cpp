// FUNCTION: BF2 0x88f480
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
    void setNumberOfTickets(unsigned int a, unsigned int b);
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {

class ConsoleClass209 {
public:
    virtual ~ConsoleClass209();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    unsigned int* m_argv0;
    unsigned int* m_argv1;
    char pad2[0x108 - 0x48];
    char m_active;
};

void* ConsoleClass209::executeObjectMethod() {
    if (m_argc != 2) return 0;
    unsigned int a = *m_argv0;
    unsigned int b = *m_argv1;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->setNumberOfTickets(a, b);
    return 0;
}

} // anon
} }
