// FUNCTION: BF2 0x521820
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getRidingWithDistMod() const;
};

float PlayerControlObjectTemplate::getRidingWithDistMod() const {
    return *(const float*)((const char*)this + 0x290);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getRidingWithDistMod (0x521820)