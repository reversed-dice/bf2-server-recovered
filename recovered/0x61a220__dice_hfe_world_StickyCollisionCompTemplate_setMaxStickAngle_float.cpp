// FUNCTION: BF2 0x61a220
extern "C" float cosf(float);

namespace dice { namespace hfe { namespace world {
class StickyCollisionCompTemplate {
public:
    void setMaxStickAngle(float angle);
    char pad[0x18];
    float m_cos;   // +0x18
};
void StickyCollisionCompTemplate::setMaxStickAngle(float angle)
{
    float a = angle;
    if (a < -180.0f) a = -180.0f;
    if (a > 180.0f) a = 180.0f;
    m_cos = cosf(a * 0.0174533f);
}
}}}
