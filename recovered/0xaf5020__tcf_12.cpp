// FUNCTION: BF2 0xaf5020
#include <string>

namespace dice { namespace hfe { namespace world {

namespace {

struct Base {
    virtual ~Base() {}
};

struct ConsoleObject143 : Base {
    char _pad[0x110 - 8];
    std::string m_s;
    virtual ~ConsoleObject143() {}
};

ConsoleObject143 consoleObject143;

}

} } }
