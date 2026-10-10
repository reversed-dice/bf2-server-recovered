// FUNCTION: BF2 0x88e6d0
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
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10();
    virtual void slot11(); // 0x58 / 8 = 11
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {
class ConsoleClass322 {
public:

    char _pad[0x30];
    int m_argc;
    char _pad2[0x108 - 0x34];
    char m_active;
    void* pad_0();
    void* pad_1();
    void* pad_2();
    void* pad_3();
    void* pad_4();
    void* pad_5();
    void* pad_6();
    void* executeObjectMethod();
};

void* ConsoleClass322::pad_0() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::pad_1() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::pad_2() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::pad_3() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::pad_4() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::pad_5() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::pad_6() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
void* ConsoleClass322::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_active = 0;
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    dice::hfe::ServerGameLogic* gl = flag ? dice::hfe::gameLogic : 0;
    gl->slot11();
    return 0;
}
}

} }
