// FUNCTION: BF2 0x8655c0
#include <string>
namespace dice { namespace hfe { namespace io {

std::string Console_getActiveMethods(const std::string& name);

namespace {

class ConsoleClass454 {
public:
    virtual ~ConsoleClass454();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3[0x110 - 0x109];
    std::string m_result;
};

void* ConsoleClass454::executeObjectMethod()
{
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = true;
        m_result = Console_getActiveMethods(a);
        return &m_result;
    }
    return 0;
}

}
} } }
