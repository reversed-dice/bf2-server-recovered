// FUNCTION: BF2 0x43e0e0
namespace dice { namespace hfe {

class SprintState {
public:
    float m_speed;     // offset 0x00
    float m_duration;  // offset 0x04
    float m_cooldown;  // offset 0x08

    void setConstants(float a, float b, float c);
};

void SprintState::setConstants(float a, float b, float c) {
    m_speed = a;
    m_duration = b;
    m_cooldown = c;
}

} }
// REVERSED_FUNCTION: dice_hfe_SprintState_setConstants_float_float_float (0x43e0e0)