// FUNCTION: BF2 0x6c5670
// BF2_FLAGS: -fno-strict-aliasing
#include <new>

namespace dice { namespace anim {

struct BoneXform {
    char _pad[0x40];
    void* m_p;  // +0x40
    int m_tail;  // +0x48
};

class Skeleton {
public:
    char _pad0[0x8];
    BoneXform* m_items;  // +0x8
    char _pad1[0x18];
    int m_count;  // +0x28

    void removeAllPostAbsoluteBoneTransforms();
};

void Skeleton::removeAllPostAbsoluteBoneTransforms()
{
    for (int i = 0; i < m_count; ++i) {
        BoneXform* b = &m_items[i];
        operator delete(b->m_p);
        b->m_p = 0;
    }
}

} }
