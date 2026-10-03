// FUNCTION: BF2 0x5aacd0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1b)(void*, bool);
void fn_0x5aacd0(void* self, bool val) {
    void* cfg = *(void**)((char*)self+0x80);
    if (!cfg) return;
    void** vt = *(void***)cfg;
    ((vfn1b)vt[0x4e8/8])(cfg, val);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticleSystemTemplate_setNearCullingEnable_bool (0x5aacd0)
