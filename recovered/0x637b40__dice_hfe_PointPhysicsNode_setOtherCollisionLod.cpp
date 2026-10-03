// FUNCTION: BF2 0x637b40
namespace dice { namespace hfe {
class PointPhysicsNode {
public:
    char _pad[0x98];
    int field;
    void setOtherCollisionLod(int v);
};
void PointPhysicsNode::setOtherCollisionLod(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PointPhysicsNode_setOtherCollisionLod (0x637b40)
