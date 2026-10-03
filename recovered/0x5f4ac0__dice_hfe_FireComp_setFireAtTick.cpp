// FUNCTION: BF2 0x5f4ac0
namespace dice { namespace hfe {
class FireComp {
public:
    char _pad[0x44];
    int field;
    void setFireAtTick(int v);
};
void FireComp::setFireAtTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FireComp_setFireAtTick (0x5f4ac0)
