// FUNCTION: BF2 0x88ecb0
#include <string>

namespace dice { namespace hfe {

struct Settings {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

class ServerGameLogic {
public:
    int getCurrentLevel() const;
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {
class ConsoleClass325 {
public:
    char _pad[0x30];
    int m_argc;
    char _pad2[0x108 - 0x34];
    char m_active;
    char _pad3[3];
    int m_result;
    void* executeObjectMethod();
};

static inline char readGs() {
    return *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
}
void* ConsoleClass325::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        char flag = readGs();
        (void)flag;
        m_result = 0;
        return &m_result;
    }
    if (m_argc == 1) {
        m_active = 0;
        char flag = readGs();
        (void)flag;
        return 0;
    }
    return 0;
}
} } }
