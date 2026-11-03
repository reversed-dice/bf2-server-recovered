// FUNCTION: BF2 0x4676e0
// from api 95.83%
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ReservedSlots {
public:
    char _pad[0x8];
    std::vector<std::string> m_nicks;

    std::string list();
};

std::string ReservedSlots::list() {
    std::vector<std::string>::const_iterator it = m_nicks.begin();
    std::string res;
    for (; it != m_nicks.end(); ++it) {
        res.append(*it);
        res.append("\n", 1);
    }
    return res;
}

} }
