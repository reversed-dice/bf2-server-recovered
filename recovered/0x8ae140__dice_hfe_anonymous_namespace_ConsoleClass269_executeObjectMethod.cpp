// FUNCTION: BF2 0x8ae140
#include <string>

namespace dice { namespace hfe {
class GameClient {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8();
    virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14();
    virtual void d15(); virtual void d16();
    virtual void d17();
    virtual void disconnect();
};

class Game {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual GameClient* queryInterface(unsigned int, void*);
};
extern Game* game;
extern unsigned int IID_IGameClient;
}}

namespace dice { namespace hfe {

struct ConsoleClass269 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    void* pad0();
    void* pad1();
    void* pad2();
    void* pad3();
    void* pad4();    void* executeObjectMethod();
};
void* ConsoleClass269::pad0() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    c->disconnect();
    return 0;
}
void* ConsoleClass269::pad1() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    c->disconnect();
    return 0;
}
void* ConsoleClass269::pad2() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    c->disconnect();
    return 0;
}
void* ConsoleClass269::pad3() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    c->disconnect();
    return 0;
}
void* ConsoleClass269::pad4() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    c->disconnect();
    return 0;
}
void* ConsoleClass269::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 0;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    c->disconnect();
    return 0;
}
}
}
