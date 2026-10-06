// FUNCTION: BF2 0x85f8c0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io { namespace {

class ConsoleClass444 {
public:
    virtual ~ConsoleClass444();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    std::string* m_arg1;
    std::string* m_arg2;
    int* m_arg3;
};

void ConsoleClass444::setArgFromString(int index, const std::string& str)
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
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg3 = &arg;
    }
}

} } } }
