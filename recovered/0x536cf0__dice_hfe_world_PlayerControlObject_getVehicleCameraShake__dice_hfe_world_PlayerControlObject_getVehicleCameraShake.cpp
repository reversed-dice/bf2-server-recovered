// FUNCTION: BF2 0x536cf0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned int getVehicleCameraShake() const;
};

unsigned int PlayerControlObject::getVehicleCameraShake() const {
    return *(unsigned int*)(*(long*)((char*)this + 0x28) + 0x350);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getVehicleCameraShake (0x536cf0)