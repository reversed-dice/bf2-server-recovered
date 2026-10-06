// FUNCTION: BF2 0x7559f0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace {

class ConsoleClass167 {
public:
    virtual ~ConsoleClass167();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    std::string* m_arg2;
    float* m_arg3;
    bool* m_arg4;
};

void ConsoleClass167::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static std::string arg;
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
        static float arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static bool arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
}

} } }
