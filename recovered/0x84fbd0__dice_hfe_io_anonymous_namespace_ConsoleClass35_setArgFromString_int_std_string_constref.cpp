// FUNCTION: BF2 0x84fbd0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

namespace {

class ConsoleClass35 {
public:
    char  _pad0[0x38];
    std::string* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass35::setArgFromString(int idx, const std::string& s)
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

} } }
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass35_setArgFromString_int_std_string_constref (0x84fbd0)
