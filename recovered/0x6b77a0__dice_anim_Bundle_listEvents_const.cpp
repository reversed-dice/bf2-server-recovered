// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x6b77a0
#include <sstream>
#include <string>
#include <list>

namespace dice { namespace anim {

class Bundle {
public:
    struct BundleEvent {
        char _pad[0x8];
        std::string m_text;
    };

    char _pad[0x10];
    std::list<BundleEvent> m_events;
    std::string listEvents() const;
};

std::string Bundle::listEvents() const {
    std::stringstream ss;
    for (std::list<BundleEvent>::const_iterator it = m_events.begin(); it != m_events.end(); ++it) {
        ss << it->m_text << "\n";
    }
    return ss.str();
}

} }
