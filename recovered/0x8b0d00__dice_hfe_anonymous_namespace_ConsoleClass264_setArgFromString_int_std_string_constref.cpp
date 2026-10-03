// FUNCTION: BF2 0x8b0d00
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass264 {
public:
    char  _pad0[0x38];
    std::string* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass264::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    static std::string arg;
    std::istringstream is(s, std::ios_base::in);
    is >> arg;
    m_arg = &arg;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass264_setArgFromString_int_std_string_constref (0x8b0d00)
