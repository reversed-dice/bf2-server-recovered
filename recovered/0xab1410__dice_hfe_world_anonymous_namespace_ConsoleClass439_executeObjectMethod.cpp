// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xab1410
#include <string>
namespace dice { namespace hfe { namespace world {
class PlayerManager {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    virtual void s26();
    virtual void s27();
    virtual void s28();
    virtual void s29();
    virtual void s30();
    virtual bool loadPlayers(const std::string& file);
};
extern PlayerManager* playerManager;
namespace {
class ConsoleClass439 {
public:
    virtual ~ConsoleClass439();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    char pad1[4];
    std::string* m_arg;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3;
    bool m_result;
};
void* ConsoleClass439::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_result = playerManager->loadPlayers(std::string("level/players.con"));
        return &m_result;
    }
    if (m_argc == 1) {
        std::string a(*m_arg);
        m_active = 1;
        m_result = playerManager->loadPlayers(a);
        return &m_result;
    }
    return 0;
}
}
} } }
