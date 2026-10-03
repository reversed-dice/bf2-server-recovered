// FUNCTION: BF2 0x521920
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    float getSeatRightRotationLimit() const;

private:
    unsigned char __pad0[0x25c];
    float m_seatRightRotationLimit;
};

float PlayerControlObjectTemplate::getSeatRightRotationLimit() const {
    return m_seatRightRotationLimit;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_getSeatRightRotationLimit_const (0x521920)