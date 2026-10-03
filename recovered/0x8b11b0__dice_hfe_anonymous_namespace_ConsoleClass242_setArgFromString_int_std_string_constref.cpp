// FUNCTION: BF2 0x8b11b0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass242 {
public:
    char  _pad0[0x38];
    int* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass242::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(int*)0x10c6a2c;
    m_arg = (int*)0x10c6a2c;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass242_setArgFromString_int_std_string_constref (0x8b11b0)
