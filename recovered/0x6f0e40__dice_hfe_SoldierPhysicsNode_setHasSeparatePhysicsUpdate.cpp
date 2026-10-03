// FUNCTION: BF2 0x6f0e40
namespace dice { namespace hfe {
class SoldierPhysicsNode {
public:
    char _pad[0x6c];
    bool field;
    void setHasSeparatePhysicsUpdate(bool v);
};
void SoldierPhysicsNode::setHasSeparatePhysicsUpdate(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SoldierPhysicsNode_setHasSeparatePhysicsUpdate (0x6f0e40)
