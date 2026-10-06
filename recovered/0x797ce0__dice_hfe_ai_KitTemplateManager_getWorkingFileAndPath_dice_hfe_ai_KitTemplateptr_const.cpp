// FUNCTION: BF2 0x797ce0
#include <map>
#include <string>

namespace dice { namespace hfe { namespace ai {

class KitTemplate;

class KitTemplateManager {
public:
    virtual ~KitTemplateManager();
    std::string getWorkingFileAndPath(KitTemplate* kit) const;

    char _pad[0x38];
    std::map<KitTemplate*, std::string> m_workingFiles;
};

std::string KitTemplateManager::getWorkingFileAndPath(KitTemplate* kit) const
{
    return m_workingFiles.find(kit)->second;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_KitTemplateManager_getWorkingFileAndPath_dice_hfe_ai_KitTemplateptr_const (0x797ce0)
