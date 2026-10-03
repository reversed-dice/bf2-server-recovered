// FUNCTION: BF2 0xabc2f0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace world {

namespace {

class ConsoleClass31 {
public:
    char  _pad0[0x38];
    int* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass31::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(int*)0x1133e74;
    m_arg = (int*)0x1133e74;
}

}

} } }
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass31_setArgFromString_int_std_string_constref (0xabc2f0)
