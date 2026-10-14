// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x7981a0
#include <map>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace ai {

class IKitTemplate;
class KitTemplate;

class IKitTemplateManager {
public:
    IKitTemplateManager();
    virtual ~IKitTemplateManager();
};

class KitTemplateManager : public IKitTemplateManager {
public:
    static KitTemplateManager* m_instance;
    std::map<std::string, KitTemplate*> m_kits;
    std::map<std::string, KitTemplate*>::iterator m_it;
    std::map<KitTemplate*, std::string> m_names;
    std::vector<IKitTemplate*> m_templates;
    KitTemplateManager();
    virtual ~KitTemplateManager();
};

KitTemplateManager::KitTemplateManager()
    : m_it(m_kits.end())
{
    m_instance = this;
    m_templates.resize(13);
}

} } }
