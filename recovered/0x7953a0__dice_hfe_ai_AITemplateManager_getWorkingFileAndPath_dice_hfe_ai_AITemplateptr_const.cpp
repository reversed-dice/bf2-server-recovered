// FUNCTION: BF2 0x7953a0
#include <string>
#include <map>

namespace dice { namespace hfe { namespace ai {

class AITemplate {};

class AITemplateManager {
public:
    char _pad[0x48];
    std::map<AITemplate*, std::string> m_files;

    std::string getWorkingFileAndPath(AITemplate* tmpl) const;
};

std::string AITemplateManager::getWorkingFileAndPath(AITemplate* tmpl) const {
    std::map<AITemplate*, std::string>::const_iterator it = m_files.find(tmpl);
    return it->second;
}

} } }
