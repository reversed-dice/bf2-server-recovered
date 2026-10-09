// FUNCTION: BF2 0x7948b0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <set>

namespace dice {
namespace hfe {
namespace ai {

class AITemplate;

class AITemplateManager {
public:
    char _pad0[0x48];
    std::set<AITemplate*> m_templates;

    void getAllUsedTemplates(std::list<AITemplate*>& outList) const;
};

void AITemplateManager::getAllUsedTemplates(std::list<AITemplate*>& outList) const
{
    for (std::set<AITemplate*>::const_iterator it = m_templates.begin(); it != m_templates.end(); ++it) {
        outList.push_back(*it);
    }
}

} // namespace ai
} // namespace hfe
} // namespace dice
