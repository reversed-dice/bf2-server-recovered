// FUNCTION: BF2 0x467680
#include <ostream>
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ReservedSlots {
public:
    char _pad[0x8];
    std::vector<std::string> m_nicks;

    void save(std::ostream& os);
};

void ReservedSlots::save(std::ostream& os) {
    for (std::vector<std::string>::const_iterator it = m_nicks.begin(); it != m_nicks.end(); ++it) {
        os << "reservedSlots.addNick \"" << *it << '"' << std::endl;
    }
}

} }
