// FUNCTION: BF2 0x59c070
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1b)(void*, bool);
void fn_0x5a7070(void* self, bool val) {
    void* cfg = *(void**)((char*)self+0x1d0);
    if (!cfg) return;
    void** vt = *(void***)cfg;
    ((vfn1b)vt[0x18/8])(cfg, val);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ParticleSystemTemplateBase_setIsLooping_bool (0x5a7070)
