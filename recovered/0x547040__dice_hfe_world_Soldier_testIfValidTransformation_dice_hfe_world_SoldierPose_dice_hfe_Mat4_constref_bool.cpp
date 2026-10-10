// FUNCTION: BF2 0x547040
// BF2_COMPILER: gcc-3.4
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Mat4;

namespace world {

typedef int SoldierPose;

class Soldier {
public:
    char _pad[0x90];
    void* m_collisionNode; // +0x90
    char _pad2[0x3c8 - 0x98];
    SoldierPose m_pose; // +0x3c8

    bool testIfValidTransformation(SoldierPose pose, const dice::hfe::Mat4& mat, bool flag);
};

bool Soldier::testIfValidTransformation(SoldierPose pose, const dice::hfe::Mat4& mat, bool flag) {
    Soldier* self = this;
    void* node = self->m_collisionNode;
    SoldierPose old = self->m_pose;
    self->m_pose = pose;
    typedef bool (*TestFn)(void*, const dice::hfe::Mat4&, bool);
    void** vtbl = *(void***)node;
    TestFn fn = (TestFn)vtbl[0x27];
    bool res = fn(node, mat, flag);
    self->m_pose = old;
    return res;
}

} } }
