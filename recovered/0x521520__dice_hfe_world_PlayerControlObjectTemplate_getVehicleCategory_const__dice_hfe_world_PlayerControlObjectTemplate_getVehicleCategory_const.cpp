// FUNCTION: BF2 0x521520
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getVehicleCategory() const;
};

int PlayerControlObjectTemplate::getVehicleCategory() const {
    return *(int*)((char*)this + 0x304);
}

} } }
