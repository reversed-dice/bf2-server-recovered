// FUNCTION: BF2 0x84efc0
// BF2_FLAGS: -fno-strict-aliasing
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

class PredictionMode;

std::istream& operator>>(std::istream& is, PredictionMode& v);

namespace {

class ConsoleClass32 {
public:
    char            _pad0[0x38];
    PredictionMode* m_arg;          // +0x38
    void setArgFromString(int idx, const std::string& s);
};

void ConsoleClass32::setArgFromString(int idx, const std::string& s)
{
    if (idx != 1) {
        return;
    }
    std::istringstream is(s, std::ios_base::in);
    is >> *(PredictionMode*)0x10b3fc8;
    m_arg = (PredictionMode*)0x10b3fc8;
}

}

} } }
