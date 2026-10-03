// FUNCTION: BF2 0x8ab630
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass77 {
public:
    char  _pad0[0x38];
    bool* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass77::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(bool*)0x10c53f5;
    m_arg = (bool*)0x10c53f5;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass77_setArgFromString_int_std_string_constref (0x8ab630)
