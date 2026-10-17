// FUNCTION: BF2 0x890180
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
    void createObject(std::string name);
};
extern Settings* settings;
extern ServerGameLogic* gameLogic;
namespace {
class ConsoleClass195 {
public:
    virtual ~ConsoleClass195();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    std::string* m_argv;
    char pad2[0x108 - 0x40];
    char m_active;
};
static inline ServerGameLogic* serverLogic() {
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    return flag ? gameLogic : 0;
}
void* ConsoleClass195::executeObjectMethod() {
    if (m_argc != 1) return 0;
    std::string name(*m_argv);
    m_active = 0;
    serverLogic()->createObject(name);
    return 0;
}
} } }
