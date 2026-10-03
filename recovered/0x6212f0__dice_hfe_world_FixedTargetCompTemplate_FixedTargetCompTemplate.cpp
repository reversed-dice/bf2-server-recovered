// FUNCTION: BF2 0x6212f0
namespace dice { namespace hfe { namespace world {

extern "C" void dice_hfe_world_FixedTargetCompTemplate_setTrackingDelay_float(void*, float);
void fn_0x6212f0(void* self) {
    *(void**)self = (void*)0xb7e4f0;
    *(void**)((char*)self+8) = (void*)0xb7e560;
    *(unsigned*)((char*)self+0x10) = 1;
    *(unsigned*)((char*)self+0x14) = 2;
    dice_hfe_world_FixedTargetCompTemplate_setTrackingDelay_float(self, 0.0f);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetCompTemplate_FixedTargetCompTemplate (0x6212f0)
