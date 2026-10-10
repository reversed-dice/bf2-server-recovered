// FUNCTION: BF2 0x793390
#include <list>
#include <set>

namespace dice { namespace hfe { namespace ai {

class WeaponTemplate {};

class WeaponTemplateManager {
public:
    char _pad[0x48];
    std::set<WeaponTemplate*> m_usedTemplates; // set at 0x48. set header is 0x30 bytes: node count at 0x68, begin at 0x60, end at 0x50

    void getAllUsedTemplates(std::list<WeaponTemplate*>& out) const;
};

void WeaponTemplateManager::getAllUsedTemplates(std::list<WeaponTemplate*>& out) const {
    for (std::set<WeaponTemplate*>::const_iterator it = m_usedTemplates.begin(); it != m_usedTemplates.end(); ++it) {
        out.push_back(*it);
    }
}

} } }
