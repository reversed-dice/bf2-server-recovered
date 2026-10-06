// FUNCTION: BF2 0x881fa0
// BF2_FLAGS: --param inline-unit-growth=0
#include <sstream>
#include <string>

namespace dice { namespace hfe {
enum KitType { KitType_0 };
} } 
namespace dice { namespace hfe {
std::istream& operator>>(std::istream& is, ::dice::hfe::KitType& v);
} } 

namespace dice { namespace hfe { namespace {

class ConsoleClass179 {
public:
    virtual ~ConsoleClass179();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    int* m_arg1;
    ::dice::hfe::KitType* m_arg2;
    std::string* m_arg3;
    std::string* m_arg4;
};

void ConsoleClass179::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static int arg;
        std::istringstream ss(str);
        ss >> arg;
        m_arg1 = &arg;
    }
    if (index == 2) {
        static ::dice::hfe::KitType arg;
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
}

} } }
