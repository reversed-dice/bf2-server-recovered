// FUNCTION: BF2 0x4ca470
// BF2_FLAGS: -fcrossjumping
#include <map>
namespace dice { namespace hfe {
namespace world {
enum VehicleCategory {};
class IVehicle { public: virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual VehicleCategory getCategory(); };
class IObjectTemplate {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2();
    virtual IVehicle* queryInterface(int id);
    virtual int getClassId();
};
class IObject { public: char _pad0[0x28]; IObjectTemplate* m_template; };
extern int g_vehicleId;
extern int g_soldierClassId;
}

class CombatAreaManager {
public:
    float getTimeAllowedOutside(world::IObject* o);
    char _pad0[0x24];
    float m_defaultTime;
    char _pad28[0x38];
    std::map<world::VehicleCategory, float> m_times;
};

float CombatAreaManager::getTimeAllowedOutside(world::IObject* o)
{
    if (!o)
        return m_defaultTime;
    world::IVehicle* v = o->m_template->queryInterface(world::g_vehicleId);
    world::VehicleCategory c = v ? v->getCategory() : (world::VehicleCategory)4;
    std::map<world::VehicleCategory, float>::iterator it = m_times.find(c);
    if (o->m_template->getClassId() == world::g_soldierClassId)
        return m_defaultTime;
    return it == m_times.end() ? m_defaultTime : it->second;
}

} }
