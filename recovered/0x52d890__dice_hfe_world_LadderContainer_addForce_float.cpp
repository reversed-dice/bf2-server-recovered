// FUNCTION: BF2 0x52d890
namespace dice { namespace hfe { namespace world {

class LadderContainer {
public:
    void addForce(float force);
    char _pad0[0x638];
    float m_force;
};

void LadderContainer::addForce(float force)
{
    float f = m_force + force;
    if (f < -30.0f)
        f = -30.0f;
    else if (f > 30.0f)
        f = 30.0f;
    m_force = f;
}

} } }
