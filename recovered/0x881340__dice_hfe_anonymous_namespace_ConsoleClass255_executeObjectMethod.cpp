// FUNCTION: BF2 0x881340
#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

namespace dice { namespace hfe {
namespace world {

class PlayerManager {
public:
    V10(0) V10(1) V10(2) V(30) V(31)
    virtual void* getLocalPlayer(); // slot 32 = 0x100
};
extern PlayerManager* playerManager;

class Player {
public:
    V10(0) V10(1) V(20) V(21) V(22) V(23) V(24) V(25)
    virtual void setSomething(unsigned char val); // slot 26 = 0xd0
    virtual unsigned char getSomething(); // slot 27 = 0xd8
};

} // world

namespace {

class ConsoleClass255 {
public:
    virtual ~ConsoleClass255();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    unsigned char* m_argv;
    char pad2[0x108 - 0x40];
    bool m_flag;
    char pad3;
    unsigned char m_val;
};

void* ConsoleClass255::executeObjectMethod() {
    if (m_argc == 0) {
        m_flag = 1;
        world::Player* p = 0;
        if (world::playerManager)
            p = (world::Player*)world::playerManager->getLocalPlayer();
        m_val = p->getSomething();
        return &m_val;
    }
    if (m_argc == 1) {
        unsigned char val = *m_argv;
        m_flag = 0;
        world::Player* p = 0;
        if (world::playerManager)
            p = (world::Player*)world::playerManager->getLocalPlayer();
        p->setSomething(val);
    }
    return 0;
}

} // anon
} }
