#include <math.h>

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5d15d0
// TRICK: 2 (__builtin_expect asymetrique sur le dernier test)
// TRICK: 149 (copie Vec3 : locales z,y,x)
// TRICK: 75 (sous-objet Vec3 par pointeur local nomme)
// TRICK: 247 (slot de vtable: cast inline, jamais typedef dereference)
namespace dice { namespace hfe {

extern float const c_epsilon;

class Vec3 {
public:
    float x;
    float y;
    float z;
};

struct OverheadCameraNetworkableState {
    char _pad0[0xc];
    Vec3 m_pos;
    float m_dirX;
    float m_dirY;
    int m_value;
    unsigned char m_enabled;
    char _pad1[3];
};

namespace world {

class OverheadCamera {
public:
    static bool m_enabled;
};

}

class CameraOwner {
public:
    char _pad0[0x8];
    unsigned int m_b8;
    char _pad1[0x50 - 0xc];
    void* m_link;
    char _pad2[0x35c - 0x58];
    float m_a;
    char _pad3[4];
    float m_b;
    char _pad4[0x370 - 0x368];
    int m_c;
};

class OverheadCameraNetworkable {
public:
    char _pad0[0x3c];
    unsigned int m_count;
    char _pad1[8];
    unsigned int m_previous;
    unsigned int m_current;
    char _pad2[0x10];
    CameraOwner* m_owner;
    char _pad3[0xc];
    bool m_flag;
    char _pad4[3];
    OverheadCameraNetworkableState* m_states;

    void updateStateMask(unsigned int* mask);
};

void OverheadCameraNetworkable::updateStateMask(unsigned int* mask)
{
    CameraOwner* owner = m_owner;
    if (owner->m_b8 & 1)
        return;

    m_previous = m_count;
    m_current = m_count = (m_count + 1) & 3;

    float const* dir = &owner->m_a;
    m_states[m_current].m_dirX = dir[0];
    if (m_states[m_current].m_dirX != m_states[m_previous].m_dirX)
        *mask |= 1;

    m_states[m_current].m_dirY = dir[2];
    if (m_states[m_current].m_dirY != m_states[m_previous].m_dirY)
        *mask |= 1;

    void* p;
    if (m_owner->m_link == 0)
        p = (*(void* (**)(void*))((char*)*(void**)m_owner + 0x108))(m_owner);
    else
        p = (*(void* (**)(void*))((char*)*(void**)m_owner + 0x1d0))(m_owner);

    Vec3 const* v = (Vec3 const*)((char*)p + 0x30);
    Vec3* dst = &m_states[m_current].m_pos;
    float zz = v->z;
    float yy = v->y;
    float xx = v->x;
    dst->x = xx;
    dst->y = yy;
    dst->z = zz;

    Vec3* cur = &m_states[m_current].m_pos;
    Vec3* prev = &m_states[m_previous].m_pos;
    if (!(c_epsilon >= fabsf(cur->x - prev->x)) ||
        !(c_epsilon >= fabsf(cur->y - prev->y)) ||
        __builtin_expect(!(c_epsilon >= fabsf(cur->z - prev->z)), 1))
        *mask |= 2;

    m_states[m_current].m_value = owner->m_c;
    if (m_states[m_current].m_value != m_states[m_previous].m_value)
        *mask |= 4;

    m_states[m_current].m_enabled = world::OverheadCamera::m_enabled;
    if (m_states[m_current].m_enabled != m_states[m_previous].m_enabled)
        *mask |= 8;
}

} }
