// FUNCTION: BF2 0x9de960
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass206 {
public:
    virtual ~ConsoleClass206();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    unsigned int* m_arg1;
    std::string* m_arg2;
    unsigned int* m_arg3;
};

void ConsoleClass206::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static unsigned int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static unsigned int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
}

} } } }
