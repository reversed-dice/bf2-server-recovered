// FUNCTION: BF2 0x6378e0
namespace dice { namespace hfe {
class StaticPhysicsNode {
public:
    char _pad[0x14];
    bool field;
    void setEnabled(bool v);
};
void StaticPhysicsNode::setEnabled(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StaticPhysicsNode_setEnabled (0x6378e0)
