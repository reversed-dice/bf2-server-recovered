// FUNCTION: BF2 0x5218a0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getVehicleFov() const;
};

float PlayerControlObjectTemplate::getVehicleFov() const {
    // offset 0x354 — vehicle FOV
    return *(const float*)((const char*)this + 0x354);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getVehicleFov (0x5218a0)