// FUNCTION: BF2 0x787cf0
namespace dice { namespace hfe {
class AIObjectUnit {
public:
    char _pad[0x30];
    int field;
    void setMissileLockStatus(int v);
};
void AIObjectUnit::setMissileLockStatus(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AIObjectUnit_setMissileLockStatus (0x787cf0)
