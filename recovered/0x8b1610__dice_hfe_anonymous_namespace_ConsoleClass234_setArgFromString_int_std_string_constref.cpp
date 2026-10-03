// FUNCTION: BF2 0x8b1610
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass234 {
public:
    char  _pad0[0x38];
    int* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass234::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(int*)0x10c6a48;
    m_arg = (int*)0x10c6a48;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass234_setArgFromString_int_std_string_constref (0x8b1610)
