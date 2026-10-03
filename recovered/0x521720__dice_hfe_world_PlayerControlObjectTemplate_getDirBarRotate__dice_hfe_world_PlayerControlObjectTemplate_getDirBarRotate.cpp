// FUNCTION: BF2 0x521720
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getDirBarRotate() const;
};

float PlayerControlObjectTemplate::getDirBarRotate() const {
    return *(const float*)((const char*)this + 0x33c);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getDirBarRotate (0x521720)