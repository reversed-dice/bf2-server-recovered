// FUNCTION: BF2 0x6f8440
namespace dice { namespace hfe {
class SoldierResponsePhysics {
public:
    char _pad[0x101];
    bool field;
    void setPermanentGrip(bool v);
};
void SoldierResponsePhysics::setPermanentGrip(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_SoldierResponsePhysics_setPermanentGrip (0x6f8440)
