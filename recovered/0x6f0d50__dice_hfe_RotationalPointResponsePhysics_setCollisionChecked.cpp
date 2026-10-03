// FUNCTION: BF2 0x6f0d50
namespace dice { namespace hfe {
class RotationalPointResponsePhysics {
public:
    char _pad[0x44];
    int field;
    void setCollisionChecked(int v);
};
void RotationalPointResponsePhysics::setCollisionChecked(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_RotationalPointResponsePhysics_setCollisionChecked (0x6f0d50)
