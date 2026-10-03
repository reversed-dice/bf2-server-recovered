// FUNCTION: BF2 0x84f960
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

class PredictionMode;

std::istream& operator>>(std::istream& is, PredictionMode& v);

namespace {

class ConsoleClass37 {
public:
    char  _pad0[0x38];
    PredictionMode* m_arg;
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass37::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(PredictionMode*)0x10b3fd4;
    m_arg = (PredictionMode*)0x10b3fd4;
}

}

} } }
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass37_setArgFromString_int_std_string_constref (0x84f960)
