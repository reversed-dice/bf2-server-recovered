// FUNCTION: BF2 0x5a7070
namespace dice { namespace hfe { namespace world {
typedef void (*vfn1b)(void*, bool);
void fn_0x59c070(void* self, bool val) {
    void* m = *(void**)((char*)self+0x80);
    if (!m) return;
    void** vt = *(void***)m;
    ((vfn1b)vt[0x100/8])(m, val);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_EnvMapTemplate_setIsStatic_bool (0x59c070)
