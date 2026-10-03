// FUNCTION: BF2 0x637c70
namespace dice { namespace hfe {
class PhysicsNode {
public:
    char _pad[0x241];
    bool field;
    void setIsInAir(bool v);
};
void PhysicsNode::setIsInAir(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PhysicsNode_setIsInAir (0x637c70)
