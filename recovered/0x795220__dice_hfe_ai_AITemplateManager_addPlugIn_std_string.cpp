// FUNCTION: BF2 0x795220
#include <string>

namespace dice { namespace hfe { namespace ai {

class AITemplatePlugIn;

class AITemplate {
public:
    void addPlugIn(AITemplatePlugIn* plugin);
};

class TemplateHolder {
public:
    char _pad[0x8];
    AITemplate* m_template;
};

class AITemplateManager {
public:
    char _pad[0x38];
    TemplateHolder* m_holder;
    std::string addPlugIn(std::string templateName);
};

class AITemplatePlugInManager {
public:
    static AITemplatePlugInManager* m_instance;
    AITemplatePlugIn* getTemplatePlugIn(std::string name);
};

}}}

std::string dice::hfe::ai::AITemplateManager::addPlugIn(std::string templateName)
{
    if (this->m_holder == 0) {
        return std::string("Error: No active template");
    }
    dice::hfe::ai::AITemplatePlugIn* plugin =
        dice::hfe::ai::AITemplatePlugInManager::m_instance->getTemplatePlugIn(std::string(templateName));
    if (plugin == 0) {
        return "AITemplatePlugIn '" + templateName + "' doesn't exist";
    }
    this->m_holder->m_template->addPlugIn(plugin);
    return "Successfully added plugin " + templateName;
}
