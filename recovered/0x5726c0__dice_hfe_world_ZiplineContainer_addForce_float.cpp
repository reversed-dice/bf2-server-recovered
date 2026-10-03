// FUNCTION: BF2 0x5726c0
namespace dice { namespace hfe { namespace world {

class ZiplineContainer {
public:
    void addForce(float force);
    char _pad0[0x68c];
    float m_force;
};

void ZiplineContainer::addForce(float force)
{
    float f = m_force + force;
    if (f < -30.0f)
        f = -30.0f;
    else if (f > 30.0f)
        f = 30.0f;
    m_force = f;
}

} } }
