// FUNCTION: BF2 0x8b1720
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {
enum TargetChannel { TargetChannel_0 };
} } 
namespace dice { namespace hfe {
std::istream& operator>>(std::istream& is, ::dice::hfe::TargetChannel& v);
} } 

namespace dice { namespace hfe { namespace {

class ConsoleClass233 {
public:
    virtual ~ConsoleClass233();
    void setArgFromString(int index, const std::string& str);
    char _pad[0x30];
    ::dice::hfe::TargetChannel* m_arg1;
    std::string* m_arg2;
};

void ConsoleClass233::setArgFromString(int index, const std::string& str)
{
    if (index == 1) {
        static ::dice::hfe::TargetChannel arg;
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
