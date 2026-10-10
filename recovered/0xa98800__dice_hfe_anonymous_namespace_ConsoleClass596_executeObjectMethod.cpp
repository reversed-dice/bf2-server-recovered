// FUNCTION: BF2 0xa98800
#include <string>

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

namespace dice { namespace hfe {

class Game {
public:
    V10(0) V10(1) V10(2) V10(3) V(40) V(41) V(42) V(43) V(44) V(45) V(46)
    virtual std::string getString(int u);
};
extern Game* game;

namespace {

class ConsoleClass596 {
public:
    virtual ~ConsoleClass596();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    int* m_argv;
    char pad2[0x108 - 0x40];
    char m_active;
    char pad3[7];
    std::string m_str;
};

void* ConsoleClass596::executeObjectMethod() {
    if (m_argc != 1) return 0;
    int u = *m_argv;
    m_active = 1;
    m_str = game->getString(u);
    return &m_str;
}

} // anon
} }
