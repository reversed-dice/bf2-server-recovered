// FUNCTION: BF2 0xa86850
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace {

class ConsoleClass763 {
public:
    virtual ~ConsoleClass763();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    int* m_arg1;
    std::string* m_arg2;
    std::string* m_arg3;
    int* m_arg4;
};

void ConsoleClass763::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static int arg;
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
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
}

} } }
