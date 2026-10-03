// FUNCTION: BF2 0x5218e0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getSeatLeftRotationLimit() const;
};

float PlayerControlObjectTemplate::getSeatLeftRotationLimit() const {
    return *(const float*)((const char*)this + 0x258);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getSeatLeftRotationLimit_const (0x5218e0)