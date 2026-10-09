// FUNCTION: BF2 0x794800
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>

namespace dice {
namespace hfe {
namespace ai {

class AITemplate {
public:
    void createWreckTemplate();
};

struct TemplateHolder {
    char _pad[8];
    AITemplate* m_template;
};

class AITemplateManager {
public:
    char _pad0[0x8];
    std::map<std::string, TemplateHolder*> m_templates;

    void createWreckTemplates();
};

void AITemplateManager::createWreckTemplates()
{
    for (std::map<std::string, TemplateHolder*>::iterator it = m_templates.begin(); it != m_templates.end(); ++it) {
        if (it->second != 0) {
            it->second->m_template->createWreckTemplate();
        }
    }
}

} // namespace ai
} // namespace hfe
} // namespace dice
