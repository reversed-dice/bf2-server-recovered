// FUNCTION: BF2 0x60a470
namespace dice { namespace hfe { namespace world {

class IObject;
typedef IObject* IObjectptr;

class AnimationComp {
public:
    void postChangeTarget(IObjectptr);
};

void AnimationComp::postChangeTarget(IObjectptr) {
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_postChangeTarget_dice_hfe_world_IObjectptr (0x60a470)