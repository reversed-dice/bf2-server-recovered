// FUNCTION: BF2 0x797c40
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
// REVERSED_FUNCTION: dice_hfe_ai_KitTemplateManager_getAllUsedTemplates_std_list_dice_hfe_ai_KitTemplateptr_std_allocator_dice_hfe_ai_KitTemplateptr_ref_const (0x797c40)
