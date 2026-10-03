// FUNCTION: BF2 0x6f8400
namespace dice { namespace hfe {
class SoldierResponsePhysics {
public:
    char _pad[0x108];
    int field;
    void setCollisionChecked(int v);
};
void SoldierResponsePhysics::setCollisionChecked(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SoldierResponsePhysics_setCollisionChecked (0x6f8400)
