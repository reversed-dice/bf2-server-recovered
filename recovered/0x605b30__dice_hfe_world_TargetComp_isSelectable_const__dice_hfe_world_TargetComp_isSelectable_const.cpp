// FUNCTION: BF2 0x605b30
namespace dice { namespace hfe { namespace world {
class TargetComp {
public:
    unsigned int isSelectable() const;
};
unsigned int TargetComp::isSelectable() const { return 1; }
} } }
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_isSelectable_const (0x605b30)