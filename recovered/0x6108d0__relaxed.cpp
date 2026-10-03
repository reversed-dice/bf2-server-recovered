// FUNCTION: BF2 0x6108d0
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1b)(void*, bool);
void fn_0x59c070(void* self, bool val) {
    void* m = *(void**)((char*)self+0x268);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1b)vt[0x60/8])(m, val);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EnvMapTemplate_setIsStatic_bool (0x59c070)
