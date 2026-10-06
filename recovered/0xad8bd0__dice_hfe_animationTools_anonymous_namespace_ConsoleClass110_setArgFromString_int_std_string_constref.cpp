// FUNCTION: BF2 0xad8bd0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace animationTools { namespace {

class ConsoleClass110 {
public:
    virtual ~ConsoleClass110();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    int* m_arg1;
    int* m_arg2;
    int* m_arg3;
    int* m_arg4;
    float* m_arg5;
};

void ConsoleClass110::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static int arg;
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
    if (index == 4) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
    if (index == 5) {
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg5 = &arg;
    }
}

} } } }
