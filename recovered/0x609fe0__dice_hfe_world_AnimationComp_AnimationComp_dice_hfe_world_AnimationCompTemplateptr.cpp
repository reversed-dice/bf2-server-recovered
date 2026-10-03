// FUNCTION: BF2 0x609fe0
namespace dice { namespace hfe { namespace world {
void ctor_0x609fe0(void* p, void* rsi) {
    *(unsigned int*)((char*)p + 0x8) = 0x1;
    *(void**)p = (void*)0xb78110;
    *(void**)((char*)p + 0x20) = (void*)0xb78270;
    *(void**)((char*)p + 0x28) = (void*)0x0;
    *(void**)((char*)p + 0x30) = (rsi);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationComp_AnimationComp_dice_hfe_world_AnimationCompTemplateptr (0x609fe0)

// re-trigger validate
