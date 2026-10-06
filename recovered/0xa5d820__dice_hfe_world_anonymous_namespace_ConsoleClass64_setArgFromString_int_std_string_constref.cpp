// FUNCTION: BF2 0xa5d820
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass64 {
public:
    virtual ~ConsoleClass64();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    float* m_arg1;
    float* m_arg2;
    float* m_arg3;
    float* m_arg4;
    float* m_arg5;
};

void ConsoleClass64::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg2 = &arg;
    }
    if (index == 3) {
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static float arg;
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
