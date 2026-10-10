// FUNCTION: BF2 0x5bf330
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace world {

class VehicleHudCompTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual int getVehicleIconCount();
    virtual void v21(); virtual void v22(); virtual void v23();
    virtual int getAbilityIconCount();
    char _pad[0x98];
    std::vector<std::string> m_vehicleIcons;
    std::vector<std::string> m_abilityIcons;
};

class VehicleHudComp {
public:
    std::string getAbilityIcon(int index);
    char _pad[0x10];
    VehicleHudCompTemplate* m_pTemplate;
};

std::string VehicleHudComp::getAbilityIcon(int index) {
    std::vector<std::string>::iterator it = m_pTemplate->m_abilityIcons.begin();
    std::string s("");
    if (index < m_pTemplate->getAbilityIconCount()) it += index;
    if (it != m_pTemplate->m_abilityIcons.end()) s.assign(*it);
    return s;
}

} } }
