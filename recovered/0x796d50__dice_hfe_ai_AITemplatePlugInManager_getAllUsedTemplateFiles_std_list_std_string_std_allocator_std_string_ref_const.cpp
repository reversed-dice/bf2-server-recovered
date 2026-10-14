// FUNCTION: BF2 0x796d50
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>
#include <map>
#include <set>

namespace dice { namespace hfe { namespace ai {

class AITemplatePlugInManager {
public:
    char _pad[0x40];
    std::map<std::string, std::string> m_files;
    void getAllUsedTemplateFiles(std::list<std::string>& out) const;
};

void AITemplatePlugInManager::getAllUsedTemplateFiles(std::list<std::string>& out) const
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
