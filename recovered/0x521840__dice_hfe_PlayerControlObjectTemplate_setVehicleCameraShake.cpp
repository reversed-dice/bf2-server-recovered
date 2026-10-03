// FUNCTION: BF2 0x521840
namespace dice { namespace hfe {
class PlayerControlObjectTemplate {
public:
    char _pad[0x350];
    int field;
    void setVehicleCameraShake(int v);
};
void PlayerControlObjectTemplate::setVehicleCameraShake(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerControlObjectTemplate_setVehicleCameraShake (0x521840)
