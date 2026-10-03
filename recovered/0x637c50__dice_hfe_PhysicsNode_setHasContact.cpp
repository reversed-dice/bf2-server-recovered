// FUNCTION: BF2 0x637c50
namespace dice { namespace hfe {
class PhysicsNode {
public:
    char _pad[0x240];
    bool field;
    void setHasContact(bool v);
};
void PhysicsNode::setHasContact(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PhysicsNode_setHasContact (0x637c50)
