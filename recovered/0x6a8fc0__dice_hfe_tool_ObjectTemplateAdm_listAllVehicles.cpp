// FUNCTION: BF2 0x6a8fc0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <list>

namespace dice { namespace hfe { namespace world {
class IObjectTemplate
{
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int) const;   // +0x18
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual std::string const& getName();               // +0x58
};
struct ObjectTemplateManager
{
    char _pad[0x88];
    std::list<IObjectTemplate*> templates;
};
extern ObjectTemplateManager* objectTemplateManager;
extern unsigned int IID_IPlayerControlObjectTemplate;
} } }

namespace dice { namespace hfe { namespace tool {
class ObjectTemplateAdm
{
public:
    std::string listAllVehicles();
};
} } }

std::string dice::hfe::tool::ObjectTemplateAdm::listAllVehicles()
{
    std::string res;
    std::list<dice::hfe::world::IObjectTemplate*>& l = dice::hfe::world::objectTemplateManager->templates;
    for (std::list<dice::hfe::world::IObjectTemplate*>::iterator it = l.begin(); it != l.end(); ++it)
    {
        dice::hfe::world::IObjectTemplate* t = *it;
        if (t && t->queryInterface(dice::hfe::world::IID_IPlayerControlObjectTemplate))
        {
            res.append(t->getName());
            res.append("\n", 1);
        }
    }
    return res;
}
// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_listAllVehicles (0x6a8fc0)
