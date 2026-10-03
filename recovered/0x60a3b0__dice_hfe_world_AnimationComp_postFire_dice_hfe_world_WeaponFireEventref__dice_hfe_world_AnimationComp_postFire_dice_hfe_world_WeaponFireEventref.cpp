// FUNCTION: BF2 0x60a3b0
namespace dice { namespace hfe { namespace world {

struct WeaponFireEventref {
    unsigned int handle;
};

class AnimationComp {
public:
    void postFire(WeaponFireEventref);
};

void AnimationComp::postFire(WeaponFireEventref) {
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_postFire_dice_hfe_world_WeaponFireEventref (0x60a3b0)