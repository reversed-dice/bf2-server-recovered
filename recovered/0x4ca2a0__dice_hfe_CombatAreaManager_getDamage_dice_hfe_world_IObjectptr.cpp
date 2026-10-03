// FUNCTION: BF2 0x4ca2a0
#include <map>
namespace dice { namespace hfe {

namespace world {

extern int IID_IPlayerControlObjectTemplate;

enum VehicleCategory { VC_DEFAULT = 4 };

class IPlayerControlObjectTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
    virtual VehicleCategory getVehicleCategory();
};

class ITemplateHost {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual IPlayerControlObjectTemplate* getInterface(int iid);
};

class IObject {
public:
    char m_pad0[0x28];
    ITemplateHost* m_template;
};

}

class CombatAreaManager {
public:
    float getDamage(world::IObject* obj);
private:
    char m_pad0[0x28];
    float m_defaultDamage;
    char m_pad1[4];
    std::map<world::VehicleCategory, float> m_damageByCategory;
};

float CombatAreaManager::getDamage(world::IObject* obj) {
    if (!obj)
        return m_defaultDamage;
    world::IPlayerControlObjectTemplate* t =
        obj->m_template->getInterface(world::IID_IPlayerControlObjectTemplate);
    world::VehicleCategory cat = t ? t->getVehicleCategory() : world::VC_DEFAULT;
    std::map<world::VehicleCategory, float>::iterator it = m_damageByCategory.find(cat);
    if (it == m_damageByCategory.end())
        return m_defaultDamage;
    return it->second;
}

} }
