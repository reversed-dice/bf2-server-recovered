// FUNCTION: BF2 0x610960
namespace dice { namespace hfe { namespace world {
void set_0x610960(void* p, float v) {
    *(float*)((char*)p + 0x268) = v;
    *(int*)((char*)p + 0x26c) = (int)((long long)(v * *(float*)0x00b2efc4));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_setArmingDelay_float (0x610960)
