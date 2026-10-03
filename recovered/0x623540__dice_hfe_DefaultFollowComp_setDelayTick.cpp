// FUNCTION: BF2 0x623540
namespace dice { namespace hfe {
class DefaultFollowComp {
public:
    char _pad[0x48];
    int field;
    void setDelayTick(int v);
};
void DefaultFollowComp::setDelayTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_DefaultFollowComp_setDelayTick (0x623540)
