// FUNCTION: BF2 0x605cd0
namespace dice { namespace hfe {
class TargetComp {
public:
    char _pad[0x71];
    bool field;
    void setAllowTargetSeek(bool v);
};
void TargetComp::setAllowTargetSeek(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_TargetComp_setAllowTargetSeek (0x605cd0)
