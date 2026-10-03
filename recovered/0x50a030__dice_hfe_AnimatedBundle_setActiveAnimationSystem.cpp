// FUNCTION: BF2 0x50a030
namespace dice { namespace hfe {
class AnimatedBundle {
public:
    char _pad[0x258];
    int field;
    void setActiveAnimationSystem(int v);
};
void AnimatedBundle::setActiveAnimationSystem(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AnimatedBundle_setActiveAnimationSystem (0x50a030)
