// FUNCTION: BF2 0x8add80
#include <string>

namespace dice { namespace hfe {
class GameClient {
public:
    virtual void d0(); virtual void d1(); virtual void d2();
    virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8();
    virtual void d9();
    virtual bool isConnected();
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

struct ConsoleClass232 {
    char _p0[0x30];
    int m_argc;
    char _p1[0x108 - 0x34];
    unsigned char m_hasResult;
    char _p2[1];
    bool m_result;
    void* executeObjectMethod();
};
void* ConsoleClass232::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_hasResult = 1;
    GameClient* c = 0;
    if (game != 0) {
        c = game->queryInterface(IID_IGameClient, 0);
    }
    m_result = c->isConnected();
    return &m_result;
}
}
}
