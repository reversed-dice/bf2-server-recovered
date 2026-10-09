// FUNCTION: BF2 0x795e70
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <set>

namespace dice {
namespace hfe {
namespace ai {

class AITemplatePlugIn;

class AITemplatePlugInManager {
public:
    char _pad0[0x40];
    std::set<AITemplatePlugIn*> m_plugins;

    void getAllUsedTemplates(std::list<AITemplatePlugIn*>& outList) const;
};

void AITemplatePlugInManager::getAllUsedTemplates(std::list<AITemplatePlugIn*>& outList) const
{
    for (std::set<AITemplatePlugIn*>::const_iterator it = m_plugins.begin(); it != m_plugins.end(); ++it) {
        outList.push_back(*it);
    }
}

} // namespace ai
} // namespace hfe
} // namespace dice
