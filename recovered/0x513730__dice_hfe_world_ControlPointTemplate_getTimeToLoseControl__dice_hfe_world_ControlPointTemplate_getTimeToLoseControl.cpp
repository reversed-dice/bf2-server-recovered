// FUNCTION: BF2 0x513730
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    float getTimeToLoseControl() const;

private:
    char pad_0[0x220];
    float m_timeToLoseControl;
};

float ControlPointTemplate::getTimeToLoseControl() const
{
    return m_timeToLoseControl;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_getTimeToLoseControl (0x513730)