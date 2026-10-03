// FUNCTION: BF2 0x7865d0
#include <math.h>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace ai {

class IPhysicsObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23)
#undef V
    virtual const Vec3& getVelocity() const;
};

struct MobileTemplate {
    char _pad0[0xc];
    float maxSpeed;
    char _pad10[0x10];
    float maxSoundRadius;
    float minSoundRadius;
};

class AIObjectMobile {
public:
    float getSoundSphereRadius() const;
    char _pad0[0x20];
    MobileTemplate* m_template;
    char _pad28[0x18];
    IPhysicsObject* m_physics;
};

float AIObjectMobile::getSoundSphereRadius() const
{
    const Vec3& v = m_physics->getVelocity();
    float speed = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
    const MobileTemplate* t = m_template;
    if (speed >= t->maxSpeed)
        return t->maxSoundRadius;
    float f = speed / t->maxSpeed;
    return (1.0f - f) * t->minSoundRadius + f * t->maxSoundRadius;
}

} } }
