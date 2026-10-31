#include <math.h>

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5dfe80
// TRICK: 2 (__builtin_expect asymetrique sur le dernier test)
// TRICK: 149 (copie Vec3 : locales z,y,x)
// TRICK: 75 (sous-objet Vec3 par pointeur local nomme)
namespace dice { namespace hfe {

extern float const c_epsilon;

class Vec3 {
public:
    float x;
    float y;
    float z;
};

struct SpringState {
    char _pad0[0xc];
    Vec3 m_pos;
    Vec3 m_dir;
    float m_value;
};

class SpringBody {
public:
    char _pad0[0x25c];
    Vec3 m_pos;
    char _pad1[4];
    float m_value;
};

class SpringOwner {
public:
    char _pad0[0x50];
    void* m_link;
    char _pad1[0x30];
    SpringBody* m_body;
    void* m_mesh;
};

class SpringNetworkable {
public:
    char _pad0[0x3c];
    unsigned int m_count;
    char _pad1[8];
    unsigned int m_previous;
    unsigned int m_current;
    char _pad2[0x10];
    SpringOwner* m_owner;
    char _pad3[0xc];
    bool m_flag;
    char _pad4[3];
    SpringState* m_states;

    void updateStateMask(unsigned int* mask);
};

void SpringNetworkable::updateStateMask(unsigned int* mask)
{
    m_previous = m_count;
    m_current = m_count = (m_count + 1) & 3;

    SpringOwner* owner = m_owner;
    SpringBody* body = owner->m_body;
    if (body == 0)
        return;

    void* p;
    if (owner->m_link == 0)
        p = (*(void* (**)(void*))((char*)*(void**)owner + 0x108))(owner);
    else
        p = (*(void* (**)(void*))((char*)*(void**)owner + 0x1d0))(owner);

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
        *mask |= 1;

    Vec3 const* src = &body->m_pos;
    Vec3* dst2 = &m_states[m_current].m_dir;
    float bz = src->z;
    float by = src->y;
    float bx = src->x;
    dst2->x = bx;
    dst2->y = by;
    dst2->z = bz;

    void* q = m_owner->m_mesh;
    if (m_flag && q != 0 &&
        (((*(unsigned int (**)(void*))((char*)*(void**)q + 0x100)))(q) & 8) != 0)
        m_states[m_current].m_value = body->m_value;
    else
        m_states[m_current].m_value = 0;
}

} }
