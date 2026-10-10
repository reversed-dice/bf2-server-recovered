// FUNCTION: BF2 0xa98980
#include <string>

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

namespace dice { namespace hfe {

class Game {
public:
    V10(0) V10(1) V10(2) V10(3) V(40) V(41) V(42) V(43) V(44) V(45)
    virtual std::string getString(int u1, int u2);
};
extern Game* game;

namespace {

class ConsoleClass595 {
public:
    virtual ~ConsoleClass595();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    int* m_argv1;
    int* m_argv2;
    char pad2[0x108 - 0x48];
    char m_active;
    char pad3[7];
    std::string m_str;
};

void* ConsoleClass595::executeObjectMethod() {
    if (m_argc != 2) return 0;
    int u1 = *m_argv1;
    int u2 = *m_argv2;
    m_active = 1;
    m_str = game->getString(u1, u2);
    return &m_str;
}

} // anon
} }
