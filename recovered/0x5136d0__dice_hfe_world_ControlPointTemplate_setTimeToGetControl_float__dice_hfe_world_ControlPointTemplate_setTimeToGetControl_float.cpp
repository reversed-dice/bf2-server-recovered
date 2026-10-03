// FUNCTION: BF2 0x5136d0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setTimeToGetControl(float time);

private:
    char m_pad0[0x21c];
    float m_timeToGetControl;           // offset 0x21c
};

void ControlPointTemplate::setTimeToGetControl(float time) {
    m_timeToGetControl = time;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setTimeToGetControl_float (0x5136d0)