// FUNCTION: BF2 0x5f48d0
namespace dice { namespace hfe { namespace world {

class FireComp {
public:
    unsigned int isSelectable() const;
};

unsigned int FireComp::isSelectable() const {
    return 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FireComp_isSelectable_const (0x5f48d0)