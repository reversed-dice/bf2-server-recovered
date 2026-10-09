// FUNCTION: BF2 0x6d04c0
#include <set>
#include <string>
#include <vector>

namespace dice { namespace anim {

class TriggerManager {
public:
    std::set<std::string> m_triggers;
    void getTriggers(std::vector<std::string>& out) const;
};

void TriggerManager::getTriggers(std::vector<std::string>& out) const {
    for (std::set<std::string>::iterator it = m_triggers.begin(); it != m_triggers.end(); ++it) {
        out.push_back(*it);
    }
}

}}
// REVERSED_FUNCTION: dice_anim_TriggerManager_getTriggers_std_vector_std_string_std_allocator_std_string_const (0x6d04c0)
