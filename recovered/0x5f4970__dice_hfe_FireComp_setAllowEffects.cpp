// FUNCTION: BF2 0x5f4970
namespace dice { namespace hfe {
class FireComp {
public:
    char _pad[0x154];
    bool field;
    void setAllowEffects(bool v);
};
void FireComp::setAllowEffects(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_FireComp_setAllowEffects (0x5f4970)
