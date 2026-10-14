// FUNCTION: BF2 0x7937c0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>
#include <map>
#include <set>

namespace dice { namespace hfe { namespace ai {

class WeaponTemplateManager {
public:
    char _pad[0x48];
    std::map<std::string, std::string> m_files;
    void getAllUsedTemplateFiles(std::list<std::string>& out) const;
};

void WeaponTemplateManager::getAllUsedTemplateFiles(std::list<std::string>& out) const
{
    std::set<std::string> files;
    for (std::map<std::string, std::string>::const_iterator it = m_files.begin(); it != m_files.end(); ++it) {
        files.insert(it->second);
    }
    for (std::set<std::string>::const_iterator it = files.begin(); it != files.end(); ++it) {
        out.push_back(*it);
    }
}

} } }
