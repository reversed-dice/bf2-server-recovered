// FUNCTION: BF2 0x84f850
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

namespace {

class ConsoleClass38 {
public:
    char  _pad0[0x38];
    float* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass38::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(float*)0x10b3fd0;
    m_arg = (float*)0x10b3fd0;
}

}

} } }
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass38_setArgFromString_int_std_string_constref (0x84f850)
