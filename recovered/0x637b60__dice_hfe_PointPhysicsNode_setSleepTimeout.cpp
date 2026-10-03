// FUNCTION: BF2 0x637b60
namespace dice { namespace hfe {
class PointPhysicsNode {
public:
    char _pad[0x70];
    int field;
    void setSleepTimeout(int v);
};
void PointPhysicsNode::setSleepTimeout(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PointPhysicsNode_setSleepTimeout (0x637b60)
