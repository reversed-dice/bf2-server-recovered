// FUNCTION: BF2 0x4a2860
namespace dice { namespace hfe {

class Player {
public:
    void setPersonalDecalTemplate_dice_hfe_world_IObjectTemplate_constptr(void const* value);
};

void Player::setPersonalDecalTemplate_dice_hfe_world_IObjectTemplate_constptr(void const* value) {
    *(void const**)((char*)this + 0x288) = value;
}

} }
// REVERSED_FUNCTION: dice::hfe::Player::setPersonalDecalTemplate_dice_hfe_world_IObjectTemplate_constptr (0x4a2860)