// FUNCTION: BF2 0x8abeb0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass69 {
public:
    char  _pad0[0x38];
    unsigned int* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass69::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(unsigned int*)0x10c5404;
    m_arg = (unsigned int*)0x10c5404;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass69_setArgFromString_int_std_string_constref (0x8abeb0)
