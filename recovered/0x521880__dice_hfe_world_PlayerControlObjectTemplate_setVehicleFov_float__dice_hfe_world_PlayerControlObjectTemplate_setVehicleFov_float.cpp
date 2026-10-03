// FUNCTION: BF2 0x521880
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    void setVehicleFov(float fov);
private:
    unsigned char _pad_0x000[0x354];
    float m_vehicleFov;
};

void PlayerControlObjectTemplate::setVehicleFov(float fov) {
    m_vehicleFov = fov;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setVehicleFov_float (0x521880)