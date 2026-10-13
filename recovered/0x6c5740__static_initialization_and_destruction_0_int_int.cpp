// FUNCTION: BF2 0x6c5740
#include <iostream>

namespace dice { namespace anim {

struct BoneBlock
{
    void* m_0;
    void* m_1;
    void* m_2;
    void* m_3;
    void* m_4;
    void* m_5;
    BoneBlock() : m_1(0), m_4(0) {}
};

struct BoneEntry
{
    BoneBlock m_blocks[5];
    int m_f0;
    BoneEntry() : m_f0(0) {}
};

class Skeleton
{
public:
    static BoneEntry boneApplyAnimation[256];
};

BoneEntry Skeleton::boneApplyAnimation[256];

} }
