// FUNCTION: BF2 0x6dfce0
namespace dice { namespace hfe {
class PointResponsePhysics {
public:
    char _pad[0x44];
    int field;
    void setCollisionChecked(int v);
};
void PointResponsePhysics::setCollisionChecked(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PointResponsePhysics_setCollisionChecked (0x6dfce0)
