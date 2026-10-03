// FUNCTION: BF2 0x60a8a0
namespace dice { namespace hfe {
class DefaultAnimationComp {
public:
    char _pad[0x54];
    int field;
    void setAmmoLeft(int v);
};
void DefaultAnimationComp::setAmmoLeft(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DefaultAnimationComp_setAmmoLeft (0x60a8a0)
