// FUNCTION: BF2 0xa91e80
// Target: 0x991e80 / 0xa91e80 dice::hfe::(anonymous namespace)::ConsoleClass...::executeObjectMethod()
// Compiler: gcc-4.0
// Flags: -O2

#include <string>

namespace dice { namespace hfe {
extern std::string* mapList;

namespace {

class ConsoleClass {
public:
    virtual ~ConsoleClass();
    virtual void* executeObjectMethod();

    char _pad[0x28];
    int m_argc;
    char _pad2[4];
    std::string* m_argv;
    char _pad3[0xc8];
    char m_active;
    char _pad4[7];
    std::string m_val;
};

void* ConsoleClass::executeObjectMethod() {
    if (m_argc == 0) {
        m_active = 1;
        m_val.assign(*dice::hfe::mapList);
        return &m_val;
    }
    if (m_argc == 1) {
        std::string s(*m_argv);
        m_active = 0;
        dice::hfe::mapList->assign(s);
        return 0;
    }
    return 0;
}

} } }
