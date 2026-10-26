// FUNCTION: BF2 0x5eb0a0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

extern bool fn_5ea180(void* a);

struct AmmoCompTemplate {
    char _pad0[0x3c];
    int m_3c;
    int m_40;
};

class AmmoComp {
public:
    unsigned int refillInternal(unsigned int count, bool b);

private:
    char _pad0[0x28];
    std::vector<int> m_bullets;      // 0x28
    char _pad1[0x6d - 0x40];
    unsigned char m_6d;              // 0x6d
    char _pad2[0x78 - 0x6e];
    void* m_owner;                   // 0x78
    AmmoCompTemplate* m_data;        // 0x80
};

typedef void (*NotifyFn)(void*, unsigned int);
typedef void (*SetFn)(void*, int, int);

unsigned int AmmoComp::refillInternal(unsigned int count, bool b) {
    unsigned int left;
    if (fn_5ea180(this)) {
        int mag = m_data->m_40;
        unsigned int missing = (unsigned int)mag - (unsigned int)m_bullets[0];
        if (count >= missing) {
            left = count - missing;
            if (!b) {
                m_bullets[0] = mag;
                m_6d = 0;
            }
        } else {
            m_bullets[0] = (int)(count + (unsigned int)m_bullets[0]);
            left = 0;
        }
    } else {
        long sz = (long)m_bullets.size();
        int n = (int)sz;
        if (sz != 0 && m_bullets[0] == 0 && m_data->m_40 > 0) {
            --n;
        }
        int rem = m_data->m_3c - n;
        left = count;
        if (count != 0 && rem > 0) {
            do {
                if (!b) {
                    m_bullets.push_back(m_data->m_40);
                }
                --rem;
                --left;
            } while (left != 0 && rem > 0);
        }
    }
    if (m_owner != 0 && !b) {
        ((NotifyFn)(*(void***)m_owner)[39])(m_owner, (unsigned int)m_bullets.size());
        ((SetFn)(*(void***)m_owner)[20])(m_owner, 0, m_bullets[0]);
    }
    return left;
}

} }
}
