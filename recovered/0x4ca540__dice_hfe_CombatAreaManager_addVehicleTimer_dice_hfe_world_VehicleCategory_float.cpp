// FUNCTION: BF2 0x4ca540
#include <map>

namespace dice { namespace hfe { namespace world {
enum VehicleCategory {
    VEHICLE_CATEGORY_NONE = 0
};
} } }

namespace dice { namespace hfe {

class CombatAreaManager {
public:
    char _pad_0x00[0x60];
    std::map<dice::hfe::world::VehicleCategory, float> m_vehicleTimers;

    void addVehicleTimer(dice::hfe::world::VehicleCategory category, float value);
};

void CombatAreaManager::addVehicleTimer(dice::hfe::world::VehicleCategory category, float value) {
    std::map<dice::hfe::world::VehicleCategory, float>::iterator it = m_vehicleTimers.find(category);
    if (it == m_vehicleTimers.end()) {
        m_vehicleTimers.insert(
            std::pair<const dice::hfe::world::VehicleCategory, float>(category, value)
        );
    } else {
        it->second = value;
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_CombatAreaManager::addVehicleTimer_dice_hfe_world_VehicleCategory_float (0x4ca540)