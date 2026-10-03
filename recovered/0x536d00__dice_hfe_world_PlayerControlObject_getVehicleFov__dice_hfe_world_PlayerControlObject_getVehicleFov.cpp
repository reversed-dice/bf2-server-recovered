// FUNCTION: BF2 0x536d00
namespace dice { namespace hfe { namespace world {

struct VehicleContext {
    unsigned char _pad_00[0x354];
    float m_vehicleFov;
};

class PlayerControlObject {
public:
    float getVehicleFov() const;

private:
    unsigned char _pad_00[0x28];
    VehicleContext* m_vehicle;
};

float PlayerControlObject::getVehicleFov() const {
    return m_vehicle->m_vehicleFov;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getVehicleFov (0x536d00)