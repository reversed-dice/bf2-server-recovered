// FUNCTION: BF2 0x4ca3e0
#include <map>

namespace dice { namespace hfe { namespace world {
enum VehicleCategory {
    VEHICLE_CATEGORY_NONE = 0
};
} } }

namespace dice { namespace hfe {

class CombatAreaManager {
public:
    char _pad_0x00[0x30];
    std::map<dice::hfe::world::VehicleCategory, float> m_vehicleDamage;

    void addVehicleDamage(dice::hfe::world::VehicleCategory category, float value);
};

void CombatAreaManager::addVehicleDamage(dice::hfe::world::VehicleCategory category, float value) {
    std::map<dice::hfe::world::VehicleCategory, float>::iterator it = m_vehicleDamage.find(category);
    if (it == m_vehicleDamage.end()) {
        m_vehicleDamage.insert(
            std::pair<const dice::hfe::world::VehicleCategory, float>(category, value)
        );
    } else {
        it->second = value;
    }
}

} }
