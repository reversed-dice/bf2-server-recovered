// FUNCTION: BF2 0xa9a3c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe {

class GameClient;
class Game {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual void* queryInterface(unsigned int iid);
};

struct ServerSettings {
    char _p0[0x118];
    int m_coopBotCount;
    char _p1[0x145 - 0x11c];
    char m_useCoopBots;
};

extern ServerSettings* serverSettings;
extern Game* game;
extern unsigned int IID_IGameClient;
extern "C" unsigned int f_4688b0(long param_1);

class ConsoleObject {
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
    virtual void s31();
    virtual void s32();
    virtual void s33();
    virtual void s34();
    virtual void s35();
    virtual void s36();
    virtual void s37();
    virtual void s38();
    virtual void s39();
    virtual void s40();
    virtual void s41();
    virtual void s42();
    virtual void s43();
    virtual void s44();
    virtual void slot45(int);
    virtual void s46();
    virtual void s47();
    virtual void s48();
    virtual void s49();
    virtual void s50();
    virtual void s51();
    virtual void s52();
    virtual void s53();
    virtual void s54();
    virtual void s55();
    virtual void s56();
    virtual void s57();
    virtual void s58();
    virtual void s59();
    virtual void s60();
    virtual void slot61(int);
};

class ClassManager {
public:
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual void c10();
    virtual void c11();
    virtual void c12();
    virtual void c13();
    virtual void c14();
    virtual void c15();
    virtual void c16();
    virtual void c17();
    virtual void c18();
    virtual ConsoleObject* find(std::string name);
};

extern ClassManager* classManager;

struct ConsoleClass715 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[3];
    int m_result;
    void* executeObjectMethod();
};

} }

namespace dice { namespace hfe {
void* ConsoleClass715::executeObjectMethod() {
    if (m_argc == 0) {
        m_hasResult = 1;
        ServerSettings* ss;
        if (game != 0) {
            if (game->queryInterface(IID_IGameClient) != 0) goto nosettings;
        }
        ss = serverSettings;
        goto usesettings;
    nosettings:
        ss = 0;
    usesettings:
        m_result = (int)f_4688b0((long)ss);
        return &m_result;
    }
    if (m_argc != 1) return 0;
    int v = **(int**)((char*)this + 0x38);
    m_hasResult = 0;
    ServerSettings* ss;
    if (game != 0) {
        if (game->queryInterface(IID_IGameClient) != 0) goto nosettings2;
    }
    ss = serverSettings;
    goto usesettings2;
nosettings2:
    ss = 0;
usesettings2:
    if (v < 1) v = 1;
    else if (v > 0x30) v = 0x30;
    ss->m_coopBotCount = v;
    ConsoleObject* o = classManager->find(std::string("GeneralSettings"));
    if (o == 0) return 0;
    o->slot45(ss->m_coopBotCount);
    o->slot61(ss->m_coopBotCount);
    return 0;
}
} }
