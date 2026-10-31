#include <math.h>

// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5d0b10
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

struct ItemState {
    char _pad0[0x8];
    Vec3 m_pos;
    char _pad1[0x10];
    int m_a;
    int m_b;
    unsigned char m_c;
    char _pad2[3];
    int m_d;
};

class ItemOwner {
public:
    char _pad0[0x50];
    void* m_link;
};

class ItemNetworkable {
public:
    char _pad0[0x3c];
    unsigned int m_count;
    char _pad1[8];
    unsigned int m_previous;
    unsigned int m_current;
    char _pad2[0x10];
    ItemOwner* m_owner;
    char _pad3[0xc];
    bool m_flag;
    char _pad4[3];
    ItemState* m_states;

    void updateStateMask(unsigned int* mask);
};

void ItemNetworkable::updateStateMask(unsigned int* mask)
{
    m_previous = m_count;
    m_current = m_count = (m_count + 1) & 3;

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
        *mask |= 1;

    m_states[m_current].m_a = ((int (*)(void*))(*(void***)m_owner)[0x63])(m_owner);
    if (m_states[m_current].m_a != m_states[m_previous].m_a)
        *mask |= 2;

    m_states[m_current].m_b = ((int (*)(void*))(*(void***)m_owner)[0x65])(m_owner);
    if (m_states[m_current].m_b != m_states[m_previous].m_b)
        *mask |= 4;

    m_states[m_current].m_c = ((unsigned char (*)(void*))(*(void***)m_owner)[0x68])(m_owner);
    if (m_states[m_current].m_c != m_states[m_previous].m_c)
        *mask |= 8;

    m_states[m_current].m_d = ((int (*)(void*))(*(void***)m_owner)[0x6a])(m_owner);
    if (m_states[m_current].m_d != m_states[m_previous].m_d)
        *mask |= 0x10;
}

} }
