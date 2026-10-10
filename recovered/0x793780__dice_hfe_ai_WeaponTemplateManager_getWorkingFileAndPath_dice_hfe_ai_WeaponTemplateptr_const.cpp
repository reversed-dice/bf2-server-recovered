// FUNCTION: BF2 0x793780
#include <string>
#include <map>

namespace dice { namespace hfe { namespace ai {

class WeaponTemplate {};

class WeaponTemplateManager {
public:
    char _pad[0x48];
    std::map<WeaponTemplate*, std::string> m_files;

    std::string getWorkingFileAndPath(WeaponTemplate* tmpl) const;
};

std::string WeaponTemplateManager::getWorkingFileAndPath(WeaponTemplate* tmpl) const {
    std::map<WeaponTemplate*, std::string>::const_iterator it = m_files.find(tmpl);
    return it->second;
}

} } }
