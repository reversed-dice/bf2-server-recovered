// FUNCTION: BF2 0x536a90
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    float getShakeFactor() const;
};

float PlayerControlObject::getShakeFactor() const {
    return *(float*)(*(long*)((char*)this + 0x250) + 0x3A0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getShakeFactor_const (0x536a90)