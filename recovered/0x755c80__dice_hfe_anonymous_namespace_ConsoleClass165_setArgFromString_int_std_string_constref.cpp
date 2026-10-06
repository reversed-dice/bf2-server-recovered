// FUNCTION: BF2 0x755c80
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace {

class ConsoleClass165 {
public:
    virtual ~ConsoleClass165();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    int* m_arg1;
    std::string* m_arg2;
    int* m_arg3;
};

void ConsoleClass165::setArgFromString(int index, const std::string& str)
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
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
}

} } }
