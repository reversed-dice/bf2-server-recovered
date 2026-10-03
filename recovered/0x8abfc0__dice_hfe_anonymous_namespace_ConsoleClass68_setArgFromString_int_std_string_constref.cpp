// FUNCTION: BF2 0x8abfc0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe {

namespace {

class ConsoleClass68 {
public:
    char  _pad0[0x38];
    unsigned int* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass68::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(unsigned int*)0x10c5408;
    m_arg = (unsigned int*)0x10c5408;
}

}

} }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass68_setArgFromString_int_std_string_constref (0x8abfc0)
