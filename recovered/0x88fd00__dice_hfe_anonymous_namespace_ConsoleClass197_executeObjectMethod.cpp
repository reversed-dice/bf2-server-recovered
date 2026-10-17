// FUNCTION: BF2 0x88fd00
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
    char _pad[0x4b4];
    bool m_flag;
    bool getFlag() const { return m_flag; }
    void setFlag(bool v) { m_flag = v; }
};
extern Settings* settings;
extern ServerGameLogic* gameLogic;
namespace {
class ConsoleClass197 {
public:
    virtual ~ConsoleClass197();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    bool* m_arg;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3;
    bool m_result;
};
static inline ServerGameLogic* serverLogic() {
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    return flag ? gameLogic : 0;
}
void* ConsoleClass197::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_result = serverLogic()->getFlag();
        return &m_result;
    }
    if (m_argc == 1) {
        bool v = *m_arg;
        m_active = 0;
        serverLogic()->setFlag(v);
        return 0;
    }
    return 0;
}
} } }
