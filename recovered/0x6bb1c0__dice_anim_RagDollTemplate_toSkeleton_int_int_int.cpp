// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6bb1c0
#include <vector>

namespace dice { namespace anim {

class RagDollTemplate {
public:
    struct BoneMapping {
        int a;
        int b;
        int c;
    };

    char m_pad[0x8];
    std::vector<BoneMapping> m_bones;   // +0x8

    void toSkeleton(int a, int b, int c);
};

void RagDollTemplate::toSkeleton(int a, int b, int c)
{
    BoneMapping bm;
    bm.a = a;
    bm.b = b;
    bm.c = c;
    m_bones.push_back(bm);
}

}}
