// FUNCTION: BF2 0x84f630
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

namespace {

class ConsoleClass40 {
public:
    char  _pad0[0x38];
    bool* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass40::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(bool*)0x10b3fcc;
    m_arg = (bool*)0x10b3fcc;
}

}

} } }
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass40_setArgFromString_int_std_string_constref (0x84f630)
