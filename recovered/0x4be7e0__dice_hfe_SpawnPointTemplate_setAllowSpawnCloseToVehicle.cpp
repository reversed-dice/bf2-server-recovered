// FUNCTION: BF2 0x4be7e0
namespace dice { namespace hfe {
class SpawnPointTemplate {
public:
    char _pad[0x97];
    bool field;
    void setAllowSpawnCloseToVehicle(bool v);
};
void SpawnPointTemplate::setAllowSpawnCloseToVehicle(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SpawnPointTemplate_setAllowSpawnCloseToVehicle (0x4be7e0)
