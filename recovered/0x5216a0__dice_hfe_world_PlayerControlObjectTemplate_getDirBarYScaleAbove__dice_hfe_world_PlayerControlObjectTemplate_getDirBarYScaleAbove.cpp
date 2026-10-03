// FUNCTION: BF2 0x5216a0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getDirBarYScaleAbove() const;

private:
    /* 0x000-0x333: inherited/base members */
    unsigned char m_pad0[0x334];
    /* 0x334 */ float m_dirBarYScaleAbove;
};

float PlayerControlObjectTemplate::getDirBarYScaleAbove() const {
    return m_dirBarYScaleAbove;
}

} } } // namespace dice::hfe::world
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getDirBarYScaleAbove (0x5216a0)