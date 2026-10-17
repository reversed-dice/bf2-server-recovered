// FUNCTION: BF2 0x88e320
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
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
    virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void setNextLevel(int v);
    int getNextLevel() const;
};
extern Settings* settings;
extern ServerGameLogic* gameLogic;
namespace {
class ConsoleClass324 {
public:
    virtual ~ConsoleClass324();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    int* m_argv;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3[3];
    int m_val;
};
static inline ServerGameLogic* serverLogic() {
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    return flag ? gameLogic : 0;
}
void* ConsoleClass324::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_val = serverLogic()->getNextLevel();
        return &m_val;
    }
    if (m_argc == 1) {
        int v = *m_argv;
        m_active = 0;
        serverLogic()->setNextLevel(v);
        return 0;
    }
    return 0;
}
} } }
