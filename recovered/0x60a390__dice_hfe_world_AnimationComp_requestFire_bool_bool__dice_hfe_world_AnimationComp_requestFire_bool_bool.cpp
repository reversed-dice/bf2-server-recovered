// FUNCTION: BF2 0x60a390
namespace dice { namespace hfe { namespace world {

class AnimationComp {
public:
    unsigned int requestFire(bool, bool);
};

unsigned int AnimationComp::requestFire(bool, bool) {
    return 1;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_requestFire_bool_bool (0x60a390)