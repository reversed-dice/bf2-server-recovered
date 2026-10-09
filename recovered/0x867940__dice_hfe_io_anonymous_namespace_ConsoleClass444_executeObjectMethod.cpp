// FUNCTION: BF2 0x867940
#include <string>

namespace dice {
namespace hfe {
namespace io {

std::string Console_getEnumName(std::string const&, std::string const&, int);

class ConsoleClass444 {
public:
    void* executeObjectMethod();
    char _pad0[0x30];
    int m_type;
    std::string* m_a;
    std::string* m_b;
    int* m_c;
    char _pad1[0xb8];
    char m_hasArg;
    char _pad2[7];
    std::string m_result;
};

void* ConsoleClass444::executeObjectMethod() {
    if (m_type == 3) {
        std::string a(*m_a);
        std::string b(*m_b);
        int n = *m_c;
        m_hasArg = 1;
        m_result.assign(Console_getEnumName(a, b, n));
        return &m_result;
    }
    return 0;
}

} } }
