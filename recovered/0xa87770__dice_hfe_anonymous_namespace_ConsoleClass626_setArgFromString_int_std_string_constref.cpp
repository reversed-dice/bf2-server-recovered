// FUNCTION: BF2 0xa87770
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace {

class ConsoleClass626 {
public:
    virtual ~ConsoleClass626();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    std::string* m_arg2;
    std::string* m_arg3;
    std::string* m_arg4;
    std::string* m_arg5;
    std::string* m_arg6;
    std::string* m_arg7;
    std::string* m_arg8;
    std::string* m_arg9;
};

void ConsoleClass626::setArgFromString(int index, const std::string& str)
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
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
    if (index == 4) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg4 = &arg;
    }
    if (index == 5) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg5 = &arg;
    }
    if (index == 6) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg6 = &arg;
    }
    if (index == 7) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg7 = &arg;
    }
    if (index == 8) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg8 = &arg;
    }
    if (index == 9) {
        static std::string arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg9 = &arg;
    }
}

} } }
