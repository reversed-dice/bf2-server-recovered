// FUNCTION: BF2 0x6b1720
extern "C" void dice_anim_BundlePlayer_dtor_BundlePlayer(void*);
extern "C" void _ZdlPv(void*);
namespace dice { namespace anim {
void fn_0x6b1720(void* self, void* player) {
    if (!player) return;
    dice_anim_BundlePlayer_dtor_BundlePlayer(player);
    _ZdlPv(player);
}
} }
// REVERSED_FUNCTION: dice_anim_AnimationSystem_releaseBundlePlayer_dice_anim_BundlePlayerptr (0x6b1720)
