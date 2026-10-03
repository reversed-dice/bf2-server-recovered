// FUNCTION: BF2 0x6dfba0
namespace dice { namespace hfe {
class StaticResponsePhysics {
public:
    char _pad[0x30];
    int field;
    void setCollisionGroups(int v);
};
void StaticResponsePhysics::setCollisionGroups(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StaticResponsePhysics_setCollisionGroups (0x6dfba0)
