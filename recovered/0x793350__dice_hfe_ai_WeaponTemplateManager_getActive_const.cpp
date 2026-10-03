// FUNCTION: BF2 0x793350
#include <string>
namespace dice { namespace hfe { namespace ai {

class WeaponTemplate;

class WeaponTemplateManager {
public:
    std::string getActive() const;
    char _pad0[0x38];
    const std::string* m_active;
};

std::string WeaponTemplateManager::getActive() const
{
    if (m_active)
        return *m_active;
    return "";
}

} } }
