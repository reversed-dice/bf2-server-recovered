// FUNCTION: BF2 0x60a8e0
namespace dice { namespace hfe { namespace world {

extern "C" void dice_hfe_world_AnimationCompTemplate_AnimationCompTemplate(void*);
extern "C" void dice_hfe_world_DefaultAnimationCompTemplate_setShiftDelay_float(void*, float);
void fn_0x60a8e0(void* self) {
    dice_hfe_world_AnimationCompTemplate_AnimationCompTemplate(self);
    *(void**)self = (void*)0xb789b0;
    *(void**)((char*)self+8) = (void*)0xb78a68;
    *(unsigned*)((char*)self+0x14) = 1;
    *((char*)self+0x18) = 0;
    *((char*)self+0x24) = 0;
    dice_hfe_world_DefaultAnimationCompTemplate_setShiftDelay_float(self, 0.0f);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_DefaultAnimationCompTemplate (0x60a8e0)
