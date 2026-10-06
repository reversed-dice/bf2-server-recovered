// FUNCTION: BF2 0x9016d0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world { namespace {

class ConsoleClass976 {
public:
    virtual ~ConsoleClass976();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    int* m_arg2;
    float* m_arg3;
    float* m_arg4;
};

void ConsoleClass976::setArgFromString(int index, const std::string& str)
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
}

} } } }
