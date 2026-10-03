// FUNCTION: BF2 0x5215a0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getVehicleType();
};

int PlayerControlObjectTemplate::getVehicleType() {
    return *(int*)((char*)this + 0x30c);
}

} } }
