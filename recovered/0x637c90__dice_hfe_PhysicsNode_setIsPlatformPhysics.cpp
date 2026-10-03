// FUNCTION: BF2 0x637c90
namespace dice { namespace hfe {
class PhysicsNode {
public:
    char _pad[0x22d];
    bool field;
    void setIsPlatformPhysics(bool v);
};
void PhysicsNode::setIsPlatformPhysics(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PhysicsNode_setIsPlatformPhysics (0x637c90)
