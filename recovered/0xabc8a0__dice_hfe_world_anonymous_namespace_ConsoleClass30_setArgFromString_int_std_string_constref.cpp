// FUNCTION: BF2 0xabc8a0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world {

namespace {

class ConsoleClass30 {
public:
    char  _pad0[0x38];
    bool* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass30::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(bool*)0x1133e78;
    m_arg = (bool*)0x1133e78;
}

}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass30_setArgFromString_int_std_string_constref (0xabc8a0)
