// FUNCTION: BF2 0x521860
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getVehicleCameraShake();
};

int PlayerControlObjectTemplate::getVehicleCameraShake() {
    return *(int*)((char*)this + 0x350);
}

} } }
