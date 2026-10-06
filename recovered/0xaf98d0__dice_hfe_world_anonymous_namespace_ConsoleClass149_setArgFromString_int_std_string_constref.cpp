// FUNCTION: BF2 0xaf98d0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass149 {
public:
    virtual ~ConsoleClass149();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    int* m_arg2;
    int* m_arg3;
};

void ConsoleClass149::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
}

} } } }
