// FUNCTION: BF2 0x5f01f0
namespace dice { namespace hfe { namespace world {

class DeviationComp {
public:
    unsigned int isSelectable() const;
};

unsigned int DeviationComp::isSelectable() const {
    return 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DeviationComp_isSelectable_const (0x5f01f0)