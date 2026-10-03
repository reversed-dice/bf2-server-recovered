// FUNCTION: BF2 0x43de60
namespace dice { namespace hfe {

class SprintState {
public:
    void reset();

private:
    unsigned char m_pad[0x14];  // 0x00-0x13
    unsigned char m_sprinting;  // 0x14
    unsigned char m_wasSprinting; // 0x15
    unsigned char m_canSprint;  // 0x16
};

void SprintState::reset() {
    m_sprinting = 0;
    m_wasSprinting = 0;
    m_canSprint = 0;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_SprintState_reset (0x43de60)