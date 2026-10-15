// FUNCTION: BF2 0x6b6dc0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe {
void setLowerCase(std::string& s);
}}

namespace dice { namespace anim {

struct BundleEvent {
    float m_startTime;
    std::string m_text;
};

class Bundle {
public:
    char _pad0[0x10];
    std::list<BundleEvent> m_events;

    float getEventStartTime(std::string const& name);
};

float Bundle::getEventStartTime(std::string const& name) {
    std::string tmp(name);
    dice::hfe::setLowerCase(tmp);
    for (std::list<BundleEvent>::iterator it = m_events.begin(); it != m_events.end(); ++it) {
        if (it->m_text == tmp)
            return it->m_startTime;
    }
    return -1.0f;
}

}}
