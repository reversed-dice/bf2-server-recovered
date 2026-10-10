// FUNCTION: BF2 0x888a50
// Target: 0x888a50 dice::hfe::(anonymous namespace)::ConsoleClass167::executeObjectMethod()
// Compiler: gcc-4.0
// Flags: -O2

#include <string>

namespace dice { namespace hfe {
extern void* gameLogic;

namespace {

class ConsoleClass167 {
public:
    virtual ~ConsoleClass167();
    virtual void* executeObjectMethod();

    char _pad[0x28];
    int m_argc;
    char _pad2[4];
    std::string* m_argv;
    char _pad3[0xc8];
    char m_active;
    int m_val;
};

void* ConsoleClass167::executeObjectMethod() {
    if (m_argc != 1) {
        return 0;
    }
    std::string a(*m_argv);
    m_active = 0;
    void* gl = dice::hfe::gameLogic;
    void (*fn)(void*, std::string) = (void (*)(void*, std::string))(*(void***)gl)[0x548 / 8];
    fn(gl, a);
    return 0;
}

} } }
