// FUNCTION: BF2 0x8b09b0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace {

class ConsoleClass278 {
public:
    virtual ~ConsoleClass278();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    std::string* m_arg2;
};

void ConsoleClass278::setArgFromString(int index, const std::string& str)
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
