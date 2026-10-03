// FUNCTION: BF2 0x605d90
namespace dice { namespace hfe { namespace world {

class LPTargetComp {
public:
    unsigned int getTargetInput() const;
};

unsigned int LPTargetComp::getTargetInput() const {
    return 0x40;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LPTargetComp_getTargetInput_const (0x605d90)