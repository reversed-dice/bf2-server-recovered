// FUNCTION: BF2 0x550cb0
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    void setSprintStaminaDissipationFactor(float factor);

private:
    unsigned char m_pad[0x50c];
    float m_sprintStaminaDissipationFactor;
};

void Soldier::setSprintStaminaDissipationFactor(float factor) {
    m_sprintStaminaDissipationFactor = factor;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier_setSprintStaminaDissipationFactor_float (0x550cb0)