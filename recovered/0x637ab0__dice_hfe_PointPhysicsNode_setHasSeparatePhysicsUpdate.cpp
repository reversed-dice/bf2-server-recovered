// FUNCTION: BF2 0x637ab0
namespace dice { namespace hfe {
class PointPhysicsNode {
public:
    char _pad[0x6c];
    bool field;
    void setHasSeparatePhysicsUpdate(bool v);
};
void PointPhysicsNode::setHasSeparatePhysicsUpdate(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PointPhysicsNode_setHasSeparatePhysicsUpdate (0x637ab0)
