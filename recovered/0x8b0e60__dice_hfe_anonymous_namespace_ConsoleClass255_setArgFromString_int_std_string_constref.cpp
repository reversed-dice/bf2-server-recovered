// FUNCTION: BF2 0x8b0e60
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace {

class ConsoleClass255 {
public:
    virtual ~ConsoleClass255();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    std::string* m_arg2;
};

void ConsoleClass255::setArgFromString(int index, const std::string& str)
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
}

} } }
