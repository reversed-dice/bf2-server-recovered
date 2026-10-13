// FUNCTION: BF2 0x6d0ce0
// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
#include <sstream>
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class Trigger {
public:
    ~Trigger();
    char m_pad[0x40];
    unsigned char m_flag;
};

class TriggerManager {
public:
    ~TriggerManager();
    std::map<std::string, Trigger*, dice::hfe::NoCaseStringCompare> m_triggers;
    std::string listTriggers() const;
    void listTriggers(Trigger* t, std::stringstream& ss, int level) const;
};

std::string TriggerManager::listTriggers() const {
    std::stringstream ss;
    std::map<std::string, Trigger*, dice::hfe::NoCaseStringCompare>::const_iterator it = m_triggers.begin();
    if (it != m_triggers.end()) {
        do {
            Trigger* t = it->second;
            if (!t->m_flag)
                listTriggers(t, ss, 0);
            ++it;
        } while (it != m_triggers.end());
    }
    return ss.str();
}

} }
