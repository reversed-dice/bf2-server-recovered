// FUNCTION: BF2 0x796d10
#include <map>
#include <string>

namespace dice { namespace hfe { namespace ai {

class AITemplatePlugIn;

class AITemplatePlugInManager {
public:
    virtual ~AITemplatePlugInManager();
    std::string getWorkingFileAndPath(AITemplatePlugIn* plugin) const;

    char _pad[0x38];
    std::map<AITemplatePlugIn*, std::string> m_workingFiles;
};

std::string AITemplatePlugInManager::getWorkingFileAndPath(AITemplatePlugIn* plugin) const
{
    return m_workingFiles.find(plugin)->second;
}

} } }
