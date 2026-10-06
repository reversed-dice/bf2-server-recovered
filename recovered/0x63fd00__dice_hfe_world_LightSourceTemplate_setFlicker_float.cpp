// FUNCTION: BF2 0x63fd00
namespace dice { namespace hfe { namespace world {

class LightSourceTemplate {
public:
    char _pad[0xd4];
    float m_flicker;

    void setFlicker(float val);
};

void LightSourceTemplate::setFlicker(float val)
{
    if (val < 0.0f) {
        val = 0.0f;
    } else if (val > 1.0f) {
        val = 1.0f;
    }
    m_flicker = val;
}

} } }
