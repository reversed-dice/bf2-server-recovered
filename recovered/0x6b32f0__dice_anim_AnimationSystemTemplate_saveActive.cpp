// FUNCTION: BF2 0x6b32f0
namespace dice { namespace anim {

extern "C" void AnimationSystemTemplate_save_std_string_constref(void*, void*);
typedef void* (*vfn0)(void*);
void fn_0x6b32f0(void* self) {
    void** vt = *(void***)self;
    void* r = ((vfn0)vt[0x30/8])(self);
    AnimationSystemTemplate_save_std_string_constref(self, r);
}

} }
// REVERSED_FUNCTION: dice_anim_AnimationSystemTemplate_saveActive (0x6b32f0)
