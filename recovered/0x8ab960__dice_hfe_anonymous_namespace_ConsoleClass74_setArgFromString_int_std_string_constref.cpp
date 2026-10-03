// FUNCTION: BF2 0x8ab960
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass74 {
public:
    char  _pad0[0x38];
    float* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass74::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(float*)0x10c53f8;
    m_arg = (float*)0x10c53f8;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass74_setArgFromString_int_std_string_constref (0x8ab960)
