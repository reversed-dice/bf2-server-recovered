// FUNCTION: BF2 0x687770
// BF2_FLAGS: -fno-strict-aliasing
#include <math.h>

typedef float (*FnF)(const void*);
typedef void* (*FnP)(const void*);

namespace dice { namespace hfe { namespace world {

struct Vec3 { float x, y, z; };

class Object {
public:
    unsigned char _pad0[8];
    mutable unsigned int m_flags;              // +0x8
    unsigned char _pad1[0x80 - 0xc];
    void* m_physics;                   // +0x80
    unsigned char _pad2[0x17c - 0x88];
    mutable float m_physicBoundingRadius;      // +0x17c
    float getPhysicBoundingRadius() const;
};

float Object::getPhysicBoundingRadius() const
{
    if (m_flags & 1) {
        float r = 0.0f;
        m_flags |= 0x20000000;
        m_physicBoundingRadius = r;
        return r;
    }
    if (!(m_flags & 0x20000000))
        return m_physicBoundingRadius;

    void* p = m_physics;
    float rad;
    float d;
    if (p)
        rad = ((FnF)(*(void***)p)[0x1e])(p);
    else
        rad = 0.0f;

    float maxr = ((FnF)(*(void***)this)[0x27])(this) + rad;

    for (void* o = ((FnP)(*(void***)this)[0x3c])(this); o != 0;
         o = *(void**)((char*)o + 0x58)) {
        d = ((FnF)(*(void***)o)[0x26])(o);
        if (d > 0.0f) {
            const Vec3* v = (const Vec3*)((FnP)(*(void***)o)[0x38])(o);
            float l = __builtin_sqrtf(v->x * v->x + v->y * v->y + v->z * v->z);
            float t = l + d;
            if (t > maxr)
                maxr = t;
        }
    }

    if (__builtin_fabsf(maxr - m_physicBoundingRadius) > 0.0001f) {
        m_physicBoundingRadius = maxr;
        m_flags |= 0x100000;
    }
    m_flags &= 0xdfffffffu;
    return m_physicBoundingRadius;
}

} } }
