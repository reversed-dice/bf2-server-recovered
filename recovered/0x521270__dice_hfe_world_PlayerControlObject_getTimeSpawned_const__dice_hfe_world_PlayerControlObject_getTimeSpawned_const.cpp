// FUNCTION: BF2 0x521270
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    float getTimeSpawned() const;
};

float PlayerControlObject::getTimeSpawned() const {
    // offset 0x3e8
    return *(const float*)((const char*)this + 0x3e8);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getTimeSpawned_const (0x521270)