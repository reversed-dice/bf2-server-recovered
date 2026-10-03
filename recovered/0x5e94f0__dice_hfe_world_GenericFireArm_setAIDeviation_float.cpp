// FUNCTION: BF2 0x5e94f0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1f)(void*, float);
void fn_0x5e94f0(void* self, float dev) {
    void* m = *(void**)((char*)self+0x2c8);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1f)vt[0x150/8])(m, dev);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_setAIDeviation_float (0x5e94f0)
