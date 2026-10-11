// FUNCTION: BF2 0x47ab30
#include <string>
#include <map>

namespace dice { namespace hfe { namespace world {

class IObjectTemplate;

class ObjectTemplateManager {
public:
    IObjectTemplate const* load(std::string const& name);
};

extern ObjectTemplateManager* objectTemplateManager;

} } }

namespace dice { namespace hfe {

class GameLogic {
public:
    virtual ~GameLogic();
    char _pad0[0x18 - 8];
    std::map<int, std::string> m_soldierSkins;                        // +0x18
    std::map<int, std::string> m_kitTemplateStrings;                  // +0x48
    std::map<int, world::IObjectTemplate const*> m_kitTemplates;      // +0x78

    world::IObjectTemplate const* getKitTemplate(int team, int kit);
};

world::IObjectTemplate const* GameLogic::getKitTemplate(int team, int kit)
{
    int key = (team << 8) + kit;
    std::map<int, world::IObjectTemplate const*>::iterator it = m_kitTemplates.find(key);
    if (it != m_kitTemplates.end()) {
        return it->second;
    }
    std::map<int, std::string>::iterator sit = m_kitTemplateStrings.find(key);
    world::IObjectTemplate const* t = 0;
    if (sit != m_kitTemplateStrings.end()) {
        typedef world::IObjectTemplate const* (*LoadFn)(void*, std::string const&);
        t = ((LoadFn)(*(void***)world::objectTemplateManager)[0x48 / 8])(world::objectTemplateManager, sit->second);
        m_kitTemplates.insert(std::pair<int const, world::IObjectTemplate const*>(key, t));
    }
    return t;
}

} }
