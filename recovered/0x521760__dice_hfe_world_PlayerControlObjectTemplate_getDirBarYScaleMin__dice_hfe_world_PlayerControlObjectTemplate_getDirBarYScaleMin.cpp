// FUNCTION: BF2 0x521760
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getDirBarYScaleMin() const;
};

float PlayerControlObjectTemplate::getDirBarYScaleMin() const {
    return *(float*)((unsigned char*)this + 0x344);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getDirBarYScaleMin (0x521760)