// FUNCTION: BF2 0x5f4a20
namespace dice { namespace hfe {
class FireComp {
public:
    char _pad[0x40];
    int field;
    void setFireRate(int v);
};
void FireComp::setFireRate(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FireComp_setFireRate (0x5f4a20)
