// FUNCTION: BF2 0x5216e0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getDirBarYScaleBelow() const;
};

float PlayerControlObjectTemplate::getDirBarYScaleBelow() const {
    return *(const float*)((const char*)this + 0x338);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getDirBarYScaleBelow (0x5216e0)